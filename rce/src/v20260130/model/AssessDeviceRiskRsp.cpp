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

#include <tencentcloud/rce/v20260130/model/AssessDeviceRiskRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

AssessDeviceRiskRsp::AssessDeviceRiskRsp() :
    m_scoreHasBeenSet(false),
    m_deviceHasBeenSet(false)
{
}

CoreInternalOutcome AssessDeviceRiskRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssessDeviceRiskRsp.Score` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_score.Deserialize(value["Score"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Device") && !value["Device"].IsNull())
    {
        if (!value["Device"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssessDeviceRiskRsp.Device` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_device.Deserialize(value["Device"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deviceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssessDeviceRiskRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_score.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Device";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_device.ToJsonObject(value[key.c_str()], allocator);
    }

}


DataScore AssessDeviceRiskRsp::GetScore() const
{
    return m_score;
}

void AssessDeviceRiskRsp::SetScore(const DataScore& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool AssessDeviceRiskRsp::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

Device AssessDeviceRiskRsp::GetDevice() const
{
    return m_device;
}

void AssessDeviceRiskRsp::SetDevice(const Device& _device)
{
    m_device = _device;
    m_deviceHasBeenSet = true;
}

bool AssessDeviceRiskRsp::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}

