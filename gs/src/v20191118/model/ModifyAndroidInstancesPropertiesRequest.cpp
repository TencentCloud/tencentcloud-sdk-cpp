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

#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesPropertiesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

ModifyAndroidInstancesPropertiesRequest::ModifyAndroidInstancesPropertiesRequest() :
    m_androidInstanceIdsHasBeenSet(false),
    m_androidInstanceDeviceHasBeenSet(false),
    m_androidInstancePropertiesHasBeenSet(false)
{
}

string ModifyAndroidInstancesPropertiesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_androidInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_androidInstanceIds.begin(); itr != m_androidInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_androidInstanceDeviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceDevice";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_androidInstanceDevice.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_androidInstancePropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceProperties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_androidInstanceProperties.begin(); itr != m_androidInstanceProperties.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyAndroidInstancesPropertiesRequest::GetAndroidInstanceIds() const
{
    return m_androidInstanceIds;
}

void ModifyAndroidInstancesPropertiesRequest::SetAndroidInstanceIds(const vector<string>& _androidInstanceIds)
{
    m_androidInstanceIds = _androidInstanceIds;
    m_androidInstanceIdsHasBeenSet = true;
}

bool ModifyAndroidInstancesPropertiesRequest::AndroidInstanceIdsHasBeenSet() const
{
    return m_androidInstanceIdsHasBeenSet;
}

AndroidInstanceDevice ModifyAndroidInstancesPropertiesRequest::GetAndroidInstanceDevice() const
{
    return m_androidInstanceDevice;
}

void ModifyAndroidInstancesPropertiesRequest::SetAndroidInstanceDevice(const AndroidInstanceDevice& _androidInstanceDevice)
{
    m_androidInstanceDevice = _androidInstanceDevice;
    m_androidInstanceDeviceHasBeenSet = true;
}

bool ModifyAndroidInstancesPropertiesRequest::AndroidInstanceDeviceHasBeenSet() const
{
    return m_androidInstanceDeviceHasBeenSet;
}

vector<AndroidInstanceProperty> ModifyAndroidInstancesPropertiesRequest::GetAndroidInstanceProperties() const
{
    return m_androidInstanceProperties;
}

void ModifyAndroidInstancesPropertiesRequest::SetAndroidInstanceProperties(const vector<AndroidInstanceProperty>& _androidInstanceProperties)
{
    m_androidInstanceProperties = _androidInstanceProperties;
    m_androidInstancePropertiesHasBeenSet = true;
}

bool ModifyAndroidInstancesPropertiesRequest::AndroidInstancePropertiesHasBeenSet() const
{
    return m_androidInstancePropertiesHasBeenSet;
}


