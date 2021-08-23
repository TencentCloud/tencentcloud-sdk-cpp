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

#include <tencentcloud/tci/v20190318/model/ImageTaskFunction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

ImageTaskFunction::ImageTaskFunction() :
    m_enableActionClassHasBeenSet(false),
    m_enableFaceDetectHasBeenSet(false),
    m_enableFaceExpressionHasBeenSet(false),
    m_enableFaceIdentifyHasBeenSet(false),
    m_enableGestureHasBeenSet(false),
    m_enableHandTrackingHasBeenSet(false),
    m_enableLightJudgeHasBeenSet(false),
    m_enableStudentBodyMovementsHasBeenSet(false),
    m_enableTeacherBodyMovementsHasBeenSet(false),
    m_enableTeacherOutScreenHasBeenSet(false)
{
}

CoreInternalOutcome ImageTaskFunction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableActionClass") && !value["EnableActionClass"].IsNull())
    {
        if (!value["EnableActionClass"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskFunction.EnableActionClass` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableActionClass = value["EnableActionClass"].GetBool();
        m_enableActionClassHasBeenSet = true;
    }

    if (value.HasMember("EnableFaceDetect") && !value["EnableFaceDetect"].IsNull())
    {
        if (!value["EnableFaceDetect"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskFunction.EnableFaceDetect` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableFaceDetect = value["EnableFaceDetect"].GetBool();
        m_enableFaceDetectHasBeenSet = true;
    }

    if (value.HasMember("EnableFaceExpression") && !value["EnableFaceExpression"].IsNull())
    {
        if (!value["EnableFaceExpression"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskFunction.EnableFaceExpression` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableFaceExpression = value["EnableFaceExpression"].GetBool();
        m_enableFaceExpressionHasBeenSet = true;
    }

    if (value.HasMember("EnableFaceIdentify") && !value["EnableFaceIdentify"].IsNull())
    {
        if (!value["EnableFaceIdentify"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskFunction.EnableFaceIdentify` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableFaceIdentify = value["EnableFaceIdentify"].GetBool();
        m_enableFaceIdentifyHasBeenSet = true;
    }

    if (value.HasMember("EnableGesture") && !value["EnableGesture"].IsNull())
    {
        if (!value["EnableGesture"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskFunction.EnableGesture` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableGesture = value["EnableGesture"].GetBool();
        m_enableGestureHasBeenSet = true;
    }

    if (value.HasMember("EnableHandTracking") && !value["EnableHandTracking"].IsNull())
    {
        if (!value["EnableHandTracking"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskFunction.EnableHandTracking` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableHandTracking = value["EnableHandTracking"].GetBool();
        m_enableHandTrackingHasBeenSet = true;
    }

    if (value.HasMember("EnableLightJudge") && !value["EnableLightJudge"].IsNull())
    {
        if (!value["EnableLightJudge"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskFunction.EnableLightJudge` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableLightJudge = value["EnableLightJudge"].GetBool();
        m_enableLightJudgeHasBeenSet = true;
    }

    if (value.HasMember("EnableStudentBodyMovements") && !value["EnableStudentBodyMovements"].IsNull())
    {
        if (!value["EnableStudentBodyMovements"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskFunction.EnableStudentBodyMovements` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableStudentBodyMovements = value["EnableStudentBodyMovements"].GetBool();
        m_enableStudentBodyMovementsHasBeenSet = true;
    }

    if (value.HasMember("EnableTeacherBodyMovements") && !value["EnableTeacherBodyMovements"].IsNull())
    {
        if (!value["EnableTeacherBodyMovements"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskFunction.EnableTeacherBodyMovements` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableTeacherBodyMovements = value["EnableTeacherBodyMovements"].GetBool();
        m_enableTeacherBodyMovementsHasBeenSet = true;
    }

    if (value.HasMember("EnableTeacherOutScreen") && !value["EnableTeacherOutScreen"].IsNull())
    {
        if (!value["EnableTeacherOutScreen"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskFunction.EnableTeacherOutScreen` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableTeacherOutScreen = value["EnableTeacherOutScreen"].GetBool();
        m_enableTeacherOutScreenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageTaskFunction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableActionClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableActionClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableActionClass, allocator);
    }

    if (m_enableFaceDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFaceDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableFaceDetect, allocator);
    }

    if (m_enableFaceExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFaceExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableFaceExpression, allocator);
    }

    if (m_enableFaceIdentifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFaceIdentify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableFaceIdentify, allocator);
    }

    if (m_enableGestureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableGesture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableGesture, allocator);
    }

    if (m_enableHandTrackingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableHandTracking";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableHandTracking, allocator);
    }

    if (m_enableLightJudgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableLightJudge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableLightJudge, allocator);
    }

    if (m_enableStudentBodyMovementsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableStudentBodyMovements";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableStudentBodyMovements, allocator);
    }

    if (m_enableTeacherBodyMovementsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTeacherBodyMovements";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableTeacherBodyMovements, allocator);
    }

    if (m_enableTeacherOutScreenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTeacherOutScreen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableTeacherOutScreen, allocator);
    }

}


bool ImageTaskFunction::GetEnableActionClass() const
{
    return m_enableActionClass;
}

void ImageTaskFunction::SetEnableActionClass(const bool& _enableActionClass)
{
    m_enableActionClass = _enableActionClass;
    m_enableActionClassHasBeenSet = true;
}

bool ImageTaskFunction::EnableActionClassHasBeenSet() const
{
    return m_enableActionClassHasBeenSet;
}

bool ImageTaskFunction::GetEnableFaceDetect() const
{
    return m_enableFaceDetect;
}

void ImageTaskFunction::SetEnableFaceDetect(const bool& _enableFaceDetect)
{
    m_enableFaceDetect = _enableFaceDetect;
    m_enableFaceDetectHasBeenSet = true;
}

bool ImageTaskFunction::EnableFaceDetectHasBeenSet() const
{
    return m_enableFaceDetectHasBeenSet;
}

bool ImageTaskFunction::GetEnableFaceExpression() const
{
    return m_enableFaceExpression;
}

void ImageTaskFunction::SetEnableFaceExpression(const bool& _enableFaceExpression)
{
    m_enableFaceExpression = _enableFaceExpression;
    m_enableFaceExpressionHasBeenSet = true;
}

bool ImageTaskFunction::EnableFaceExpressionHasBeenSet() const
{
    return m_enableFaceExpressionHasBeenSet;
}

bool ImageTaskFunction::GetEnableFaceIdentify() const
{
    return m_enableFaceIdentify;
}

void ImageTaskFunction::SetEnableFaceIdentify(const bool& _enableFaceIdentify)
{
    m_enableFaceIdentify = _enableFaceIdentify;
    m_enableFaceIdentifyHasBeenSet = true;
}

bool ImageTaskFunction::EnableFaceIdentifyHasBeenSet() const
{
    return m_enableFaceIdentifyHasBeenSet;
}

bool ImageTaskFunction::GetEnableGesture() const
{
    return m_enableGesture;
}

void ImageTaskFunction::SetEnableGesture(const bool& _enableGesture)
{
    m_enableGesture = _enableGesture;
    m_enableGestureHasBeenSet = true;
}

bool ImageTaskFunction::EnableGestureHasBeenSet() const
{
    return m_enableGestureHasBeenSet;
}

bool ImageTaskFunction::GetEnableHandTracking() const
{
    return m_enableHandTracking;
}

void ImageTaskFunction::SetEnableHandTracking(const bool& _enableHandTracking)
{
    m_enableHandTracking = _enableHandTracking;
    m_enableHandTrackingHasBeenSet = true;
}

bool ImageTaskFunction::EnableHandTrackingHasBeenSet() const
{
    return m_enableHandTrackingHasBeenSet;
}

bool ImageTaskFunction::GetEnableLightJudge() const
{
    return m_enableLightJudge;
}

void ImageTaskFunction::SetEnableLightJudge(const bool& _enableLightJudge)
{
    m_enableLightJudge = _enableLightJudge;
    m_enableLightJudgeHasBeenSet = true;
}

bool ImageTaskFunction::EnableLightJudgeHasBeenSet() const
{
    return m_enableLightJudgeHasBeenSet;
}

bool ImageTaskFunction::GetEnableStudentBodyMovements() const
{
    return m_enableStudentBodyMovements;
}

void ImageTaskFunction::SetEnableStudentBodyMovements(const bool& _enableStudentBodyMovements)
{
    m_enableStudentBodyMovements = _enableStudentBodyMovements;
    m_enableStudentBodyMovementsHasBeenSet = true;
}

bool ImageTaskFunction::EnableStudentBodyMovementsHasBeenSet() const
{
    return m_enableStudentBodyMovementsHasBeenSet;
}

bool ImageTaskFunction::GetEnableTeacherBodyMovements() const
{
    return m_enableTeacherBodyMovements;
}

void ImageTaskFunction::SetEnableTeacherBodyMovements(const bool& _enableTeacherBodyMovements)
{
    m_enableTeacherBodyMovements = _enableTeacherBodyMovements;
    m_enableTeacherBodyMovementsHasBeenSet = true;
}

bool ImageTaskFunction::EnableTeacherBodyMovementsHasBeenSet() const
{
    return m_enableTeacherBodyMovementsHasBeenSet;
}

bool ImageTaskFunction::GetEnableTeacherOutScreen() const
{
    return m_enableTeacherOutScreen;
}

void ImageTaskFunction::SetEnableTeacherOutScreen(const bool& _enableTeacherOutScreen)
{
    m_enableTeacherOutScreen = _enableTeacherOutScreen;
    m_enableTeacherOutScreenHasBeenSet = true;
}

bool ImageTaskFunction::EnableTeacherOutScreenHasBeenSet() const
{
    return m_enableTeacherOutScreenHasBeenSet;
}

