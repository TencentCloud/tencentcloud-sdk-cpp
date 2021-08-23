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

#include <tencentcloud/tci/v20190318/model/StudentBodyMovementResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

StudentBodyMovementResult::StudentBodyMovementResult() :
    m_confidenceHasBeenSet(false),
    m_handupConfidenceHasBeenSet(false),
    m_handupStatusHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_leftHasBeenSet(false),
    m_movementsHasBeenSet(false),
    m_standConfidenceHasBeenSet(false),
    m_standStatusHasBeenSet(false),
    m_topHasBeenSet(false),
    m_widthHasBeenSet(false)
{
}

CoreInternalOutcome StudentBodyMovementResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `StudentBodyMovementResult.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("HandupConfidence") && !value["HandupConfidence"].IsNull())
    {
        if (!value["HandupConfidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `StudentBodyMovementResult.HandupConfidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_handupConfidence = value["HandupConfidence"].GetDouble();
        m_handupConfidenceHasBeenSet = true;
    }

    if (value.HasMember("HandupStatus") && !value["HandupStatus"].IsNull())
    {
        if (!value["HandupStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StudentBodyMovementResult.HandupStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handupStatus = string(value["HandupStatus"].GetString());
        m_handupStatusHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StudentBodyMovementResult.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Left") && !value["Left"].IsNull())
    {
        if (!value["Left"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StudentBodyMovementResult.Left` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_left = value["Left"].GetInt64();
        m_leftHasBeenSet = true;
    }

    if (value.HasMember("Movements") && !value["Movements"].IsNull())
    {
        if (!value["Movements"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StudentBodyMovementResult.Movements` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_movements = string(value["Movements"].GetString());
        m_movementsHasBeenSet = true;
    }

    if (value.HasMember("StandConfidence") && !value["StandConfidence"].IsNull())
    {
        if (!value["StandConfidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `StudentBodyMovementResult.StandConfidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_standConfidence = value["StandConfidence"].GetDouble();
        m_standConfidenceHasBeenSet = true;
    }

    if (value.HasMember("StandStatus") && !value["StandStatus"].IsNull())
    {
        if (!value["StandStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StudentBodyMovementResult.StandStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standStatus = string(value["StandStatus"].GetString());
        m_standStatusHasBeenSet = true;
    }

    if (value.HasMember("Top") && !value["Top"].IsNull())
    {
        if (!value["Top"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StudentBodyMovementResult.Top` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_top = value["Top"].GetInt64();
        m_topHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StudentBodyMovementResult.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StudentBodyMovementResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_handupConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandupConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handupConfidence, allocator);
    }

    if (m_handupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_handupStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_leftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Left";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_left, allocator);
    }

    if (m_movementsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Movements";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_movements.c_str(), allocator).Move(), allocator);
    }

    if (m_standConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_standConfidence, allocator);
    }

    if (m_standStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_topHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Top";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_top, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

}


double StudentBodyMovementResult::GetConfidence() const
{
    return m_confidence;
}

void StudentBodyMovementResult::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool StudentBodyMovementResult::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

double StudentBodyMovementResult::GetHandupConfidence() const
{
    return m_handupConfidence;
}

void StudentBodyMovementResult::SetHandupConfidence(const double& _handupConfidence)
{
    m_handupConfidence = _handupConfidence;
    m_handupConfidenceHasBeenSet = true;
}

bool StudentBodyMovementResult::HandupConfidenceHasBeenSet() const
{
    return m_handupConfidenceHasBeenSet;
}

string StudentBodyMovementResult::GetHandupStatus() const
{
    return m_handupStatus;
}

void StudentBodyMovementResult::SetHandupStatus(const string& _handupStatus)
{
    m_handupStatus = _handupStatus;
    m_handupStatusHasBeenSet = true;
}

bool StudentBodyMovementResult::HandupStatusHasBeenSet() const
{
    return m_handupStatusHasBeenSet;
}

int64_t StudentBodyMovementResult::GetHeight() const
{
    return m_height;
}

void StudentBodyMovementResult::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool StudentBodyMovementResult::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t StudentBodyMovementResult::GetLeft() const
{
    return m_left;
}

void StudentBodyMovementResult::SetLeft(const int64_t& _left)
{
    m_left = _left;
    m_leftHasBeenSet = true;
}

bool StudentBodyMovementResult::LeftHasBeenSet() const
{
    return m_leftHasBeenSet;
}

string StudentBodyMovementResult::GetMovements() const
{
    return m_movements;
}

void StudentBodyMovementResult::SetMovements(const string& _movements)
{
    m_movements = _movements;
    m_movementsHasBeenSet = true;
}

bool StudentBodyMovementResult::MovementsHasBeenSet() const
{
    return m_movementsHasBeenSet;
}

double StudentBodyMovementResult::GetStandConfidence() const
{
    return m_standConfidence;
}

void StudentBodyMovementResult::SetStandConfidence(const double& _standConfidence)
{
    m_standConfidence = _standConfidence;
    m_standConfidenceHasBeenSet = true;
}

bool StudentBodyMovementResult::StandConfidenceHasBeenSet() const
{
    return m_standConfidenceHasBeenSet;
}

string StudentBodyMovementResult::GetStandStatus() const
{
    return m_standStatus;
}

void StudentBodyMovementResult::SetStandStatus(const string& _standStatus)
{
    m_standStatus = _standStatus;
    m_standStatusHasBeenSet = true;
}

bool StudentBodyMovementResult::StandStatusHasBeenSet() const
{
    return m_standStatusHasBeenSet;
}

int64_t StudentBodyMovementResult::GetTop() const
{
    return m_top;
}

void StudentBodyMovementResult::SetTop(const int64_t& _top)
{
    m_top = _top;
    m_topHasBeenSet = true;
}

bool StudentBodyMovementResult::TopHasBeenSet() const
{
    return m_topHasBeenSet;
}

int64_t StudentBodyMovementResult::GetWidth() const
{
    return m_width;
}

void StudentBodyMovementResult::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool StudentBodyMovementResult::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

