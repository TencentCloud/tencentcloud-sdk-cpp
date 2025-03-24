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

#include <tencentcloud/dbbrain/v20210527/model/CmdPerfInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

CmdPerfInfo::CmdPerfInfo() :
    m_commandHasBeenSet(false),
    m_seriesDataHasBeenSet(false)
{
}

CoreInternalOutcome CmdPerfInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmdPerfInfo.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("SeriesData") && !value["SeriesData"].IsNull())
    {
        if (!value["SeriesData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CmdPerfInfo.SeriesData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_seriesData.Deserialize(value["SeriesData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_seriesDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CmdPerfInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_seriesDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriesData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_seriesData.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CmdPerfInfo::GetCommand() const
{
    return m_command;
}

void CmdPerfInfo::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool CmdPerfInfo::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

MonitorMetricSeriesData CmdPerfInfo::GetSeriesData() const
{
    return m_seriesData;
}

void CmdPerfInfo::SetSeriesData(const MonitorMetricSeriesData& _seriesData)
{
    m_seriesData = _seriesData;
    m_seriesDataHasBeenSet = true;
}

bool CmdPerfInfo::SeriesDataHasBeenSet() const
{
    return m_seriesDataHasBeenSet;
}

