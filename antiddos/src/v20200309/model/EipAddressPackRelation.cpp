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

#include <tencentcloud/antiddos/v20200309/model/EipAddressPackRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

EipAddressPackRelation::EipAddressPackRelation() :
    m_ipCountHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_curDeadlineHasBeenSet(false)
{
}

CoreInternalOutcome EipAddressPackRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IpCount") && !value["IpCount"].IsNull())
    {
        if (!value["IpCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EipAddressPackRelation.IpCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ipCount = value["IpCount"].GetUint64();
        m_ipCountHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EipAddressPackRelation.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("CurDeadline") && !value["CurDeadline"].IsNull())
    {
        if (!value["CurDeadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipAddressPackRelation.CurDeadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curDeadline = string(value["CurDeadline"].GetString());
        m_curDeadlineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EipAddressPackRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipCount, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_curDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curDeadline.c_str(), allocator).Move(), allocator);
    }

}


uint64_t EipAddressPackRelation::GetIpCount() const
{
    return m_ipCount;
}

void EipAddressPackRelation::SetIpCount(const uint64_t& _ipCount)
{
    m_ipCount = _ipCount;
    m_ipCountHasBeenSet = true;
}

bool EipAddressPackRelation::IpCountHasBeenSet() const
{
    return m_ipCountHasBeenSet;
}

uint64_t EipAddressPackRelation::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void EipAddressPackRelation::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool EipAddressPackRelation::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string EipAddressPackRelation::GetCurDeadline() const
{
    return m_curDeadline;
}

void EipAddressPackRelation::SetCurDeadline(const string& _curDeadline)
{
    m_curDeadline = _curDeadline;
    m_curDeadlineHasBeenSet = true;
}

bool EipAddressPackRelation::CurDeadlineHasBeenSet() const
{
    return m_curDeadlineHasBeenSet;
}

