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

#include <tencentcloud/monitor/v20180724/model/CoverStaffInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

CoverStaffInfo::CoverStaffInfo() :
    m_coverStaffIDsHasBeenSet(false),
    m_coverStartTimeHasBeenSet(false),
    m_coverEndTimeHasBeenSet(false)
{
}

CoreInternalOutcome CoverStaffInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CoverStaffIDs") && !value["CoverStaffIDs"].IsNull())
    {
        if (!value["CoverStaffIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CoverStaffInfo.CoverStaffIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["CoverStaffIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_coverStaffIDs.push_back((*itr).GetString());
        }
        m_coverStaffIDsHasBeenSet = true;
    }

    if (value.HasMember("CoverStartTime") && !value["CoverStartTime"].IsNull())
    {
        if (!value["CoverStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CoverStaffInfo.CoverStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_coverStartTime = value["CoverStartTime"].GetInt64();
        m_coverStartTimeHasBeenSet = true;
    }

    if (value.HasMember("CoverEndTime") && !value["CoverEndTime"].IsNull())
    {
        if (!value["CoverEndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CoverStaffInfo.CoverEndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_coverEndTime = value["CoverEndTime"].GetInt64();
        m_coverEndTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CoverStaffInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_coverStaffIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverStaffIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_coverStaffIDs.begin(); itr != m_coverStaffIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_coverStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coverStartTime, allocator);
    }

    if (m_coverEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coverEndTime, allocator);
    }

}


vector<string> CoverStaffInfo::GetCoverStaffIDs() const
{
    return m_coverStaffIDs;
}

void CoverStaffInfo::SetCoverStaffIDs(const vector<string>& _coverStaffIDs)
{
    m_coverStaffIDs = _coverStaffIDs;
    m_coverStaffIDsHasBeenSet = true;
}

bool CoverStaffInfo::CoverStaffIDsHasBeenSet() const
{
    return m_coverStaffIDsHasBeenSet;
}

int64_t CoverStaffInfo::GetCoverStartTime() const
{
    return m_coverStartTime;
}

void CoverStaffInfo::SetCoverStartTime(const int64_t& _coverStartTime)
{
    m_coverStartTime = _coverStartTime;
    m_coverStartTimeHasBeenSet = true;
}

bool CoverStaffInfo::CoverStartTimeHasBeenSet() const
{
    return m_coverStartTimeHasBeenSet;
}

int64_t CoverStaffInfo::GetCoverEndTime() const
{
    return m_coverEndTime;
}

void CoverStaffInfo::SetCoverEndTime(const int64_t& _coverEndTime)
{
    m_coverEndTime = _coverEndTime;
    m_coverEndTimeHasBeenSet = true;
}

bool CoverStaffInfo::CoverEndTimeHasBeenSet() const
{
    return m_coverEndTimeHasBeenSet;
}

