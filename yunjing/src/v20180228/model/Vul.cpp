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

#include <tencentcloud/yunjing/v20180228/model/Vul.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

Vul::Vul() :
    m_vulIdHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_vulLevelHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_impactedHostNumHasBeenSet(false),
    m_vulStatusHasBeenSet(false)
{
}

CoreInternalOutcome Vul::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("VulLevel") && !value["VulLevel"].IsNull())
    {
        if (!value["VulLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.VulLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulLevel = string(value["VulLevel"].GetString());
        m_vulLevelHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("ImpactedHostNum") && !value["ImpactedHostNum"].IsNull())
    {
        if (!value["ImpactedHostNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.ImpactedHostNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_impactedHostNum = value["ImpactedHostNum"].GetUint64();
        m_impactedHostNumHasBeenSet = true;
    }

    if (value.HasMember("VulStatus") && !value["VulStatus"].IsNull())
    {
        if (!value["VulStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.VulStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulStatus = string(value["VulStatus"].GetString());
        m_vulStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Vul::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_vulLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_impactedHostNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImpactedHostNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_impactedHostNum, allocator);
    }

    if (m_vulStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulStatus.c_str(), allocator).Move(), allocator);
    }

}


uint64_t Vul::GetVulId() const
{
    return m_vulId;
}

void Vul::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool Vul::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

string Vul::GetVulName() const
{
    return m_vulName;
}

void Vul::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool Vul::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string Vul::GetVulLevel() const
{
    return m_vulLevel;
}

void Vul::SetVulLevel(const string& _vulLevel)
{
    m_vulLevel = _vulLevel;
    m_vulLevelHasBeenSet = true;
}

bool Vul::VulLevelHasBeenSet() const
{
    return m_vulLevelHasBeenSet;
}

string Vul::GetLastScanTime() const
{
    return m_lastScanTime;
}

void Vul::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool Vul::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

uint64_t Vul::GetImpactedHostNum() const
{
    return m_impactedHostNum;
}

void Vul::SetImpactedHostNum(const uint64_t& _impactedHostNum)
{
    m_impactedHostNum = _impactedHostNum;
    m_impactedHostNumHasBeenSet = true;
}

bool Vul::ImpactedHostNumHasBeenSet() const
{
    return m_impactedHostNumHasBeenSet;
}

string Vul::GetVulStatus() const
{
    return m_vulStatus;
}

void Vul::SetVulStatus(const string& _vulStatus)
{
    m_vulStatus = _vulStatus;
    m_vulStatusHasBeenSet = true;
}

bool Vul::VulStatusHasBeenSet() const
{
    return m_vulStatusHasBeenSet;
}

