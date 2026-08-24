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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_LIFECYCLECONFIGURATION_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_LIFECYCLECONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * Deployment 管理的 Sandbox Instance 的空闲生命周期配置
                */
                class LifecycleConfiguration : public AbstractModel
                {
                public:
                    LifecycleConfiguration();
                    ~LifecycleConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Sandbox Instance 没有活跃 Deployment 请求或连接后进入 IdleAction 的秒数，必须大于等于 30。</p>
                     * @return IdleTimeoutSeconds <p>Sandbox Instance 没有活跃 Deployment 请求或连接后进入 IdleAction 的秒数，必须大于等于 30。</p>
                     * 
                     */
                    int64_t GetIdleTimeoutSeconds() const;

                    /**
                     * 设置<p>Sandbox Instance 没有活跃 Deployment 请求或连接后进入 IdleAction 的秒数，必须大于等于 30。</p>
                     * @param _idleTimeoutSeconds <p>Sandbox Instance 没有活跃 Deployment 请求或连接后进入 IdleAction 的秒数，必须大于等于 30。</p>
                     * 
                     */
                    void SetIdleTimeoutSeconds(const int64_t& _idleTimeoutSeconds);

                    /**
                     * 判断参数 IdleTimeoutSeconds 是否已赋值
                     * @return IdleTimeoutSeconds 是否已赋值
                     * 
                     */
                    bool IdleTimeoutSecondsHasBeenSet() const;

                    /**
                     * 获取<p>空闲处理动作。</p><p>枚举值：</p><ul><li>STOP：停止并释放 Sandbox Instance。</li><li>PAUSE：暂停并保留 Sandbox Instance 状态。</li></ul>
                     * @return IdleAction <p>空闲处理动作。</p><p>枚举值：</p><ul><li>STOP：停止并释放 Sandbox Instance。</li><li>PAUSE：暂停并保留 Sandbox Instance 状态。</li></ul>
                     * 
                     */
                    std::string GetIdleAction() const;

                    /**
                     * 设置<p>空闲处理动作。</p><p>枚举值：</p><ul><li>STOP：停止并释放 Sandbox Instance。</li><li>PAUSE：暂停并保留 Sandbox Instance 状态。</li></ul>
                     * @param _idleAction <p>空闲处理动作。</p><p>枚举值：</p><ul><li>STOP：停止并释放 Sandbox Instance。</li><li>PAUSE：暂停并保留 Sandbox Instance 状态。</li></ul>
                     * 
                     */
                    void SetIdleAction(const std::string& _idleAction);

                    /**
                     * 判断参数 IdleAction 是否已赋值
                     * @return IdleAction 是否已赋值
                     * 
                     */
                    bool IdleActionHasBeenSet() const;

                private:

                    /**
                     * <p>Sandbox Instance 没有活跃 Deployment 请求或连接后进入 IdleAction 的秒数，必须大于等于 30。</p>
                     */
                    int64_t m_idleTimeoutSeconds;
                    bool m_idleTimeoutSecondsHasBeenSet;

                    /**
                     * <p>空闲处理动作。</p><p>枚举值：</p><ul><li>STOP：停止并释放 Sandbox Instance。</li><li>PAUSE：暂停并保留 Sandbox Instance 状态。</li></ul>
                     */
                    std::string m_idleAction;
                    bool m_idleActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_LIFECYCLECONFIGURATION_H_
