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

#include <tencentcloud/lke/v20231130/model/RejectedQuestion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

RejectedQuestion::RejectedQuestion() :
    m_rejectedBizIdHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_isAllowEditHasBeenSet(false),
    m_isAllowDeleteHasBeenSet(false)
{
}

CoreInternalOutcome RejectedQuestion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RejectedBizId") && !value["RejectedBizId"].IsNull())
    {
        if (!value["RejectedBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RejectedQuestion.RejectedBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rejectedBizId = string(value["RejectedBizId"].GetString());
        m_rejectedBizIdHasBeenSet = true;
    }

    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RejectedQuestion.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RejectedQuestion.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RejectedQuestion.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RejectedQuestion.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("IsAllowEdit") && !value["IsAllowEdit"].IsNull())
    {
        if (!value["IsAllowEdit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RejectedQuestion.IsAllowEdit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowEdit = value["IsAllowEdit"].GetBool();
        m_isAllowEditHasBeenSet = true;
    }

    if (value.HasMember("IsAllowDelete") && !value["IsAllowDelete"].IsNull())
    {
        if (!value["IsAllowDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RejectedQuestion.IsAllowDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowDelete = value["IsAllowDelete"].GetBool();
        m_isAllowDeleteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RejectedQuestion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rejectedBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RejectedBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rejectedBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isAllowEditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowEdit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllowEdit, allocator);
    }

    if (m_isAllowDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllowDelete, allocator);
    }

}


string RejectedQuestion::GetRejectedBizId() const
{
    return m_rejectedBizId;
}

void RejectedQuestion::SetRejectedBizId(const string& _rejectedBizId)
{
    m_rejectedBizId = _rejectedBizId;
    m_rejectedBizIdHasBeenSet = true;
}

bool RejectedQuestion::RejectedBizIdHasBeenSet() const
{
    return m_rejectedBizIdHasBeenSet;
}

string RejectedQuestion::GetQuestion() const
{
    return m_question;
}

void RejectedQuestion::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool RejectedQuestion::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

uint64_t RejectedQuestion::GetStatus() const
{
    return m_status;
}

void RejectedQuestion::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RejectedQuestion::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RejectedQuestion::GetStatusDesc() const
{
    return m_statusDesc;
}

void RejectedQuestion::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool RejectedQuestion::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string RejectedQuestion::GetUpdateTime() const
{
    return m_updateTime;
}

void RejectedQuestion::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RejectedQuestion::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

bool RejectedQuestion::GetIsAllowEdit() const
{
    return m_isAllowEdit;
}

void RejectedQuestion::SetIsAllowEdit(const bool& _isAllowEdit)
{
    m_isAllowEdit = _isAllowEdit;
    m_isAllowEditHasBeenSet = true;
}

bool RejectedQuestion::IsAllowEditHasBeenSet() const
{
    return m_isAllowEditHasBeenSet;
}

bool RejectedQuestion::GetIsAllowDelete() const
{
    return m_isAllowDelete;
}

void RejectedQuestion::SetIsAllowDelete(const bool& _isAllowDelete)
{
    m_isAllowDelete = _isAllowDelete;
    m_isAllowDeleteHasBeenSet = true;
}

bool RejectedQuestion::IsAllowDeleteHasBeenSet() const
{
    return m_isAllowDeleteHasBeenSet;
}

