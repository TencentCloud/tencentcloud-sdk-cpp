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

#include <tencentcloud/trp/v20210515/model/CodePack.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

CodePack::CodePack() :
    m_packIdHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_merchantIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_logHasBeenSet(false),
    m_createUserHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_codeLengthHasBeenSet(false),
    m_codeTypeHasBeenSet(false),
    m_cipherHasBeenSet(false),
    m_textUrlHasBeenSet(false),
    m_packUrlHasBeenSet(false),
    m_merchantNameHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_customIdHasBeenSet(false),
    m_packTypeHasBeenSet(false),
    m_packLevelHasBeenSet(false),
    m_packSpecHasBeenSet(false)
{
}

CoreInternalOutcome CodePack::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PackId") && !value["PackId"].IsNull())
    {
        if (!value["PackId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.PackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packId = string(value["PackId"].GetString());
        m_packIdHasBeenSet = true;
    }

    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.CorpId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = value["CorpId"].GetInt64();
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Log") && !value["Log"].IsNull())
    {
        if (!value["Log"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.Log` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_log = string(value["Log"].GetString());
        m_logHasBeenSet = true;
    }

    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.Amount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_amount = value["Amount"].GetInt64();
        m_amountHasBeenSet = true;
    }

    if (value.HasMember("CodeLength") && !value["CodeLength"].IsNull())
    {
        if (!value["CodeLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.CodeLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_codeLength = value["CodeLength"].GetInt64();
        m_codeLengthHasBeenSet = true;
    }

    if (value.HasMember("CodeType") && !value["CodeType"].IsNull())
    {
        if (!value["CodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.CodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeType = string(value["CodeType"].GetString());
        m_codeTypeHasBeenSet = true;
    }

    if (value.HasMember("Cipher") && !value["Cipher"].IsNull())
    {
        if (!value["Cipher"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.Cipher` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cipher = value["Cipher"].GetInt64();
        m_cipherHasBeenSet = true;
    }

    if (value.HasMember("TextUrl") && !value["TextUrl"].IsNull())
    {
        if (!value["TextUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.TextUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_textUrl = string(value["TextUrl"].GetString());
        m_textUrlHasBeenSet = true;
    }

    if (value.HasMember("PackUrl") && !value["PackUrl"].IsNull())
    {
        if (!value["PackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.PackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packUrl = string(value["PackUrl"].GetString());
        m_packUrlHasBeenSet = true;
    }

    if (value.HasMember("MerchantName") && !value["MerchantName"].IsNull())
    {
        if (!value["MerchantName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.MerchantName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantName = string(value["MerchantName"].GetString());
        m_merchantNameHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.RuleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = value["RuleType"].GetInt64();
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("CustomId") && !value["CustomId"].IsNull())
    {
        if (!value["CustomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.CustomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customId = string(value["CustomId"].GetString());
        m_customIdHasBeenSet = true;
    }

    if (value.HasMember("PackType") && !value["PackType"].IsNull())
    {
        if (!value["PackType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.PackType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_packType = value["PackType"].GetInt64();
        m_packTypeHasBeenSet = true;
    }

    if (value.HasMember("PackLevel") && !value["PackLevel"].IsNull())
    {
        if (!value["PackLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CodePack.PackLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packLevel = value["PackLevel"].GetUint64();
        m_packLevelHasBeenSet = true;
    }

    if (value.HasMember("PackSpec") && !value["PackSpec"].IsNull())
    {
        if (!value["PackSpec"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CodePack.PackSpec` is not array type"));

        const rapidjson::Value &tmpValue = value["PackSpec"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PackSpec item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_packSpec.push_back(item);
        }
        m_packSpecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodePack::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_packIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packId.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_logHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Log";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_log.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUser.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amount, allocator);
    }

    if (m_codeLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_codeLength, allocator);
    }

    if (m_codeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeType.c_str(), allocator).Move(), allocator);
    }

    if (m_cipherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cipher";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cipher, allocator);
    }

    if (m_textUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_textUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_packUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleType, allocator);
    }

    if (m_customIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customId.c_str(), allocator).Move(), allocator);
    }

    if (m_packTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packType, allocator);
    }

    if (m_packLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packLevel, allocator);
    }

    if (m_packSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_packSpec.begin(); itr != m_packSpec.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CodePack::GetPackId() const
{
    return m_packId;
}

void CodePack::SetPackId(const string& _packId)
{
    m_packId = _packId;
    m_packIdHasBeenSet = true;
}

bool CodePack::PackIdHasBeenSet() const
{
    return m_packIdHasBeenSet;
}

int64_t CodePack::GetCorpId() const
{
    return m_corpId;
}

void CodePack::SetCorpId(const int64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool CodePack::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string CodePack::GetMerchantId() const
{
    return m_merchantId;
}

void CodePack::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool CodePack::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string CodePack::GetCreateTime() const
{
    return m_createTime;
}

void CodePack::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CodePack::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CodePack::GetUpdateTime() const
{
    return m_updateTime;
}

void CodePack::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CodePack::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string CodePack::GetStatus() const
{
    return m_status;
}

void CodePack::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CodePack::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CodePack::GetLog() const
{
    return m_log;
}

void CodePack::SetLog(const string& _log)
{
    m_log = _log;
    m_logHasBeenSet = true;
}

bool CodePack::LogHasBeenSet() const
{
    return m_logHasBeenSet;
}

string CodePack::GetCreateUser() const
{
    return m_createUser;
}

void CodePack::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool CodePack::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

int64_t CodePack::GetAmount() const
{
    return m_amount;
}

void CodePack::SetAmount(const int64_t& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool CodePack::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

int64_t CodePack::GetCodeLength() const
{
    return m_codeLength;
}

void CodePack::SetCodeLength(const int64_t& _codeLength)
{
    m_codeLength = _codeLength;
    m_codeLengthHasBeenSet = true;
}

bool CodePack::CodeLengthHasBeenSet() const
{
    return m_codeLengthHasBeenSet;
}

string CodePack::GetCodeType() const
{
    return m_codeType;
}

void CodePack::SetCodeType(const string& _codeType)
{
    m_codeType = _codeType;
    m_codeTypeHasBeenSet = true;
}

bool CodePack::CodeTypeHasBeenSet() const
{
    return m_codeTypeHasBeenSet;
}

int64_t CodePack::GetCipher() const
{
    return m_cipher;
}

void CodePack::SetCipher(const int64_t& _cipher)
{
    m_cipher = _cipher;
    m_cipherHasBeenSet = true;
}

bool CodePack::CipherHasBeenSet() const
{
    return m_cipherHasBeenSet;
}

string CodePack::GetTextUrl() const
{
    return m_textUrl;
}

void CodePack::SetTextUrl(const string& _textUrl)
{
    m_textUrl = _textUrl;
    m_textUrlHasBeenSet = true;
}

bool CodePack::TextUrlHasBeenSet() const
{
    return m_textUrlHasBeenSet;
}

string CodePack::GetPackUrl() const
{
    return m_packUrl;
}

void CodePack::SetPackUrl(const string& _packUrl)
{
    m_packUrl = _packUrl;
    m_packUrlHasBeenSet = true;
}

bool CodePack::PackUrlHasBeenSet() const
{
    return m_packUrlHasBeenSet;
}

string CodePack::GetMerchantName() const
{
    return m_merchantName;
}

void CodePack::SetMerchantName(const string& _merchantName)
{
    m_merchantName = _merchantName;
    m_merchantNameHasBeenSet = true;
}

bool CodePack::MerchantNameHasBeenSet() const
{
    return m_merchantNameHasBeenSet;
}

int64_t CodePack::GetRuleType() const
{
    return m_ruleType;
}

void CodePack::SetRuleType(const int64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool CodePack::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string CodePack::GetCustomId() const
{
    return m_customId;
}

void CodePack::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool CodePack::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}

int64_t CodePack::GetPackType() const
{
    return m_packType;
}

void CodePack::SetPackType(const int64_t& _packType)
{
    m_packType = _packType;
    m_packTypeHasBeenSet = true;
}

bool CodePack::PackTypeHasBeenSet() const
{
    return m_packTypeHasBeenSet;
}

uint64_t CodePack::GetPackLevel() const
{
    return m_packLevel;
}

void CodePack::SetPackLevel(const uint64_t& _packLevel)
{
    m_packLevel = _packLevel;
    m_packLevelHasBeenSet = true;
}

bool CodePack::PackLevelHasBeenSet() const
{
    return m_packLevelHasBeenSet;
}

vector<PackSpec> CodePack::GetPackSpec() const
{
    return m_packSpec;
}

void CodePack::SetPackSpec(const vector<PackSpec>& _packSpec)
{
    m_packSpec = _packSpec;
    m_packSpecHasBeenSet = true;
}

bool CodePack::PackSpecHasBeenSet() const
{
    return m_packSpecHasBeenSet;
}

