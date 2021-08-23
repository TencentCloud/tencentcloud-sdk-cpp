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

#include <tencentcloud/dnspod/v20210323/model/LockInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

LockInfo::LockInfo() :
    m_domainIdHasBeenSet(false),
    m_lockCodeHasBeenSet(false),
    m_lockEndHasBeenSet(false)
{
}

CoreInternalOutcome LockInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LockInfo.DomainId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = value["DomainId"].GetUint64();
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("LockCode") && !value["LockCode"].IsNull())
    {
        if (!value["LockCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LockInfo.LockCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lockCode = string(value["LockCode"].GetString());
        m_lockCodeHasBeenSet = true;
    }

    if (value.HasMember("LockEnd") && !value["LockEnd"].IsNull())
    {
        if (!value["LockEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LockInfo.LockEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lockEnd = string(value["LockEnd"].GetString());
        m_lockEndHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LockInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainId, allocator);
    }

    if (m_lockCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lockCode.c_str(), allocator).Move(), allocator);
    }

    if (m_lockEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lockEnd.c_str(), allocator).Move(), allocator);
    }

}


uint64_t LockInfo::GetDomainId() const
{
    return m_domainId;
}

void LockInfo::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool LockInfo::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string LockInfo::GetLockCode() const
{
    return m_lockCode;
}

void LockInfo::SetLockCode(const string& _lockCode)
{
    m_lockCode = _lockCode;
    m_lockCodeHasBeenSet = true;
}

bool LockInfo::LockCodeHasBeenSet() const
{
    return m_lockCodeHasBeenSet;
}

string LockInfo::GetLockEnd() const
{
    return m_lockEnd;
}

void LockInfo::SetLockEnd(const string& _lockEnd)
{
    m_lockEnd = _lockEnd;
    m_lockEndHasBeenSet = true;
}

bool LockInfo::LockEndHasBeenSet() const
{
    return m_lockEndHasBeenSet;
}

