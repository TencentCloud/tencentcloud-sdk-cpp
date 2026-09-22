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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CMSBIZINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CMSBIZINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 天御内容安全 策略基本信息。
                */
                class CMSBizInfo : public AbstractModel
                {
                public:
                    CMSBizInfo();
                    ~CMSBizInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>策略类型，可选值：<br>Text：文本ShortAudio：音频<br>Image:<br>图片。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyType <p>策略类型，可选值：<br>Text：文本ShortAudio：音频<br>Image:<br>图片。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置<p>策略类型，可选值：<br>Text：文本ShortAudio：音频<br>Image:<br>图片。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyType <p>策略类型，可选值：<br>Text：文本ShortAudio：音频<br>Image:<br>图片。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取<p>策略标识（自动生成）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizType <p>策略标识（自动生成）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置<p>策略标识（自动生成）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizType <p>策略标识（自动生成）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取<p>策略开通状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>策略开通状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>策略开通状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>策略开通状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>策略配置。<br>json字符串。</p><p>具体取值方式如下：举例：色情：&quot;{"ability":{"asr_text":true,"audio":true},"asr_text_labels":{"porn":["OVR","Pornography","PornographyObscene"]},"audio_labels":{},"user_text_libs":["320fb40e-9305-4b00-a191-945c219b5cc0"]}&quot;    可选项： {     value: &#39;OVR&#39;,     text: t(&#39;低俗语音识别&#39;),     msg: t(&#39;示例：呻吟、娇喘、娇喘等性暗示相关的语音&#39;),   },   {     value: &#39;Pornography&#39;,     text: t(&#39;严重色情&#39;),     msg: t(&#39;性行为、性器官等相关描述&#39;),   },   {     value: &#39;PornographyObscene&#39;,     text: t(&#39;色情低俗&#39;),     msg: t(&#39;低俗行为、性暗示等相关描述&#39;),   }</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyConfig <p>策略配置。<br>json字符串。</p><p>具体取值方式如下：举例：色情：&quot;{"ability":{"asr_text":true,"audio":true},"asr_text_labels":{"porn":["OVR","Pornography","PornographyObscene"]},"audio_labels":{},"user_text_libs":["320fb40e-9305-4b00-a191-945c219b5cc0"]}&quot;    可选项： {     value: &#39;OVR&#39;,     text: t(&#39;低俗语音识别&#39;),     msg: t(&#39;示例：呻吟、娇喘、娇喘等性暗示相关的语音&#39;),   },   {     value: &#39;Pornography&#39;,     text: t(&#39;严重色情&#39;),     msg: t(&#39;性行为、性器官等相关描述&#39;),   },   {     value: &#39;PornographyObscene&#39;,     text: t(&#39;色情低俗&#39;),     msg: t(&#39;低俗行为、性暗示等相关描述&#39;),   }</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrategyConfig() const;

                    /**
                     * 设置<p>策略配置。<br>json字符串。</p><p>具体取值方式如下：举例：色情：&quot;{"ability":{"asr_text":true,"audio":true},"asr_text_labels":{"porn":["OVR","Pornography","PornographyObscene"]},"audio_labels":{},"user_text_libs":["320fb40e-9305-4b00-a191-945c219b5cc0"]}&quot;    可选项： {     value: &#39;OVR&#39;,     text: t(&#39;低俗语音识别&#39;),     msg: t(&#39;示例：呻吟、娇喘、娇喘等性暗示相关的语音&#39;),   },   {     value: &#39;Pornography&#39;,     text: t(&#39;严重色情&#39;),     msg: t(&#39;性行为、性器官等相关描述&#39;),   },   {     value: &#39;PornographyObscene&#39;,     text: t(&#39;色情低俗&#39;),     msg: t(&#39;低俗行为、性暗示等相关描述&#39;),   }</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyConfig <p>策略配置。<br>json字符串。</p><p>具体取值方式如下：举例：色情：&quot;{"ability":{"asr_text":true,"audio":true},"asr_text_labels":{"porn":["OVR","Pornography","PornographyObscene"]},"audio_labels":{},"user_text_libs":["320fb40e-9305-4b00-a191-945c219b5cc0"]}&quot;    可选项： {     value: &#39;OVR&#39;,     text: t(&#39;低俗语音识别&#39;),     msg: t(&#39;示例：呻吟、娇喘、娇喘等性暗示相关的语音&#39;),   },   {     value: &#39;Pornography&#39;,     text: t(&#39;严重色情&#39;),     msg: t(&#39;性行为、性器官等相关描述&#39;),   },   {     value: &#39;PornographyObscene&#39;,     text: t(&#39;色情低俗&#39;),     msg: t(&#39;低俗行为、性暗示等相关描述&#39;),   }</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyConfig(const std::string& _strategyConfig);

                    /**
                     * 判断参数 StrategyConfig 是否已赋值
                     * @return StrategyConfig 是否已赋值
                     * 
                     */
                    bool StrategyConfigHasBeenSet() const;

                private:

                    /**
                     * <p>策略类型，可选值：<br>Text：文本ShortAudio：音频<br>Image:<br>图片。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * <p>策略标识（自动生成）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * <p>策略开通状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>策略配置。<br>json字符串。</p><p>具体取值方式如下：举例：色情：&quot;{"ability":{"asr_text":true,"audio":true},"asr_text_labels":{"porn":["OVR","Pornography","PornographyObscene"]},"audio_labels":{},"user_text_libs":["320fb40e-9305-4b00-a191-945c219b5cc0"]}&quot;    可选项： {     value: &#39;OVR&#39;,     text: t(&#39;低俗语音识别&#39;),     msg: t(&#39;示例：呻吟、娇喘、娇喘等性暗示相关的语音&#39;),   },   {     value: &#39;Pornography&#39;,     text: t(&#39;严重色情&#39;),     msg: t(&#39;性行为、性器官等相关描述&#39;),   },   {     value: &#39;PornographyObscene&#39;,     text: t(&#39;色情低俗&#39;),     msg: t(&#39;低俗行为、性暗示等相关描述&#39;),   }</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyConfig;
                    bool m_strategyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CMSBIZINFO_H_
