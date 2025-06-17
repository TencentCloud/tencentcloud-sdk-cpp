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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ADDBLINDWATERMARKCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ADDBLINDWATERMARKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/BlindWatermarkEmbedInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 增加盲水印配置
                */
                class AddBlindWatermarkConfig : public AbstractModel
                {
                public:
                    AddBlindWatermarkConfig();
                    ~AddBlindWatermarkConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取盲水印嵌入数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmbedInfo 盲水印嵌入数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlindWatermarkEmbedInfo GetEmbedInfo() const;

                    /**
                     * 设置盲水印嵌入数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _embedInfo 盲水印嵌入数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEmbedInfo(const BlindWatermarkEmbedInfo& _embedInfo);

                    /**
                     * 判断参数 EmbedInfo 是否已赋值
                     * @return EmbedInfo 是否已赋值
                     * 
                     */
                    bool EmbedInfoHasBeenSet() const;

                private:

                    /**
                     * 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 盲水印嵌入数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlindWatermarkEmbedInfo m_embedInfo;
                    bool m_embedInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADDBLINDWATERMARKCONFIG_H_
