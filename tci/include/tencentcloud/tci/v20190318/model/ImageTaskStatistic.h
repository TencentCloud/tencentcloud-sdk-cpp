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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_IMAGETASKSTATISTIC_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_IMAGETASKSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/FaceDetectStatistic.h>
#include <tencentcloud/tci/v20190318/model/FaceExpressStatistic.h>
#include <tencentcloud/tci/v20190318/model/FaceIdentifyStatistic.h>
#include <tencentcloud/tci/v20190318/model/ActionStatistic.h>
#include <tencentcloud/tci/v20190318/model/LightStatistic.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 图像任务统计结果
                */
                class ImageTaskStatistic : public AbstractModel
                {
                public:
                    ImageTaskStatistic();
                    ~ImageTaskStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人员检测统计信息
                     * @return FaceDetect 人员检测统计信息
                     * 
                     */
                    std::vector<FaceDetectStatistic> GetFaceDetect() const;

                    /**
                     * 设置人员检测统计信息
                     * @param _faceDetect 人员检测统计信息
                     * 
                     */
                    void SetFaceDetect(const std::vector<FaceDetectStatistic>& _faceDetect);

                    /**
                     * 判断参数 FaceDetect 是否已赋值
                     * @return FaceDetect 是否已赋值
                     * 
                     */
                    bool FaceDetectHasBeenSet() const;

                    /**
                     * 获取人脸表情统计信息
                     * @return FaceExpression 人脸表情统计信息
                     * 
                     */
                    std::vector<FaceExpressStatistic> GetFaceExpression() const;

                    /**
                     * 设置人脸表情统计信息
                     * @param _faceExpression 人脸表情统计信息
                     * 
                     */
                    void SetFaceExpression(const std::vector<FaceExpressStatistic>& _faceExpression);

                    /**
                     * 判断参数 FaceExpression 是否已赋值
                     * @return FaceExpression 是否已赋值
                     * 
                     */
                    bool FaceExpressionHasBeenSet() const;

                    /**
                     * 获取人脸检索统计信息
                     * @return FaceIdentify 人脸检索统计信息
                     * 
                     */
                    std::vector<FaceIdentifyStatistic> GetFaceIdentify() const;

                    /**
                     * 设置人脸检索统计信息
                     * @param _faceIdentify 人脸检索统计信息
                     * 
                     */
                    void SetFaceIdentify(const std::vector<FaceIdentifyStatistic>& _faceIdentify);

                    /**
                     * 判断参数 FaceIdentify 是否已赋值
                     * @return FaceIdentify 是否已赋值
                     * 
                     */
                    bool FaceIdentifyHasBeenSet() const;

                    /**
                     * 获取姿势识别统计信息
                     * @return Gesture 姿势识别统计信息
                     * 
                     */
                    ActionStatistic GetGesture() const;

                    /**
                     * 设置姿势识别统计信息
                     * @param _gesture 姿势识别统计信息
                     * 
                     */
                    void SetGesture(const ActionStatistic& _gesture);

                    /**
                     * 判断参数 Gesture 是否已赋值
                     * @return Gesture 是否已赋值
                     * 
                     */
                    bool GestureHasBeenSet() const;

                    /**
                     * 获取手势识别统计信息
                     * @return Handtracking 手势识别统计信息
                     * 
                     */
                    ActionStatistic GetHandtracking() const;

                    /**
                     * 设置手势识别统计信息
                     * @param _handtracking 手势识别统计信息
                     * 
                     */
                    void SetHandtracking(const ActionStatistic& _handtracking);

                    /**
                     * 判断参数 Handtracking 是否已赋值
                     * @return Handtracking 是否已赋值
                     * 
                     */
                    bool HandtrackingHasBeenSet() const;

                    /**
                     * 获取光照统计信息
                     * @return Light 光照统计信息
                     * 
                     */
                    LightStatistic GetLight() const;

                    /**
                     * 设置光照统计信息
                     * @param _light 光照统计信息
                     * 
                     */
                    void SetLight(const LightStatistic& _light);

                    /**
                     * 判断参数 Light 是否已赋值
                     * @return Light 是否已赋值
                     * 
                     */
                    bool LightHasBeenSet() const;

                    /**
                     * 获取学生动作统计信息
                     * @return StudentMovement 学生动作统计信息
                     * 
                     */
                    ActionStatistic GetStudentMovement() const;

                    /**
                     * 设置学生动作统计信息
                     * @param _studentMovement 学生动作统计信息
                     * 
                     */
                    void SetStudentMovement(const ActionStatistic& _studentMovement);

                    /**
                     * 判断参数 StudentMovement 是否已赋值
                     * @return StudentMovement 是否已赋值
                     * 
                     */
                    bool StudentMovementHasBeenSet() const;

                    /**
                     * 获取教师动作统计信息
                     * @return TeacherMovement 教师动作统计信息
                     * 
                     */
                    ActionStatistic GetTeacherMovement() const;

                    /**
                     * 设置教师动作统计信息
                     * @param _teacherMovement 教师动作统计信息
                     * 
                     */
                    void SetTeacherMovement(const ActionStatistic& _teacherMovement);

                    /**
                     * 判断参数 TeacherMovement 是否已赋值
                     * @return TeacherMovement 是否已赋值
                     * 
                     */
                    bool TeacherMovementHasBeenSet() const;

                private:

                    /**
                     * 人员检测统计信息
                     */
                    std::vector<FaceDetectStatistic> m_faceDetect;
                    bool m_faceDetectHasBeenSet;

                    /**
                     * 人脸表情统计信息
                     */
                    std::vector<FaceExpressStatistic> m_faceExpression;
                    bool m_faceExpressionHasBeenSet;

                    /**
                     * 人脸检索统计信息
                     */
                    std::vector<FaceIdentifyStatistic> m_faceIdentify;
                    bool m_faceIdentifyHasBeenSet;

                    /**
                     * 姿势识别统计信息
                     */
                    ActionStatistic m_gesture;
                    bool m_gestureHasBeenSet;

                    /**
                     * 手势识别统计信息
                     */
                    ActionStatistic m_handtracking;
                    bool m_handtrackingHasBeenSet;

                    /**
                     * 光照统计信息
                     */
                    LightStatistic m_light;
                    bool m_lightHasBeenSet;

                    /**
                     * 学生动作统计信息
                     */
                    ActionStatistic m_studentMovement;
                    bool m_studentMovementHasBeenSet;

                    /**
                     * 教师动作统计信息
                     */
                    ActionStatistic m_teacherMovement;
                    bool m_teacherMovementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_IMAGETASKSTATISTIC_H_
