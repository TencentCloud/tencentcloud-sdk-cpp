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

#include <tencentcloud/vpc/v20170312/model/FlowLogStorage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

FlowLogStorage::FlowLogStorage() :
    m_storageIdHasBeenSet(false),
    m_storageTopicHasBeenSet(false)
{
}

CoreInternalOutcome FlowLogStorage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageId") && !value["StorageId"].IsNull())
    {
        if (!value["StorageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLogStorage.StorageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageId = string(value["StorageId"].GetString());
        m_storageIdHasBeenSet = true;
    }

    if (value.HasMember("StorageTopic") && !value["StorageTopic"].IsNull())
    {
        if (!value["StorageTopic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLogStorage.StorageTopic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageTopic = string(value["StorageTopic"].GetString());
        m_storageTopicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowLogStorage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageId.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageTopic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageTopic.c_str(), allocator).Move(), allocator);
    }

}


string FlowLogStorage::GetStorageId() const
{
    return m_storageId;
}

void FlowLogStorage::SetStorageId(const string& _storageId)
{
    m_storageId = _storageId;
    m_storageIdHasBeenSet = true;
}

bool FlowLogStorage::StorageIdHasBeenSet() const
{
    return m_storageIdHasBeenSet;
}

string FlowLogStorage::GetStorageTopic() const
{
    return m_storageTopic;
}

void FlowLogStorage::SetStorageTopic(const string& _storageTopic)
{
    m_storageTopic = _storageTopic;
    m_storageTopicHasBeenSet = true;
}

bool FlowLogStorage::StorageTopicHasBeenSet() const
{
    return m_storageTopicHasBeenSet;
}

