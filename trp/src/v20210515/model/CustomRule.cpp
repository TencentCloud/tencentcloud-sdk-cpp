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

#include <tencentcloud/trp/v20210515/model/CustomRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

CustomRule::CustomRule() :
    m_customIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_merchantIdHasBeenSet(false),
    m_codeLengthHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_codePartsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome CustomRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomId") && !value["CustomId"].IsNull())
    {
        if (!value["CustomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRule.CustomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customId = string(value["CustomId"].GetString());
        m_customIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRule.CorpId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = value["CorpId"].GetUint64();
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRule.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("CodeLength") && !value["CodeLength"].IsNull())
    {
        if (!value["CodeLength"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRule.CodeLength` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_codeLength = value["CodeLength"].GetUint64();
        m_codeLengthHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRule.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CodeParts") && !value["CodeParts"].IsNull())
    {
        if (!value["CodeParts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomRule.CodeParts` is not array type"));

        const rapidjson::Value &tmpValue = value["CodeParts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CodePart item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_codeParts.push_back(item);
        }
        m_codePartsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRule.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_corpId, allocator);
    }

    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_codeLength, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_codePartsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeParts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_codeParts.begin(); itr != m_codeParts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string CustomRule::GetCustomId() const
{
    return m_customId;
}

void CustomRule::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool CustomRule::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}

string CustomRule::GetName() const
{
    return m_name;
}

void CustomRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CustomRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CustomRule::GetCorpId() const
{
    return m_corpId;
}

void CustomRule::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool CustomRule::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string CustomRule::GetMerchantId() const
{
    return m_merchantId;
}

void CustomRule::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool CustomRule::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

uint64_t CustomRule::GetCodeLength() const
{
    return m_codeLength;
}

void CustomRule::SetCodeLength(const uint64_t& _codeLength)
{
    m_codeLength = _codeLength;
    m_codeLengthHasBeenSet = true;
}

bool CustomRule::CodeLengthHasBeenSet() const
{
    return m_codeLengthHasBeenSet;
}

int64_t CustomRule::GetStatus() const
{
    return m_status;
}

void CustomRule::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CustomRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<CodePart> CustomRule::GetCodeParts() const
{
    return m_codeParts;
}

void CustomRule::SetCodeParts(const vector<CodePart>& _codeParts)
{
    m_codeParts = _codeParts;
    m_codePartsHasBeenSet = true;
}

bool CustomRule::CodePartsHasBeenSet() const
{
    return m_codePartsHasBeenSet;
}

string CustomRule::GetCreateTime() const
{
    return m_createTime;
}

void CustomRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CustomRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CustomRule::GetUpdateTime() const
{
    return m_updateTime;
}

void CustomRule::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CustomRule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

