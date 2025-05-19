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

#include <tencentcloud/lke/v20231130/model/MsgRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

MsgRecord::MsgRecord() :
    m_contentHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_relatedRecordIdHasBeenSet(false),
    m_isFromSelfHasBeenSet(false),
    m_fromNameHasBeenSet(false),
    m_fromAvatarHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_hasReadHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_canRatingHasBeenSet(false),
    m_canFeedbackHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_referencesHasBeenSet(false),
    m_reasonsHasBeenSet(false),
    m_isLlmGeneratedHasBeenSet(false),
    m_imageUrlsHasBeenSet(false),
    m_tokenStatHasBeenSet(false),
    m_replyMethodHasBeenSet(false),
    m_optionCardsHasBeenSet(false),
    m_taskFlowHasBeenSet(false),
    m_fileInfosHasBeenSet(false),
    m_quoteInfosHasBeenSet(false),
    m_agentThoughtHasBeenSet(false),
    m_extraInfoHasBeenSet(false),
    m_workFlowHasBeenSet(false)
{
}

CoreInternalOutcome MsgRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("RelatedRecordId") && !value["RelatedRecordId"].IsNull())
    {
        if (!value["RelatedRecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.RelatedRecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relatedRecordId = string(value["RelatedRecordId"].GetString());
        m_relatedRecordIdHasBeenSet = true;
    }

    if (value.HasMember("IsFromSelf") && !value["IsFromSelf"].IsNull())
    {
        if (!value["IsFromSelf"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.IsFromSelf` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFromSelf = value["IsFromSelf"].GetBool();
        m_isFromSelfHasBeenSet = true;
    }

    if (value.HasMember("FromName") && !value["FromName"].IsNull())
    {
        if (!value["FromName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.FromName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromName = string(value["FromName"].GetString());
        m_fromNameHasBeenSet = true;
    }

    if (value.HasMember("FromAvatar") && !value["FromAvatar"].IsNull())
    {
        if (!value["FromAvatar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.FromAvatar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromAvatar = string(value["FromAvatar"].GetString());
        m_fromAvatarHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("HasRead") && !value["HasRead"].IsNull())
    {
        if (!value["HasRead"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.HasRead` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasRead = value["HasRead"].GetBool();
        m_hasReadHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.Score` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetUint64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("CanRating") && !value["CanRating"].IsNull())
    {
        if (!value["CanRating"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.CanRating` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canRating = value["CanRating"].GetBool();
        m_canRatingHasBeenSet = true;
    }

    if (value.HasMember("CanFeedback") && !value["CanFeedback"].IsNull())
    {
        if (!value["CanFeedback"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.CanFeedback` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canFeedback = value["CanFeedback"].GetBool();
        m_canFeedbackHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("References") && !value["References"].IsNull())
    {
        if (!value["References"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MsgRecord.References` is not array type"));

        const rapidjson::Value &tmpValue = value["References"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MsgRecordReference item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_references.push_back(item);
        }
        m_referencesHasBeenSet = true;
    }

    if (value.HasMember("Reasons") && !value["Reasons"].IsNull())
    {
        if (!value["Reasons"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MsgRecord.Reasons` is not array type"));

        const rapidjson::Value &tmpValue = value["Reasons"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_reasons.push_back((*itr).GetString());
        }
        m_reasonsHasBeenSet = true;
    }

    if (value.HasMember("IsLlmGenerated") && !value["IsLlmGenerated"].IsNull())
    {
        if (!value["IsLlmGenerated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.IsLlmGenerated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLlmGenerated = value["IsLlmGenerated"].GetBool();
        m_isLlmGeneratedHasBeenSet = true;
    }

    if (value.HasMember("ImageUrls") && !value["ImageUrls"].IsNull())
    {
        if (!value["ImageUrls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MsgRecord.ImageUrls` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageUrls.push_back((*itr).GetString());
        }
        m_imageUrlsHasBeenSet = true;
    }

    if (value.HasMember("TokenStat") && !value["TokenStat"].IsNull())
    {
        if (!value["TokenStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.TokenStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tokenStat.Deserialize(value["TokenStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tokenStatHasBeenSet = true;
    }

    if (value.HasMember("ReplyMethod") && !value["ReplyMethod"].IsNull())
    {
        if (!value["ReplyMethod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.ReplyMethod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replyMethod = value["ReplyMethod"].GetUint64();
        m_replyMethodHasBeenSet = true;
    }

    if (value.HasMember("OptionCards") && !value["OptionCards"].IsNull())
    {
        if (!value["OptionCards"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MsgRecord.OptionCards` is not array type"));

        const rapidjson::Value &tmpValue = value["OptionCards"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_optionCards.push_back((*itr).GetString());
        }
        m_optionCardsHasBeenSet = true;
    }

    if (value.HasMember("TaskFlow") && !value["TaskFlow"].IsNull())
    {
        if (!value["TaskFlow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.TaskFlow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskFlow.Deserialize(value["TaskFlow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskFlowHasBeenSet = true;
    }

    if (value.HasMember("FileInfos") && !value["FileInfos"].IsNull())
    {
        if (!value["FileInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MsgRecord.FileInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["FileInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fileInfos.push_back(item);
        }
        m_fileInfosHasBeenSet = true;
    }

    if (value.HasMember("QuoteInfos") && !value["QuoteInfos"].IsNull())
    {
        if (!value["QuoteInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MsgRecord.QuoteInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["QuoteInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QuoteInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_quoteInfos.push_back(item);
        }
        m_quoteInfosHasBeenSet = true;
    }

    if (value.HasMember("AgentThought") && !value["AgentThought"].IsNull())
    {
        if (!value["AgentThought"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.AgentThought` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_agentThought.Deserialize(value["AgentThought"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_agentThoughtHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.ExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extraInfo.Deserialize(value["ExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("WorkFlow") && !value["WorkFlow"].IsNull())
    {
        if (!value["WorkFlow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecord.WorkFlow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workFlow.Deserialize(value["WorkFlow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workFlowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MsgRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedRecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relatedRecordId.c_str(), allocator).Move(), allocator);
    }

    if (m_isFromSelfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFromSelf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFromSelf, allocator);
    }

    if (m_fromNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromName.c_str(), allocator).Move(), allocator);
    }

    if (m_fromAvatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromAvatar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromAvatar.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_hasReadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasRead";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasRead, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_canRatingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanRating";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canRating, allocator);
    }

    if (m_canFeedbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanFeedback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canFeedback, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_referencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "References";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_references.begin(); itr != m_references.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_reasonsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reasons";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reasons.begin(); itr != m_reasons.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isLlmGeneratedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLlmGenerated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLlmGenerated, allocator);
    }

    if (m_imageUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageUrls.begin(); itr != m_imageUrls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tokenStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tokenStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_replyMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplyMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replyMethod, allocator);
    }

    if (m_optionCardsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionCards";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_optionCards.begin(); itr != m_optionCards.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskFlow.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileInfos.begin(); itr != m_fileInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_quoteInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuoteInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_quoteInfos.begin(); itr != m_quoteInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_agentThoughtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentThought";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agentThought.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workFlow.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MsgRecord::GetContent() const
{
    return m_content;
}

void MsgRecord::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool MsgRecord::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string MsgRecord::GetSessionId() const
{
    return m_sessionId;
}

void MsgRecord::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool MsgRecord::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string MsgRecord::GetRecordId() const
{
    return m_recordId;
}

void MsgRecord::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool MsgRecord::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string MsgRecord::GetRelatedRecordId() const
{
    return m_relatedRecordId;
}

void MsgRecord::SetRelatedRecordId(const string& _relatedRecordId)
{
    m_relatedRecordId = _relatedRecordId;
    m_relatedRecordIdHasBeenSet = true;
}

bool MsgRecord::RelatedRecordIdHasBeenSet() const
{
    return m_relatedRecordIdHasBeenSet;
}

bool MsgRecord::GetIsFromSelf() const
{
    return m_isFromSelf;
}

void MsgRecord::SetIsFromSelf(const bool& _isFromSelf)
{
    m_isFromSelf = _isFromSelf;
    m_isFromSelfHasBeenSet = true;
}

bool MsgRecord::IsFromSelfHasBeenSet() const
{
    return m_isFromSelfHasBeenSet;
}

string MsgRecord::GetFromName() const
{
    return m_fromName;
}

void MsgRecord::SetFromName(const string& _fromName)
{
    m_fromName = _fromName;
    m_fromNameHasBeenSet = true;
}

bool MsgRecord::FromNameHasBeenSet() const
{
    return m_fromNameHasBeenSet;
}

string MsgRecord::GetFromAvatar() const
{
    return m_fromAvatar;
}

void MsgRecord::SetFromAvatar(const string& _fromAvatar)
{
    m_fromAvatar = _fromAvatar;
    m_fromAvatarHasBeenSet = true;
}

bool MsgRecord::FromAvatarHasBeenSet() const
{
    return m_fromAvatarHasBeenSet;
}

string MsgRecord::GetTimestamp() const
{
    return m_timestamp;
}

void MsgRecord::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool MsgRecord::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

bool MsgRecord::GetHasRead() const
{
    return m_hasRead;
}

void MsgRecord::SetHasRead(const bool& _hasRead)
{
    m_hasRead = _hasRead;
    m_hasReadHasBeenSet = true;
}

bool MsgRecord::HasReadHasBeenSet() const
{
    return m_hasReadHasBeenSet;
}

uint64_t MsgRecord::GetScore() const
{
    return m_score;
}

void MsgRecord::SetScore(const uint64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool MsgRecord::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

bool MsgRecord::GetCanRating() const
{
    return m_canRating;
}

void MsgRecord::SetCanRating(const bool& _canRating)
{
    m_canRating = _canRating;
    m_canRatingHasBeenSet = true;
}

bool MsgRecord::CanRatingHasBeenSet() const
{
    return m_canRatingHasBeenSet;
}

bool MsgRecord::GetCanFeedback() const
{
    return m_canFeedback;
}

void MsgRecord::SetCanFeedback(const bool& _canFeedback)
{
    m_canFeedback = _canFeedback;
    m_canFeedbackHasBeenSet = true;
}

bool MsgRecord::CanFeedbackHasBeenSet() const
{
    return m_canFeedbackHasBeenSet;
}

uint64_t MsgRecord::GetType() const
{
    return m_type;
}

void MsgRecord::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MsgRecord::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<MsgRecordReference> MsgRecord::GetReferences() const
{
    return m_references;
}

void MsgRecord::SetReferences(const vector<MsgRecordReference>& _references)
{
    m_references = _references;
    m_referencesHasBeenSet = true;
}

bool MsgRecord::ReferencesHasBeenSet() const
{
    return m_referencesHasBeenSet;
}

vector<string> MsgRecord::GetReasons() const
{
    return m_reasons;
}

void MsgRecord::SetReasons(const vector<string>& _reasons)
{
    m_reasons = _reasons;
    m_reasonsHasBeenSet = true;
}

bool MsgRecord::ReasonsHasBeenSet() const
{
    return m_reasonsHasBeenSet;
}

bool MsgRecord::GetIsLlmGenerated() const
{
    return m_isLlmGenerated;
}

void MsgRecord::SetIsLlmGenerated(const bool& _isLlmGenerated)
{
    m_isLlmGenerated = _isLlmGenerated;
    m_isLlmGeneratedHasBeenSet = true;
}

bool MsgRecord::IsLlmGeneratedHasBeenSet() const
{
    return m_isLlmGeneratedHasBeenSet;
}

vector<string> MsgRecord::GetImageUrls() const
{
    return m_imageUrls;
}

void MsgRecord::SetImageUrls(const vector<string>& _imageUrls)
{
    m_imageUrls = _imageUrls;
    m_imageUrlsHasBeenSet = true;
}

bool MsgRecord::ImageUrlsHasBeenSet() const
{
    return m_imageUrlsHasBeenSet;
}

TokenStat MsgRecord::GetTokenStat() const
{
    return m_tokenStat;
}

void MsgRecord::SetTokenStat(const TokenStat& _tokenStat)
{
    m_tokenStat = _tokenStat;
    m_tokenStatHasBeenSet = true;
}

bool MsgRecord::TokenStatHasBeenSet() const
{
    return m_tokenStatHasBeenSet;
}

uint64_t MsgRecord::GetReplyMethod() const
{
    return m_replyMethod;
}

void MsgRecord::SetReplyMethod(const uint64_t& _replyMethod)
{
    m_replyMethod = _replyMethod;
    m_replyMethodHasBeenSet = true;
}

bool MsgRecord::ReplyMethodHasBeenSet() const
{
    return m_replyMethodHasBeenSet;
}

vector<string> MsgRecord::GetOptionCards() const
{
    return m_optionCards;
}

void MsgRecord::SetOptionCards(const vector<string>& _optionCards)
{
    m_optionCards = _optionCards;
    m_optionCardsHasBeenSet = true;
}

bool MsgRecord::OptionCardsHasBeenSet() const
{
    return m_optionCardsHasBeenSet;
}

TaskFlowInfo MsgRecord::GetTaskFlow() const
{
    return m_taskFlow;
}

void MsgRecord::SetTaskFlow(const TaskFlowInfo& _taskFlow)
{
    m_taskFlow = _taskFlow;
    m_taskFlowHasBeenSet = true;
}

bool MsgRecord::TaskFlowHasBeenSet() const
{
    return m_taskFlowHasBeenSet;
}

vector<FileInfo> MsgRecord::GetFileInfos() const
{
    return m_fileInfos;
}

void MsgRecord::SetFileInfos(const vector<FileInfo>& _fileInfos)
{
    m_fileInfos = _fileInfos;
    m_fileInfosHasBeenSet = true;
}

bool MsgRecord::FileInfosHasBeenSet() const
{
    return m_fileInfosHasBeenSet;
}

vector<QuoteInfo> MsgRecord::GetQuoteInfos() const
{
    return m_quoteInfos;
}

void MsgRecord::SetQuoteInfos(const vector<QuoteInfo>& _quoteInfos)
{
    m_quoteInfos = _quoteInfos;
    m_quoteInfosHasBeenSet = true;
}

bool MsgRecord::QuoteInfosHasBeenSet() const
{
    return m_quoteInfosHasBeenSet;
}

AgentThought MsgRecord::GetAgentThought() const
{
    return m_agentThought;
}

void MsgRecord::SetAgentThought(const AgentThought& _agentThought)
{
    m_agentThought = _agentThought;
    m_agentThoughtHasBeenSet = true;
}

bool MsgRecord::AgentThoughtHasBeenSet() const
{
    return m_agentThoughtHasBeenSet;
}

ExtraInfo MsgRecord::GetExtraInfo() const
{
    return m_extraInfo;
}

void MsgRecord::SetExtraInfo(const ExtraInfo& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool MsgRecord::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

WorkflowInfo MsgRecord::GetWorkFlow() const
{
    return m_workFlow;
}

void MsgRecord::SetWorkFlow(const WorkflowInfo& _workFlow)
{
    m_workFlow = _workFlow;
    m_workFlowHasBeenSet = true;
}

bool MsgRecord::WorkFlowHasBeenSet() const
{
    return m_workFlowHasBeenSet;
}

