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
    m_matchParamsHasBeenSet(false),
    m_matchMethodHasBeenSet(false),
    m_matchContentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_signatureIdsHasBeenSet(false),
    m_typeIdsHasBeenSet(false),
    m_typeIdHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_matchInfoHasBeenSet(false),
    m_matchInfoStrHasBeenSet(false)
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

    if (value.HasMember("MatchParams") && !value["MatchParams"].IsNull())
    {
        if (!value["MatchParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserWhiteRule.MatchParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchParams = string(value["MatchParams"].GetString());
        m_matchParamsHasBeenSet = true;
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

    if (value.HasMember("SignatureIds") && !value["SignatureIds"].IsNull())
    {
        if (!value["SignatureIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserWhiteRule.SignatureIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SignatureIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_signatureIds.push_back((*itr).GetString());
        }
        m_signatureIdsHasBeenSet = true;
    }

    if (value.HasMember("TypeIds") && !value["TypeIds"].IsNull())
    {
        if (!value["TypeIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserWhiteRule.TypeIds` is not array type"));

        const rapidjson::Value &tmpValue = value["TypeIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_typeIds.push_back((*itr).GetString());
        }
        m_typeIdsHasBeenSet = true;
    }

    if (value.HasMember("TypeId") && !value["TypeId"].IsNull())
    {
        if (!value["TypeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserWhiteRule.TypeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeId = string(value["TypeId"].GetString());
        m_typeIdHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserWhiteRule.Mode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetInt64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserWhiteRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("MatchInfo") && !value["MatchInfo"].IsNull())
    {
        if (!value["MatchInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserWhiteRule.MatchInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["MatchInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserWhiteRuleItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_matchInfo.push_back(item);
        }
        m_matchInfoHasBeenSet = true;
    }

    if (value.HasMember("MatchInfoStr") && !value["MatchInfoStr"].IsNull())
    {
        if (!value["MatchInfoStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserWhiteRule.MatchInfoStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchInfoStr = string(value["MatchInfoStr"].GetString());
        m_matchInfoStrHasBeenSet = true;
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

    if (m_matchParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchParams.c_str(), allocator).Move(), allocator);
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

    if (m_signatureIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignatureIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_signatureIds.begin(); itr != m_signatureIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_typeIds.begin(); itr != m_typeIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeId.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_matchInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_matchInfo.begin(); itr != m_matchInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_matchInfoStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchInfoStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchInfoStr.c_str(), allocator).Move(), allocator);
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

string UserWhiteRule::GetMatchParams() const
{
    return m_matchParams;
}

void UserWhiteRule::SetMatchParams(const string& _matchParams)
{
    m_matchParams = _matchParams;
    m_matchParamsHasBeenSet = true;
}

bool UserWhiteRule::MatchParamsHasBeenSet() const
{
    return m_matchParamsHasBeenSet;
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

vector<string> UserWhiteRule::GetSignatureIds() const
{
    return m_signatureIds;
}

void UserWhiteRule::SetSignatureIds(const vector<string>& _signatureIds)
{
    m_signatureIds = _signatureIds;
    m_signatureIdsHasBeenSet = true;
}

bool UserWhiteRule::SignatureIdsHasBeenSet() const
{
    return m_signatureIdsHasBeenSet;
}

vector<string> UserWhiteRule::GetTypeIds() const
{
    return m_typeIds;
}

void UserWhiteRule::SetTypeIds(const vector<string>& _typeIds)
{
    m_typeIds = _typeIds;
    m_typeIdsHasBeenSet = true;
}

bool UserWhiteRule::TypeIdsHasBeenSet() const
{
    return m_typeIdsHasBeenSet;
}

string UserWhiteRule::GetTypeId() const
{
    return m_typeId;
}

void UserWhiteRule::SetTypeId(const string& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool UserWhiteRule::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

int64_t UserWhiteRule::GetMode() const
{
    return m_mode;
}

void UserWhiteRule::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool UserWhiteRule::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string UserWhiteRule::GetName() const
{
    return m_name;
}

void UserWhiteRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UserWhiteRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<UserWhiteRuleItem> UserWhiteRule::GetMatchInfo() const
{
    return m_matchInfo;
}

void UserWhiteRule::SetMatchInfo(const vector<UserWhiteRuleItem>& _matchInfo)
{
    m_matchInfo = _matchInfo;
    m_matchInfoHasBeenSet = true;
}

bool UserWhiteRule::MatchInfoHasBeenSet() const
{
    return m_matchInfoHasBeenSet;
}

string UserWhiteRule::GetMatchInfoStr() const
{
    return m_matchInfoStr;
}

void UserWhiteRule::SetMatchInfoStr(const string& _matchInfoStr)
{
    m_matchInfoStr = _matchInfoStr;
    m_matchInfoStrHasBeenSet = true;
}

bool UserWhiteRule::MatchInfoStrHasBeenSet() const
{
    return m_matchInfoStrHasBeenSet;
}

