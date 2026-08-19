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

#include <tencentcloud/csip/v20221121/model/BaselineSyncConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselineSyncConf::BaselineSyncConf() :
    m_autoSyncHasBeenSet(false),
    m_targetAppidListHasBeenSet(false),
    m_userConfListHasBeenSet(false)
{
}

CoreInternalOutcome BaselineSyncConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoSync") && !value["AutoSync"].IsNull())
    {
        if (!value["AutoSync"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineSyncConf.AutoSync` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoSync = value["AutoSync"].GetBool();
        m_autoSyncHasBeenSet = true;
    }

    if (value.HasMember("TargetAppidList") && !value["TargetAppidList"].IsNull())
    {
        if (!value["TargetAppidList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineSyncConf.TargetAppidList` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetAppidList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_targetAppidList.push_back((*itr).GetUint64());
        }
        m_targetAppidListHasBeenSet = true;
    }

    if (value.HasMember("UserConfList") && !value["UserConfList"].IsNull())
    {
        if (!value["UserConfList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineSyncConf.UserConfList` is not array type"));

        const rapidjson::Value &tmpValue = value["UserConfList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserConfSyncStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userConfList.push_back(item);
        }
        m_userConfListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineSyncConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoSyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSync";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoSync, allocator);
    }

    if (m_targetAppidListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAppidList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetAppidList.begin(); itr != m_targetAppidList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_userConfListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserConfList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userConfList.begin(); itr != m_userConfList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool BaselineSyncConf::GetAutoSync() const
{
    return m_autoSync;
}

void BaselineSyncConf::SetAutoSync(const bool& _autoSync)
{
    m_autoSync = _autoSync;
    m_autoSyncHasBeenSet = true;
}

bool BaselineSyncConf::AutoSyncHasBeenSet() const
{
    return m_autoSyncHasBeenSet;
}

vector<uint64_t> BaselineSyncConf::GetTargetAppidList() const
{
    return m_targetAppidList;
}

void BaselineSyncConf::SetTargetAppidList(const vector<uint64_t>& _targetAppidList)
{
    m_targetAppidList = _targetAppidList;
    m_targetAppidListHasBeenSet = true;
}

bool BaselineSyncConf::TargetAppidListHasBeenSet() const
{
    return m_targetAppidListHasBeenSet;
}

vector<UserConfSyncStatus> BaselineSyncConf::GetUserConfList() const
{
    return m_userConfList;
}

void BaselineSyncConf::SetUserConfList(const vector<UserConfSyncStatus>& _userConfList)
{
    m_userConfList = _userConfList;
    m_userConfListHasBeenSet = true;
}

bool BaselineSyncConf::UserConfListHasBeenSet() const
{
    return m_userConfListHasBeenSet;
}

