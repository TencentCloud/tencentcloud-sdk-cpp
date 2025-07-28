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

#include <tencentcloud/mps/v20190612/model/ExecRuleTaskData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ExecRuleTaskData::ExecRuleTaskData() :
    m_rearDriveIndexHasBeenSet(false)
{
}

CoreInternalOutcome ExecRuleTaskData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RearDriveIndex") && !value["RearDriveIndex"].IsNull())
    {
        if (!value["RearDriveIndex"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExecRuleTaskData.RearDriveIndex` is not array type"));

        const rapidjson::Value &tmpValue = value["RearDriveIndex"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rearDriveIndex.push_back((*itr).GetInt64());
        }
        m_rearDriveIndexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExecRuleTaskData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rearDriveIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RearDriveIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rearDriveIndex.begin(); itr != m_rearDriveIndex.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


vector<int64_t> ExecRuleTaskData::GetRearDriveIndex() const
{
    return m_rearDriveIndex;
}

void ExecRuleTaskData::SetRearDriveIndex(const vector<int64_t>& _rearDriveIndex)
{
    m_rearDriveIndex = _rearDriveIndex;
    m_rearDriveIndexHasBeenSet = true;
}

bool ExecRuleTaskData::RearDriveIndexHasBeenSet() const
{
    return m_rearDriveIndexHasBeenSet;
}

