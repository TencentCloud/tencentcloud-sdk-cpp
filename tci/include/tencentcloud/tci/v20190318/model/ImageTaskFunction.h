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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_IMAGETASKFUNCTION_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_IMAGETASKFUNCTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 图像任务控制选项
                */
                class ImageTaskFunction : public AbstractModel
                {
                public:
                    ImageTaskFunction();
                    ~ImageTaskFunction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取大教室场景学生肢体动作识别选项
                     * @return EnableActionClass 大教室场景学生肢体动作识别选项
                     * 
                     */
                    bool GetEnableActionClass() const;

                    /**
                     * 设置大教室场景学生肢体动作识别选项
                     * @param _enableActionClass 大教室场景学生肢体动作识别选项
                     * 
                     */
                    void SetEnableActionClass(const bool& _enableActionClass);

                    /**
                     * 判断参数 EnableActionClass 是否已赋值
                     * @return EnableActionClass 是否已赋值
                     * 
                     */
                    bool EnableActionClassHasBeenSet() const;

                    /**
                     * 获取人脸检测选项（默认为true，目前不可编辑）
                     * @return EnableFaceDetect 人脸检测选项（默认为true，目前不可编辑）
                     * 
                     */
                    bool GetEnableFaceDetect() const;

                    /**
                     * 设置人脸检测选项（默认为true，目前不可编辑）
                     * @param _enableFaceDetect 人脸检测选项（默认为true，目前不可编辑）
                     * 
                     */
                    void SetEnableFaceDetect(const bool& _enableFaceDetect);

                    /**
                     * 判断参数 EnableFaceDetect 是否已赋值
                     * @return EnableFaceDetect 是否已赋值
                     * 
                     */
                    bool EnableFaceDetectHasBeenSet() const;

                    /**
                     * 获取人脸表情识别选项
                     * @return EnableFaceExpression 人脸表情识别选项
                     * 
                     */
                    bool GetEnableFaceExpression() const;

                    /**
                     * 设置人脸表情识别选项
                     * @param _enableFaceExpression 人脸表情识别选项
                     * 
                     */
                    void SetEnableFaceExpression(const bool& _enableFaceExpression);

                    /**
                     * 判断参数 EnableFaceExpression 是否已赋值
                     * @return EnableFaceExpression 是否已赋值
                     * 
                     */
                    bool EnableFaceExpressionHasBeenSet() const;

                    /**
                     * 获取人脸检索选项（默认为true，目前不可编辑）
                     * @return EnableFaceIdentify 人脸检索选项（默认为true，目前不可编辑）
                     * 
                     */
                    bool GetEnableFaceIdentify() const;

                    /**
                     * 设置人脸检索选项（默认为true，目前不可编辑）
                     * @param _enableFaceIdentify 人脸检索选项（默认为true，目前不可编辑）
                     * 
                     */
                    void SetEnableFaceIdentify(const bool& _enableFaceIdentify);

                    /**
                     * 判断参数 EnableFaceIdentify 是否已赋值
                     * @return EnableFaceIdentify 是否已赋值
                     * 
                     */
                    bool EnableFaceIdentifyHasBeenSet() const;

                    /**
                     * 获取手势选项
                     * @return EnableGesture 手势选项
                     * 
                     */
                    bool GetEnableGesture() const;

                    /**
                     * 设置手势选项
                     * @param _enableGesture 手势选项
                     * 
                     */
                    void SetEnableGesture(const bool& _enableGesture);

                    /**
                     * 判断参数 EnableGesture 是否已赋值
                     * @return EnableGesture 是否已赋值
                     * 
                     */
                    bool EnableGestureHasBeenSet() const;

                    /**
                     * 获取优图手势选项（该功能尚未支持）
                     * @return EnableHandTracking 优图手势选项（该功能尚未支持）
                     * 
                     */
                    bool GetEnableHandTracking() const;

                    /**
                     * 设置优图手势选项（该功能尚未支持）
                     * @param _enableHandTracking 优图手势选项（该功能尚未支持）
                     * 
                     */
                    void SetEnableHandTracking(const bool& _enableHandTracking);

                    /**
                     * 判断参数 EnableHandTracking 是否已赋值
                     * @return EnableHandTracking 是否已赋值
                     * 
                     */
                    bool EnableHandTrackingHasBeenSet() const;

                    /**
                     * 获取光照选项
                     * @return EnableLightJudge 光照选项
                     * 
                     */
                    bool GetEnableLightJudge() const;

                    /**
                     * 设置光照选项
                     * @param _enableLightJudge 光照选项
                     * 
                     */
                    void SetEnableLightJudge(const bool& _enableLightJudge);

                    /**
                     * 判断参数 EnableLightJudge 是否已赋值
                     * @return EnableLightJudge 是否已赋值
                     * 
                     */
                    bool EnableLightJudgeHasBeenSet() const;

                    /**
                     * 获取小班课场景学生肢体动作识别选项
                     * @return EnableStudentBodyMovements 小班课场景学生肢体动作识别选项
                     * 
                     */
                    bool GetEnableStudentBodyMovements() const;

                    /**
                     * 设置小班课场景学生肢体动作识别选项
                     * @param _enableStudentBodyMovements 小班课场景学生肢体动作识别选项
                     * 
                     */
                    void SetEnableStudentBodyMovements(const bool& _enableStudentBodyMovements);

                    /**
                     * 判断参数 EnableStudentBodyMovements 是否已赋值
                     * @return EnableStudentBodyMovements 是否已赋值
                     * 
                     */
                    bool EnableStudentBodyMovementsHasBeenSet() const;

                    /**
                     * 获取教师动作选项（该功能尚未支持）
                     * @return EnableTeacherBodyMovements 教师动作选项（该功能尚未支持）
                     * 
                     */
                    bool GetEnableTeacherBodyMovements() const;

                    /**
                     * 设置教师动作选项（该功能尚未支持）
                     * @param _enableTeacherBodyMovements 教师动作选项（该功能尚未支持）
                     * 
                     */
                    void SetEnableTeacherBodyMovements(const bool& _enableTeacherBodyMovements);

                    /**
                     * 判断参数 EnableTeacherBodyMovements 是否已赋值
                     * @return EnableTeacherBodyMovements 是否已赋值
                     * 
                     */
                    bool EnableTeacherBodyMovementsHasBeenSet() const;

                    /**
                     * 获取判断老师是否在屏幕中（该功能尚未支持）
                     * @return EnableTeacherOutScreen 判断老师是否在屏幕中（该功能尚未支持）
                     * 
                     */
                    bool GetEnableTeacherOutScreen() const;

                    /**
                     * 设置判断老师是否在屏幕中（该功能尚未支持）
                     * @param _enableTeacherOutScreen 判断老师是否在屏幕中（该功能尚未支持）
                     * 
                     */
                    void SetEnableTeacherOutScreen(const bool& _enableTeacherOutScreen);

                    /**
                     * 判断参数 EnableTeacherOutScreen 是否已赋值
                     * @return EnableTeacherOutScreen 是否已赋值
                     * 
                     */
                    bool EnableTeacherOutScreenHasBeenSet() const;

                private:

                    /**
                     * 大教室场景学生肢体动作识别选项
                     */
                    bool m_enableActionClass;
                    bool m_enableActionClassHasBeenSet;

                    /**
                     * 人脸检测选项（默认为true，目前不可编辑）
                     */
                    bool m_enableFaceDetect;
                    bool m_enableFaceDetectHasBeenSet;

                    /**
                     * 人脸表情识别选项
                     */
                    bool m_enableFaceExpression;
                    bool m_enableFaceExpressionHasBeenSet;

                    /**
                     * 人脸检索选项（默认为true，目前不可编辑）
                     */
                    bool m_enableFaceIdentify;
                    bool m_enableFaceIdentifyHasBeenSet;

                    /**
                     * 手势选项
                     */
                    bool m_enableGesture;
                    bool m_enableGestureHasBeenSet;

                    /**
                     * 优图手势选项（该功能尚未支持）
                     */
                    bool m_enableHandTracking;
                    bool m_enableHandTrackingHasBeenSet;

                    /**
                     * 光照选项
                     */
                    bool m_enableLightJudge;
                    bool m_enableLightJudgeHasBeenSet;

                    /**
                     * 小班课场景学生肢体动作识别选项
                     */
                    bool m_enableStudentBodyMovements;
                    bool m_enableStudentBodyMovementsHasBeenSet;

                    /**
                     * 教师动作选项（该功能尚未支持）
                     */
                    bool m_enableTeacherBodyMovements;
                    bool m_enableTeacherBodyMovementsHasBeenSet;

                    /**
                     * 判断老师是否在屏幕中（该功能尚未支持）
                     */
                    bool m_enableTeacherOutScreen;
                    bool m_enableTeacherOutScreenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_IMAGETASKFUNCTION_H_
