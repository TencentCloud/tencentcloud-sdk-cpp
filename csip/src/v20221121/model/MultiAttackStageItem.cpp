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

#include <tencentcloud/csip/v20221121/model/MultiAttackStageItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

MultiAttackStageItem::MultiAttackStageItem() :
    m_idHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_alertIdHasBeenSet(false),
    m_attackStagesHasBeenSet(false)
{
}

CoreInternalOutcome MultiAttackStageItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MultiAttackStageItem.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MultiAttackStageItem.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AlertId") && !value["AlertId"].IsNull())
    {
        if (!value["AlertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiAttackStageItem.AlertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertId = string(value["AlertId"].GetString());
        m_alertIdHasBeenSet = true;
    }

    if (value.HasMember("AttackStages") && !value["AttackStages"].IsNull())
    {
        if (!value["AttackStages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiAttackStageItem.AttackStages` is not array type"));

        const rapidjson::Value &tmpValue = value["AttackStages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_attackStages.push_back((*itr).GetString());
        }
        m_attackStagesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MultiAttackStageItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_alertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertId.c_str(), allocator).Move(), allocator);
    }

    if (m_attackStagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackStages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_attackStages.begin(); itr != m_attackStages.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t MultiAttackStageItem::GetId() const
{
    return m_id;
}

void MultiAttackStageItem::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool MultiAttackStageItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t MultiAttackStageItem::GetAppId() const
{
    return m_appId;
}

void MultiAttackStageItem::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool MultiAttackStageItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string MultiAttackStageItem::GetAlertId() const
{
    return m_alertId;
}

void MultiAttackStageItem::SetAlertId(const string& _alertId)
{
    m_alertId = _alertId;
    m_alertIdHasBeenSet = true;
}

bool MultiAttackStageItem::AlertIdHasBeenSet() const
{
    return m_alertIdHasBeenSet;
}

vector<string> MultiAttackStageItem::GetAttackStages() const
{
    return m_attackStages;
}

void MultiAttackStageItem::SetAttackStages(const vector<string>& _attackStages)
{
    m_attackStages = _attackStages;
    m_attackStagesHasBeenSet = true;
}

bool MultiAttackStageItem::AttackStagesHasBeenSet() const
{
    return m_attackStagesHasBeenSet;
}

