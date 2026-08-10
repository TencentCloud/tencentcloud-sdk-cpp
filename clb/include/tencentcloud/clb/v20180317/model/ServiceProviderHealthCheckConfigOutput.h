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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_SERVICEPROVIDERHEALTHCHECKCONFIGOUTPUT_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_SERVICEPROVIDERHEALTHCHECKCONFIGOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 健康检查配置
                */
                class ServiceProviderHealthCheckConfigOutput : public AbstractModel
                {
                public:
                    ServiceProviderHealthCheckConfigOutput();
                    ~ServiceProviderHealthCheckConfigOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启健康检查</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @return HealthCheckEnabled <p>是否开启健康检查</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    bool GetHealthCheckEnabled() const;

                    /**
                     * 设置<p>是否开启健康检查</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @param _healthCheckEnabled <p>是否开启健康检查</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    void SetHealthCheckEnabled(const bool& _healthCheckEnabled);

                    /**
                     * 判断参数 HealthCheckEnabled 是否已赋值
                     * @return HealthCheckEnabled 是否已赋值
                     * 
                     */
                    bool HealthCheckEnabledHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启健康检查</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     */
                    bool m_healthCheckEnabled;
                    bool m_healthCheckEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SERVICEPROVIDERHEALTHCHECKCONFIGOUTPUT_H_
