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

#include <tencentcloud/teo/v20220106/model/BotManagedRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

BotManagedRule::BotManagedRule() :
    m_managedIdsHasBeenSet(false),
    m_ruleIDHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_punishTimeHasBeenSet(false),
    m_punishTimeUnitHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pageIdHasBeenSet(false),
    m_redirectUrlHasBeenSet(false),
    m_responseCodeHasBeenSet(false),
    m_transManagedIdsHasBeenSet(false),
    m_algManagedIdsHasBeenSet(false),
    m_capManagedIdsHasBeenSet(false),
    m_monManagedIdsHasBeenSet(false),
    m_dropManagedIdsHasBeenSet(false)
{
}

CoreInternalOutcome BotManagedRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ManagedIds") && !value["ManagedIds"].IsNull())
    {
        if (!value["ManagedIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotManagedRule.ManagedIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ManagedIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_managedIds.push_back((*itr).GetInt64());
        }
        m_managedIdsHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotManagedRule.RuleID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetInt64();
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotManagedRule.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("PunishTime") && !value["PunishTime"].IsNull())
    {
        if (!value["PunishTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotManagedRule.PunishTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_punishTime = value["PunishTime"].GetInt64();
        m_punishTimeHasBeenSet = true;
    }

    if (value.HasMember("PunishTimeUnit") && !value["PunishTimeUnit"].IsNull())
    {
        if (!value["PunishTimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotManagedRule.PunishTimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_punishTimeUnit = string(value["PunishTimeUnit"].GetString());
        m_punishTimeUnitHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotManagedRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PageId") && !value["PageId"].IsNull())
    {
        if (!value["PageId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotManagedRule.PageId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageId = value["PageId"].GetInt64();
        m_pageIdHasBeenSet = true;
    }

    if (value.HasMember("RedirectUrl") && !value["RedirectUrl"].IsNull())
    {
        if (!value["RedirectUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotManagedRule.RedirectUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redirectUrl = string(value["RedirectUrl"].GetString());
        m_redirectUrlHasBeenSet = true;
    }

    if (value.HasMember("ResponseCode") && !value["ResponseCode"].IsNull())
    {
        if (!value["ResponseCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotManagedRule.ResponseCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_responseCode = value["ResponseCode"].GetInt64();
        m_responseCodeHasBeenSet = true;
    }

    if (value.HasMember("TransManagedIds") && !value["TransManagedIds"].IsNull())
    {
        if (!value["TransManagedIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotManagedRule.TransManagedIds` is not array type"));

        const rapidjson::Value &tmpValue = value["TransManagedIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_transManagedIds.push_back((*itr).GetInt64());
        }
        m_transManagedIdsHasBeenSet = true;
    }

    if (value.HasMember("AlgManagedIds") && !value["AlgManagedIds"].IsNull())
    {
        if (!value["AlgManagedIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotManagedRule.AlgManagedIds` is not array type"));

        const rapidjson::Value &tmpValue = value["AlgManagedIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_algManagedIds.push_back((*itr).GetInt64());
        }
        m_algManagedIdsHasBeenSet = true;
    }

    if (value.HasMember("CapManagedIds") && !value["CapManagedIds"].IsNull())
    {
        if (!value["CapManagedIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotManagedRule.CapManagedIds` is not array type"));

        const rapidjson::Value &tmpValue = value["CapManagedIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_capManagedIds.push_back((*itr).GetInt64());
        }
        m_capManagedIdsHasBeenSet = true;
    }

    if (value.HasMember("MonManagedIds") && !value["MonManagedIds"].IsNull())
    {
        if (!value["MonManagedIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotManagedRule.MonManagedIds` is not array type"));

        const rapidjson::Value &tmpValue = value["MonManagedIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_monManagedIds.push_back((*itr).GetInt64());
        }
        m_monManagedIdsHasBeenSet = true;
    }

    if (value.HasMember("DropManagedIds") && !value["DropManagedIds"].IsNull())
    {
        if (!value["DropManagedIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotManagedRule.DropManagedIds` is not array type"));

        const rapidjson::Value &tmpValue = value["DropManagedIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dropManagedIds.push_back((*itr).GetInt64());
        }
        m_dropManagedIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotManagedRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_managedIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagedIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_managedIds.begin(); itr != m_managedIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleID, allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_punishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PunishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_punishTime, allocator);
    }

    if (m_punishTimeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PunishTimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_punishTimeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_pageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageId, allocator);
    }

    if (m_redirectUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redirectUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_responseCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_responseCode, allocator);
    }

    if (m_transManagedIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransManagedIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_transManagedIds.begin(); itr != m_transManagedIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_algManagedIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlgManagedIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_algManagedIds.begin(); itr != m_algManagedIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_capManagedIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapManagedIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_capManagedIds.begin(); itr != m_capManagedIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_monManagedIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonManagedIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_monManagedIds.begin(); itr != m_monManagedIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_dropManagedIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropManagedIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dropManagedIds.begin(); itr != m_dropManagedIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


vector<int64_t> BotManagedRule::GetManagedIds() const
{
    return m_managedIds;
}

void BotManagedRule::SetManagedIds(const vector<int64_t>& _managedIds)
{
    m_managedIds = _managedIds;
    m_managedIdsHasBeenSet = true;
}

bool BotManagedRule::ManagedIdsHasBeenSet() const
{
    return m_managedIdsHasBeenSet;
}

int64_t BotManagedRule::GetRuleID() const
{
    return m_ruleID;
}

void BotManagedRule::SetRuleID(const int64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool BotManagedRule::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string BotManagedRule::GetAction() const
{
    return m_action;
}

void BotManagedRule::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool BotManagedRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

int64_t BotManagedRule::GetPunishTime() const
{
    return m_punishTime;
}

void BotManagedRule::SetPunishTime(const int64_t& _punishTime)
{
    m_punishTime = _punishTime;
    m_punishTimeHasBeenSet = true;
}

bool BotManagedRule::PunishTimeHasBeenSet() const
{
    return m_punishTimeHasBeenSet;
}

string BotManagedRule::GetPunishTimeUnit() const
{
    return m_punishTimeUnit;
}

void BotManagedRule::SetPunishTimeUnit(const string& _punishTimeUnit)
{
    m_punishTimeUnit = _punishTimeUnit;
    m_punishTimeUnitHasBeenSet = true;
}

bool BotManagedRule::PunishTimeUnitHasBeenSet() const
{
    return m_punishTimeUnitHasBeenSet;
}

string BotManagedRule::GetName() const
{
    return m_name;
}

void BotManagedRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BotManagedRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t BotManagedRule::GetPageId() const
{
    return m_pageId;
}

void BotManagedRule::SetPageId(const int64_t& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool BotManagedRule::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}

string BotManagedRule::GetRedirectUrl() const
{
    return m_redirectUrl;
}

void BotManagedRule::SetRedirectUrl(const string& _redirectUrl)
{
    m_redirectUrl = _redirectUrl;
    m_redirectUrlHasBeenSet = true;
}

bool BotManagedRule::RedirectUrlHasBeenSet() const
{
    return m_redirectUrlHasBeenSet;
}

int64_t BotManagedRule::GetResponseCode() const
{
    return m_responseCode;
}

void BotManagedRule::SetResponseCode(const int64_t& _responseCode)
{
    m_responseCode = _responseCode;
    m_responseCodeHasBeenSet = true;
}

bool BotManagedRule::ResponseCodeHasBeenSet() const
{
    return m_responseCodeHasBeenSet;
}

vector<int64_t> BotManagedRule::GetTransManagedIds() const
{
    return m_transManagedIds;
}

void BotManagedRule::SetTransManagedIds(const vector<int64_t>& _transManagedIds)
{
    m_transManagedIds = _transManagedIds;
    m_transManagedIdsHasBeenSet = true;
}

bool BotManagedRule::TransManagedIdsHasBeenSet() const
{
    return m_transManagedIdsHasBeenSet;
}

vector<int64_t> BotManagedRule::GetAlgManagedIds() const
{
    return m_algManagedIds;
}

void BotManagedRule::SetAlgManagedIds(const vector<int64_t>& _algManagedIds)
{
    m_algManagedIds = _algManagedIds;
    m_algManagedIdsHasBeenSet = true;
}

bool BotManagedRule::AlgManagedIdsHasBeenSet() const
{
    return m_algManagedIdsHasBeenSet;
}

vector<int64_t> BotManagedRule::GetCapManagedIds() const
{
    return m_capManagedIds;
}

void BotManagedRule::SetCapManagedIds(const vector<int64_t>& _capManagedIds)
{
    m_capManagedIds = _capManagedIds;
    m_capManagedIdsHasBeenSet = true;
}

bool BotManagedRule::CapManagedIdsHasBeenSet() const
{
    return m_capManagedIdsHasBeenSet;
}

vector<int64_t> BotManagedRule::GetMonManagedIds() const
{
    return m_monManagedIds;
}

void BotManagedRule::SetMonManagedIds(const vector<int64_t>& _monManagedIds)
{
    m_monManagedIds = _monManagedIds;
    m_monManagedIdsHasBeenSet = true;
}

bool BotManagedRule::MonManagedIdsHasBeenSet() const
{
    return m_monManagedIdsHasBeenSet;
}

vector<int64_t> BotManagedRule::GetDropManagedIds() const
{
    return m_dropManagedIds;
}

void BotManagedRule::SetDropManagedIds(const vector<int64_t>& _dropManagedIds)
{
    m_dropManagedIds = _dropManagedIds;
    m_dropManagedIdsHasBeenSet = true;
}

bool BotManagedRule::DropManagedIdsHasBeenSet() const
{
    return m_dropManagedIdsHasBeenSet;
}

