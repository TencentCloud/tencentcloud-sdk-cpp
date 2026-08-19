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

#include <tencentcloud/csip/v20221121/model/ComplianceStandardOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ComplianceStandardOverview::ComplianceStandardOverview() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_passRateHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceStandardOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceStandardOverview.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceStandardOverview.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceStandardOverview.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("PassRate") && !value["PassRate"].IsNull())
    {
        if (!value["PassRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceStandardOverview.PassRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passRate = value["PassRate"].GetUint64();
        m_passRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceStandardOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_passRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passRate, allocator);
    }

}


uint64_t ComplianceStandardOverview::GetID() const
{
    return m_iD;
}

void ComplianceStandardOverview::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ComplianceStandardOverview::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string ComplianceStandardOverview::GetName() const
{
    return m_name;
}

void ComplianceStandardOverview::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ComplianceStandardOverview::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ComplianceStandardOverview::GetTotalCount() const
{
    return m_totalCount;
}

void ComplianceStandardOverview::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ComplianceStandardOverview::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

uint64_t ComplianceStandardOverview::GetPassRate() const
{
    return m_passRate;
}

void ComplianceStandardOverview::SetPassRate(const uint64_t& _passRate)
{
    m_passRate = _passRate;
    m_passRateHasBeenSet = true;
}

bool ComplianceStandardOverview::PassRateHasBeenSet() const
{
    return m_passRateHasBeenSet;
}

