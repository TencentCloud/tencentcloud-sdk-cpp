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

#include <tencentcloud/monitor/v20180724/model/AlarmNotice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

AlarmNotice::AlarmNotice() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false),
    m_noticeTypeHasBeenSet(false),
    m_userNoticesHasBeenSet(false),
    m_uRLNoticesHasBeenSet(false),
    m_isPresetHasBeenSet(false),
    m_noticeLanguageHasBeenSet(false),
    m_policyIdsHasBeenSet(false),
    m_aMPConsumerIdHasBeenSet(false),
    m_cLSNoticesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome AlarmNotice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedBy") && !value["UpdatedBy"].IsNull())
    {
        if (!value["UpdatedBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.UpdatedBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedBy = string(value["UpdatedBy"].GetString());
        m_updatedByHasBeenSet = true;
    }

    if (value.HasMember("NoticeType") && !value["NoticeType"].IsNull())
    {
        if (!value["NoticeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.NoticeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noticeType = string(value["NoticeType"].GetString());
        m_noticeTypeHasBeenSet = true;
    }

    if (value.HasMember("UserNotices") && !value["UserNotices"].IsNull())
    {
        if (!value["UserNotices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.UserNotices` is not array type"));

        const rapidjson::Value &tmpValue = value["UserNotices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserNotice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userNotices.push_back(item);
        }
        m_userNoticesHasBeenSet = true;
    }

    if (value.HasMember("URLNotices") && !value["URLNotices"].IsNull())
    {
        if (!value["URLNotices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.URLNotices` is not array type"));

        const rapidjson::Value &tmpValue = value["URLNotices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            URLNotice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_uRLNotices.push_back(item);
        }
        m_uRLNoticesHasBeenSet = true;
    }

    if (value.HasMember("IsPreset") && !value["IsPreset"].IsNull())
    {
        if (!value["IsPreset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.IsPreset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isPreset = value["IsPreset"].GetInt64();
        m_isPresetHasBeenSet = true;
    }

    if (value.HasMember("NoticeLanguage") && !value["NoticeLanguage"].IsNull())
    {
        if (!value["NoticeLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.NoticeLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noticeLanguage = string(value["NoticeLanguage"].GetString());
        m_noticeLanguageHasBeenSet = true;
    }

    if (value.HasMember("PolicyIds") && !value["PolicyIds"].IsNull())
    {
        if (!value["PolicyIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.PolicyIds` is not array type"));

        const rapidjson::Value &tmpValue = value["PolicyIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_policyIds.push_back((*itr).GetString());
        }
        m_policyIdsHasBeenSet = true;
    }

    if (value.HasMember("AMPConsumerId") && !value["AMPConsumerId"].IsNull())
    {
        if (!value["AMPConsumerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.AMPConsumerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aMPConsumerId = string(value["AMPConsumerId"].GetString());
        m_aMPConsumerIdHasBeenSet = true;
    }

    if (value.HasMember("CLSNotices") && !value["CLSNotices"].IsNull())
    {
        if (!value["CLSNotices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmNotice.CLSNotices` is not array type"));

        const rapidjson::Value &tmpValue = value["CLSNotices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CLSNotice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cLSNotices.push_back(item);
        }
        m_cLSNoticesHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

void AlarmNotice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedBy.c_str(), allocator).Move(), allocator);
    }

    if (m_noticeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noticeType.c_str(), allocator).Move(), allocator);
    }

    if (m_userNoticesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNotices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userNotices.begin(); itr != m_userNotices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_uRLNoticesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLNotices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_uRLNotices.begin(); itr != m_uRLNotices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isPresetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPreset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPreset, allocator);
    }

    if (m_noticeLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noticeLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_policyIds.begin(); itr != m_policyIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_aMPConsumerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AMPConsumerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aMPConsumerId.c_str(), allocator).Move(), allocator);
    }

    if (m_cLSNoticesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLSNotices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cLSNotices.begin(); itr != m_cLSNotices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

}


string AlarmNotice::GetId() const
{
    return m_id;
}

void AlarmNotice::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AlarmNotice::IdHasBeenSet() const
{
    return m_idHasBeenSet;
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

string AlarmNotice::GetUpdatedAt() const
{
    return m_updatedAt;
}

void AlarmNotice::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool AlarmNotice::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string AlarmNotice::GetUpdatedBy() const
{
    return m_updatedBy;
}

void AlarmNotice::SetUpdatedBy(const string& _updatedBy)
{
    m_updatedBy = _updatedBy;
    m_updatedByHasBeenSet = true;
}

bool AlarmNotice::UpdatedByHasBeenSet() const
{
    return m_updatedByHasBeenSet;
}

string AlarmNotice::GetNoticeType() const
{
    return m_noticeType;
}

void AlarmNotice::SetNoticeType(const string& _noticeType)
{
    m_noticeType = _noticeType;
    m_noticeTypeHasBeenSet = true;
}

bool AlarmNotice::NoticeTypeHasBeenSet() const
{
    return m_noticeTypeHasBeenSet;
}

vector<UserNotice> AlarmNotice::GetUserNotices() const
{
    return m_userNotices;
}

void AlarmNotice::SetUserNotices(const vector<UserNotice>& _userNotices)
{
    m_userNotices = _userNotices;
    m_userNoticesHasBeenSet = true;
}

bool AlarmNotice::UserNoticesHasBeenSet() const
{
    return m_userNoticesHasBeenSet;
}

vector<URLNotice> AlarmNotice::GetURLNotices() const
{
    return m_uRLNotices;
}

void AlarmNotice::SetURLNotices(const vector<URLNotice>& _uRLNotices)
{
    m_uRLNotices = _uRLNotices;
    m_uRLNoticesHasBeenSet = true;
}

bool AlarmNotice::URLNoticesHasBeenSet() const
{
    return m_uRLNoticesHasBeenSet;
}

int64_t AlarmNotice::GetIsPreset() const
{
    return m_isPreset;
}

void AlarmNotice::SetIsPreset(const int64_t& _isPreset)
{
    m_isPreset = _isPreset;
    m_isPresetHasBeenSet = true;
}

bool AlarmNotice::IsPresetHasBeenSet() const
{
    return m_isPresetHasBeenSet;
}

string AlarmNotice::GetNoticeLanguage() const
{
    return m_noticeLanguage;
}

void AlarmNotice::SetNoticeLanguage(const string& _noticeLanguage)
{
    m_noticeLanguage = _noticeLanguage;
    m_noticeLanguageHasBeenSet = true;
}

bool AlarmNotice::NoticeLanguageHasBeenSet() const
{
    return m_noticeLanguageHasBeenSet;
}

vector<string> AlarmNotice::GetPolicyIds() const
{
    return m_policyIds;
}

void AlarmNotice::SetPolicyIds(const vector<string>& _policyIds)
{
    m_policyIds = _policyIds;
    m_policyIdsHasBeenSet = true;
}

bool AlarmNotice::PolicyIdsHasBeenSet() const
{
    return m_policyIdsHasBeenSet;
}

string AlarmNotice::GetAMPConsumerId() const
{
    return m_aMPConsumerId;
}

void AlarmNotice::SetAMPConsumerId(const string& _aMPConsumerId)
{
    m_aMPConsumerId = _aMPConsumerId;
    m_aMPConsumerIdHasBeenSet = true;
}

bool AlarmNotice::AMPConsumerIdHasBeenSet() const
{
    return m_aMPConsumerIdHasBeenSet;
}

vector<CLSNotice> AlarmNotice::GetCLSNotices() const
{
    return m_cLSNotices;
}

void AlarmNotice::SetCLSNotices(const vector<CLSNotice>& _cLSNotices)
{
    m_cLSNotices = _cLSNotices;
    m_cLSNoticesHasBeenSet = true;
}

bool AlarmNotice::CLSNoticesHasBeenSet() const
{
    return m_cLSNoticesHasBeenSet;
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

