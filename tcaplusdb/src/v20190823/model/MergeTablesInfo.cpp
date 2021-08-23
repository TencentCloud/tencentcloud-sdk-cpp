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

#include <tencentcloud/tcaplusdb/v20190823/model/MergeTablesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

MergeTablesInfo::MergeTablesInfo() :
    m_mergeTablesHasBeenSet(false),
    m_checkIndexHasBeenSet(false)
{
}

CoreInternalOutcome MergeTablesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MergeTables") && !value["MergeTables"].IsNull())
    {
        if (!value["MergeTables"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MergeTablesInfo.MergeTables` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mergeTables.Deserialize(value["MergeTables"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mergeTablesHasBeenSet = true;
    }

    if (value.HasMember("CheckIndex") && !value["CheckIndex"].IsNull())
    {
        if (!value["CheckIndex"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MergeTablesInfo.CheckIndex` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_checkIndex = value["CheckIndex"].GetBool();
        m_checkIndexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MergeTablesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mergeTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MergeTables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mergeTables.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_checkIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkIndex, allocator);
    }

}


CompareTablesInfo MergeTablesInfo::GetMergeTables() const
{
    return m_mergeTables;
}

void MergeTablesInfo::SetMergeTables(const CompareTablesInfo& _mergeTables)
{
    m_mergeTables = _mergeTables;
    m_mergeTablesHasBeenSet = true;
}

bool MergeTablesInfo::MergeTablesHasBeenSet() const
{
    return m_mergeTablesHasBeenSet;
}

bool MergeTablesInfo::GetCheckIndex() const
{
    return m_checkIndex;
}

void MergeTablesInfo::SetCheckIndex(const bool& _checkIndex)
{
    m_checkIndex = _checkIndex;
    m_checkIndexHasBeenSet = true;
}

bool MergeTablesInfo::CheckIndexHasBeenSet() const
{
    return m_checkIndexHasBeenSet;
}

