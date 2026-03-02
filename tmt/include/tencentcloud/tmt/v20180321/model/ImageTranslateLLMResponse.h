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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATELLMRESPONSE_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATELLMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tmt/v20180321/model/TransDetail.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * ImageTranslateLLM返回参数结构体
                */
                class ImageTranslateLLMResponse : public AbstractModel
                {
                public:
                    ImageTranslateLLMResponse();
                    ~ImageTranslateLLMResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>图片数据的Base64字符串，输出格式为JPG。</p>
                     * @return Data <p>图片数据的Base64字符串，输出格式为JPG。</p>
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>原文本主要源语言。</p>
                     * @return Source <p>原文本主要源语言。</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>目标翻译语言。</p>
                     * @return Target <p>目标翻译语言。</p>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>图片中的全部原文本。</p>
                     * @return SourceText <p>图片中的全部原文本。</p>
                     * 
                     */
                    std::string GetSourceText() const;

                    /**
                     * 判断参数 SourceText 是否已赋值
                     * @return SourceText 是否已赋值
                     * 
                     */
                    bool SourceTextHasBeenSet() const;

                    /**
                     * 获取<p>图片中全部译文。</p>
                     * @return TargetText <p>图片中全部译文。</p>
                     * 
                     */
                    std::string GetTargetText() const;

                    /**
                     * 判断参数 TargetText 是否已赋值
                     * @return TargetText 是否已赋值
                     * 
                     */
                    bool TargetTextHasBeenSet() const;

                    /**
                     * 获取<p>逆时针图片角度，取值范围为0-359</p>
                     * @return Angle <p>逆时针图片角度，取值范围为0-359</p>
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
                     * 获取<p>翻译详情信息</p>
                     * @return TransDetails <p>翻译详情信息</p>
                     * 
                     */
                    std::vector<TransDetail> GetTransDetails() const;

                    /**
                     * 判断参数 TransDetails 是否已赋值
                     * @return TransDetails 是否已赋值
                     * 
                     */
                    bool TransDetailsHasBeenSet() const;

                private:

                    /**
                     * <p>图片数据的Base64字符串，输出格式为JPG。</p>
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>原文本主要源语言。</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>目标翻译语言。</p>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>图片中的全部原文本。</p>
                     */
                    std::string m_sourceText;
                    bool m_sourceTextHasBeenSet;

                    /**
                     * <p>图片中全部译文。</p>
                     */
                    std::string m_targetText;
                    bool m_targetTextHasBeenSet;

                    /**
                     * <p>逆时针图片角度，取值范围为0-359</p>
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * <p>翻译详情信息</p>
                     */
                    std::vector<TransDetail> m_transDetails;
                    bool m_transDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATELLMRESPONSE_H_
