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

#include <tencentcloud/ssa/v20180608/model/SaDivulgeDataQueryPub.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace rapidjson;
using namespace std;

SaDivulgeDataQueryPub::SaDivulgeDataQueryPub() :
    m_idHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_divulgeSoureHasBeenSet(false),
    m_assetHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleWordHasBeenSet(false),
    m_scanUrlHasBeenSet(false),
    m_scanCountHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome SaDivulgeDataQueryPub::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Error("response `SaDivulgeDataQueryPub.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Error("response `SaDivulgeDataQueryPub.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SaDivulgeDataQueryPub.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SaDivulgeDataQueryPub.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("DivulgeSoure") && !value["DivulgeSoure"].IsNull())
    {
        if (!value["DivulgeSoure"].IsString())
        {
            return CoreInternalOutcome(Error("response `SaDivulgeDataQueryPub.DivulgeSoure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_divulgeSoure = string(value["DivulgeSoure"].GetString());
        m_divulgeSoureHasBeenSet = true;
    }

    if (value.HasMember("Asset") && !value["Asset"].IsNull())
    {
        if (!value["Asset"].IsString())
        {
            return CoreInternalOutcome(Error("response `SaDivulgeDataQueryPub.Asset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asset = string(value["Asset"].GetString());
        m_assetHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SaDivulgeDataQueryPub.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SaDivulgeDataQueryPub.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleWord") && !value["RuleWord"].IsNull())
    {
        if (!value["RuleWord"].IsString())
        {
            return CoreInternalOutcome(Error("response `SaDivulgeDataQueryPub.RuleWord` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleWord = string(value["RuleWord"].GetString());
        m_ruleWordHasBeenSet = true;
    }

    if (value.HasMember("ScanUrl") && !value["ScanUrl"].IsNull())
    {
        if (!value["ScanUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `SaDivulgeDataQueryPub.ScanUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanUrl = string(value["ScanUrl"].GetString());
        m_scanUrlHasBeenSet = true;
    }

    if (value.HasMember("ScanCount") && !value["ScanCount"].IsNull())
    {
        if (!value["ScanCount"].IsString())
        {
            return CoreInternalOutcome(Error("response `SaDivulgeDataQueryPub.ScanCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanCount = string(value["ScanCount"].GetString());
        m_scanCountHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Error("response `SaDivulgeDataQueryPub.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `SaDivulgeDataQueryPub.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EventTime") && !value["EventTime"].IsNull())
    {
        if (!value["EventTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SaDivulgeDataQueryPub.EventTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventTime = string(value["EventTime"].GetString());
        m_eventTimeHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SaDivulgeDataQueryPub.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SaDivulgeDataQueryPub.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SaDivulgeDataQueryPub::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_divulgeSoureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DivulgeSoure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_divulgeSoure.c_str(), allocator).Move(), allocator);
    }

    if (m_assetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Asset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_asset.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleWordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleWord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ruleWord.c_str(), allocator).Move(), allocator);
    }

    if (m_scanUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScanUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_scanUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_scanCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScanCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_scanCount.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_eventTime.c_str(), allocator).Move(), allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string SaDivulgeDataQueryPub::GetId() const
{
    return m_id;
}

void SaDivulgeDataQueryPub::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SaDivulgeDataQueryPub::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SaDivulgeDataQueryPub::GetUin() const
{
    return m_uin;
}

void SaDivulgeDataQueryPub::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool SaDivulgeDataQueryPub::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string SaDivulgeDataQueryPub::GetAppId() const
{
    return m_appId;
}

void SaDivulgeDataQueryPub::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool SaDivulgeDataQueryPub::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string SaDivulgeDataQueryPub::GetEventName() const
{
    return m_eventName;
}

void SaDivulgeDataQueryPub::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool SaDivulgeDataQueryPub::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string SaDivulgeDataQueryPub::GetDivulgeSoure() const
{
    return m_divulgeSoure;
}

void SaDivulgeDataQueryPub::SetDivulgeSoure(const string& _divulgeSoure)
{
    m_divulgeSoure = _divulgeSoure;
    m_divulgeSoureHasBeenSet = true;
}

bool SaDivulgeDataQueryPub::DivulgeSoureHasBeenSet() const
{
    return m_divulgeSoureHasBeenSet;
}

string SaDivulgeDataQueryPub::GetAsset() const
{
    return m_asset;
}

void SaDivulgeDataQueryPub::SetAsset(const string& _asset)
{
    m_asset = _asset;
    m_assetHasBeenSet = true;
}

bool SaDivulgeDataQueryPub::AssetHasBeenSet() const
{
    return m_assetHasBeenSet;
}

string SaDivulgeDataQueryPub::GetRuleName() const
{
    return m_ruleName;
}

void SaDivulgeDataQueryPub::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool SaDivulgeDataQueryPub::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string SaDivulgeDataQueryPub::GetRuleId() const
{
    return m_ruleId;
}

void SaDivulgeDataQueryPub::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool SaDivulgeDataQueryPub::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string SaDivulgeDataQueryPub::GetRuleWord() const
{
    return m_ruleWord;
}

void SaDivulgeDataQueryPub::SetRuleWord(const string& _ruleWord)
{
    m_ruleWord = _ruleWord;
    m_ruleWordHasBeenSet = true;
}

bool SaDivulgeDataQueryPub::RuleWordHasBeenSet() const
{
    return m_ruleWordHasBeenSet;
}

string SaDivulgeDataQueryPub::GetScanUrl() const
{
    return m_scanUrl;
}

void SaDivulgeDataQueryPub::SetScanUrl(const string& _scanUrl)
{
    m_scanUrl = _scanUrl;
    m_scanUrlHasBeenSet = true;
}

bool SaDivulgeDataQueryPub::ScanUrlHasBeenSet() const
{
    return m_scanUrlHasBeenSet;
}

string SaDivulgeDataQueryPub::GetScanCount() const
{
    return m_scanCount;
}

void SaDivulgeDataQueryPub::SetScanCount(const string& _scanCount)
{
    m_scanCount = _scanCount;
    m_scanCountHasBeenSet = true;
}

bool SaDivulgeDataQueryPub::ScanCountHasBeenSet() const
{
    return m_scanCountHasBeenSet;
}

string SaDivulgeDataQueryPub::GetLevel() const
{
    return m_level;
}

void SaDivulgeDataQueryPub::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool SaDivulgeDataQueryPub::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string SaDivulgeDataQueryPub::GetStatus() const
{
    return m_status;
}

void SaDivulgeDataQueryPub::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SaDivulgeDataQueryPub::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SaDivulgeDataQueryPub::GetEventTime() const
{
    return m_eventTime;
}

void SaDivulgeDataQueryPub::SetEventTime(const string& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool SaDivulgeDataQueryPub::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

string SaDivulgeDataQueryPub::GetInsertTime() const
{
    return m_insertTime;
}

void SaDivulgeDataQueryPub::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool SaDivulgeDataQueryPub::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

string SaDivulgeDataQueryPub::GetUpdateTime() const
{
    return m_updateTime;
}

void SaDivulgeDataQueryPub::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SaDivulgeDataQueryPub::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

