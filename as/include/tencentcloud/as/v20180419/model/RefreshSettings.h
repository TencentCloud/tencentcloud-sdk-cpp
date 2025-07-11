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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_REFRESHSETTINGS_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_REFRESHSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/RollingUpdateSettings.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 实例刷新设置。
                */
                class RefreshSettings : public AbstractModel
                {
                public:
                    RefreshSettings();
                    ~RefreshSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取滚动更新设置参数。RefreshMode 为滚动更新该参数必须填写。
                     * @return RollingUpdateSettings 滚动更新设置参数。RefreshMode 为滚动更新该参数必须填写。
                     * 
                     */
                    RollingUpdateSettings GetRollingUpdateSettings() const;

                    /**
                     * 设置滚动更新设置参数。RefreshMode 为滚动更新该参数必须填写。
                     * @param _rollingUpdateSettings 滚动更新设置参数。RefreshMode 为滚动更新该参数必须填写。
                     * 
                     */
                    void SetRollingUpdateSettings(const RollingUpdateSettings& _rollingUpdateSettings);

                    /**
                     * 判断参数 RollingUpdateSettings 是否已赋值
                     * @return RollingUpdateSettings 是否已赋值
                     * 
                     */
                    bool RollingUpdateSettingsHasBeenSet() const;

                    /**
                     * 获取实例后端服务健康状态检查，默认为 FALSE。仅针对绑定应用型负载均衡器的伸缩组生效，开启该检查后，如刷新后实例未通过检查，负载均衡器端口权重始终为 0，且标记为刷新失败。取值范围如下：<li>TRUE：开启检查</li><li>FALSE：不开启检查</li>
                     * @return CheckInstanceTargetHealth 实例后端服务健康状态检查，默认为 FALSE。仅针对绑定应用型负载均衡器的伸缩组生效，开启该检查后，如刷新后实例未通过检查，负载均衡器端口权重始终为 0，且标记为刷新失败。取值范围如下：<li>TRUE：开启检查</li><li>FALSE：不开启检查</li>
                     * 
                     */
                    bool GetCheckInstanceTargetHealth() const;

                    /**
                     * 设置实例后端服务健康状态检查，默认为 FALSE。仅针对绑定应用型负载均衡器的伸缩组生效，开启该检查后，如刷新后实例未通过检查，负载均衡器端口权重始终为 0，且标记为刷新失败。取值范围如下：<li>TRUE：开启检查</li><li>FALSE：不开启检查</li>
                     * @param _checkInstanceTargetHealth 实例后端服务健康状态检查，默认为 FALSE。仅针对绑定应用型负载均衡器的伸缩组生效，开启该检查后，如刷新后实例未通过检查，负载均衡器端口权重始终为 0，且标记为刷新失败。取值范围如下：<li>TRUE：开启检查</li><li>FALSE：不开启检查</li>
                     * 
                     */
                    void SetCheckInstanceTargetHealth(const bool& _checkInstanceTargetHealth);

                    /**
                     * 判断参数 CheckInstanceTargetHealth 是否已赋值
                     * @return CheckInstanceTargetHealth 是否已赋值
                     * 
                     */
                    bool CheckInstanceTargetHealthHasBeenSet() const;

                    /**
                     * 获取实例后端服务健康状态检查的超时时间，单位为秒，取值范围[60,7200]，默认时间1800秒。仅在CheckInstanceTargetHealth参数开启后生效，若实例健康检查超时，则标记为刷新失败。
                     * @return CheckInstanceTargetHealthTimeout 实例后端服务健康状态检查的超时时间，单位为秒，取值范围[60,7200]，默认时间1800秒。仅在CheckInstanceTargetHealth参数开启后生效，若实例健康检查超时，则标记为刷新失败。
                     * 
                     */
                    uint64_t GetCheckInstanceTargetHealthTimeout() const;

                    /**
                     * 设置实例后端服务健康状态检查的超时时间，单位为秒，取值范围[60,7200]，默认时间1800秒。仅在CheckInstanceTargetHealth参数开启后生效，若实例健康检查超时，则标记为刷新失败。
                     * @param _checkInstanceTargetHealthTimeout 实例后端服务健康状态检查的超时时间，单位为秒，取值范围[60,7200]，默认时间1800秒。仅在CheckInstanceTargetHealth参数开启后生效，若实例健康检查超时，则标记为刷新失败。
                     * 
                     */
                    void SetCheckInstanceTargetHealthTimeout(const uint64_t& _checkInstanceTargetHealthTimeout);

                    /**
                     * 判断参数 CheckInstanceTargetHealthTimeout 是否已赋值
                     * @return CheckInstanceTargetHealthTimeout 是否已赋值
                     * 
                     */
                    bool CheckInstanceTargetHealthTimeoutHasBeenSet() const;

                private:

                    /**
                     * 滚动更新设置参数。RefreshMode 为滚动更新该参数必须填写。
                     */
                    RollingUpdateSettings m_rollingUpdateSettings;
                    bool m_rollingUpdateSettingsHasBeenSet;

                    /**
                     * 实例后端服务健康状态检查，默认为 FALSE。仅针对绑定应用型负载均衡器的伸缩组生效，开启该检查后，如刷新后实例未通过检查，负载均衡器端口权重始终为 0，且标记为刷新失败。取值范围如下：<li>TRUE：开启检查</li><li>FALSE：不开启检查</li>
                     */
                    bool m_checkInstanceTargetHealth;
                    bool m_checkInstanceTargetHealthHasBeenSet;

                    /**
                     * 实例后端服务健康状态检查的超时时间，单位为秒，取值范围[60,7200]，默认时间1800秒。仅在CheckInstanceTargetHealth参数开启后生效，若实例健康检查超时，则标记为刷新失败。
                     */
                    uint64_t m_checkInstanceTargetHealthTimeout;
                    bool m_checkInstanceTargetHealthTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_REFRESHSETTINGS_H_
