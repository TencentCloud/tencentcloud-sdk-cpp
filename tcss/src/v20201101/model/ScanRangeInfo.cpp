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

#include <tencentcloud/tcss/v20201101/model/ScanRangeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ScanRangeInfo::ScanRangeInfo() :
    m_isAllHasBeenSet(false),
    m_rangeTypeHasBeenSet(false),
    m_iDsHasBeenSet(false)
{
}

CoreInternalOutcome ScanRangeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsAll") && !value["IsAll"].IsNull())
    {
        if (!value["IsAll"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScanRangeInfo.IsAll` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAll = value["IsAll"].GetBool();
        m_isAllHasBeenSet = true;
    }

    if (value.HasMember("RangeType") && !value["RangeType"].IsNull())
    {
        if (!value["RangeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanRangeInfo.RangeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rangeType = string(value["RangeType"].GetString());
        m_rangeTypeHasBeenSet = true;
    }

    if (value.HasMember("IDs") && !value["IDs"].IsNull())
    {
        if (!value["IDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScanRangeInfo.IDs` is not array type"));

        const rapidjson::Value &tmpValue = value["IDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_iDs.push_back((*itr).GetString());
        }
        m_iDsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanRangeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAll, allocator);
    }

    if (m_rangeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rangeType.c_str(), allocator).Move(), allocator);
    }

    if (m_iDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iDs.begin(); itr != m_iDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


bool ScanRangeInfo::GetIsAll() const
{
    return m_isAll;
}

void ScanRangeInfo::SetIsAll(const bool& _isAll)
{
    m_isAll = _isAll;
    m_isAllHasBeenSet = true;
}

bool ScanRangeInfo::IsAllHasBeenSet() const
{
    return m_isAllHasBeenSet;
}

string ScanRangeInfo::GetRangeType() const
{
    return m_rangeType;
}

void ScanRangeInfo::SetRangeType(const string& _rangeType)
{
    m_rangeType = _rangeType;
    m_rangeTypeHasBeenSet = true;
}

bool ScanRangeInfo::RangeTypeHasBeenSet() const
{
    return m_rangeTypeHasBeenSet;
}

vector<string> ScanRangeInfo::GetIDs() const
{
    return m_iDs;
}

void ScanRangeInfo::SetIDs(const vector<string>& _iDs)
{
    m_iDs = _iDs;
    m_iDsHasBeenSet = true;
}

bool ScanRangeInfo::IDsHasBeenSet() const
{
    return m_iDsHasBeenSet;
}

