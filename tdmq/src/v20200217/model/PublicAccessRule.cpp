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

#include <tencentcloud/tdmq/v20200217/model/PublicAccessRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

PublicAccessRule::PublicAccessRule() :
    m_ipRuleHasBeenSet(false),
    m_allowHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome PublicAccessRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IpRule") && !value["IpRule"].IsNull())
    {
        if (!value["IpRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAccessRule.IpRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipRule = string(value["IpRule"].GetString());
        m_ipRuleHasBeenSet = true;
    }

    if (value.HasMember("Allow") && !value["Allow"].IsNull())
    {
        if (!value["Allow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAccessRule.Allow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allow = value["Allow"].GetBool();
        m_allowHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAccessRule.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PublicAccessRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipRule.c_str(), allocator).Move(), allocator);
    }

    if (m_allowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Allow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allow, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string PublicAccessRule::GetIpRule() const
{
    return m_ipRule;
}

void PublicAccessRule::SetIpRule(const string& _ipRule)
{
    m_ipRule = _ipRule;
    m_ipRuleHasBeenSet = true;
}

bool PublicAccessRule::IpRuleHasBeenSet() const
{
    return m_ipRuleHasBeenSet;
}

bool PublicAccessRule::GetAllow() const
{
    return m_allow;
}

void PublicAccessRule::SetAllow(const bool& _allow)
{
    m_allow = _allow;
    m_allowHasBeenSet = true;
}

bool PublicAccessRule::AllowHasBeenSet() const
{
    return m_allowHasBeenSet;
}

string PublicAccessRule::GetRemark() const
{
    return m_remark;
}

void PublicAccessRule::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool PublicAccessRule::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

