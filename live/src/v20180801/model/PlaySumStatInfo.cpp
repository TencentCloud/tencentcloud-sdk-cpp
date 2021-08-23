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

#include <tencentcloud/live/v20180801/model/PlaySumStatInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

PlaySumStatInfo::PlaySumStatInfo() :
    m_nameHasBeenSet(false),
    m_avgFluxPerSecondHasBeenSet(false),
    m_totalFluxHasBeenSet(false),
    m_totalRequestHasBeenSet(false)
{
}

CoreInternalOutcome PlaySumStatInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlaySumStatInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AvgFluxPerSecond") && !value["AvgFluxPerSecond"].IsNull())
    {
        if (!value["AvgFluxPerSecond"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PlaySumStatInfo.AvgFluxPerSecond` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgFluxPerSecond = value["AvgFluxPerSecond"].GetDouble();
        m_avgFluxPerSecondHasBeenSet = true;
    }

    if (value.HasMember("TotalFlux") && !value["TotalFlux"].IsNull())
    {
        if (!value["TotalFlux"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PlaySumStatInfo.TotalFlux` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalFlux = value["TotalFlux"].GetDouble();
        m_totalFluxHasBeenSet = true;
    }

    if (value.HasMember("TotalRequest") && !value["TotalRequest"].IsNull())
    {
        if (!value["TotalRequest"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlaySumStatInfo.TotalRequest` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRequest = value["TotalRequest"].GetUint64();
        m_totalRequestHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlaySumStatInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_avgFluxPerSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgFluxPerSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgFluxPerSecond, allocator);
    }

    if (m_totalFluxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalFlux";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalFlux, allocator);
    }

    if (m_totalRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRequest, allocator);
    }

}


string PlaySumStatInfo::GetName() const
{
    return m_name;
}

void PlaySumStatInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PlaySumStatInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

double PlaySumStatInfo::GetAvgFluxPerSecond() const
{
    return m_avgFluxPerSecond;
}

void PlaySumStatInfo::SetAvgFluxPerSecond(const double& _avgFluxPerSecond)
{
    m_avgFluxPerSecond = _avgFluxPerSecond;
    m_avgFluxPerSecondHasBeenSet = true;
}

bool PlaySumStatInfo::AvgFluxPerSecondHasBeenSet() const
{
    return m_avgFluxPerSecondHasBeenSet;
}

double PlaySumStatInfo::GetTotalFlux() const
{
    return m_totalFlux;
}

void PlaySumStatInfo::SetTotalFlux(const double& _totalFlux)
{
    m_totalFlux = _totalFlux;
    m_totalFluxHasBeenSet = true;
}

bool PlaySumStatInfo::TotalFluxHasBeenSet() const
{
    return m_totalFluxHasBeenSet;
}

uint64_t PlaySumStatInfo::GetTotalRequest() const
{
    return m_totalRequest;
}

void PlaySumStatInfo::SetTotalRequest(const uint64_t& _totalRequest)
{
    m_totalRequest = _totalRequest;
    m_totalRequestHasBeenSet = true;
}

bool PlaySumStatInfo::TotalRequestHasBeenSet() const
{
    return m_totalRequestHasBeenSet;
}

