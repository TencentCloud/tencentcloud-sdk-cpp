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

#include <tencentcloud/dlc/v20210125/model/ModifyAdvancedStoreLocationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ModifyAdvancedStoreLocationRequest::ModifyAdvancedStoreLocationRequest() :
    m_storeLocationHasBeenSet(false),
    m_enableHasBeenSet(false)
{
}

string ModifyAdvancedStoreLocationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_storeLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreLocation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storeLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAdvancedStoreLocationRequest::GetStoreLocation() const
{
    return m_storeLocation;
}

void ModifyAdvancedStoreLocationRequest::SetStoreLocation(const string& _storeLocation)
{
    m_storeLocation = _storeLocation;
    m_storeLocationHasBeenSet = true;
}

bool ModifyAdvancedStoreLocationRequest::StoreLocationHasBeenSet() const
{
    return m_storeLocationHasBeenSet;
}

uint64_t ModifyAdvancedStoreLocationRequest::GetEnable() const
{
    return m_enable;
}

void ModifyAdvancedStoreLocationRequest::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyAdvancedStoreLocationRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}


