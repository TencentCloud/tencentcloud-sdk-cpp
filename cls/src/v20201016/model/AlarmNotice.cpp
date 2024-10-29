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

#include <tencentcloud/cls/v20201016/model/AlarmNotice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

AlarmNotice::AlarmNotice() :
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_noticeReceiversHasBeenSet(false),
    m_webCallbacksHasBeenSet(false),
    m_alarmNoticeIdHasBeenSet(false),
    m_noticeRulesHasBeenSet(false),
    m_alarmShieldStatusHasBeenSet(false),
    m_jumpDomainHasBeenSet(false),
    m_alarmNoticeDeliverConfigHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AlarmNotice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.Tags` is not array type"));

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

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("NoticeReceivers") && !value["NoticeReceivers"].IsNull())
    {
        if (!value["NoticeReceivers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.NoticeReceivers` is not array type"));

        const rapidjson::Value &tmpValue = value["NoticeReceivers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NoticeReceiver item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_noticeReceivers.push_back(item);
        }
        m_noticeReceiversHasBeenSet = true;
    }

    if (value.HasMember("WebCallbacks") && !value["WebCallbacks"].IsNull())
    {
        if (!value["WebCallbacks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.WebCallbacks` is not array type"));

        const rapidjson::Value &tmpValue = value["WebCallbacks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WebCallback item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_webCallbacks.push_back(item);
        }
        m_webCallbacksHasBeenSet = true;
    }

    if (value.HasMember("AlarmNoticeId") && !value["AlarmNoticeId"].IsNull())
    {
        if (!value["AlarmNoticeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.AlarmNoticeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmNoticeId = string(value["AlarmNoticeId"].GetString());
        m_alarmNoticeIdHasBeenSet = true;
    }

    if (value.HasMember("NoticeRules") && !value["NoticeRules"].IsNull())
    {
        if (!value["NoticeRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.NoticeRules` is not array type"));

        const rapidjson::Value &tmpValue = value["NoticeRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NoticeRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_noticeRules.push_back(item);
        }
        m_noticeRulesHasBeenSet = true;
    }

    if (value.HasMember("AlarmShieldStatus") && !value["AlarmShieldStatus"].IsNull())
    {
        if (!value["AlarmShieldStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.AlarmShieldStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmShieldStatus = value["AlarmShieldStatus"].GetUint64();
        m_alarmShieldStatusHasBeenSet = true;
    }

    if (value.HasMember("JumpDomain") && !value["JumpDomain"].IsNull())
    {
        if (!value["JumpDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.JumpDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jumpDomain = string(value["JumpDomain"].GetString());
        m_jumpDomainHasBeenSet = true;
    }

    if (value.HasMember("AlarmNoticeDeliverConfig") && !value["AlarmNoticeDeliverConfig"].IsNull())
    {
        if (!value["AlarmNoticeDeliverConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.AlarmNoticeDeliverConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_alarmNoticeDeliverConfig.Deserialize(value["AlarmNoticeDeliverConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_alarmNoticeDeliverConfigHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmNotice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_noticeReceiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeReceivers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_noticeReceivers.begin(); itr != m_noticeReceivers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_webCallbacksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebCallbacks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_webCallbacks.begin(); itr != m_webCallbacks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_alarmNoticeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmNoticeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmNoticeId.c_str(), allocator).Move(), allocator);
    }

    if (m_noticeRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_noticeRules.begin(); itr != m_noticeRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_alarmShieldStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmShieldStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmShieldStatus, allocator);
    }

    if (m_jumpDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jumpDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmNoticeDeliverConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmNoticeDeliverConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_alarmNoticeDeliverConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string AlarmNotice::GetName() const
{
    return m_name;
}

void AlarmNotice::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AlarmNotice::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<Tag> AlarmNotice::GetTags() const
{
    return m_tags;
}

void AlarmNotice::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool AlarmNotice::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string AlarmNotice::GetType() const
{
    return m_type;
}

void AlarmNotice::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AlarmNotice::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<NoticeReceiver> AlarmNotice::GetNoticeReceivers() const
{
    return m_noticeReceivers;
}

void AlarmNotice::SetNoticeReceivers(const vector<NoticeReceiver>& _noticeReceivers)
{
    m_noticeReceivers = _noticeReceivers;
    m_noticeReceiversHasBeenSet = true;
}

bool AlarmNotice::NoticeReceiversHasBeenSet() const
{
    return m_noticeReceiversHasBeenSet;
}

vector<WebCallback> AlarmNotice::GetWebCallbacks() const
{
    return m_webCallbacks;
}

void AlarmNotice::SetWebCallbacks(const vector<WebCallback>& _webCallbacks)
{
    m_webCallbacks = _webCallbacks;
    m_webCallbacksHasBeenSet = true;
}

bool AlarmNotice::WebCallbacksHasBeenSet() const
{
    return m_webCallbacksHasBeenSet;
}

string AlarmNotice::GetAlarmNoticeId() const
{
    return m_alarmNoticeId;
}

void AlarmNotice::SetAlarmNoticeId(const string& _alarmNoticeId)
{
    m_alarmNoticeId = _alarmNoticeId;
    m_alarmNoticeIdHasBeenSet = true;
}

bool AlarmNotice::AlarmNoticeIdHasBeenSet() const
{
    return m_alarmNoticeIdHasBeenSet;
}

vector<NoticeRule> AlarmNotice::GetNoticeRules() const
{
    return m_noticeRules;
}

void AlarmNotice::SetNoticeRules(const vector<NoticeRule>& _noticeRules)
{
    m_noticeRules = _noticeRules;
    m_noticeRulesHasBeenSet = true;
}

bool AlarmNotice::NoticeRulesHasBeenSet() const
{
    return m_noticeRulesHasBeenSet;
}

uint64_t AlarmNotice::GetAlarmShieldStatus() const
{
    return m_alarmShieldStatus;
}

void AlarmNotice::SetAlarmShieldStatus(const uint64_t& _alarmShieldStatus)
{
    m_alarmShieldStatus = _alarmShieldStatus;
    m_alarmShieldStatusHasBeenSet = true;
}

bool AlarmNotice::AlarmShieldStatusHasBeenSet() const
{
    return m_alarmShieldStatusHasBeenSet;
}

string AlarmNotice::GetJumpDomain() const
{
    return m_jumpDomain;
}

void AlarmNotice::SetJumpDomain(const string& _jumpDomain)
{
    m_jumpDomain = _jumpDomain;
    m_jumpDomainHasBeenSet = true;
}

bool AlarmNotice::JumpDomainHasBeenSet() const
{
    return m_jumpDomainHasBeenSet;
}

AlarmNoticeDeliverConfig AlarmNotice::GetAlarmNoticeDeliverConfig() const
{
    return m_alarmNoticeDeliverConfig;
}

void AlarmNotice::SetAlarmNoticeDeliverConfig(const AlarmNoticeDeliverConfig& _alarmNoticeDeliverConfig)
{
    m_alarmNoticeDeliverConfig = _alarmNoticeDeliverConfig;
    m_alarmNoticeDeliverConfigHasBeenSet = true;
}

bool AlarmNotice::AlarmNoticeDeliverConfigHasBeenSet() const
{
    return m_alarmNoticeDeliverConfigHasBeenSet;
}

string AlarmNotice::GetCreateTime() const
{
    return m_createTime;
}

void AlarmNotice::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AlarmNotice::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AlarmNotice::GetUpdateTime() const
{
    return m_updateTime;
}

void AlarmNotice::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AlarmNotice::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

