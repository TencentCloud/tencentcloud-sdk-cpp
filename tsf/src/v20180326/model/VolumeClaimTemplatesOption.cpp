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

#include <tencentcloud/tsf/v20180326/model/VolumeClaimTemplatesOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

VolumeClaimTemplatesOption::VolumeClaimTemplatesOption() :
    m_storageClassHasBeenSet(false),
    m_accessModesHasBeenSet(false),
    m_storageRequestHasBeenSet(false)
{
}

CoreInternalOutcome VolumeClaimTemplatesOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageClass") && !value["StorageClass"].IsNull())
    {
        if (!value["StorageClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeClaimTemplatesOption.StorageClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageClass = string(value["StorageClass"].GetString());
        m_storageClassHasBeenSet = true;
    }

    if (value.HasMember("AccessModes") && !value["AccessModes"].IsNull())
    {
        if (!value["AccessModes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VolumeClaimTemplatesOption.AccessModes` is not array type"));

        const rapidjson::Value &tmpValue = value["AccessModes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_accessModes.push_back((*itr).GetString());
        }
        m_accessModesHasBeenSet = true;
    }

    if (value.HasMember("StorageRequest") && !value["StorageRequest"].IsNull())
    {
        if (!value["StorageRequest"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeClaimTemplatesOption.StorageRequest` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageRequest = value["StorageRequest"].GetInt64();
        m_storageRequestHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VolumeClaimTemplatesOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storageClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageClass.c_str(), allocator).Move(), allocator);
    }

    if (m_accessModesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessModes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accessModes.begin(); itr != m_accessModes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_storageRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageRequest, allocator);
    }

}


string VolumeClaimTemplatesOption::GetStorageClass() const
{
    return m_storageClass;
}

void VolumeClaimTemplatesOption::SetStorageClass(const string& _storageClass)
{
    m_storageClass = _storageClass;
    m_storageClassHasBeenSet = true;
}

bool VolumeClaimTemplatesOption::StorageClassHasBeenSet() const
{
    return m_storageClassHasBeenSet;
}

vector<string> VolumeClaimTemplatesOption::GetAccessModes() const
{
    return m_accessModes;
}

void VolumeClaimTemplatesOption::SetAccessModes(const vector<string>& _accessModes)
{
    m_accessModes = _accessModes;
    m_accessModesHasBeenSet = true;
}

bool VolumeClaimTemplatesOption::AccessModesHasBeenSet() const
{
    return m_accessModesHasBeenSet;
}

int64_t VolumeClaimTemplatesOption::GetStorageRequest() const
{
    return m_storageRequest;
}

void VolumeClaimTemplatesOption::SetStorageRequest(const int64_t& _storageRequest)
{
    m_storageRequest = _storageRequest;
    m_storageRequestHasBeenSet = true;
}

bool VolumeClaimTemplatesOption::StorageRequestHasBeenSet() const
{
    return m_storageRequestHasBeenSet;
}

