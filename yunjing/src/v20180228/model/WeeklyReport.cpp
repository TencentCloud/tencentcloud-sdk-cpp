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

#include <tencentcloud/yunjing/v20180228/model/WeeklyReport.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

WeeklyReport::WeeklyReport() :
    m_beginDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
}

CoreInternalOutcome WeeklyReport::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BeginDate") && !value["BeginDate"].IsNull())
    {
        if (!value["BeginDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReport.BeginDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginDate = string(value["BeginDate"].GetString());
        m_beginDateHasBeenSet = true;
    }

    if (value.HasMember("EndDate") && !value["EndDate"].IsNull())
    {
        if (!value["EndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReport.EndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endDate = string(value["EndDate"].GetString());
        m_endDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WeeklyReport::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_beginDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

}


string WeeklyReport::GetBeginDate() const
{
    return m_beginDate;
}

void WeeklyReport::SetBeginDate(const string& _beginDate)
{
    m_beginDate = _beginDate;
    m_beginDateHasBeenSet = true;
}

bool WeeklyReport::BeginDateHasBeenSet() const
{
    return m_beginDateHasBeenSet;
}

string WeeklyReport::GetEndDate() const
{
    return m_endDate;
}

void WeeklyReport::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool WeeklyReport::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

