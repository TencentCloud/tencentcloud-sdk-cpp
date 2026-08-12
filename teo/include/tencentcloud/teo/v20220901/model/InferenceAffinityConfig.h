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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEAFFINITYCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEAFFINITYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SessionIdAffinityConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 推理服务的亲和配置
                */
                class InferenceAffinityConfig : public AbstractModel
                {
                public:
                    InferenceAffinityConfig();
                    ~InferenceAffinityConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>推理服务亲和总开关。</p><p>枚举值：</p><ul><li>On： 开启推理服务亲和；</li><li>Off： 关闭推理服务亲和。</li></ul>
                     * @return Switch <p>推理服务亲和总开关。</p><p>枚举值：</p><ul><li>On： 开启推理服务亲和；</li><li>Off： 关闭推理服务亲和。</li></ul>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>推理服务亲和总开关。</p><p>枚举值：</p><ul><li>On： 开启推理服务亲和；</li><li>Off： 关闭推理服务亲和。</li></ul>
                     * @param _switch <p>推理服务亲和总开关。</p><p>枚举值：</p><ul><li>On： 开启推理服务亲和；</li><li>Off： 关闭推理服务亲和。</li></ul>
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
                     * 获取<p>推理服务亲和方式。</p><p>枚举值：</p><ul><li>SessionId： 根据会话 ID 实现亲和。</li></ul><p>默认值：SessionId。</p>
                     * @return AffinityMode <p>推理服务亲和方式。</p><p>枚举值：</p><ul><li>SessionId： 根据会话 ID 实现亲和。</li></ul><p>默认值：SessionId。</p>
                     * 
                     */
                    std::string GetAffinityMode() const;

                    /**
                     * 设置<p>推理服务亲和方式。</p><p>枚举值：</p><ul><li>SessionId： 根据会话 ID 实现亲和。</li></ul><p>默认值：SessionId。</p>
                     * @param _affinityMode <p>推理服务亲和方式。</p><p>枚举值：</p><ul><li>SessionId： 根据会话 ID 实现亲和。</li></ul><p>默认值：SessionId。</p>
                     * 
                     */
                    void SetAffinityMode(const std::string& _affinityMode);

                    /**
                     * 判断参数 AffinityMode 是否已赋值
                     * @return AffinityMode 是否已赋值
                     * 
                     */
                    bool AffinityModeHasBeenSet() const;

                    /**
                     * 获取<p>推理服务亲和性配置。当 AffinityMode 为 SessionId 时必填。</p>
                     * @return SessionIdAffinityConfig <p>推理服务亲和性配置。当 AffinityMode 为 SessionId 时必填。</p>
                     * 
                     */
                    SessionIdAffinityConfig GetSessionIdAffinityConfig() const;

                    /**
                     * 设置<p>推理服务亲和性配置。当 AffinityMode 为 SessionId 时必填。</p>
                     * @param _sessionIdAffinityConfig <p>推理服务亲和性配置。当 AffinityMode 为 SessionId 时必填。</p>
                     * 
                     */
                    void SetSessionIdAffinityConfig(const SessionIdAffinityConfig& _sessionIdAffinityConfig);

                    /**
                     * 判断参数 SessionIdAffinityConfig 是否已赋值
                     * @return SessionIdAffinityConfig 是否已赋值
                     * 
                     */
                    bool SessionIdAffinityConfigHasBeenSet() const;

                private:

                    /**
                     * <p>推理服务亲和总开关。</p><p>枚举值：</p><ul><li>On： 开启推理服务亲和；</li><li>Off： 关闭推理服务亲和。</li></ul>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>推理服务亲和方式。</p><p>枚举值：</p><ul><li>SessionId： 根据会话 ID 实现亲和。</li></ul><p>默认值：SessionId。</p>
                     */
                    std::string m_affinityMode;
                    bool m_affinityModeHasBeenSet;

                    /**
                     * <p>推理服务亲和性配置。当 AffinityMode 为 SessionId 时必填。</p>
                     */
                    SessionIdAffinityConfig m_sessionIdAffinityConfig;
                    bool m_sessionIdAffinityConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEAFFINITYCONFIG_H_
