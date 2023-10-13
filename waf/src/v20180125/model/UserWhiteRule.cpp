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

#include <tencentcloud/waf/v20180125/model/UserWhiteRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

UserWhiteRule::UserWhiteRule() :
    m_whiteRuleIdHasBeenSet(false),
    m_signatureIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_matchFieldHasBeenSet(false),
    m_matchMethodHasBeenSet(false),
    m_matchContentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome UserWhiteRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WhiteRuleId") && !value["WhiteRuleId"].IsNull())
    {
        if (!value["WhiteRuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserWhiteRule.WhiteRuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_whiteRuleId = value["WhiteRuleId"].GetUint64();
        m_whiteRuleIdHasBeenSet = true;
    }

    if (value.HasMember("SignatureId") && !value["SignatureId"].IsNull())
    {
        if (!value["SignatureId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserWhiteRule.SignatureId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signatureId = string(value["SignatureId"].GetString());
        m_signatureIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserWhiteRule.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MatchField") && !value["MatchField"].IsNull())
    {
        if (!value["MatchField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserWhiteRule.MatchField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchField = string(value["MatchField"].GetString());
        m_matchFieldHasBeenSet = true;
    }

    if (value.HasMember("MatchMethod") && !value["MatchMethod"].IsNull())
    {
        if (!value["MatchMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserWhiteRule.MatchMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchMethod = string(value["MatchMethod"].GetString());
        m_matchMethodHasBeenSet = true;
    }

    if (value.HasMember("MatchContent") && !value["MatchContent"].IsNull())
    {
        if (!value["MatchContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserWhiteRule.MatchContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchContent = string(value["MatchContent"].GetString());
        m_matchContentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserWhiteRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserWhiteRule.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserWhiteRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_whiteRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_whiteRuleId, allocator);
    }

    if (m_signatureIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignatureId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signatureId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_matchFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchField.c_str(), allocator).Move(), allocator);
    }

    if (m_matchMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_matchContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchContent.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t UserWhiteRule::GetWhiteRuleId() const
{
    return m_whiteRuleId;
}

void UserWhiteRule::SetWhiteRuleId(const uint64_t& _whiteRuleId)
{
    m_whiteRuleId = _whiteRuleId;
    m_whiteRuleIdHasBeenSet = true;
}

bool UserWhiteRule::WhiteRuleIdHasBeenSet() const
{
    return m_whiteRuleIdHasBeenSet;
}

string UserWhiteRule::GetSignatureId() const
{
    return m_signatureId;
}

void UserWhiteRule::SetSignatureId(const string& _signatureId)
{
    m_signatureId = _signatureId;
    m_signatureIdHasBeenSet = true;
}

bool UserWhiteRule::SignatureIdHasBeenSet() const
{
    return m_signatureIdHasBeenSet;
}

int64_t UserWhiteRule::GetStatus() const
{
    return m_status;
}

void UserWhiteRule::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UserWhiteRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UserWhiteRule::GetMatchField() const
{
    return m_matchField;
}

void UserWhiteRule::SetMatchField(const string& _matchField)
{
    m_matchField = _matchField;
    m_matchFieldHasBeenSet = true;
}

bool UserWhiteRule::MatchFieldHasBeenSet() const
{
    return m_matchFieldHasBeenSet;
}

string UserWhiteRule::GetMatchMethod() const
{
    return m_matchMethod;
}

void UserWhiteRule::SetMatchMethod(const string& _matchMethod)
{
    m_matchMethod = _matchMethod;
    m_matchMethodHasBeenSet = true;
}

bool UserWhiteRule::MatchMethodHasBeenSet() const
{
    return m_matchMethodHasBeenSet;
}

string UserWhiteRule::GetMatchContent() const
{
    return m_matchContent;
}

void UserWhiteRule::SetMatchContent(const string& _matchContent)
{
    m_matchContent = _matchContent;
    m_matchContentHasBeenSet = true;
}

bool UserWhiteRule::MatchContentHasBeenSet() const
{
    return m_matchContentHasBeenSet;
}

string UserWhiteRule::GetCreateTime() const
{
    return m_createTime;
}

void UserWhiteRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool UserWhiteRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string UserWhiteRule::GetModifyTime() const
{
    return m_modifyTime;
}

void UserWhiteRule::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool UserWhiteRule::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

