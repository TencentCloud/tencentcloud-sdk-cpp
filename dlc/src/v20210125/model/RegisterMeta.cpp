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

#include <tencentcloud/dlc/v20210125/model/RegisterMeta.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

RegisterMeta::RegisterMeta() :
    m_checkpointSubPathHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_extrasHasBeenSet(false)
{
}

CoreInternalOutcome RegisterMeta::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CheckpointSubPath") && !value["CheckpointSubPath"].IsNull())
    {
        if (!value["CheckpointSubPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterMeta.CheckpointSubPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkpointSubPath = string(value["CheckpointSubPath"].GetString());
        m_checkpointSubPathHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterMeta.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Extras") && !value["Extras"].IsNull())
    {
        if (!value["Extras"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegisterMeta.Extras` is not array type"));

        const rapidjson::Value &tmpValue = value["Extras"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extras.push_back(item);
        }
        m_extrasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegisterMeta::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_checkpointSubPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckpointSubPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkpointSubPath.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_extrasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extras";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extras.begin(); itr != m_extras.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RegisterMeta::GetCheckpointSubPath() const
{
    return m_checkpointSubPath;
}

void RegisterMeta::SetCheckpointSubPath(const string& _checkpointSubPath)
{
    m_checkpointSubPath = _checkpointSubPath;
    m_checkpointSubPathHasBeenSet = true;
}

bool RegisterMeta::CheckpointSubPathHasBeenSet() const
{
    return m_checkpointSubPathHasBeenSet;
}

string RegisterMeta::GetInstanceId() const
{
    return m_instanceId;
}

void RegisterMeta::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RegisterMeta::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<KVPair> RegisterMeta::GetExtras() const
{
    return m_extras;
}

void RegisterMeta::SetExtras(const vector<KVPair>& _extras)
{
    m_extras = _extras;
    m_extrasHasBeenSet = true;
}

bool RegisterMeta::ExtrasHasBeenSet() const
{
    return m_extrasHasBeenSet;
}

