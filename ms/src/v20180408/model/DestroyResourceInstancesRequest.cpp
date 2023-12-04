/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/ms/v20180408/model/DestroyResourceInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

DestroyResourceInstancesRequest::DestroyResourceInstancesRequest() :
    m_resourceIdHasBeenSet(false),
    m_appPkgNameHasBeenSet(false)
{
}

string DestroyResourceInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_appPkgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPkgName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appPkgName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DestroyResourceInstancesRequest::GetResourceId() const
{
    return m_resourceId;
}

void DestroyResourceInstancesRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DestroyResourceInstancesRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DestroyResourceInstancesRequest::GetAppPkgName() const
{
    return m_appPkgName;
}

void DestroyResourceInstancesRequest::SetAppPkgName(const string& _appPkgName)
{
    m_appPkgName = _appPkgName;
    m_appPkgNameHasBeenSet = true;
}

bool DestroyResourceInstancesRequest::AppPkgNameHasBeenSet() const
{
    return m_appPkgNameHasBeenSet;
}


