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

#include <tencentcloud/cfw/v20190904/model/ScanInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ScanInfo::ScanInfo() :
    m_scanPercentHasBeenSet(false),
    m_scanResultInfoHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_scanTimeHasBeenSet(false)
{
}

CoreInternalOutcome ScanInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScanPercent") && !value["ScanPercent"].IsNull())
    {
        if (!value["ScanPercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScanInfo.ScanPercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_scanPercent = value["ScanPercent"].GetDouble();
        m_scanPercentHasBeenSet = true;
    }

    if (value.HasMember("ScanResultInfo") && !value["ScanResultInfo"].IsNull())
    {
        if (!value["ScanResultInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScanInfo.ScanResultInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scanResultInfo.Deserialize(value["ScanResultInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scanResultInfoHasBeenSet = true;
    }

    if (value.HasMember("ScanStatus") && !value["ScanStatus"].IsNull())
    {
        if (!value["ScanStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanInfo.ScanStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanStatus = value["ScanStatus"].GetInt64();
        m_scanStatusHasBeenSet = true;
    }

    if (value.HasMember("ScanTime") && !value["ScanTime"].IsNull())
    {
        if (!value["ScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanInfo.ScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanTime = string(value["ScanTime"].GetString());
        m_scanTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scanPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanPercent, allocator);
    }

    if (m_scanResultInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanResultInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scanResultInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanStatus, allocator);
    }

    if (m_scanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanTime.c_str(), allocator).Move(), allocator);
    }

}


double ScanInfo::GetScanPercent() const
{
    return m_scanPercent;
}

void ScanInfo::SetScanPercent(const double& _scanPercent)
{
    m_scanPercent = _scanPercent;
    m_scanPercentHasBeenSet = true;
}

bool ScanInfo::ScanPercentHasBeenSet() const
{
    return m_scanPercentHasBeenSet;
}

ScanResultInfo ScanInfo::GetScanResultInfo() const
{
    return m_scanResultInfo;
}

void ScanInfo::SetScanResultInfo(const ScanResultInfo& _scanResultInfo)
{
    m_scanResultInfo = _scanResultInfo;
    m_scanResultInfoHasBeenSet = true;
}

bool ScanInfo::ScanResultInfoHasBeenSet() const
{
    return m_scanResultInfoHasBeenSet;
}

int64_t ScanInfo::GetScanStatus() const
{
    return m_scanStatus;
}

void ScanInfo::SetScanStatus(const int64_t& _scanStatus)
{
    m_scanStatus = _scanStatus;
    m_scanStatusHasBeenSet = true;
}

bool ScanInfo::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

string ScanInfo::GetScanTime() const
{
    return m_scanTime;
}

void ScanInfo::SetScanTime(const string& _scanTime)
{
    m_scanTime = _scanTime;
    m_scanTimeHasBeenSet = true;
}

bool ScanInfo::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}

