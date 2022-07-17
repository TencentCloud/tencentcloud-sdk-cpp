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

#include <tencentcloud/sqlserver/v20180328/model/CrossRegionStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

CrossRegionStatus::CrossRegionStatus() :
    m_crossRegionHasBeenSet(false),
    m_crossStatusHasBeenSet(false)
{
}

CoreInternalOutcome CrossRegionStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CrossRegion") && !value["CrossRegion"].IsNull())
    {
        if (!value["CrossRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossRegionStatus.CrossRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crossRegion = string(value["CrossRegion"].GetString());
        m_crossRegionHasBeenSet = true;
    }

    if (value.HasMember("CrossStatus") && !value["CrossStatus"].IsNull())
    {
        if (!value["CrossStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossRegionStatus.CrossStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_crossStatus = value["CrossStatus"].GetInt64();
        m_crossStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CrossRegionStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_crossRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crossRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_crossStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossStatus, allocator);
    }

}


string CrossRegionStatus::GetCrossRegion() const
{
    return m_crossRegion;
}

void CrossRegionStatus::SetCrossRegion(const string& _crossRegion)
{
    m_crossRegion = _crossRegion;
    m_crossRegionHasBeenSet = true;
}

bool CrossRegionStatus::CrossRegionHasBeenSet() const
{
    return m_crossRegionHasBeenSet;
}

int64_t CrossRegionStatus::GetCrossStatus() const
{
    return m_crossStatus;
}

void CrossRegionStatus::SetCrossStatus(const int64_t& _crossStatus)
{
    m_crossStatus = _crossStatus;
    m_crossStatusHasBeenSet = true;
}

bool CrossRegionStatus::CrossStatusHasBeenSet() const
{
    return m_crossStatusHasBeenSet;
}

