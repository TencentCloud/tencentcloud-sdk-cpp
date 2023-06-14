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

#ifndef TENCENTCLOUD_SOE_V20180724_MODEL_KEYWORD_H_
#define TENCENTCLOUD_SOE_V20180724_MODEL_KEYWORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Soe
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 评测关键词
                */
                class Keyword : public AbstractModel
                {
                public:
                    Keyword();
                    ~Keyword() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取被评估语音对应的文本，句子模式下不超过 20个单词或者中文文字，段落模式不超过 120个单词或者中文文字，中文文字需使用 utf-8 编码，自由说模式RefText可以不填。如需要在单词模式和句子模式下使用自定义音素，可以通过设置 TextMode 使用[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     * @return RefText 被评估语音对应的文本，句子模式下不超过 20个单词或者中文文字，段落模式不超过 120个单词或者中文文字，中文文字需使用 utf-8 编码，自由说模式RefText可以不填。如需要在单词模式和句子模式下使用自定义音素，可以通过设置 TextMode 使用[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     * 
                     */
                    std::string GetRefText() const;

                    /**
                     * 设置被评估语音对应的文本，句子模式下不超过 20个单词或者中文文字，段落模式不超过 120个单词或者中文文字，中文文字需使用 utf-8 编码，自由说模式RefText可以不填。如需要在单词模式和句子模式下使用自定义音素，可以通过设置 TextMode 使用[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     * @param _refText 被评估语音对应的文本，句子模式下不超过 20个单词或者中文文字，段落模式不超过 120个单词或者中文文字，中文文字需使用 utf-8 编码，自由说模式RefText可以不填。如需要在单词模式和句子模式下使用自定义音素，可以通过设置 TextMode 使用[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     * 
                     */
                    void SetRefText(const std::string& _refText);

                    /**
                     * 判断参数 RefText 是否已赋值
                     * @return RefText 是否已赋值
                     * 
                     */
                    bool RefTextHasBeenSet() const;

                    /**
                     * 获取评估模式，0：词模式（中文评测模式下为文字模式），1：句子模式，2：段落模式，3：自由说模式，当为词模式评估时，能够提供每个音节的评估信息，当为句子模式时，能够提供完整度和流利度信息。
                     * @return EvalMode 评估模式，0：词模式（中文评测模式下为文字模式），1：句子模式，2：段落模式，3：自由说模式，当为词模式评估时，能够提供每个音节的评估信息，当为句子模式时，能够提供完整度和流利度信息。
                     * 
                     */
                    uint64_t GetEvalMode() const;

                    /**
                     * 设置评估模式，0：词模式（中文评测模式下为文字模式），1：句子模式，2：段落模式，3：自由说模式，当为词模式评估时，能够提供每个音节的评估信息，当为句子模式时，能够提供完整度和流利度信息。
                     * @param _evalMode 评估模式，0：词模式（中文评测模式下为文字模式），1：句子模式，2：段落模式，3：自由说模式，当为词模式评估时，能够提供每个音节的评估信息，当为句子模式时，能够提供完整度和流利度信息。
                     * 
                     */
                    void SetEvalMode(const uint64_t& _evalMode);

                    /**
                     * 判断参数 EvalMode 是否已赋值
                     * @return EvalMode 是否已赋值
                     * 
                     */
                    bool EvalModeHasBeenSet() const;

                    /**
                     * 获取评价苛刻指数，取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数，1.0为小年龄段，4.0为最高年龄段
                     * @return ScoreCoeff 评价苛刻指数，取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数，1.0为小年龄段，4.0为最高年龄段
                     * 
                     */
                    double GetScoreCoeff() const;

                    /**
                     * 设置评价苛刻指数，取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数，1.0为小年龄段，4.0为最高年龄段
                     * @param _scoreCoeff 评价苛刻指数，取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数，1.0为小年龄段，4.0为最高年龄段
                     * 
                     */
                    void SetScoreCoeff(const double& _scoreCoeff);

                    /**
                     * 判断参数 ScoreCoeff 是否已赋值
                     * @return ScoreCoeff 是否已赋值
                     * 
                     */
                    bool ScoreCoeffHasBeenSet() const;

                    /**
                     * 获取评估语言，0：英文，1：中文。
ServerType不填默认为0
                     * @return ServerType 评估语言，0：英文，1：中文。
ServerType不填默认为0
                     * 
                     */
                    uint64_t GetServerType() const;

                    /**
                     * 设置评估语言，0：英文，1：中文。
ServerType不填默认为0
                     * @param _serverType 评估语言，0：英文，1：中文。
ServerType不填默认为0
                     * 
                     */
                    void SetServerType(const uint64_t& _serverType);

                    /**
                     * 判断参数 ServerType 是否已赋值
                     * @return ServerType 是否已赋值
                     * 
                     */
                    bool ServerTypeHasBeenSet() const;

                    /**
                     * 获取输入文本模式，0: 普通文本，1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本。
                     * @return TextMode 输入文本模式，0: 普通文本，1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本。
                     * 
                     */
                    uint64_t GetTextMode() const;

                    /**
                     * 设置输入文本模式，0: 普通文本，1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本。
                     * @param _textMode 输入文本模式，0: 普通文本，1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本。
                     * 
                     */
                    void SetTextMode(const uint64_t& _textMode);

                    /**
                     * 判断参数 TextMode 是否已赋值
                     * @return TextMode 是否已赋值
                     * 
                     */
                    bool TextModeHasBeenSet() const;

                private:

                    /**
                     * 被评估语音对应的文本，句子模式下不超过 20个单词或者中文文字，段落模式不超过 120个单词或者中文文字，中文文字需使用 utf-8 编码，自由说模式RefText可以不填。如需要在单词模式和句子模式下使用自定义音素，可以通过设置 TextMode 使用[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     */
                    std::string m_refText;
                    bool m_refTextHasBeenSet;

                    /**
                     * 评估模式，0：词模式（中文评测模式下为文字模式），1：句子模式，2：段落模式，3：自由说模式，当为词模式评估时，能够提供每个音节的评估信息，当为句子模式时，能够提供完整度和流利度信息。
                     */
                    uint64_t m_evalMode;
                    bool m_evalModeHasBeenSet;

                    /**
                     * 评价苛刻指数，取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数，1.0为小年龄段，4.0为最高年龄段
                     */
                    double m_scoreCoeff;
                    bool m_scoreCoeffHasBeenSet;

                    /**
                     * 评估语言，0：英文，1：中文。
ServerType不填默认为0
                     */
                    uint64_t m_serverType;
                    bool m_serverTypeHasBeenSet;

                    /**
                     * 输入文本模式，0: 普通文本，1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本。
                     */
                    uint64_t m_textMode;
                    bool m_textModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOE_V20180724_MODEL_KEYWORD_H_
