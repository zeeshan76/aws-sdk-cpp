﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/clouddirectory/model/BatchListAttachedIndices.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

BatchListAttachedIndices::BatchListAttachedIndices() : 
    m_targetReferenceHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

BatchListAttachedIndices::BatchListAttachedIndices(JsonView jsonValue) : 
    m_targetReferenceHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListAttachedIndices& BatchListAttachedIndices::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetReference"))
  {
    m_targetReference = jsonValue.GetObject("TargetReference");

    m_targetReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxResults"))
  {
    m_maxResults = jsonValue.GetInteger("MaxResults");

    m_maxResultsHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchListAttachedIndices::Jsonize() const
{
  JsonValue payload;

  if(m_targetReferenceHasBeenSet)
  {
   payload.WithObject("TargetReference", m_targetReference.Jsonize());

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
