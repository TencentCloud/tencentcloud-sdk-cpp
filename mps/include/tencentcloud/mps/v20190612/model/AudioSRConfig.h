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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOSRCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOSRCONFIG_H_

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
                * 音频超分配置
                */
                class AudioSRConfig : public AbstractModel
                {
                public:
                    AudioSRConfig();
                    ~AudioSRConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>能力配置开关</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p>
                     * @return Switch <p>能力配置开关</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>能力配置开关</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p>
                     * @param _switch <p>能力配置开关</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p>
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
                     * 获取<p>音频超分类型</p><p>枚举值：</p><ul><li>premium_hd： 臻品高清版</li><li>premium_master： 臻品母带版</li></ul><p>默认值：premium_hd</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>音频超分类型</p><p>枚举值：</p><ul><li>premium_hd： 臻品高清版</li><li>premium_master： 臻品母带版</li></ul><p>默认值：premium_hd</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>音频超分类型</p><p>枚举值：</p><ul><li>premium_hd： 臻品高清版</li><li>premium_master： 臻品母带版</li></ul><p>默认值：premium_hd</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>音频超分类型</p><p>枚举值：</p><ul><li>premium_hd： 臻品高清版</li><li>premium_master： 臻品母带版</li></ul><p>默认值：premium_hd</p>
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
                     * 获取<p>目标采样率</p><p>枚举值：</p><ul><li>44100： 44.1kHz</li><li>48000： 48kHz</li><li>64000： 64kHz</li><li>88200： 88.2kHz</li><li>96000： 96kHz</li><li>192000： 192kHz</li></ul><p>默认值：48000</p><p>其中 192kHz 仅臻品母带版才可以使用</p>
                     * @return Value <p>目标采样率</p><p>枚举值：</p><ul><li>44100： 44.1kHz</li><li>48000： 48kHz</li><li>64000： 64kHz</li><li>88200： 88.2kHz</li><li>96000： 96kHz</li><li>192000： 192kHz</li></ul><p>默认值：48000</p><p>其中 192kHz 仅臻品母带版才可以使用</p>
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置<p>目标采样率</p><p>枚举值：</p><ul><li>44100： 44.1kHz</li><li>48000： 48kHz</li><li>64000： 64kHz</li><li>88200： 88.2kHz</li><li>96000： 96kHz</li><li>192000： 192kHz</li></ul><p>默认值：48000</p><p>其中 192kHz 仅臻品母带版才可以使用</p>
                     * @param _value <p>目标采样率</p><p>枚举值：</p><ul><li>44100： 44.1kHz</li><li>48000： 48kHz</li><li>64000： 64kHz</li><li>88200： 88.2kHz</li><li>96000： 96kHz</li><li>192000： 192kHz</li></ul><p>默认值：48000</p><p>其中 192kHz 仅臻品母带版才可以使用</p>
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * <p>能力配置开关</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>音频超分类型</p><p>枚举值：</p><ul><li>premium_hd： 臻品高清版</li><li>premium_master： 臻品母带版</li></ul><p>默认值：premium_hd</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>目标采样率</p><p>枚举值：</p><ul><li>44100： 44.1kHz</li><li>48000： 48kHz</li><li>64000： 64kHz</li><li>88200： 88.2kHz</li><li>96000： 96kHz</li><li>192000： 192kHz</li></ul><p>默认值：48000</p><p>其中 192kHz 仅臻品母带版才可以使用</p>
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOSRCONFIG_H_
