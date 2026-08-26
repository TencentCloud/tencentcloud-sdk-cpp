/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchResourceInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

ListAIWorkbenchResourceInstancesRequest::ListAIWorkbenchResourceInstancesRequest() :
    m_resourceMapIdHasBeenSet(false),
    m_pageParamsHasBeenSet(false)
{
}

string ListAIWorkbenchResourceInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceMapIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceMapId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceMapId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pageParams.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListAIWorkbenchResourceInstancesRequest::GetResourceMapId() const
{
    return m_resourceMapId;
}

void ListAIWorkbenchResourceInstancesRequest::SetResourceMapId(const string& _resourceMapId)
{
    m_resourceMapId = _resourceMapId;
    m_resourceMapIdHasBeenSet = true;
}

bool ListAIWorkbenchResourceInstancesRequest::ResourceMapIdHasBeenSet() const
{
    return m_resourceMapIdHasBeenSet;
}

PageByNumParams ListAIWorkbenchResourceInstancesRequest::GetPageParams() const
{
    return m_pageParams;
}

void ListAIWorkbenchResourceInstancesRequest::SetPageParams(const PageByNumParams& _pageParams)
{
    m_pageParams = _pageParams;
    m_pageParamsHasBeenSet = true;
}

bool ListAIWorkbenchResourceInstancesRequest::PageParamsHasBeenSet() const
{
    return m_pageParamsHasBeenSet;
}


