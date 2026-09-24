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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_THINKING_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_THINKING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * 模型思考强度
                */
                class Thinking : public AbstractModel
                {
                public:
                    Thinking();
                    ~Thinking() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模式</p><p>枚举值：</p><ul><li>toggle： 可开关</li><li>always_on： 固定开启</li><li>always_off： 固定关闭</li><li>unconfigured： 未配置</li></ul>
                     * @return Mode <p>模式</p><p>枚举值：</p><ul><li>toggle： 可开关</li><li>always_on： 固定开启</li><li>always_off： 固定关闭</li><li>unconfigured： 未配置</li></ul>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>模式</p><p>枚举值：</p><ul><li>toggle： 可开关</li><li>always_on： 固定开启</li><li>always_off： 固定关闭</li><li>unconfigured： 未配置</li></ul>
                     * @param _mode <p>模式</p><p>枚举值：</p><ul><li>toggle： 可开关</li><li>always_on： 固定开启</li><li>always_off： 固定关闭</li><li>unconfigured： 未配置</li></ul>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>默认是否开启思考</p>
                     * @return DefaultEnabled <p>默认是否开启思考</p>
                     * 
                     */
                    bool GetDefaultEnabled() const;

                    /**
                     * 设置<p>默认是否开启思考</p>
                     * @param _defaultEnabled <p>默认是否开启思考</p>
                     * 
                     */
                    void SetDefaultEnabled(const bool& _defaultEnabled);

                    /**
                     * 判断参数 DefaultEnabled 是否已赋值
                     * @return DefaultEnabled 是否已赋值
                     * 
                     */
                    bool DefaultEnabledHasBeenSet() const;

                    /**
                     * 获取<p>思考强度可选项，如 [&quot;high&quot;,&quot;max&quot;]</p>
                     * @return EffortOptions <p>思考强度可选项，如 [&quot;high&quot;,&quot;max&quot;]</p>
                     * 
                     */
                    std::vector<std::string> GetEffortOptions() const;

                    /**
                     * 设置<p>思考强度可选项，如 [&quot;high&quot;,&quot;max&quot;]</p>
                     * @param _effortOptions <p>思考强度可选项，如 [&quot;high&quot;,&quot;max&quot;]</p>
                     * 
                     */
                    void SetEffortOptions(const std::vector<std::string>& _effortOptions);

                    /**
                     * 判断参数 EffortOptions 是否已赋值
                     * @return EffortOptions 是否已赋值
                     * 
                     */
                    bool EffortOptionsHasBeenSet() const;

                    /**
                     * 获取<p>默认思考强度</p>
                     * @return DefaultEffort <p>默认思考强度</p>
                     * 
                     */
                    std::string GetDefaultEffort() const;

                    /**
                     * 设置<p>默认思考强度</p>
                     * @param _defaultEffort <p>默认思考强度</p>
                     * 
                     */
                    void SetDefaultEffort(const std::string& _defaultEffort);

                    /**
                     * 判断参数 DefaultEffort 是否已赋值
                     * @return DefaultEffort 是否已赋值
                     * 
                     */
                    bool DefaultEffortHasBeenSet() const;

                private:

                    /**
                     * <p>模式</p><p>枚举值：</p><ul><li>toggle： 可开关</li><li>always_on： 固定开启</li><li>always_off： 固定关闭</li><li>unconfigured： 未配置</li></ul>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>默认是否开启思考</p>
                     */
                    bool m_defaultEnabled;
                    bool m_defaultEnabledHasBeenSet;

                    /**
                     * <p>思考强度可选项，如 [&quot;high&quot;,&quot;max&quot;]</p>
                     */
                    std::vector<std::string> m_effortOptions;
                    bool m_effortOptionsHasBeenSet;

                    /**
                     * <p>默认思考强度</p>
                     */
                    std::string m_defaultEffort;
                    bool m_defaultEffortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_THINKING_H_
