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

#include <tencentcloud/cfw/v20190904/model/CustomWhiteRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CustomWhiteRule::CustomWhiteRule() :
    m_dstIPHasBeenSet(false),
    m_idsRuleIdHasBeenSet(false),
    m_idsRuleNameHasBeenSet(false),
    m_srcIPHasBeenSet(false)
{
}

CoreInternalOutcome CustomWhiteRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DstIP") && !value["DstIP"].IsNull())
    {
        if (!value["DstIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomWhiteRule.DstIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstIP = string(value["DstIP"].GetString());
        m_dstIPHasBeenSet = true;
    }

    if (value.HasMember("IdsRuleId") && !value["IdsRuleId"].IsNull())
    {
        if (!value["IdsRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomWhiteRule.IdsRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idsRuleId = string(value["IdsRuleId"].GetString());
        m_idsRuleIdHasBeenSet = true;
    }

    if (value.HasMember("IdsRuleName") && !value["IdsRuleName"].IsNull())
    {
        if (!value["IdsRuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomWhiteRule.IdsRuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idsRuleName = string(value["IdsRuleName"].GetString());
        m_idsRuleNameHasBeenSet = true;
    }

    if (value.HasMember("SrcIP") && !value["SrcIP"].IsNull())
    {
        if (!value["SrcIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomWhiteRule.SrcIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIP = string(value["SrcIP"].GetString());
        m_srcIPHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomWhiteRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dstIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstIP.c_str(), allocator).Move(), allocator);
    }

    if (m_idsRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdsRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idsRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_idsRuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdsRuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idsRuleName.c_str(), allocator).Move(), allocator);
    }

    if (m_srcIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIP.c_str(), allocator).Move(), allocator);
    }

}


string CustomWhiteRule::GetDstIP() const
{
    return m_dstIP;
}

void CustomWhiteRule::SetDstIP(const string& _dstIP)
{
    m_dstIP = _dstIP;
    m_dstIPHasBeenSet = true;
}

bool CustomWhiteRule::DstIPHasBeenSet() const
{
    return m_dstIPHasBeenSet;
}

string CustomWhiteRule::GetIdsRuleId() const
{
    return m_idsRuleId;
}

void CustomWhiteRule::SetIdsRuleId(const string& _idsRuleId)
{
    m_idsRuleId = _idsRuleId;
    m_idsRuleIdHasBeenSet = true;
}

bool CustomWhiteRule::IdsRuleIdHasBeenSet() const
{
    return m_idsRuleIdHasBeenSet;
}

string CustomWhiteRule::GetIdsRuleName() const
{
    return m_idsRuleName;
}

void CustomWhiteRule::SetIdsRuleName(const string& _idsRuleName)
{
    m_idsRuleName = _idsRuleName;
    m_idsRuleNameHasBeenSet = true;
}

bool CustomWhiteRule::IdsRuleNameHasBeenSet() const
{
    return m_idsRuleNameHasBeenSet;
}

string CustomWhiteRule::GetSrcIP() const
{
    return m_srcIP;
}

void CustomWhiteRule::SetSrcIP(const string& _srcIP)
{
    m_srcIP = _srcIP;
    m_srcIPHasBeenSet = true;
}

bool CustomWhiteRule::SrcIPHasBeenSet() const
{
    return m_srcIPHasBeenSet;
}

