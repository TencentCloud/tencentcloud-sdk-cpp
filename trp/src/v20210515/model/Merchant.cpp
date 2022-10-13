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

#include <tencentcloud/trp/v20210515/model/Merchant.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

Merchant::Merchant() :
    m_merchantIdHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_codeRuleHasBeenSet(false),
    m_codeTypeHasBeenSet(false),
    m_codeUrlHasBeenSet(false)
{
}

CoreInternalOutcome Merchant::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.CorpId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = value["CorpId"].GetInt64();
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CodeRule") && !value["CodeRule"].IsNull())
    {
        if (!value["CodeRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.CodeRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeRule = string(value["CodeRule"].GetString());
        m_codeRuleHasBeenSet = true;
    }

    if (value.HasMember("CodeType") && !value["CodeType"].IsNull())
    {
        if (!value["CodeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.CodeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_codeType = value["CodeType"].GetInt64();
        m_codeTypeHasBeenSet = true;
    }

    if (value.HasMember("CodeUrl") && !value["CodeUrl"].IsNull())
    {
        if (!value["CodeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Merchant.CodeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeUrl = string(value["CodeUrl"].GetString());
        m_codeUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Merchant::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_corpId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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

    if (m_codeRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeRule.c_str(), allocator).Move(), allocator);
    }

    if (m_codeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_codeType, allocator);
    }

    if (m_codeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeUrl.c_str(), allocator).Move(), allocator);
    }

}


string Merchant::GetMerchantId() const
{
    return m_merchantId;
}

void Merchant::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool Merchant::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

int64_t Merchant::GetCorpId() const
{
    return m_corpId;
}

void Merchant::SetCorpId(const int64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool Merchant::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string Merchant::GetName() const
{
    return m_name;
}

void Merchant::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Merchant::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Merchant::GetRemark() const
{
    return m_remark;
}

void Merchant::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool Merchant::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string Merchant::GetCreateTime() const
{
    return m_createTime;
}

void Merchant::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Merchant::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Merchant::GetUpdateTime() const
{
    return m_updateTime;
}

void Merchant::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Merchant::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Merchant::GetCodeRule() const
{
    return m_codeRule;
}

void Merchant::SetCodeRule(const string& _codeRule)
{
    m_codeRule = _codeRule;
    m_codeRuleHasBeenSet = true;
}

bool Merchant::CodeRuleHasBeenSet() const
{
    return m_codeRuleHasBeenSet;
}

int64_t Merchant::GetCodeType() const
{
    return m_codeType;
}

void Merchant::SetCodeType(const int64_t& _codeType)
{
    m_codeType = _codeType;
    m_codeTypeHasBeenSet = true;
}

bool Merchant::CodeTypeHasBeenSet() const
{
    return m_codeTypeHasBeenSet;
}

string Merchant::GetCodeUrl() const
{
    return m_codeUrl;
}

void Merchant::SetCodeUrl(const string& _codeUrl)
{
    m_codeUrl = _codeUrl;
    m_codeUrlHasBeenSet = true;
}

bool Merchant::CodeUrlHasBeenSet() const
{
    return m_codeUrlHasBeenSet;
}

