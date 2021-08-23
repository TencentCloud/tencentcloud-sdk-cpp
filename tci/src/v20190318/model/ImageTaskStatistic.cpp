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

#include <tencentcloud/tci/v20190318/model/ImageTaskStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

ImageTaskStatistic::ImageTaskStatistic() :
    m_faceDetectHasBeenSet(false),
    m_faceExpressionHasBeenSet(false),
    m_faceIdentifyHasBeenSet(false),
    m_gestureHasBeenSet(false),
    m_handtrackingHasBeenSet(false),
    m_lightHasBeenSet(false),
    m_studentMovementHasBeenSet(false),
    m_teacherMovementHasBeenSet(false)
{
}

CoreInternalOutcome ImageTaskStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FaceDetect") && !value["FaceDetect"].IsNull())
    {
        if (!value["FaceDetect"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageTaskStatistic.FaceDetect` is not array type"));

        const rapidjson::Value &tmpValue = value["FaceDetect"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FaceDetectStatistic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_faceDetect.push_back(item);
        }
        m_faceDetectHasBeenSet = true;
    }

    if (value.HasMember("FaceExpression") && !value["FaceExpression"].IsNull())
    {
        if (!value["FaceExpression"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageTaskStatistic.FaceExpression` is not array type"));

        const rapidjson::Value &tmpValue = value["FaceExpression"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FaceExpressStatistic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_faceExpression.push_back(item);
        }
        m_faceExpressionHasBeenSet = true;
    }

    if (value.HasMember("FaceIdentify") && !value["FaceIdentify"].IsNull())
    {
        if (!value["FaceIdentify"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageTaskStatistic.FaceIdentify` is not array type"));

        const rapidjson::Value &tmpValue = value["FaceIdentify"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FaceIdentifyStatistic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_faceIdentify.push_back(item);
        }
        m_faceIdentifyHasBeenSet = true;
    }

    if (value.HasMember("Gesture") && !value["Gesture"].IsNull())
    {
        if (!value["Gesture"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskStatistic.Gesture` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gesture.Deserialize(value["Gesture"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gestureHasBeenSet = true;
    }

    if (value.HasMember("Handtracking") && !value["Handtracking"].IsNull())
    {
        if (!value["Handtracking"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskStatistic.Handtracking` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_handtracking.Deserialize(value["Handtracking"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_handtrackingHasBeenSet = true;
    }

    if (value.HasMember("Light") && !value["Light"].IsNull())
    {
        if (!value["Light"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskStatistic.Light` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_light.Deserialize(value["Light"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lightHasBeenSet = true;
    }

    if (value.HasMember("StudentMovement") && !value["StudentMovement"].IsNull())
    {
        if (!value["StudentMovement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskStatistic.StudentMovement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_studentMovement.Deserialize(value["StudentMovement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_studentMovementHasBeenSet = true;
    }

    if (value.HasMember("TeacherMovement") && !value["TeacherMovement"].IsNull())
    {
        if (!value["TeacherMovement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskStatistic.TeacherMovement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_teacherMovement.Deserialize(value["TeacherMovement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_teacherMovementHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageTaskStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_faceDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_faceDetect.begin(); itr != m_faceDetect.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_faceExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_faceExpression.begin(); itr != m_faceExpression.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_faceIdentifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceIdentify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_faceIdentify.begin(); itr != m_faceIdentify.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_gestureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gesture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gesture.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_handtrackingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Handtracking";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_handtracking.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Light";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_light.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_studentMovementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StudentMovement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_studentMovement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_teacherMovementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherMovement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_teacherMovement.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<FaceDetectStatistic> ImageTaskStatistic::GetFaceDetect() const
{
    return m_faceDetect;
}

void ImageTaskStatistic::SetFaceDetect(const vector<FaceDetectStatistic>& _faceDetect)
{
    m_faceDetect = _faceDetect;
    m_faceDetectHasBeenSet = true;
}

bool ImageTaskStatistic::FaceDetectHasBeenSet() const
{
    return m_faceDetectHasBeenSet;
}

vector<FaceExpressStatistic> ImageTaskStatistic::GetFaceExpression() const
{
    return m_faceExpression;
}

void ImageTaskStatistic::SetFaceExpression(const vector<FaceExpressStatistic>& _faceExpression)
{
    m_faceExpression = _faceExpression;
    m_faceExpressionHasBeenSet = true;
}

bool ImageTaskStatistic::FaceExpressionHasBeenSet() const
{
    return m_faceExpressionHasBeenSet;
}

vector<FaceIdentifyStatistic> ImageTaskStatistic::GetFaceIdentify() const
{
    return m_faceIdentify;
}

void ImageTaskStatistic::SetFaceIdentify(const vector<FaceIdentifyStatistic>& _faceIdentify)
{
    m_faceIdentify = _faceIdentify;
    m_faceIdentifyHasBeenSet = true;
}

bool ImageTaskStatistic::FaceIdentifyHasBeenSet() const
{
    return m_faceIdentifyHasBeenSet;
}

ActionStatistic ImageTaskStatistic::GetGesture() const
{
    return m_gesture;
}

void ImageTaskStatistic::SetGesture(const ActionStatistic& _gesture)
{
    m_gesture = _gesture;
    m_gestureHasBeenSet = true;
}

bool ImageTaskStatistic::GestureHasBeenSet() const
{
    return m_gestureHasBeenSet;
}

ActionStatistic ImageTaskStatistic::GetHandtracking() const
{
    return m_handtracking;
}

void ImageTaskStatistic::SetHandtracking(const ActionStatistic& _handtracking)
{
    m_handtracking = _handtracking;
    m_handtrackingHasBeenSet = true;
}

bool ImageTaskStatistic::HandtrackingHasBeenSet() const
{
    return m_handtrackingHasBeenSet;
}

LightStatistic ImageTaskStatistic::GetLight() const
{
    return m_light;
}

void ImageTaskStatistic::SetLight(const LightStatistic& _light)
{
    m_light = _light;
    m_lightHasBeenSet = true;
}

bool ImageTaskStatistic::LightHasBeenSet() const
{
    return m_lightHasBeenSet;
}

ActionStatistic ImageTaskStatistic::GetStudentMovement() const
{
    return m_studentMovement;
}

void ImageTaskStatistic::SetStudentMovement(const ActionStatistic& _studentMovement)
{
    m_studentMovement = _studentMovement;
    m_studentMovementHasBeenSet = true;
}

bool ImageTaskStatistic::StudentMovementHasBeenSet() const
{
    return m_studentMovementHasBeenSet;
}

ActionStatistic ImageTaskStatistic::GetTeacherMovement() const
{
    return m_teacherMovement;
}

void ImageTaskStatistic::SetTeacherMovement(const ActionStatistic& _teacherMovement)
{
    m_teacherMovement = _teacherMovement;
    m_teacherMovementHasBeenSet = true;
}

bool ImageTaskStatistic::TeacherMovementHasBeenSet() const
{
    return m_teacherMovementHasBeenSet;
}

