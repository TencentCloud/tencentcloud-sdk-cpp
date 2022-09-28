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

#include <tencentcloud/teo/v20220901/model/AdvancedOriginGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

AdvancedOriginGroup::AdvancedOriginGroup() :
    m_originGroupConditionsHasBeenSet(false),
    m_originGroupIdHasBeenSet(false),
    m_backupOriginGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome AdvancedOriginGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginGroupConditions") && !value["OriginGroupConditions"].IsNull())
    {
        if (!value["OriginGroupConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdvancedOriginGroup.OriginGroupConditions` is not array type"));

        const rapidjson::Value &tmpValue = value["OriginGroupConditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OriginGroupCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_originGroupConditions.push_back(item);
        }
        m_originGroupConditionsHasBeenSet = true;
    }

    if (value.HasMember("OriginGroupId") && !value["OriginGroupId"].IsNull())
    {
        if (!value["OriginGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedOriginGroup.OriginGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originGroupId = string(value["OriginGroupId"].GetString());
        m_originGroupIdHasBeenSet = true;
    }

    if (value.HasMember("BackupOriginGroupId") && !value["BackupOriginGroupId"].IsNull())
    {
        if (!value["BackupOriginGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedOriginGroup.BackupOriginGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupOriginGroupId = string(value["BackupOriginGroupId"].GetString());
        m_backupOriginGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvancedOriginGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originGroupConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginGroupConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_originGroupConditions.begin(); itr != m_originGroupConditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_originGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupOriginGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupOriginGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupOriginGroupId.c_str(), allocator).Move(), allocator);
    }

}


vector<OriginGroupCondition> AdvancedOriginGroup::GetOriginGroupConditions() const
{
    return m_originGroupConditions;
}

void AdvancedOriginGroup::SetOriginGroupConditions(const vector<OriginGroupCondition>& _originGroupConditions)
{
    m_originGroupConditions = _originGroupConditions;
    m_originGroupConditionsHasBeenSet = true;
}

bool AdvancedOriginGroup::OriginGroupConditionsHasBeenSet() const
{
    return m_originGroupConditionsHasBeenSet;
}

string AdvancedOriginGroup::GetOriginGroupId() const
{
    return m_originGroupId;
}

void AdvancedOriginGroup::SetOriginGroupId(const string& _originGroupId)
{
    m_originGroupId = _originGroupId;
    m_originGroupIdHasBeenSet = true;
}

bool AdvancedOriginGroup::OriginGroupIdHasBeenSet() const
{
    return m_originGroupIdHasBeenSet;
}

string AdvancedOriginGroup::GetBackupOriginGroupId() const
{
    return m_backupOriginGroupId;
}

void AdvancedOriginGroup::SetBackupOriginGroupId(const string& _backupOriginGroupId)
{
    m_backupOriginGroupId = _backupOriginGroupId;
    m_backupOriginGroupIdHasBeenSet = true;
}

bool AdvancedOriginGroup::BackupOriginGroupIdHasBeenSet() const
{
    return m_backupOriginGroupIdHasBeenSet;
}

