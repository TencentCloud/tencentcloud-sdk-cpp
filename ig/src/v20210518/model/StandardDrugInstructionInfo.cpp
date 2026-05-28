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

#include <tencentcloud/ig/v20210518/model/StandardDrugInstructionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ig::V20210518::Model;
using namespace std;

StandardDrugInstructionInfo::StandardDrugInstructionInfo() :
    m_standardDrugNameHasBeenSet(false),
    m_drugInfosHasBeenSet(false)
{
}

CoreInternalOutcome StandardDrugInstructionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StandardDrugName") && !value["StandardDrugName"].IsNull())
    {
        if (!value["StandardDrugName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardDrugInstructionInfo.StandardDrugName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standardDrugName = string(value["StandardDrugName"].GetString());
        m_standardDrugNameHasBeenSet = true;
    }

    if (value.HasMember("DrugInfos") && !value["DrugInfos"].IsNull())
    {
        if (!value["DrugInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StandardDrugInstructionInfo.DrugInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["DrugInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DrugInstructionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_drugInfos.push_back(item);
        }
        m_drugInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StandardDrugInstructionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_standardDrugNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardDrugName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standardDrugName.c_str(), allocator).Move(), allocator);
    }

    if (m_drugInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_drugInfos.begin(); itr != m_drugInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string StandardDrugInstructionInfo::GetStandardDrugName() const
{
    return m_standardDrugName;
}

void StandardDrugInstructionInfo::SetStandardDrugName(const string& _standardDrugName)
{
    m_standardDrugName = _standardDrugName;
    m_standardDrugNameHasBeenSet = true;
}

bool StandardDrugInstructionInfo::StandardDrugNameHasBeenSet() const
{
    return m_standardDrugNameHasBeenSet;
}

vector<DrugInstructionInfo> StandardDrugInstructionInfo::GetDrugInfos() const
{
    return m_drugInfos;
}

void StandardDrugInstructionInfo::SetDrugInfos(const vector<DrugInstructionInfo>& _drugInfos)
{
    m_drugInfos = _drugInfos;
    m_drugInfosHasBeenSet = true;
}

bool StandardDrugInstructionInfo::DrugInfosHasBeenSet() const
{
    return m_drugInfosHasBeenSet;
}

