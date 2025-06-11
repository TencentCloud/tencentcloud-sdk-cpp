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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCMULTIPRORESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCMULTIPRORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/GroupInfo.h>
#include <tencentcloud/ocr/v20181119/model/WordItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * ExtractDocMultiPro返回参数结构体
                */
                class ExtractDocMultiProResponse : public AbstractModel
                {
                public:
                    ExtractDocMultiProResponse();
                    ~ExtractDocMultiProResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取图片旋转角度(角度制)，文本的水平方向为 0；顺时针为正，逆时针为负
                     * @return Angle 图片旋转角度(角度制)，文本的水平方向为 0；顺时针为正，逆时针为负
                     * 
                     */
                    double GetAngle() const;

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                    /**
                     * 获取配置结构化文本信息
                     * @return StructuralList 配置结构化文本信息
                     * 
                     */
                    std::vector<GroupInfo> GetStructuralList() const;

                    /**
                     * 判断参数 StructuralList 是否已赋值
                     * @return StructuralList 是否已赋值
                     * 
                     */
                    bool StructuralListHasBeenSet() const;

                    /**
                     * 获取还原文本信息
                     * @return WordList 还原文本信息
                     * 
                     */
                    std::vector<WordItem> GetWordList() const;

                    /**
                     * 判断参数 WordList 是否已赋值
                     * @return WordList 是否已赋值
                     * 
                     */
                    bool WordListHasBeenSet() const;

                    /**
                     * 获取样本识别字段数
                     * @return TokenNum 样本识别字段数
                     * 
                     */
                    int64_t GetTokenNum() const;

                    /**
                     * 判断参数 TokenNum 是否已赋值
                     * @return TokenNum 是否已赋值
                     * 
                     */
                    bool TokenNumHasBeenSet() const;

                private:

                    /**
                     * 图片旋转角度(角度制)，文本的水平方向为 0；顺时针为正，逆时针为负
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * 配置结构化文本信息
                     */
                    std::vector<GroupInfo> m_structuralList;
                    bool m_structuralListHasBeenSet;

                    /**
                     * 还原文本信息
                     */
                    std::vector<WordItem> m_wordList;
                    bool m_wordListHasBeenSet;

                    /**
                     * 样本识别字段数
                     */
                    int64_t m_tokenNum;
                    bool m_tokenNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCMULTIPRORESPONSE_H_
