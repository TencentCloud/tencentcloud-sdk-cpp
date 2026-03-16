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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_GATEWAYCONFIG_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_GATEWAYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 描述网关相关配置
                */
                class GatewayConfig : public AbstractModel
                {
                public:
                    GatewayConfig();
                    ~GatewayConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网关类型
                     * @return GatewayType 网关类型
                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置网关类型
                     * @param _gatewayType 网关类型
                     * 
                     */
                    void SetGatewayType(const std::string& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     * 
                     */
                    bool GatewayTypeHasBeenSet() const;

                    /**
                     * 获取网关调度算法：轮询、一致性哈希等
                     * @return SchedulingAlgorithm 网关调度算法：轮询、一致性哈希等
                     * 
                     */
                    std::string GetSchedulingAlgorithm() const;

                    /**
                     * 设置网关调度算法：轮询、一致性哈希等
                     * @param _schedulingAlgorithm 网关调度算法：轮询、一致性哈希等
                     * 
                     */
                    void SetSchedulingAlgorithm(const std::string& _schedulingAlgorithm);

                    /**
                     * 判断参数 SchedulingAlgorithm 是否已赋值
                     * @return SchedulingAlgorithm 是否已赋值
                     * 
                     */
                    bool SchedulingAlgorithmHasBeenSet() const;

                    /**
                     * 获取一致性哈希使用的Header字段名
                     * @return HashHeaderKey 一致性哈希使用的Header字段名
                     * 
                     */
                    std::string GetHashHeaderKey() const;

                    /**
                     * 设置一致性哈希使用的Header字段名
                     * @param _hashHeaderKey 一致性哈希使用的Header字段名
                     * 
                     */
                    void SetHashHeaderKey(const std::string& _hashHeaderKey);

                    /**
                     * 判断参数 HashHeaderKey 是否已赋值
                     * @return HashHeaderKey 是否已赋值
                     * 
                     */
                    bool HashHeaderKeyHasBeenSet() const;

                private:

                    /**
                     * 网关类型
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * 网关调度算法：轮询、一致性哈希等
                     */
                    std::string m_schedulingAlgorithm;
                    bool m_schedulingAlgorithmHasBeenSet;

                    /**
                     * 一致性哈希使用的Header字段名
                     */
                    std::string m_hashHeaderKey;
                    bool m_hashHeaderKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_GATEWAYCONFIG_H_
