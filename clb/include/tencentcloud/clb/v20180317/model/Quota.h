/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_QUOTA_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_QUOTA_H_

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
                * 描述配额信息，所有配额均指当前地域下的配额。
                */
                class Quota : public AbstractModel
                {
                public:
                    Quota();
                    ~Quota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配额名称，取值范围：
<li> TOTAL_OPEN_CLB_QUOTA：用户当前地域下的公网CLB配额 </li>
<li> TOTAL_INTERNAL_CLB_QUOTA：用户当前地域下的内网CLB配额 </li>
<li> TOTAL_LISTENER_QUOTA：一个CLB下的监听器配额 </li>
<li> TOTAL_LISTENER_RULE_QUOTA：一个监听器下的转发规则配额 </li>
<li> TOTAL_TARGET_BIND_QUOTA：一条转发规则下可绑定设备的配额 </li>
<li> TOTAL_SNAT_IP_QUOTA： 一个CLB实例下跨地域2.0的SNAT IP配额 </li>
<li>TOTAL_ISP_CLB_QUOTA：用户当前地域下的三网CLB配额 </li>
<li>TOTAL_FULL_PORT_RANGE_LISTENER_QUOTA：一个CLB实例下的单个协议全端口段监听器配额</li>
                     * @return QuotaId 配额名称，取值范围：
<li> TOTAL_OPEN_CLB_QUOTA：用户当前地域下的公网CLB配额 </li>
<li> TOTAL_INTERNAL_CLB_QUOTA：用户当前地域下的内网CLB配额 </li>
<li> TOTAL_LISTENER_QUOTA：一个CLB下的监听器配额 </li>
<li> TOTAL_LISTENER_RULE_QUOTA：一个监听器下的转发规则配额 </li>
<li> TOTAL_TARGET_BIND_QUOTA：一条转发规则下可绑定设备的配额 </li>
<li> TOTAL_SNAT_IP_QUOTA： 一个CLB实例下跨地域2.0的SNAT IP配额 </li>
<li>TOTAL_ISP_CLB_QUOTA：用户当前地域下的三网CLB配额 </li>
<li>TOTAL_FULL_PORT_RANGE_LISTENER_QUOTA：一个CLB实例下的单个协议全端口段监听器配额</li>
                     * 
                     */
                    std::string GetQuotaId() const;

                    /**
                     * 设置配额名称，取值范围：
<li> TOTAL_OPEN_CLB_QUOTA：用户当前地域下的公网CLB配额 </li>
<li> TOTAL_INTERNAL_CLB_QUOTA：用户当前地域下的内网CLB配额 </li>
<li> TOTAL_LISTENER_QUOTA：一个CLB下的监听器配额 </li>
<li> TOTAL_LISTENER_RULE_QUOTA：一个监听器下的转发规则配额 </li>
<li> TOTAL_TARGET_BIND_QUOTA：一条转发规则下可绑定设备的配额 </li>
<li> TOTAL_SNAT_IP_QUOTA： 一个CLB实例下跨地域2.0的SNAT IP配额 </li>
<li>TOTAL_ISP_CLB_QUOTA：用户当前地域下的三网CLB配额 </li>
<li>TOTAL_FULL_PORT_RANGE_LISTENER_QUOTA：一个CLB实例下的单个协议全端口段监听器配额</li>
                     * @param _quotaId 配额名称，取值范围：
<li> TOTAL_OPEN_CLB_QUOTA：用户当前地域下的公网CLB配额 </li>
<li> TOTAL_INTERNAL_CLB_QUOTA：用户当前地域下的内网CLB配额 </li>
<li> TOTAL_LISTENER_QUOTA：一个CLB下的监听器配额 </li>
<li> TOTAL_LISTENER_RULE_QUOTA：一个监听器下的转发规则配额 </li>
<li> TOTAL_TARGET_BIND_QUOTA：一条转发规则下可绑定设备的配额 </li>
<li> TOTAL_SNAT_IP_QUOTA： 一个CLB实例下跨地域2.0的SNAT IP配额 </li>
<li>TOTAL_ISP_CLB_QUOTA：用户当前地域下的三网CLB配额 </li>
<li>TOTAL_FULL_PORT_RANGE_LISTENER_QUOTA：一个CLB实例下的单个协议全端口段监听器配额</li>
                     * 
                     */
                    void SetQuotaId(const std::string& _quotaId);

                    /**
                     * 判断参数 QuotaId 是否已赋值
                     * @return QuotaId 是否已赋值
                     * 
                     */
                    bool QuotaIdHasBeenSet() const;

                    /**
                     * 获取当前使用数量，为 null 时表示无意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuotaCurrent 当前使用数量，为 null 时表示无意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetQuotaCurrent() const;

                    /**
                     * 设置当前使用数量，为 null 时表示无意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quotaCurrent 当前使用数量，为 null 时表示无意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuotaCurrent(const int64_t& _quotaCurrent);

                    /**
                     * 判断参数 QuotaCurrent 是否已赋值
                     * @return QuotaCurrent 是否已赋值
                     * 
                     */
                    bool QuotaCurrentHasBeenSet() const;

                    /**
                     * 获取配额数量。
                     * @return QuotaLimit 配额数量。
                     * 
                     */
                    int64_t GetQuotaLimit() const;

                    /**
                     * 设置配额数量。
                     * @param _quotaLimit 配额数量。
                     * 
                     */
                    void SetQuotaLimit(const int64_t& _quotaLimit);

                    /**
                     * 判断参数 QuotaLimit 是否已赋值
                     * @return QuotaLimit 是否已赋值
                     * 
                     */
                    bool QuotaLimitHasBeenSet() const;

                private:

                    /**
                     * 配额名称，取值范围：
<li> TOTAL_OPEN_CLB_QUOTA：用户当前地域下的公网CLB配额 </li>
<li> TOTAL_INTERNAL_CLB_QUOTA：用户当前地域下的内网CLB配额 </li>
<li> TOTAL_LISTENER_QUOTA：一个CLB下的监听器配额 </li>
<li> TOTAL_LISTENER_RULE_QUOTA：一个监听器下的转发规则配额 </li>
<li> TOTAL_TARGET_BIND_QUOTA：一条转发规则下可绑定设备的配额 </li>
<li> TOTAL_SNAT_IP_QUOTA： 一个CLB实例下跨地域2.0的SNAT IP配额 </li>
<li>TOTAL_ISP_CLB_QUOTA：用户当前地域下的三网CLB配额 </li>
<li>TOTAL_FULL_PORT_RANGE_LISTENER_QUOTA：一个CLB实例下的单个协议全端口段监听器配额</li>
                     */
                    std::string m_quotaId;
                    bool m_quotaIdHasBeenSet;

                    /**
                     * 当前使用数量，为 null 时表示无意义。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_quotaCurrent;
                    bool m_quotaCurrentHasBeenSet;

                    /**
                     * 配额数量。
                     */
                    int64_t m_quotaLimit;
                    bool m_quotaLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_QUOTA_H_
