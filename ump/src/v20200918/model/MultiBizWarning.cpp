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

#include <tencentcloud/ump/v20200918/model/MultiBizWarning.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

MultiBizWarning::MultiBizWarning() :
    m_idHasBeenSet(false),
    m_monitoringAreaHasBeenSet(false),
    m_warningInfosHasBeenSet(false)
{
}

CoreInternalOutcome MultiBizWarning::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MultiBizWarning.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("MonitoringArea") && !value["MonitoringArea"].IsNull())
    {
        if (!value["MonitoringArea"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiBizWarning.MonitoringArea` is not array type"));

        const rapidjson::Value &tmpValue = value["MonitoringArea"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_monitoringArea.push_back(item);
        }
        m_monitoringAreaHasBeenSet = true;
    }

    if (value.HasMember("WarningInfos") && !value["WarningInfos"].IsNull())
    {
        if (!value["WarningInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiBizWarning.WarningInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["WarningInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MultiBizWarningInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_warningInfos.push_back(item);
        }
        m_warningInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MultiBizWarning::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_monitoringAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitoringArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_monitoringArea.begin(); itr != m_monitoringArea.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_warningInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarningInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_warningInfos.begin(); itr != m_warningInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t MultiBizWarning::GetId() const
{
    return m_id;
}

void MultiBizWarning::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool MultiBizWarning::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<Point> MultiBizWarning::GetMonitoringArea() const
{
    return m_monitoringArea;
}

void MultiBizWarning::SetMonitoringArea(const vector<Point>& _monitoringArea)
{
    m_monitoringArea = _monitoringArea;
    m_monitoringAreaHasBeenSet = true;
}

bool MultiBizWarning::MonitoringAreaHasBeenSet() const
{
    return m_monitoringAreaHasBeenSet;
}

vector<MultiBizWarningInfo> MultiBizWarning::GetWarningInfos() const
{
    return m_warningInfos;
}

void MultiBizWarning::SetWarningInfos(const vector<MultiBizWarningInfo>& _warningInfos)
{
    m_warningInfos = _warningInfos;
    m_warningInfosHasBeenSet = true;
}

bool MultiBizWarning::WarningInfosHasBeenSet() const
{
    return m_warningInfosHasBeenSet;
}

