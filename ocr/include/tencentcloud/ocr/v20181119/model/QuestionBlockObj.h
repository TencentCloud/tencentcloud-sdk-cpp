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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_QUESTIONBLOCKOBJ_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_QUESTIONBLOCKOBJ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/QuestionObj.h>
#include <tencentcloud/ocr/v20181119/model/Rect.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 数学试题识别结构化对象
                */
                class QuestionBlockObj : public AbstractModel
                {
                public:
                    QuestionBlockObj();
                    ~QuestionBlockObj() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数学试题识别结构化信息数组
                     * @return QuestionArr 数学试题识别结构化信息数组
                     * 
                     */
                    std::vector<QuestionObj> GetQuestionArr() const;

                    /**
                     * 设置数学试题识别结构化信息数组
                     * @param _questionArr 数学试题识别结构化信息数组
                     * 
                     */
                    void SetQuestionArr(const std::vector<QuestionObj>& _questionArr);

                    /**
                     * 判断参数 QuestionArr 是否已赋值
                     * @return QuestionArr 是否已赋值
                     * 
                     */
                    bool QuestionArrHasBeenSet() const;

                    /**
                     * 获取题目主体区域检测框在图片中的像素坐标
                     * @return QuestionBboxCoord 题目主体区域检测框在图片中的像素坐标
                     * 
                     */
                    Rect GetQuestionBboxCoord() const;

                    /**
                     * 设置题目主体区域检测框在图片中的像素坐标
                     * @param _questionBboxCoord 题目主体区域检测框在图片中的像素坐标
                     * 
                     */
                    void SetQuestionBboxCoord(const Rect& _questionBboxCoord);

                    /**
                     * 判断参数 QuestionBboxCoord 是否已赋值
                     * @return QuestionBboxCoord 是否已赋值
                     * 
                     */
                    bool QuestionBboxCoordHasBeenSet() const;

                private:

                    /**
                     * 数学试题识别结构化信息数组
                     */
                    std::vector<QuestionObj> m_questionArr;
                    bool m_questionArrHasBeenSet;

                    /**
                     * 题目主体区域检测框在图片中的像素坐标
                     */
                    Rect m_questionBboxCoord;
                    bool m_questionBboxCoordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_QUESTIONBLOCKOBJ_H_
