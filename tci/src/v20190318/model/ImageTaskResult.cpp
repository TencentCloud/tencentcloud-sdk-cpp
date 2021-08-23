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

#include <tencentcloud/tci/v20190318/model/ImageTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

ImageTaskResult::ImageTaskResult() :
    m_actionInfoHasBeenSet(false),
    m_faceAttrHasBeenSet(false),
    m_faceExpressionHasBeenSet(false),
    m_faceIdentifyHasBeenSet(false),
    m_faceInfoHasBeenSet(false),
    m_facePoseHasBeenSet(false),
    m_gestureHasBeenSet(false),
    m_handTrackingHasBeenSet(false),
    m_lightHasBeenSet(false),
    m_studentBodyMovementHasBeenSet(false),
    m_teacherBodyMovementHasBeenSet(false),
    m_teacherOutScreenHasBeenSet(false),
    m_timeInfoHasBeenSet(false)
{
}

CoreInternalOutcome ImageTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionInfo") && !value["ActionInfo"].IsNull())
    {
        if (!value["ActionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskResult.ActionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_actionInfo.Deserialize(value["ActionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_actionInfoHasBeenSet = true;
    }

    if (value.HasMember("FaceAttr") && !value["FaceAttr"].IsNull())
    {
        if (!value["FaceAttr"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskResult.FaceAttr` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceAttr.Deserialize(value["FaceAttr"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceAttrHasBeenSet = true;
    }

    if (value.HasMember("FaceExpression") && !value["FaceExpression"].IsNull())
    {
        if (!value["FaceExpression"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskResult.FaceExpression` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceExpression.Deserialize(value["FaceExpression"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceExpressionHasBeenSet = true;
    }

    if (value.HasMember("FaceIdentify") && !value["FaceIdentify"].IsNull())
    {
        if (!value["FaceIdentify"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskResult.FaceIdentify` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceIdentify.Deserialize(value["FaceIdentify"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceIdentifyHasBeenSet = true;
    }

    if (value.HasMember("FaceInfo") && !value["FaceInfo"].IsNull())
    {
        if (!value["FaceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskResult.FaceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceInfo.Deserialize(value["FaceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceInfoHasBeenSet = true;
    }

    if (value.HasMember("FacePose") && !value["FacePose"].IsNull())
    {
        if (!value["FacePose"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskResult.FacePose` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_facePose.Deserialize(value["FacePose"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_facePoseHasBeenSet = true;
    }

    if (value.HasMember("Gesture") && !value["Gesture"].IsNull())
    {
        if (!value["Gesture"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskResult.Gesture` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gesture.Deserialize(value["Gesture"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gestureHasBeenSet = true;
    }

    if (value.HasMember("HandTracking") && !value["HandTracking"].IsNull())
    {
        if (!value["HandTracking"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskResult.HandTracking` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_handTracking.Deserialize(value["HandTracking"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_handTrackingHasBeenSet = true;
    }

    if (value.HasMember("Light") && !value["Light"].IsNull())
    {
        if (!value["Light"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskResult.Light` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_light.Deserialize(value["Light"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lightHasBeenSet = true;
    }

    if (value.HasMember("StudentBodyMovement") && !value["StudentBodyMovement"].IsNull())
    {
        if (!value["StudentBodyMovement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskResult.StudentBodyMovement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_studentBodyMovement.Deserialize(value["StudentBodyMovement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_studentBodyMovementHasBeenSet = true;
    }

    if (value.HasMember("TeacherBodyMovement") && !value["TeacherBodyMovement"].IsNull())
    {
        if (!value["TeacherBodyMovement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskResult.TeacherBodyMovement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_teacherBodyMovement.Deserialize(value["TeacherBodyMovement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_teacherBodyMovementHasBeenSet = true;
    }

    if (value.HasMember("TeacherOutScreen") && !value["TeacherOutScreen"].IsNull())
    {
        if (!value["TeacherOutScreen"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskResult.TeacherOutScreen` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_teacherOutScreen.Deserialize(value["TeacherOutScreen"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_teacherOutScreenHasBeenSet = true;
    }

    if (value.HasMember("TimeInfo") && !value["TimeInfo"].IsNull())
    {
        if (!value["TimeInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskResult.TimeInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timeInfo.Deserialize(value["TimeInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timeInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_actionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_faceAttrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceAttr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceAttr.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_faceExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceExpression.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_faceIdentifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceIdentify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceIdentify.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_faceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_facePoseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FacePose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_facePose.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gestureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gesture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gesture.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_handTrackingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandTracking";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_handTracking.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Light";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_light.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_studentBodyMovementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StudentBodyMovement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_studentBodyMovement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_teacherBodyMovementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherBodyMovement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_teacherBodyMovement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_teacherOutScreenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherOutScreen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_teacherOutScreen.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


ActionInfo ImageTaskResult::GetActionInfo() const
{
    return m_actionInfo;
}

void ImageTaskResult::SetActionInfo(const ActionInfo& _actionInfo)
{
    m_actionInfo = _actionInfo;
    m_actionInfoHasBeenSet = true;
}

bool ImageTaskResult::ActionInfoHasBeenSet() const
{
    return m_actionInfoHasBeenSet;
}

FaceAttrResult ImageTaskResult::GetFaceAttr() const
{
    return m_faceAttr;
}

void ImageTaskResult::SetFaceAttr(const FaceAttrResult& _faceAttr)
{
    m_faceAttr = _faceAttr;
    m_faceAttrHasBeenSet = true;
}

bool ImageTaskResult::FaceAttrHasBeenSet() const
{
    return m_faceAttrHasBeenSet;
}

FaceExpressionResult ImageTaskResult::GetFaceExpression() const
{
    return m_faceExpression;
}

void ImageTaskResult::SetFaceExpression(const FaceExpressionResult& _faceExpression)
{
    m_faceExpression = _faceExpression;
    m_faceExpressionHasBeenSet = true;
}

bool ImageTaskResult::FaceExpressionHasBeenSet() const
{
    return m_faceExpressionHasBeenSet;
}

FaceIdentifyResult ImageTaskResult::GetFaceIdentify() const
{
    return m_faceIdentify;
}

void ImageTaskResult::SetFaceIdentify(const FaceIdentifyResult& _faceIdentify)
{
    m_faceIdentify = _faceIdentify;
    m_faceIdentifyHasBeenSet = true;
}

bool ImageTaskResult::FaceIdentifyHasBeenSet() const
{
    return m_faceIdentifyHasBeenSet;
}

FaceInfoResult ImageTaskResult::GetFaceInfo() const
{
    return m_faceInfo;
}

void ImageTaskResult::SetFaceInfo(const FaceInfoResult& _faceInfo)
{
    m_faceInfo = _faceInfo;
    m_faceInfoHasBeenSet = true;
}

bool ImageTaskResult::FaceInfoHasBeenSet() const
{
    return m_faceInfoHasBeenSet;
}

FacePoseResult ImageTaskResult::GetFacePose() const
{
    return m_facePose;
}

void ImageTaskResult::SetFacePose(const FacePoseResult& _facePose)
{
    m_facePose = _facePose;
    m_facePoseHasBeenSet = true;
}

bool ImageTaskResult::FacePoseHasBeenSet() const
{
    return m_facePoseHasBeenSet;
}

GestureResult ImageTaskResult::GetGesture() const
{
    return m_gesture;
}

void ImageTaskResult::SetGesture(const GestureResult& _gesture)
{
    m_gesture = _gesture;
    m_gestureHasBeenSet = true;
}

bool ImageTaskResult::GestureHasBeenSet() const
{
    return m_gestureHasBeenSet;
}

HandTrackingResult ImageTaskResult::GetHandTracking() const
{
    return m_handTracking;
}

void ImageTaskResult::SetHandTracking(const HandTrackingResult& _handTracking)
{
    m_handTracking = _handTracking;
    m_handTrackingHasBeenSet = true;
}

bool ImageTaskResult::HandTrackingHasBeenSet() const
{
    return m_handTrackingHasBeenSet;
}

LightResult ImageTaskResult::GetLight() const
{
    return m_light;
}

void ImageTaskResult::SetLight(const LightResult& _light)
{
    m_light = _light;
    m_lightHasBeenSet = true;
}

bool ImageTaskResult::LightHasBeenSet() const
{
    return m_lightHasBeenSet;
}

StudentBodyMovementResult ImageTaskResult::GetStudentBodyMovement() const
{
    return m_studentBodyMovement;
}

void ImageTaskResult::SetStudentBodyMovement(const StudentBodyMovementResult& _studentBodyMovement)
{
    m_studentBodyMovement = _studentBodyMovement;
    m_studentBodyMovementHasBeenSet = true;
}

bool ImageTaskResult::StudentBodyMovementHasBeenSet() const
{
    return m_studentBodyMovementHasBeenSet;
}

BodyMovementResult ImageTaskResult::GetTeacherBodyMovement() const
{
    return m_teacherBodyMovement;
}

void ImageTaskResult::SetTeacherBodyMovement(const BodyMovementResult& _teacherBodyMovement)
{
    m_teacherBodyMovement = _teacherBodyMovement;
    m_teacherBodyMovementHasBeenSet = true;
}

bool ImageTaskResult::TeacherBodyMovementHasBeenSet() const
{
    return m_teacherBodyMovementHasBeenSet;
}

TeacherOutScreenResult ImageTaskResult::GetTeacherOutScreen() const
{
    return m_teacherOutScreen;
}

void ImageTaskResult::SetTeacherOutScreen(const TeacherOutScreenResult& _teacherOutScreen)
{
    m_teacherOutScreen = _teacherOutScreen;
    m_teacherOutScreenHasBeenSet = true;
}

bool ImageTaskResult::TeacherOutScreenHasBeenSet() const
{
    return m_teacherOutScreenHasBeenSet;
}

TimeInfoResult ImageTaskResult::GetTimeInfo() const
{
    return m_timeInfo;
}

void ImageTaskResult::SetTimeInfo(const TimeInfoResult& _timeInfo)
{
    m_timeInfo = _timeInfo;
    m_timeInfoHasBeenSet = true;
}

bool ImageTaskResult::TimeInfoHasBeenSet() const
{
    return m_timeInfoHasBeenSet;
}

