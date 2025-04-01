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

#include <tencentcloud/dbbrain/v20210527/model/SlowLogAgg.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

SlowLogAgg::SlowLogAgg() :
    m_cmdHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_execTimesHasBeenSet(false),
    m_queryTimeHasBeenSet(false),
    m_queryTimeAvgHasBeenSet(false),
    m_queryTimeMaxHasBeenSet(false),
    m_queryTimeMinHasBeenSet(false),
    m_queryTimeRatioHasBeenSet(false)
{
}

CoreInternalOutcome SlowLogAgg::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cmd") && !value["Cmd"].IsNull())
    {
        if (!value["Cmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogAgg.Cmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmd = string(value["Cmd"].GetString());
        m_cmdHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogAgg.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("ExecTimes") && !value["ExecTimes"].IsNull())
    {
        if (!value["ExecTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogAgg.ExecTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_execTimes = value["ExecTimes"].GetInt64();
        m_execTimesHasBeenSet = true;
    }

    if (value.HasMember("QueryTime") && !value["QueryTime"].IsNull())
    {
        if (!value["QueryTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogAgg.QueryTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryTime = value["QueryTime"].GetDouble();
        m_queryTimeHasBeenSet = true;
    }

    if (value.HasMember("QueryTimeAvg") && !value["QueryTimeAvg"].IsNull())
    {
        if (!value["QueryTimeAvg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogAgg.QueryTimeAvg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryTimeAvg = value["QueryTimeAvg"].GetDouble();
        m_queryTimeAvgHasBeenSet = true;
    }

    if (value.HasMember("QueryTimeMax") && !value["QueryTimeMax"].IsNull())
    {
        if (!value["QueryTimeMax"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogAgg.QueryTimeMax` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryTimeMax = value["QueryTimeMax"].GetDouble();
        m_queryTimeMaxHasBeenSet = true;
    }

    if (value.HasMember("QueryTimeMin") && !value["QueryTimeMin"].IsNull())
    {
        if (!value["QueryTimeMin"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogAgg.QueryTimeMin` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryTimeMin = value["QueryTimeMin"].GetDouble();
        m_queryTimeMinHasBeenSet = true;
    }

    if (value.HasMember("QueryTimeRatio") && !value["QueryTimeRatio"].IsNull())
    {
        if (!value["QueryTimeRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogAgg.QueryTimeRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryTimeRatio = value["QueryTimeRatio"].GetDouble();
        m_queryTimeRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlowLogAgg::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmd.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_execTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_execTimes, allocator);
    }

    if (m_queryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryTime, allocator);
    }

    if (m_queryTimeAvgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTimeAvg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryTimeAvg, allocator);
    }

    if (m_queryTimeMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTimeMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryTimeMax, allocator);
    }

    if (m_queryTimeMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTimeMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryTimeMin, allocator);
    }

    if (m_queryTimeRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTimeRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryTimeRatio, allocator);
    }

}


string SlowLogAgg::GetCmd() const
{
    return m_cmd;
}

void SlowLogAgg::SetCmd(const string& _cmd)
{
    m_cmd = _cmd;
    m_cmdHasBeenSet = true;
}

bool SlowLogAgg::CmdHasBeenSet() const
{
    return m_cmdHasBeenSet;
}

string SlowLogAgg::GetDetail() const
{
    return m_detail;
}

void SlowLogAgg::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool SlowLogAgg::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

int64_t SlowLogAgg::GetExecTimes() const
{
    return m_execTimes;
}

void SlowLogAgg::SetExecTimes(const int64_t& _execTimes)
{
    m_execTimes = _execTimes;
    m_execTimesHasBeenSet = true;
}

bool SlowLogAgg::ExecTimesHasBeenSet() const
{
    return m_execTimesHasBeenSet;
}

double SlowLogAgg::GetQueryTime() const
{
    return m_queryTime;
}

void SlowLogAgg::SetQueryTime(const double& _queryTime)
{
    m_queryTime = _queryTime;
    m_queryTimeHasBeenSet = true;
}

bool SlowLogAgg::QueryTimeHasBeenSet() const
{
    return m_queryTimeHasBeenSet;
}

double SlowLogAgg::GetQueryTimeAvg() const
{
    return m_queryTimeAvg;
}

void SlowLogAgg::SetQueryTimeAvg(const double& _queryTimeAvg)
{
    m_queryTimeAvg = _queryTimeAvg;
    m_queryTimeAvgHasBeenSet = true;
}

bool SlowLogAgg::QueryTimeAvgHasBeenSet() const
{
    return m_queryTimeAvgHasBeenSet;
}

double SlowLogAgg::GetQueryTimeMax() const
{
    return m_queryTimeMax;
}

void SlowLogAgg::SetQueryTimeMax(const double& _queryTimeMax)
{
    m_queryTimeMax = _queryTimeMax;
    m_queryTimeMaxHasBeenSet = true;
}

bool SlowLogAgg::QueryTimeMaxHasBeenSet() const
{
    return m_queryTimeMaxHasBeenSet;
}

double SlowLogAgg::GetQueryTimeMin() const
{
    return m_queryTimeMin;
}

void SlowLogAgg::SetQueryTimeMin(const double& _queryTimeMin)
{
    m_queryTimeMin = _queryTimeMin;
    m_queryTimeMinHasBeenSet = true;
}

bool SlowLogAgg::QueryTimeMinHasBeenSet() const
{
    return m_queryTimeMinHasBeenSet;
}

double SlowLogAgg::GetQueryTimeRatio() const
{
    return m_queryTimeRatio;
}

void SlowLogAgg::SetQueryTimeRatio(const double& _queryTimeRatio)
{
    m_queryTimeRatio = _queryTimeRatio;
    m_queryTimeRatioHasBeenSet = true;
}

bool SlowLogAgg::QueryTimeRatioHasBeenSet() const
{
    return m_queryTimeRatioHasBeenSet;
}

