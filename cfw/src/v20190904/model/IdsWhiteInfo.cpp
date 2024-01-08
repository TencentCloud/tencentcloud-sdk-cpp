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

#include <tencentcloud/cfw/v20190904/model/IdsWhiteInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

IdsWhiteInfo::IdsWhiteInfo() :
    m_idHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_dstIpHasBeenSet(false),
    m_whiteRuleTypeHasBeenSet(false),
    m_fwTypeHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

CoreInternalOutcome IdsWhiteInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IdsWhiteInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdsWhiteInfo.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("DstIp") && !value["DstIp"].IsNull())
    {
        if (!value["DstIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdsWhiteInfo.DstIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstIp = string(value["DstIp"].GetString());
        m_dstIpHasBeenSet = true;
    }

    if (value.HasMember("WhiteRuleType") && !value["WhiteRuleType"].IsNull())
    {
        if (!value["WhiteRuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdsWhiteInfo.WhiteRuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_whiteRuleType = string(value["WhiteRuleType"].GetString());
        m_whiteRuleTypeHasBeenSet = true;
    }

    if (value.HasMember("FwType") && !value["FwType"].IsNull())
    {
        if (!value["FwType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IdsWhiteInfo.FwType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fwType = value["FwType"].GetInt64();
        m_fwTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdsWhiteInfo.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IdsWhiteInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_dstIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstIp.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteRuleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteRuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_whiteRuleType.c_str(), allocator).Move(), allocator);
    }

    if (m_fwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fwType, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

}


int64_t IdsWhiteInfo::GetId() const
{
    return m_id;
}

void IdsWhiteInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool IdsWhiteInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string IdsWhiteInfo::GetSrcIp() const
{
    return m_srcIp;
}

void IdsWhiteInfo::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool IdsWhiteInfo::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

string IdsWhiteInfo::GetDstIp() const
{
    return m_dstIp;
}

void IdsWhiteInfo::SetDstIp(const string& _dstIp)
{
    m_dstIp = _dstIp;
    m_dstIpHasBeenSet = true;
}

bool IdsWhiteInfo::DstIpHasBeenSet() const
{
    return m_dstIpHasBeenSet;
}

string IdsWhiteInfo::GetWhiteRuleType() const
{
    return m_whiteRuleType;
}

void IdsWhiteInfo::SetWhiteRuleType(const string& _whiteRuleType)
{
    m_whiteRuleType = _whiteRuleType;
    m_whiteRuleTypeHasBeenSet = true;
}

bool IdsWhiteInfo::WhiteRuleTypeHasBeenSet() const
{
    return m_whiteRuleTypeHasBeenSet;
}

int64_t IdsWhiteInfo::GetFwType() const
{
    return m_fwType;
}

void IdsWhiteInfo::SetFwType(const int64_t& _fwType)
{
    m_fwType = _fwType;
    m_fwTypeHasBeenSet = true;
}

bool IdsWhiteInfo::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
}

string IdsWhiteInfo::GetRuleId() const
{
    return m_ruleId;
}

void IdsWhiteInfo::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool IdsWhiteInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

