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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOENHANCEEDITCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOENHANCEEDITCONFIG_H_

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
                * 音频增强编辑
                */
                class AudioEnhanceEditConfig : public AbstractModel
                {
                public:
                    AudioEnhanceEditConfig();
                    ~AudioEnhanceEditConfig() = default;
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
                     * 获取<p>音频编辑类型</p><p>枚举值：</p><ul><li>restore： 修复</li></ul><p>默认值：restore</p>
                     * @return Type <p>音频编辑类型</p><p>枚举值：</p><ul><li>restore： 修复</li></ul><p>默认值：restore</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>音频编辑类型</p><p>枚举值：</p><ul><li>restore： 修复</li></ul><p>默认值：restore</p>
                     * @param _type <p>音频编辑类型</p><p>枚举值：</p><ul><li>restore： 修复</li></ul><p>默认值：restore</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>能力配置开关</p><p>枚举值：</p><ul><li>ON： 开启</li><li>OFF： 关闭</li></ul><p>默认值：OFF</p>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>音频编辑类型</p><p>枚举值：</p><ul><li>restore： 修复</li></ul><p>默认值：restore</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOENHANCEEDITCONFIG_H_
