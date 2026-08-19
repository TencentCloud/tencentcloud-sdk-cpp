/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/CycleScanConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CycleScanConf::CycleScanConf() :
    m_enableHasBeenSet(false),
    m_intervalTypeHasBeenSet(false),
    m_intervalValueListHasBeenSet(false),
    m_scanStartHasBeenSet(false),
    m_scanEndHasBeenSet(false)
{
}

CoreInternalOutcome CycleScanConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CycleScanConf.Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("IntervalType") && !value["IntervalType"].IsNull())
    {
        if (!value["IntervalType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CycleScanConf.IntervalType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intervalType = string(value["IntervalType"].GetString());
        m_intervalTypeHasBeenSet = true;
    }

    if (value.HasMember("IntervalValueList") && !value["IntervalValueList"].IsNull())
    {
        if (!value["IntervalValueList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CycleScanConf.IntervalValueList` is not array type"));

        const rapidjson::Value &tmpValue = value["IntervalValueList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_intervalValueList.push_back((*itr).GetString());
        }
        m_intervalValueListHasBeenSet = true;
    }

    if (value.HasMember("ScanStart") && !value["ScanStart"].IsNull())
    {
        if (!value["ScanStart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CycleScanConf.ScanStart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanStart = string(value["ScanStart"].GetString());
        m_scanStartHasBeenSet = true;
    }

    if (value.HasMember("ScanEnd") && !value["ScanEnd"].IsNull())
    {
        if (!value["ScanEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CycleScanConf.ScanEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanEnd = string(value["ScanEnd"].GetString());
        m_scanEndHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CycleScanConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_intervalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intervalType.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalValueListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalValueList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_intervalValueList.begin(); itr != m_intervalValueList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scanStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanStart.c_str(), allocator).Move(), allocator);
    }

    if (m_scanEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanEnd.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CycleScanConf::GetEnable() const
{
    return m_enable;
}

void CycleScanConf::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool CycleScanConf::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string CycleScanConf::GetIntervalType() const
{
    return m_intervalType;
}

void CycleScanConf::SetIntervalType(const string& _intervalType)
{
    m_intervalType = _intervalType;
    m_intervalTypeHasBeenSet = true;
}

bool CycleScanConf::IntervalTypeHasBeenSet() const
{
    return m_intervalTypeHasBeenSet;
}

vector<string> CycleScanConf::GetIntervalValueList() const
{
    return m_intervalValueList;
}

void CycleScanConf::SetIntervalValueList(const vector<string>& _intervalValueList)
{
    m_intervalValueList = _intervalValueList;
    m_intervalValueListHasBeenSet = true;
}

bool CycleScanConf::IntervalValueListHasBeenSet() const
{
    return m_intervalValueListHasBeenSet;
}

string CycleScanConf::GetScanStart() const
{
    return m_scanStart;
}

void CycleScanConf::SetScanStart(const string& _scanStart)
{
    m_scanStart = _scanStart;
    m_scanStartHasBeenSet = true;
}

bool CycleScanConf::ScanStartHasBeenSet() const
{
    return m_scanStartHasBeenSet;
}

string CycleScanConf::GetScanEnd() const
{
    return m_scanEnd;
}

void CycleScanConf::SetScanEnd(const string& _scanEnd)
{
    m_scanEnd = _scanEnd;
    m_scanEndHasBeenSet = true;
}

bool CycleScanConf::ScanEndHasBeenSet() const
{
    return m_scanEndHasBeenSet;
}

