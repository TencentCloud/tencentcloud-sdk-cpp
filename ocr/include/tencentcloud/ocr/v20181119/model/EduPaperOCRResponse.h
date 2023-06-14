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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_EDUPAPEROCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_EDUPAPEROCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/TextEduPaper.h>
#include <tencentcloud/ocr/v20181119/model/QuestionBlockObj.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * EduPaperOCR返回参数结构体
                */
                class EduPaperOCRResponse : public AbstractModel
                {
                public:
                    EduPaperOCRResponse();
                    ~EduPaperOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检测到的文本信息，具体内容请点击左侧链接。
                     * @return EduPaperInfos 检测到的文本信息，具体内容请点击左侧链接。
                     * 
                     */
                    std::vector<TextEduPaper> GetEduPaperInfos() const;

                    /**
                     * 判断参数 EduPaperInfos 是否已赋值
                     * @return EduPaperInfos 是否已赋值
                     * 
                     */
                    bool EduPaperInfosHasBeenSet() const;

                    /**
                     * 获取图片旋转角度（角度制），文本的水平方向为0°；顺时针为正，逆时针为负。
                     * @return Angle 图片旋转角度（角度制），文本的水平方向为0°；顺时针为正，逆时针为负。
                     * 
                     */
                    int64_t GetAngle() const;

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                    /**
                     * 获取结构化方式输出，具体内容请点击左侧链接。
                     * @return QuestionBlockInfos 结构化方式输出，具体内容请点击左侧链接。
                     * 
                     */
                    std::vector<QuestionBlockObj> GetQuestionBlockInfos() const;

                    /**
                     * 判断参数 QuestionBlockInfos 是否已赋值
                     * @return QuestionBlockInfos 是否已赋值
                     * 
                     */
                    bool QuestionBlockInfosHasBeenSet() const;

                private:

                    /**
                     * 检测到的文本信息，具体内容请点击左侧链接。
                     */
                    std::vector<TextEduPaper> m_eduPaperInfos;
                    bool m_eduPaperInfosHasBeenSet;

                    /**
                     * 图片旋转角度（角度制），文本的水平方向为0°；顺时针为正，逆时针为负。
                     */
                    int64_t m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * 结构化方式输出，具体内容请点击左侧链接。
                     */
                    std::vector<QuestionBlockObj> m_questionBlockInfos;
                    bool m_questionBlockInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_EDUPAPEROCRRESPONSE_H_
