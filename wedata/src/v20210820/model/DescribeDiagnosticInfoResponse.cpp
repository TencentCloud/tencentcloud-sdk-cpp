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

#include <tencentcloud/wedata/v20210820/model/DescribeDiagnosticInfoResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeDiagnosticInfoResponse::DescribeDiagnosticInfoResponse() :
    m_baselineTasksHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDiagnosticInfoResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BaselineTasks") && !value["BaselineTasks"].IsNull())
    {
        if (!value["BaselineTasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeDiagnosticInfoResponse.BaselineTasks` is not array type"));

        const rapidjson::Value &tmpValue = value["BaselineTasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaselineTaskDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_baselineTasks.push_back(item);
        }
        m_baselineTasksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDiagnosticInfoResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_baselineTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineTasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_baselineTasks.begin(); itr != m_baselineTasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<BaselineTaskDto> DescribeDiagnosticInfoResponse::GetBaselineTasks() const
{
    return m_baselineTasks;
}

void DescribeDiagnosticInfoResponse::SetBaselineTasks(const vector<BaselineTaskDto>& _baselineTasks)
{
    m_baselineTasks = _baselineTasks;
    m_baselineTasksHasBeenSet = true;
}

bool DescribeDiagnosticInfoResponse::BaselineTasksHasBeenSet() const
{
    return m_baselineTasksHasBeenSet;
}

