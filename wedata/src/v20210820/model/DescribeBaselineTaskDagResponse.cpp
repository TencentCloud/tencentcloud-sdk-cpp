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

#include <tencentcloud/wedata/v20210820/model/DescribeBaselineTaskDagResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeBaselineTaskDagResponse::DescribeBaselineTaskDagResponse() :
    m_baselineHasBeenSet(false),
    m_baselineTaskDagHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBaselineTaskDagResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Baseline") && !value["Baseline"].IsNull())
    {
        if (!value["Baseline"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBaselineTaskDagResponse.Baseline` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baseline.Deserialize(value["Baseline"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baselineHasBeenSet = true;
    }

    if (value.HasMember("BaselineTaskDag") && !value["BaselineTaskDag"].IsNull())
    {
        if (!value["BaselineTaskDag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeBaselineTaskDagResponse.BaselineTaskDag` is not array type"));

        const rapidjson::Value &tmpValue = value["BaselineTaskDag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaselineTaskDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_baselineTaskDag.push_back(item);
        }
        m_baselineTaskDagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeBaselineTaskDagResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_baselineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Baseline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baseline.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_baselineTaskDagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineTaskDag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_baselineTaskDag.begin(); itr != m_baselineTaskDag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


BaselineDto DescribeBaselineTaskDagResponse::GetBaseline() const
{
    return m_baseline;
}

void DescribeBaselineTaskDagResponse::SetBaseline(const BaselineDto& _baseline)
{
    m_baseline = _baseline;
    m_baselineHasBeenSet = true;
}

bool DescribeBaselineTaskDagResponse::BaselineHasBeenSet() const
{
    return m_baselineHasBeenSet;
}

vector<BaselineTaskDto> DescribeBaselineTaskDagResponse::GetBaselineTaskDag() const
{
    return m_baselineTaskDag;
}

void DescribeBaselineTaskDagResponse::SetBaselineTaskDag(const vector<BaselineTaskDto>& _baselineTaskDag)
{
    m_baselineTaskDag = _baselineTaskDag;
    m_baselineTaskDagHasBeenSet = true;
}

bool DescribeBaselineTaskDagResponse::BaselineTaskDagHasBeenSet() const
{
    return m_baselineTaskDagHasBeenSet;
}

