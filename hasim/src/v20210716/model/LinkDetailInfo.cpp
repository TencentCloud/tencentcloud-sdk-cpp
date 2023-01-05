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

#include <tencentcloud/hasim/v20210716/model/LinkDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hasim::V20210716::Model;
using namespace std;

LinkDetailInfo::LinkDetailInfo() :
    m_iDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_activeTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_dataUseHasBeenSet(false),
    m_audioUseHasBeenSet(false),
    m_smsUseHasBeenSet(false),
    m_linkedStateHasBeenSet(false),
    m_tacticIDHasBeenSet(false),
    m_tacticStatusHasBeenSet(false),
    m_tacticExpireTimeHasBeenSet(false),
    m_isActiveLogHasBeenSet(false),
    m_teleOperatorHasBeenSet(false),
    m_reportHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_cardsHasBeenSet(false),
    m_cardIDHasBeenSet(false)
{
}

CoreInternalOutcome LinkDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LinkDetailInfo.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LinkDetailInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ActiveTime") && !value["ActiveTime"].IsNull())
    {
        if (!value["ActiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkDetailInfo.ActiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activeTime = string(value["ActiveTime"].GetString());
        m_activeTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkDetailInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("DataUse") && !value["DataUse"].IsNull())
    {
        if (!value["DataUse"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LinkDetailInfo.DataUse` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_dataUse = value["DataUse"].GetDouble();
        m_dataUseHasBeenSet = true;
    }

    if (value.HasMember("AudioUse") && !value["AudioUse"].IsNull())
    {
        if (!value["AudioUse"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LinkDetailInfo.AudioUse` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_audioUse = value["AudioUse"].GetInt64();
        m_audioUseHasBeenSet = true;
    }

    if (value.HasMember("SmsUse") && !value["SmsUse"].IsNull())
    {
        if (!value["SmsUse"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LinkDetailInfo.SmsUse` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_smsUse = value["SmsUse"].GetInt64();
        m_smsUseHasBeenSet = true;
    }

    if (value.HasMember("LinkedState") && !value["LinkedState"].IsNull())
    {
        if (!value["LinkedState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LinkDetailInfo.LinkedState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_linkedState = value["LinkedState"].GetInt64();
        m_linkedStateHasBeenSet = true;
    }

    if (value.HasMember("TacticID") && !value["TacticID"].IsNull())
    {
        if (!value["TacticID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LinkDetailInfo.TacticID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tacticID = value["TacticID"].GetInt64();
        m_tacticIDHasBeenSet = true;
    }

    if (value.HasMember("TacticStatus") && !value["TacticStatus"].IsNull())
    {
        if (!value["TacticStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LinkDetailInfo.TacticStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tacticStatus = value["TacticStatus"].GetInt64();
        m_tacticStatusHasBeenSet = true;
    }

    if (value.HasMember("TacticExpireTime") && !value["TacticExpireTime"].IsNull())
    {
        if (!value["TacticExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkDetailInfo.TacticExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tacticExpireTime = string(value["TacticExpireTime"].GetString());
        m_tacticExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("IsActiveLog") && !value["IsActiveLog"].IsNull())
    {
        if (!value["IsActiveLog"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LinkDetailInfo.IsActiveLog` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isActiveLog = value["IsActiveLog"].GetBool();
        m_isActiveLogHasBeenSet = true;
    }

    if (value.HasMember("TeleOperator") && !value["TeleOperator"].IsNull())
    {
        if (!value["TeleOperator"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LinkDetailInfo.TeleOperator` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_teleOperator = value["TeleOperator"].GetInt64();
        m_teleOperatorHasBeenSet = true;
    }

    if (value.HasMember("Report") && !value["Report"].IsNull())
    {
        if (!value["Report"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LinkDetailInfo.Report` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_report.Deserialize(value["Report"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_reportHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LinkDetailInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Cards") && !value["Cards"].IsNull())
    {
        if (!value["Cards"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LinkDetailInfo.Cards` is not array type"));

        const rapidjson::Value &tmpValue = value["Cards"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TeleOperatorCard item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cards.push_back(item);
        }
        m_cardsHasBeenSet = true;
    }

    if (value.HasMember("CardID") && !value["CardID"].IsNull())
    {
        if (!value["CardID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkDetailInfo.CardID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardID = string(value["CardID"].GetString());
        m_cardIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LinkDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_activeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dataUseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataUse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataUse, allocator);
    }

    if (m_audioUseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioUse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioUse, allocator);
    }

    if (m_smsUseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmsUse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_smsUse, allocator);
    }

    if (m_linkedStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkedState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_linkedState, allocator);
    }

    if (m_tacticIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TacticID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tacticID, allocator);
    }

    if (m_tacticStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TacticStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tacticStatus, allocator);
    }

    if (m_tacticExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TacticExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tacticExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isActiveLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsActiveLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isActiveLog, allocator);
    }

    if (m_teleOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeleOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_teleOperator, allocator);
    }

    if (m_reportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Report";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_report.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cardsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cards";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cards.begin(); itr != m_cards.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cardIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cardID.c_str(), allocator).Move(), allocator);
    }

}


int64_t LinkDetailInfo::GetID() const
{
    return m_iD;
}

void LinkDetailInfo::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool LinkDetailInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

int64_t LinkDetailInfo::GetStatus() const
{
    return m_status;
}

void LinkDetailInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LinkDetailInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LinkDetailInfo::GetActiveTime() const
{
    return m_activeTime;
}

void LinkDetailInfo::SetActiveTime(const string& _activeTime)
{
    m_activeTime = _activeTime;
    m_activeTimeHasBeenSet = true;
}

bool LinkDetailInfo::ActiveTimeHasBeenSet() const
{
    return m_activeTimeHasBeenSet;
}

string LinkDetailInfo::GetExpireTime() const
{
    return m_expireTime;
}

void LinkDetailInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool LinkDetailInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

double LinkDetailInfo::GetDataUse() const
{
    return m_dataUse;
}

void LinkDetailInfo::SetDataUse(const double& _dataUse)
{
    m_dataUse = _dataUse;
    m_dataUseHasBeenSet = true;
}

bool LinkDetailInfo::DataUseHasBeenSet() const
{
    return m_dataUseHasBeenSet;
}

int64_t LinkDetailInfo::GetAudioUse() const
{
    return m_audioUse;
}

void LinkDetailInfo::SetAudioUse(const int64_t& _audioUse)
{
    m_audioUse = _audioUse;
    m_audioUseHasBeenSet = true;
}

bool LinkDetailInfo::AudioUseHasBeenSet() const
{
    return m_audioUseHasBeenSet;
}

int64_t LinkDetailInfo::GetSmsUse() const
{
    return m_smsUse;
}

void LinkDetailInfo::SetSmsUse(const int64_t& _smsUse)
{
    m_smsUse = _smsUse;
    m_smsUseHasBeenSet = true;
}

bool LinkDetailInfo::SmsUseHasBeenSet() const
{
    return m_smsUseHasBeenSet;
}

int64_t LinkDetailInfo::GetLinkedState() const
{
    return m_linkedState;
}

void LinkDetailInfo::SetLinkedState(const int64_t& _linkedState)
{
    m_linkedState = _linkedState;
    m_linkedStateHasBeenSet = true;
}

bool LinkDetailInfo::LinkedStateHasBeenSet() const
{
    return m_linkedStateHasBeenSet;
}

int64_t LinkDetailInfo::GetTacticID() const
{
    return m_tacticID;
}

void LinkDetailInfo::SetTacticID(const int64_t& _tacticID)
{
    m_tacticID = _tacticID;
    m_tacticIDHasBeenSet = true;
}

bool LinkDetailInfo::TacticIDHasBeenSet() const
{
    return m_tacticIDHasBeenSet;
}

int64_t LinkDetailInfo::GetTacticStatus() const
{
    return m_tacticStatus;
}

void LinkDetailInfo::SetTacticStatus(const int64_t& _tacticStatus)
{
    m_tacticStatus = _tacticStatus;
    m_tacticStatusHasBeenSet = true;
}

bool LinkDetailInfo::TacticStatusHasBeenSet() const
{
    return m_tacticStatusHasBeenSet;
}

string LinkDetailInfo::GetTacticExpireTime() const
{
    return m_tacticExpireTime;
}

void LinkDetailInfo::SetTacticExpireTime(const string& _tacticExpireTime)
{
    m_tacticExpireTime = _tacticExpireTime;
    m_tacticExpireTimeHasBeenSet = true;
}

bool LinkDetailInfo::TacticExpireTimeHasBeenSet() const
{
    return m_tacticExpireTimeHasBeenSet;
}

bool LinkDetailInfo::GetIsActiveLog() const
{
    return m_isActiveLog;
}

void LinkDetailInfo::SetIsActiveLog(const bool& _isActiveLog)
{
    m_isActiveLog = _isActiveLog;
    m_isActiveLogHasBeenSet = true;
}

bool LinkDetailInfo::IsActiveLogHasBeenSet() const
{
    return m_isActiveLogHasBeenSet;
}

int64_t LinkDetailInfo::GetTeleOperator() const
{
    return m_teleOperator;
}

void LinkDetailInfo::SetTeleOperator(const int64_t& _teleOperator)
{
    m_teleOperator = _teleOperator;
    m_teleOperatorHasBeenSet = true;
}

bool LinkDetailInfo::TeleOperatorHasBeenSet() const
{
    return m_teleOperatorHasBeenSet;
}

DeviceReport LinkDetailInfo::GetReport() const
{
    return m_report;
}

void LinkDetailInfo::SetReport(const DeviceReport& _report)
{
    m_report = _report;
    m_reportHasBeenSet = true;
}

bool LinkDetailInfo::ReportHasBeenSet() const
{
    return m_reportHasBeenSet;
}

vector<Tag> LinkDetailInfo::GetTags() const
{
    return m_tags;
}

void LinkDetailInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool LinkDetailInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<TeleOperatorCard> LinkDetailInfo::GetCards() const
{
    return m_cards;
}

void LinkDetailInfo::SetCards(const vector<TeleOperatorCard>& _cards)
{
    m_cards = _cards;
    m_cardsHasBeenSet = true;
}

bool LinkDetailInfo::CardsHasBeenSet() const
{
    return m_cardsHasBeenSet;
}

string LinkDetailInfo::GetCardID() const
{
    return m_cardID;
}

void LinkDetailInfo::SetCardID(const string& _cardID)
{
    m_cardID = _cardID;
    m_cardIDHasBeenSet = true;
}

bool LinkDetailInfo::CardIDHasBeenSet() const
{
    return m_cardIDHasBeenSet;
}

