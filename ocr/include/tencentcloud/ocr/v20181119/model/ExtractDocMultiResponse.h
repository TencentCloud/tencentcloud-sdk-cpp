/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCMULTIRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCMULTIRESPONSE_H_

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
                * ExtractDocMulti返回参数结构体
                */
                class ExtractDocMultiResponse : public AbstractModel
                {
                public:
                    ExtractDocMultiResponse();
                    ~ExtractDocMultiResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>图片旋转角度(角度制)，文本的水平方向为 0；顺时针为正，逆时针为负</p>
                     * @return Angle <p>图片旋转角度(角度制)，文本的水平方向为 0；顺时针为正，逆时针为负</p>
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
                     * 获取<p>配置结构化文本信息</p>
                     * @return StructuralList <p>配置结构化文本信息</p>
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
                     * 获取<p>还原文本信息</p>
                     * @return WordList <p>还原文本信息</p>
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
                     * 获取<p>样本识别字段数</p>
                     * @return TokenNum <p>样本识别字段数</p>
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
                     * <p>图片旋转角度(角度制)，文本的水平方向为 0；顺时针为正，逆时针为负</p>
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * <p>配置结构化文本信息</p>
                     */
                    std::vector<GroupInfo> m_structuralList;
                    bool m_structuralListHasBeenSet;

                    /**
                     * <p>还原文本信息</p>
                     */
                    std::vector<WordItem> m_wordList;
                    bool m_wordListHasBeenSet;

                    /**
                     * <p>样本识别字段数</p>
                     */
                    int64_t m_tokenNum;
                    bool m_tokenNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCMULTIRESPONSE_H_
