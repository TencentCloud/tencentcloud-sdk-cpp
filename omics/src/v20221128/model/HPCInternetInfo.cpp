/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/omics/v20221128/model/HPCInternetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

HPCInternetInfo::HPCInternetInfo() :
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_internetChargeTypeHasBeenSet(false)
{
}

CoreInternalOutcome HPCInternetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HPCInternetInfo.InternetMaxBandwidthOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetInt64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("InternetChargeType") && !value["InternetChargeType"].IsNull())
    {
        if (!value["InternetChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCInternetInfo.InternetChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetChargeType = string(value["InternetChargeType"].GetString());
        m_internetChargeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HPCInternetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_internetChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetChargeType.c_str(), allocator).Move(), allocator);
    }

}


int64_t HPCInternetInfo::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void HPCInternetInfo::SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool HPCInternetInfo::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

string HPCInternetInfo::GetInternetChargeType() const
{
    return m_internetChargeType;
}

void HPCInternetInfo::SetInternetChargeType(const string& _internetChargeType)
{
    m_internetChargeType = _internetChargeType;
    m_internetChargeTypeHasBeenSet = true;
}

bool HPCInternetInfo::InternetChargeTypeHasBeenSet() const
{
    return m_internetChargeTypeHasBeenSet;
}

