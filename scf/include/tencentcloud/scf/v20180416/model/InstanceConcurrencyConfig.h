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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_INSTANCECONCURRENCYCONFIG_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_INSTANCECONCURRENCYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/MixNodeConfig.h>
#include <tencentcloud/scf/v20180416/model/SessionConfig.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 多并发执行配置描述
                */
                class InstanceConcurrencyConfig : public AbstractModel
                {
                public:
                    InstanceConcurrencyConfig();
                    ~InstanceConcurrencyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启智能动态并发。'FALSE'时是静态并发。''时取消多并发配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DynamicEnabled 是否开启智能动态并发。'FALSE'时是静态并发。''时取消多并发配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDynamicEnabled() const;

                    /**
                     * 设置是否开启智能动态并发。'FALSE'时是静态并发。''时取消多并发配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dynamicEnabled 是否开启智能动态并发。'FALSE'时是静态并发。''时取消多并发配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDynamicEnabled(const std::string& _dynamicEnabled);

                    /**
                     * 判断参数 DynamicEnabled 是否已赋值
                     * @return DynamicEnabled 是否已赋值
                     * 
                     */
                    bool DynamicEnabledHasBeenSet() const;

                    /**
                     * 获取单实例并发数最大值。取值范围 [1,100]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxConcurrency 单实例并发数最大值。取值范围 [1,100]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxConcurrency() const;

                    /**
                     * 设置单实例并发数最大值。取值范围 [1,100]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxConcurrency 单实例并发数最大值。取值范围 [1,100]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxConcurrency(const uint64_t& _maxConcurrency);

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     * 
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                    /**
                     * 获取安全隔离开关
                     * @return InstanceIsolationEnabled 安全隔离开关
                     * 
                     */
                    std::string GetInstanceIsolationEnabled() const;

                    /**
                     * 设置安全隔离开关
                     * @param _instanceIsolationEnabled 安全隔离开关
                     * 
                     */
                    void SetInstanceIsolationEnabled(const std::string& _instanceIsolationEnabled);

                    /**
                     * 判断参数 InstanceIsolationEnabled 是否已赋值
                     * @return InstanceIsolationEnabled 是否已赋值
                     * 
                     */
                    bool InstanceIsolationEnabledHasBeenSet() const;

                    /**
                     * 获取基于会话：Session-Based ， 或者基于请求：Request-Based，二选一
                     * @return Type 基于会话：Session-Based ， 或者基于请求：Request-Based，二选一
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置基于会话：Session-Based ， 或者基于请求：Request-Based，二选一
                     * @param _type 基于会话：Session-Based ， 或者基于请求：Request-Based，二选一
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
                     * 获取动态并发参数
                     * @return MixNodeConfig 动态并发参数
                     * 
                     */
                    std::vector<MixNodeConfig> GetMixNodeConfig() const;

                    /**
                     * 设置动态并发参数
                     * @param _mixNodeConfig 动态并发参数
                     * 
                     */
                    void SetMixNodeConfig(const std::vector<MixNodeConfig>& _mixNodeConfig);

                    /**
                     * 判断参数 MixNodeConfig 是否已赋值
                     * @return MixNodeConfig 是否已赋值
                     * 
                     */
                    bool MixNodeConfigHasBeenSet() const;

                    /**
                     * 获取会话配置参数
                     * @return SessionConfig 会话配置参数
                     * 
                     */
                    SessionConfig GetSessionConfig() const;

                    /**
                     * 设置会话配置参数
                     * @param _sessionConfig 会话配置参数
                     * 
                     */
                    void SetSessionConfig(const SessionConfig& _sessionConfig);

                    /**
                     * 判断参数 SessionConfig 是否已赋值
                     * @return SessionConfig 是否已赋值
                     * 
                     */
                    bool SessionConfigHasBeenSet() const;

                private:

                    /**
                     * 是否开启智能动态并发。'FALSE'时是静态并发。''时取消多并发配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dynamicEnabled;
                    bool m_dynamicEnabledHasBeenSet;

                    /**
                     * 单实例并发数最大值。取值范围 [1,100]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                    /**
                     * 安全隔离开关
                     */
                    std::string m_instanceIsolationEnabled;
                    bool m_instanceIsolationEnabledHasBeenSet;

                    /**
                     * 基于会话：Session-Based ， 或者基于请求：Request-Based，二选一
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 动态并发参数
                     */
                    std::vector<MixNodeConfig> m_mixNodeConfig;
                    bool m_mixNodeConfigHasBeenSet;

                    /**
                     * 会话配置参数
                     */
                    SessionConfig m_sessionConfig;
                    bool m_sessionConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_INSTANCECONCURRENCYCONFIG_H_
