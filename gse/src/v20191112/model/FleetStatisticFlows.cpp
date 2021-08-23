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

#include <tencentcloud/gse/v20191112/model/FleetStatisticFlows.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

FleetStatisticFlows::FleetStatisticFlows() :
    m_totalUsedFlowMegaBytesHasBeenSet(false),
    m_beginTimeHasBeenSet(false)
{
}

CoreInternalOutcome FleetStatisticFlows::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalUsedFlowMegaBytes") && !value["TotalUsedFlowMegaBytes"].IsNull())
    {
        if (!value["TotalUsedFlowMegaBytes"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FleetStatisticFlows.TotalUsedFlowMegaBytes` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalUsedFlowMegaBytes = value["TotalUsedFlowMegaBytes"].GetDouble();
        m_totalUsedFlowMegaBytesHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetStatisticFlows.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FleetStatisticFlows::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalUsedFlowMegaBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalUsedFlowMegaBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalUsedFlowMegaBytes, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

}


double FleetStatisticFlows::GetTotalUsedFlowMegaBytes() const
{
    return m_totalUsedFlowMegaBytes;
}

void FleetStatisticFlows::SetTotalUsedFlowMegaBytes(const double& _totalUsedFlowMegaBytes)
{
    m_totalUsedFlowMegaBytes = _totalUsedFlowMegaBytes;
    m_totalUsedFlowMegaBytesHasBeenSet = true;
}

bool FleetStatisticFlows::TotalUsedFlowMegaBytesHasBeenSet() const
{
    return m_totalUsedFlowMegaBytesHasBeenSet;
}

string FleetStatisticFlows::GetBeginTime() const
{
    return m_beginTime;
}

void FleetStatisticFlows::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool FleetStatisticFlows::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

