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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUPERRESOLUTIONCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUPERRESOLUTIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 超分配置
                */
                class SuperResolutionConfig : public AbstractModel
                {
                public:
                    SuperResolutionConfig();
                    ~SuperResolutionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
                     * @return Switch 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
                     * @param _switch 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
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
                     * 获取类型，可选值：
<li>lq：针对低清晰度有较多噪声视频的超分；</li>
<li>hq：针对高清晰度视频超分。</li>
默认值：lq。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 类型，可选值：
<li>lq：针对低清晰度有较多噪声视频的超分；</li>
<li>hq：针对高清晰度视频超分。</li>
默认值：lq。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型，可选值：
<li>lq：针对低清晰度有较多噪声视频的超分；</li>
<li>hq：针对高清晰度视频超分。</li>
默认值：lq。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 类型，可选值：
<li>lq：针对低清晰度有较多噪声视频的超分；</li>
<li>hq：针对高清晰度视频超分。</li>
默认值：lq。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取超分倍数，可选值：
<li>2：目前只支持 2 倍超分。</li>
默认值：2。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size 超分倍数，可选值：
<li>2：目前只支持 2 倍超分。</li>
默认值：2。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置超分倍数，可选值：
<li>2：目前只支持 2 倍超分。</li>
默认值：2。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _size 超分倍数，可选值：
<li>2：目前只支持 2 倍超分。</li>
默认值：2。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                private:

                    /**
                     * 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 类型，可选值：
<li>lq：针对低清晰度有较多噪声视频的超分；</li>
<li>hq：针对高清晰度视频超分。</li>
默认值：lq。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 超分倍数，可选值：
<li>2：目前只支持 2 倍超分。</li>
默认值：2。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUPERRESOLUTIONCONFIG_H_
