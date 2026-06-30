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

#include <tencentcloud/dts/v20211206/model/DifferenceDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DifferenceDetails::DifferenceDetails() :
    m_resultHasBeenSet(false),
    m_srcGtidSetsHasBeenSet(false),
    m_dstGtidSetsHasBeenSet(false),
    m_diffSrcHasBeenSet(false),
    m_diffSrcTablesHasBeenSet(false),
    m_diffDstHasBeenSet(false),
    m_compareTimestampHasBeenSet(false),
    m_diffSrcTablesNeedSyncHasBeenSet(false),
    m_diffSrcIsNeedSyncHasBeenSet(false)
{
}

CoreInternalOutcome DifferenceDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceDetails.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("SrcGtidSets") && !value["SrcGtidSets"].IsNull())
    {
        if (!value["SrcGtidSets"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceDetails.SrcGtidSets` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcGtidSets = string(value["SrcGtidSets"].GetString());
        m_srcGtidSetsHasBeenSet = true;
    }

    if (value.HasMember("DstGtidSets") && !value["DstGtidSets"].IsNull())
    {
        if (!value["DstGtidSets"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceDetails.DstGtidSets` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstGtidSets = string(value["DstGtidSets"].GetString());
        m_dstGtidSetsHasBeenSet = true;
    }

    if (value.HasMember("DiffSrc") && !value["DiffSrc"].IsNull())
    {
        if (!value["DiffSrc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceDetails.DiffSrc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diffSrc = string(value["DiffSrc"].GetString());
        m_diffSrcHasBeenSet = true;
    }

    if (value.HasMember("DiffSrcTables") && !value["DiffSrcTables"].IsNull())
    {
        if (!value["DiffSrcTables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DifferenceDetails.DiffSrcTables` is not array type"));

        const rapidjson::Value &tmpValue = value["DiffSrcTables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_diffSrcTables.push_back((*itr).GetString());
        }
        m_diffSrcTablesHasBeenSet = true;
    }

    if (value.HasMember("DiffDst") && !value["DiffDst"].IsNull())
    {
        if (!value["DiffDst"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceDetails.DiffDst` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diffDst = string(value["DiffDst"].GetString());
        m_diffDstHasBeenSet = true;
    }

    if (value.HasMember("CompareTimestamp") && !value["CompareTimestamp"].IsNull())
    {
        if (!value["CompareTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceDetails.CompareTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compareTimestamp = string(value["CompareTimestamp"].GetString());
        m_compareTimestampHasBeenSet = true;
    }

    if (value.HasMember("DiffSrcTablesNeedSync") && !value["DiffSrcTablesNeedSync"].IsNull())
    {
        if (!value["DiffSrcTablesNeedSync"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DifferenceDetails.DiffSrcTablesNeedSync` is not array type"));

        const rapidjson::Value &tmpValue = value["DiffSrcTablesNeedSync"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_diffSrcTablesNeedSync.push_back((*itr).GetString());
        }
        m_diffSrcTablesNeedSyncHasBeenSet = true;
    }

    if (value.HasMember("DiffSrcIsNeedSync") && !value["DiffSrcIsNeedSync"].IsNull())
    {
        if (!value["DiffSrcIsNeedSync"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceDetails.DiffSrcIsNeedSync` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_diffSrcIsNeedSync = value["DiffSrcIsNeedSync"].GetBool();
        m_diffSrcIsNeedSyncHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DifferenceDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_srcGtidSetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcGtidSets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcGtidSets.c_str(), allocator).Move(), allocator);
    }

    if (m_dstGtidSetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstGtidSets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstGtidSets.c_str(), allocator).Move(), allocator);
    }

    if (m_diffSrcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffSrc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diffSrc.c_str(), allocator).Move(), allocator);
    }

    if (m_diffSrcTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffSrcTables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_diffSrcTables.begin(); itr != m_diffSrcTables.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_diffDstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffDst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diffDst.c_str(), allocator).Move(), allocator);
    }

    if (m_compareTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compareTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_diffSrcTablesNeedSyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffSrcTablesNeedSync";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_diffSrcTablesNeedSync.begin(); itr != m_diffSrcTablesNeedSync.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_diffSrcIsNeedSyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffSrcIsNeedSync";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diffSrcIsNeedSync, allocator);
    }

}


string DifferenceDetails::GetResult() const
{
    return m_result;
}

void DifferenceDetails::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool DifferenceDetails::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string DifferenceDetails::GetSrcGtidSets() const
{
    return m_srcGtidSets;
}

void DifferenceDetails::SetSrcGtidSets(const string& _srcGtidSets)
{
    m_srcGtidSets = _srcGtidSets;
    m_srcGtidSetsHasBeenSet = true;
}

bool DifferenceDetails::SrcGtidSetsHasBeenSet() const
{
    return m_srcGtidSetsHasBeenSet;
}

string DifferenceDetails::GetDstGtidSets() const
{
    return m_dstGtidSets;
}

void DifferenceDetails::SetDstGtidSets(const string& _dstGtidSets)
{
    m_dstGtidSets = _dstGtidSets;
    m_dstGtidSetsHasBeenSet = true;
}

bool DifferenceDetails::DstGtidSetsHasBeenSet() const
{
    return m_dstGtidSetsHasBeenSet;
}

string DifferenceDetails::GetDiffSrc() const
{
    return m_diffSrc;
}

void DifferenceDetails::SetDiffSrc(const string& _diffSrc)
{
    m_diffSrc = _diffSrc;
    m_diffSrcHasBeenSet = true;
}

bool DifferenceDetails::DiffSrcHasBeenSet() const
{
    return m_diffSrcHasBeenSet;
}

vector<string> DifferenceDetails::GetDiffSrcTables() const
{
    return m_diffSrcTables;
}

void DifferenceDetails::SetDiffSrcTables(const vector<string>& _diffSrcTables)
{
    m_diffSrcTables = _diffSrcTables;
    m_diffSrcTablesHasBeenSet = true;
}

bool DifferenceDetails::DiffSrcTablesHasBeenSet() const
{
    return m_diffSrcTablesHasBeenSet;
}

string DifferenceDetails::GetDiffDst() const
{
    return m_diffDst;
}

void DifferenceDetails::SetDiffDst(const string& _diffDst)
{
    m_diffDst = _diffDst;
    m_diffDstHasBeenSet = true;
}

bool DifferenceDetails::DiffDstHasBeenSet() const
{
    return m_diffDstHasBeenSet;
}

string DifferenceDetails::GetCompareTimestamp() const
{
    return m_compareTimestamp;
}

void DifferenceDetails::SetCompareTimestamp(const string& _compareTimestamp)
{
    m_compareTimestamp = _compareTimestamp;
    m_compareTimestampHasBeenSet = true;
}

bool DifferenceDetails::CompareTimestampHasBeenSet() const
{
    return m_compareTimestampHasBeenSet;
}

vector<string> DifferenceDetails::GetDiffSrcTablesNeedSync() const
{
    return m_diffSrcTablesNeedSync;
}

void DifferenceDetails::SetDiffSrcTablesNeedSync(const vector<string>& _diffSrcTablesNeedSync)
{
    m_diffSrcTablesNeedSync = _diffSrcTablesNeedSync;
    m_diffSrcTablesNeedSyncHasBeenSet = true;
}

bool DifferenceDetails::DiffSrcTablesNeedSyncHasBeenSet() const
{
    return m_diffSrcTablesNeedSyncHasBeenSet;
}

bool DifferenceDetails::GetDiffSrcIsNeedSync() const
{
    return m_diffSrcIsNeedSync;
}

void DifferenceDetails::SetDiffSrcIsNeedSync(const bool& _diffSrcIsNeedSync)
{
    m_diffSrcIsNeedSync = _diffSrcIsNeedSync;
    m_diffSrcIsNeedSyncHasBeenSet = true;
}

bool DifferenceDetails::DiffSrcIsNeedSyncHasBeenSet() const
{
    return m_diffSrcIsNeedSyncHasBeenSet;
}

