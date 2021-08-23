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

#include <tencentcloud/cat/v20180409/model/IspDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

IspDetail::IspDetail() :
    m_ispNameHasBeenSet(false),
    m_availRatioHasBeenSet(false),
    m_avgTimeHasBeenSet(false)
{
}

CoreInternalOutcome IspDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IspName") && !value["IspName"].IsNull())
    {
        if (!value["IspName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IspDetail.IspName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ispName = string(value["IspName"].GetString());
        m_ispNameHasBeenSet = true;
    }

    if (value.HasMember("AvailRatio") && !value["AvailRatio"].IsNull())
    {
        if (!value["AvailRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `IspDetail.AvailRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_availRatio = value["AvailRatio"].GetDouble();
        m_availRatioHasBeenSet = true;
    }

    if (value.HasMember("AvgTime") && !value["AvgTime"].IsNull())
    {
        if (!value["AvgTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `IspDetail.AvgTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgTime = value["AvgTime"].GetDouble();
        m_avgTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IspDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ispNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IspName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ispName.c_str(), allocator).Move(), allocator);
    }

    if (m_availRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availRatio, allocator);
    }

    if (m_avgTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgTime, allocator);
    }

}


string IspDetail::GetIspName() const
{
    return m_ispName;
}

void IspDetail::SetIspName(const string& _ispName)
{
    m_ispName = _ispName;
    m_ispNameHasBeenSet = true;
}

bool IspDetail::IspNameHasBeenSet() const
{
    return m_ispNameHasBeenSet;
}

double IspDetail::GetAvailRatio() const
{
    return m_availRatio;
}

void IspDetail::SetAvailRatio(const double& _availRatio)
{
    m_availRatio = _availRatio;
    m_availRatioHasBeenSet = true;
}

bool IspDetail::AvailRatioHasBeenSet() const
{
    return m_availRatioHasBeenSet;
}

double IspDetail::GetAvgTime() const
{
    return m_avgTime;
}

void IspDetail::SetAvgTime(const double& _avgTime)
{
    m_avgTime = _avgTime;
    m_avgTimeHasBeenSet = true;
}

bool IspDetail::AvgTimeHasBeenSet() const
{
    return m_avgTimeHasBeenSet;
}

