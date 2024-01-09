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

#include <tencentcloud/dts/v20211206/model/PipelineInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

PipelineInfo::PipelineInfo() :
    m_aggOpHasBeenSet(false),
    m_aggCmdHasBeenSet(false)
{
}

CoreInternalOutcome PipelineInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AggOp") && !value["AggOp"].IsNull())
    {
        if (!value["AggOp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PipelineInfo.AggOp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aggOp = string(value["AggOp"].GetString());
        m_aggOpHasBeenSet = true;
    }

    if (value.HasMember("AggCmd") && !value["AggCmd"].IsNull())
    {
        if (!value["AggCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PipelineInfo.AggCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aggCmd = string(value["AggCmd"].GetString());
        m_aggCmdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PipelineInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aggOpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggOp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aggOp.c_str(), allocator).Move(), allocator);
    }

    if (m_aggCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aggCmd.c_str(), allocator).Move(), allocator);
    }

}


string PipelineInfo::GetAggOp() const
{
    return m_aggOp;
}

void PipelineInfo::SetAggOp(const string& _aggOp)
{
    m_aggOp = _aggOp;
    m_aggOpHasBeenSet = true;
}

bool PipelineInfo::AggOpHasBeenSet() const
{
    return m_aggOpHasBeenSet;
}

string PipelineInfo::GetAggCmd() const
{
    return m_aggCmd;
}

void PipelineInfo::SetAggCmd(const string& _aggCmd)
{
    m_aggCmd = _aggCmd;
    m_aggCmdHasBeenSet = true;
}

bool PipelineInfo::AggCmdHasBeenSet() const
{
    return m_aggCmdHasBeenSet;
}

