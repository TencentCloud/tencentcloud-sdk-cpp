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

#include <tencentcloud/ump/v20200918/model/CreateCameraAlertsMoveAlert.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

CreateCameraAlertsMoveAlert::CreateCameraAlertsMoveAlert() :
    m_moveHasBeenSet(false),
    m_moveConfidenceHasBeenSet(false)
{
}

CoreInternalOutcome CreateCameraAlertsMoveAlert::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Move") && !value["Move"].IsNull())
    {
        if (!value["Move"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCameraAlertsMoveAlert.Move` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_move = value["Move"].GetBool();
        m_moveHasBeenSet = true;
    }

    if (value.HasMember("MoveConfidence") && !value["MoveConfidence"].IsNull())
    {
        if (!value["MoveConfidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCameraAlertsMoveAlert.MoveConfidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_moveConfidence = value["MoveConfidence"].GetDouble();
        m_moveConfidenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateCameraAlertsMoveAlert::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_moveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Move";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_move, allocator);
    }

    if (m_moveConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MoveConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_moveConfidence, allocator);
    }

}


bool CreateCameraAlertsMoveAlert::GetMove() const
{
    return m_move;
}

void CreateCameraAlertsMoveAlert::SetMove(const bool& _move)
{
    m_move = _move;
    m_moveHasBeenSet = true;
}

bool CreateCameraAlertsMoveAlert::MoveHasBeenSet() const
{
    return m_moveHasBeenSet;
}

double CreateCameraAlertsMoveAlert::GetMoveConfidence() const
{
    return m_moveConfidence;
}

void CreateCameraAlertsMoveAlert::SetMoveConfidence(const double& _moveConfidence)
{
    m_moveConfidence = _moveConfidence;
    m_moveConfidenceHasBeenSet = true;
}

bool CreateCameraAlertsMoveAlert::MoveConfidenceHasBeenSet() const
{
    return m_moveConfidenceHasBeenSet;
}

