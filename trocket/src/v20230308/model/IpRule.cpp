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

#include <tencentcloud/trocket/v20230308/model/IpRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

IpRule::IpRule() :
    m_ipHasBeenSet(false),
    m_allowHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome IpRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpRule.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Allow") && !value["Allow"].IsNull())
    {
        if (!value["Allow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpRule.Allow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allow = value["Allow"].GetBool();
        m_allowHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpRule.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
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


string IpRule::GetIp() const
{
    return m_ip;
}

void IpRule::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool IpRule::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

bool IpRule::GetAllow() const
{
    return m_allow;
}

void IpRule::SetAllow(const bool& _allow)
{
    m_allow = _allow;
    m_allowHasBeenSet = true;
}

bool IpRule::AllowHasBeenSet() const
{
    return m_allowHasBeenSet;
}

string IpRule::GetRemark() const
{
    return m_remark;
}

void IpRule::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool IpRule::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

