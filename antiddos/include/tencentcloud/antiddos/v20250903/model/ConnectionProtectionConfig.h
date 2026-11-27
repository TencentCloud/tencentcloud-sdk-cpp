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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_CONNECTIONPROTECTIONCONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_CONNECTIONPROTECTIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20250903/model/AbnormalConnectionLimit.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * 连接类攻击防护配置。
                */
                class ConnectionProtectionConfig : public AbstractModel
                {
                public:
                    ConnectionProtectionConfig();
                    ~ConnectionProtectionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>源 IP 每秒新建连接数限制，为 0 为不限制（关闭），大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     * @return SourceIPNewConnectionLimit <p>源 IP 每秒新建连接数限制，为 0 为不限制（关闭），大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     * 
                     */
                    uint64_t GetSourceIPNewConnectionLimit() const;

                    /**
                     * 设置<p>源 IP 每秒新建连接数限制，为 0 为不限制（关闭），大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     * @param _sourceIPNewConnectionLimit <p>源 IP 每秒新建连接数限制，为 0 为不限制（关闭），大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     * 
                     */
                    void SetSourceIPNewConnectionLimit(const uint64_t& _sourceIPNewConnectionLimit);

                    /**
                     * 判断参数 SourceIPNewConnectionLimit 是否已赋值
                     * @return SourceIPNewConnectionLimit 是否已赋值
                     * 
                     */
                    bool SourceIPNewConnectionLimitHasBeenSet() const;

                    /**
                     * 获取<p>源 IP 并发连接数限制，为 0 不限制（关闭），大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     * @return SourceIPConcurrentConnectionLimit <p>源 IP 并发连接数限制，为 0 不限制（关闭），大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     * 
                     */
                    uint64_t GetSourceIPConcurrentConnectionLimit() const;

                    /**
                     * 设置<p>源 IP 并发连接数限制，为 0 不限制（关闭），大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     * @param _sourceIPConcurrentConnectionLimit <p>源 IP 并发连接数限制，为 0 不限制（关闭），大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     * 
                     */
                    void SetSourceIPConcurrentConnectionLimit(const uint64_t& _sourceIPConcurrentConnectionLimit);

                    /**
                     * 判断参数 SourceIPConcurrentConnectionLimit 是否已赋值
                     * @return SourceIPConcurrentConnectionLimit 是否已赋值
                     * 
                     */
                    bool SourceIPConcurrentConnectionLimitHasBeenSet() const;

                    /**
                     * 获取<p>目的 IP 每秒新建连接数限制，为 0 不限制（关闭），大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     * @return DestinationIPNewConnectionLimit <p>目的 IP 每秒新建连接数限制，为 0 不限制（关闭），大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     * 
                     */
                    uint64_t GetDestinationIPNewConnectionLimit() const;

                    /**
                     * 设置<p>目的 IP 每秒新建连接数限制，为 0 不限制（关闭），大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     * @param _destinationIPNewConnectionLimit <p>目的 IP 每秒新建连接数限制，为 0 不限制（关闭），大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     * 
                     */
                    void SetDestinationIPNewConnectionLimit(const uint64_t& _destinationIPNewConnectionLimit);

                    /**
                     * 判断参数 DestinationIPNewConnectionLimit 是否已赋值
                     * @return DestinationIPNewConnectionLimit 是否已赋值
                     * 
                     */
                    bool DestinationIPNewConnectionLimitHasBeenSet() const;

                    /**
                     * 获取<p>目的 IP 并发连接数限制，为 0 不限制（关闭）， 大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     * @return DestinationIPConcurrentConnectionLimit <p>目的 IP 并发连接数限制，为 0 不限制（关闭）， 大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     * 
                     */
                    uint64_t GetDestinationIPConcurrentConnectionLimit() const;

                    /**
                     * 设置<p>目的 IP 并发连接数限制，为 0 不限制（关闭）， 大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     * @param _destinationIPConcurrentConnectionLimit <p>目的 IP 并发连接数限制，为 0 不限制（关闭）， 大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     * 
                     */
                    void SetDestinationIPConcurrentConnectionLimit(const uint64_t& _destinationIPConcurrentConnectionLimit);

                    /**
                     * 判断参数 DestinationIPConcurrentConnectionLimit 是否已赋值
                     * @return DestinationIPConcurrentConnectionLimit 是否已赋值
                     * 
                     */
                    bool DestinationIPConcurrentConnectionLimitHasBeenSet() const;

                    /**
                     * 获取<p>源 IP 异常连接限制。</p>
                     * @return AbnormalConnectionLimit <p>源 IP 异常连接限制。</p>
                     * 
                     */
                    AbnormalConnectionLimit GetAbnormalConnectionLimit() const;

                    /**
                     * 设置<p>源 IP 异常连接限制。</p>
                     * @param _abnormalConnectionLimit <p>源 IP 异常连接限制。</p>
                     * 
                     */
                    void SetAbnormalConnectionLimit(const AbnormalConnectionLimit& _abnormalConnectionLimit);

                    /**
                     * 判断参数 AbnormalConnectionLimit 是否已赋值
                     * @return AbnormalConnectionLimit 是否已赋值
                     * 
                     */
                    bool AbnormalConnectionLimitHasBeenSet() const;

                private:

                    /**
                     * <p>源 IP 每秒新建连接数限制，为 0 为不限制（关闭），大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     */
                    uint64_t m_sourceIPNewConnectionLimit;
                    bool m_sourceIPNewConnectionLimitHasBeenSet;

                    /**
                     * <p>源 IP 并发连接数限制，为 0 不限制（关闭），大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     */
                    uint64_t m_sourceIPConcurrentConnectionLimit;
                    bool m_sourceIPConcurrentConnectionLimitHasBeenSet;

                    /**
                     * <p>目的 IP 每秒新建连接数限制，为 0 不限制（关闭），大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     */
                    uint64_t m_destinationIPNewConnectionLimit;
                    bool m_destinationIPNewConnectionLimitHasBeenSet;

                    /**
                     * <p>目的 IP 并发连接数限制，为 0 不限制（关闭）， 大于 0 开启限制。命中后限制新建连接。</p><p>取值范围：[0, 4294967295]</p>
                     */
                    uint64_t m_destinationIPConcurrentConnectionLimit;
                    bool m_destinationIPConcurrentConnectionLimitHasBeenSet;

                    /**
                     * <p>源 IP 异常连接限制。</p>
                     */
                    AbnormalConnectionLimit m_abnormalConnectionLimit;
                    bool m_abnormalConnectionLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_CONNECTIONPROTECTIONCONFIG_H_
