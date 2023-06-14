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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_IMAGETASKRESULT_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_IMAGETASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/ActionInfo.h>
#include <tencentcloud/tci/v20190318/model/FaceAttrResult.h>
#include <tencentcloud/tci/v20190318/model/FaceExpressionResult.h>
#include <tencentcloud/tci/v20190318/model/FaceIdentifyResult.h>
#include <tencentcloud/tci/v20190318/model/FaceInfoResult.h>
#include <tencentcloud/tci/v20190318/model/FacePoseResult.h>
#include <tencentcloud/tci/v20190318/model/GestureResult.h>
#include <tencentcloud/tci/v20190318/model/HandTrackingResult.h>
#include <tencentcloud/tci/v20190318/model/LightResult.h>
#include <tencentcloud/tci/v20190318/model/StudentBodyMovementResult.h>
#include <tencentcloud/tci/v20190318/model/BodyMovementResult.h>
#include <tencentcloud/tci/v20190318/model/TeacherOutScreenResult.h>
#include <tencentcloud/tci/v20190318/model/TimeInfoResult.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 图像任务结果
                */
                class ImageTaskResult : public AbstractModel
                {
                public:
                    ImageTaskResult();
                    ~ImageTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取大教室场景学生肢体动作识别信息
                     * @return ActionInfo 大教室场景学生肢体动作识别信息
                     * 
                     */
                    ActionInfo GetActionInfo() const;

                    /**
                     * 设置大教室场景学生肢体动作识别信息
                     * @param _actionInfo 大教室场景学生肢体动作识别信息
                     * 
                     */
                    void SetActionInfo(const ActionInfo& _actionInfo);

                    /**
                     * 判断参数 ActionInfo 是否已赋值
                     * @return ActionInfo 是否已赋值
                     * 
                     */
                    bool ActionInfoHasBeenSet() const;

                    /**
                     * 获取属性识别结果
                     * @return FaceAttr 属性识别结果
                     * 
                     */
                    FaceAttrResult GetFaceAttr() const;

                    /**
                     * 设置属性识别结果
                     * @param _faceAttr 属性识别结果
                     * 
                     */
                    void SetFaceAttr(const FaceAttrResult& _faceAttr);

                    /**
                     * 判断参数 FaceAttr 是否已赋值
                     * @return FaceAttr 是否已赋值
                     * 
                     */
                    bool FaceAttrHasBeenSet() const;

                    /**
                     * 获取表情识别结果
                     * @return FaceExpression 表情识别结果
                     * 
                     */
                    FaceExpressionResult GetFaceExpression() const;

                    /**
                     * 设置表情识别结果
                     * @param _faceExpression 表情识别结果
                     * 
                     */
                    void SetFaceExpression(const FaceExpressionResult& _faceExpression);

                    /**
                     * 判断参数 FaceExpression 是否已赋值
                     * @return FaceExpression 是否已赋值
                     * 
                     */
                    bool FaceExpressionHasBeenSet() const;

                    /**
                     * 获取人脸检索结果
                     * @return FaceIdentify 人脸检索结果
                     * 
                     */
                    FaceIdentifyResult GetFaceIdentify() const;

                    /**
                     * 设置人脸检索结果
                     * @param _faceIdentify 人脸检索结果
                     * 
                     */
                    void SetFaceIdentify(const FaceIdentifyResult& _faceIdentify);

                    /**
                     * 判断参数 FaceIdentify 是否已赋值
                     * @return FaceIdentify 是否已赋值
                     * 
                     */
                    bool FaceIdentifyHasBeenSet() const;

                    /**
                     * 获取人脸检测结果
                     * @return FaceInfo 人脸检测结果
                     * 
                     */
                    FaceInfoResult GetFaceInfo() const;

                    /**
                     * 设置人脸检测结果
                     * @param _faceInfo 人脸检测结果
                     * 
                     */
                    void SetFaceInfo(const FaceInfoResult& _faceInfo);

                    /**
                     * 判断参数 FaceInfo 是否已赋值
                     * @return FaceInfo 是否已赋值
                     * 
                     */
                    bool FaceInfoHasBeenSet() const;

                    /**
                     * 获取姿势识别结果
                     * @return FacePose 姿势识别结果
                     * 
                     */
                    FacePoseResult GetFacePose() const;

                    /**
                     * 设置姿势识别结果
                     * @param _facePose 姿势识别结果
                     * 
                     */
                    void SetFacePose(const FacePoseResult& _facePose);

                    /**
                     * 判断参数 FacePose 是否已赋值
                     * @return FacePose 是否已赋值
                     * 
                     */
                    bool FacePoseHasBeenSet() const;

                    /**
                     * 获取动作分类结果
                     * @return Gesture 动作分类结果
                     * 
                     */
                    GestureResult GetGesture() const;

                    /**
                     * 设置动作分类结果
                     * @param _gesture 动作分类结果
                     * 
                     */
                    void SetGesture(const GestureResult& _gesture);

                    /**
                     * 判断参数 Gesture 是否已赋值
                     * @return Gesture 是否已赋值
                     * 
                     */
                    bool GestureHasBeenSet() const;

                    /**
                     * 获取手势分类结果
                     * @return HandTracking 手势分类结果
                     * 
                     */
                    HandTrackingResult GetHandTracking() const;

                    /**
                     * 设置手势分类结果
                     * @param _handTracking 手势分类结果
                     * 
                     */
                    void SetHandTracking(const HandTrackingResult& _handTracking);

                    /**
                     * 判断参数 HandTracking 是否已赋值
                     * @return HandTracking 是否已赋值
                     * 
                     */
                    bool HandTrackingHasBeenSet() const;

                    /**
                     * 获取光照识别结果
                     * @return Light 光照识别结果
                     * 
                     */
                    LightResult GetLight() const;

                    /**
                     * 设置光照识别结果
                     * @param _light 光照识别结果
                     * 
                     */
                    void SetLight(const LightResult& _light);

                    /**
                     * 判断参数 Light 是否已赋值
                     * @return Light 是否已赋值
                     * 
                     */
                    bool LightHasBeenSet() const;

                    /**
                     * 获取学生肢体动作识别结果
                     * @return StudentBodyMovement 学生肢体动作识别结果
                     * 
                     */
                    StudentBodyMovementResult GetStudentBodyMovement() const;

                    /**
                     * 设置学生肢体动作识别结果
                     * @param _studentBodyMovement 学生肢体动作识别结果
                     * 
                     */
                    void SetStudentBodyMovement(const StudentBodyMovementResult& _studentBodyMovement);

                    /**
                     * 判断参数 StudentBodyMovement 是否已赋值
                     * @return StudentBodyMovement 是否已赋值
                     * 
                     */
                    bool StudentBodyMovementHasBeenSet() const;

                    /**
                     * 获取老师肢体动作识别结果
                     * @return TeacherBodyMovement 老师肢体动作识别结果
                     * 
                     */
                    BodyMovementResult GetTeacherBodyMovement() const;

                    /**
                     * 设置老师肢体动作识别结果
                     * @param _teacherBodyMovement 老师肢体动作识别结果
                     * 
                     */
                    void SetTeacherBodyMovement(const BodyMovementResult& _teacherBodyMovement);

                    /**
                     * 判断参数 TeacherBodyMovement 是否已赋值
                     * @return TeacherBodyMovement 是否已赋值
                     * 
                     */
                    bool TeacherBodyMovementHasBeenSet() const;

                    /**
                     * 获取教师是否在屏幕内判断结果
                     * @return TeacherOutScreen 教师是否在屏幕内判断结果
                     * 
                     */
                    TeacherOutScreenResult GetTeacherOutScreen() const;

                    /**
                     * 设置教师是否在屏幕内判断结果
                     * @param _teacherOutScreen 教师是否在屏幕内判断结果
                     * 
                     */
                    void SetTeacherOutScreen(const TeacherOutScreenResult& _teacherOutScreen);

                    /**
                     * 判断参数 TeacherOutScreen 是否已赋值
                     * @return TeacherOutScreen 是否已赋值
                     * 
                     */
                    bool TeacherOutScreenHasBeenSet() const;

                    /**
                     * 获取时间统计结果
                     * @return TimeInfo 时间统计结果
                     * 
                     */
                    TimeInfoResult GetTimeInfo() const;

                    /**
                     * 设置时间统计结果
                     * @param _timeInfo 时间统计结果
                     * 
                     */
                    void SetTimeInfo(const TimeInfoResult& _timeInfo);

                    /**
                     * 判断参数 TimeInfo 是否已赋值
                     * @return TimeInfo 是否已赋值
                     * 
                     */
                    bool TimeInfoHasBeenSet() const;

                private:

                    /**
                     * 大教室场景学生肢体动作识别信息
                     */
                    ActionInfo m_actionInfo;
                    bool m_actionInfoHasBeenSet;

                    /**
                     * 属性识别结果
                     */
                    FaceAttrResult m_faceAttr;
                    bool m_faceAttrHasBeenSet;

                    /**
                     * 表情识别结果
                     */
                    FaceExpressionResult m_faceExpression;
                    bool m_faceExpressionHasBeenSet;

                    /**
                     * 人脸检索结果
                     */
                    FaceIdentifyResult m_faceIdentify;
                    bool m_faceIdentifyHasBeenSet;

                    /**
                     * 人脸检测结果
                     */
                    FaceInfoResult m_faceInfo;
                    bool m_faceInfoHasBeenSet;

                    /**
                     * 姿势识别结果
                     */
                    FacePoseResult m_facePose;
                    bool m_facePoseHasBeenSet;

                    /**
                     * 动作分类结果
                     */
                    GestureResult m_gesture;
                    bool m_gestureHasBeenSet;

                    /**
                     * 手势分类结果
                     */
                    HandTrackingResult m_handTracking;
                    bool m_handTrackingHasBeenSet;

                    /**
                     * 光照识别结果
                     */
                    LightResult m_light;
                    bool m_lightHasBeenSet;

                    /**
                     * 学生肢体动作识别结果
                     */
                    StudentBodyMovementResult m_studentBodyMovement;
                    bool m_studentBodyMovementHasBeenSet;

                    /**
                     * 老师肢体动作识别结果
                     */
                    BodyMovementResult m_teacherBodyMovement;
                    bool m_teacherBodyMovementHasBeenSet;

                    /**
                     * 教师是否在屏幕内判断结果
                     */
                    TeacherOutScreenResult m_teacherOutScreen;
                    bool m_teacherOutScreenHasBeenSet;

                    /**
                     * 时间统计结果
                     */
                    TimeInfoResult m_timeInfo;
                    bool m_timeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_IMAGETASKRESULT_H_
