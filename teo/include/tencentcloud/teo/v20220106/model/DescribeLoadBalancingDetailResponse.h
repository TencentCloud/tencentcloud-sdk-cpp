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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBELOADBALANCINGDETAILRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBELOADBALANCINGDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/OriginGroup.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeLoadBalancingDetail返回参数结构体
                */
                class DescribeLoadBalancingDetailResponse : public AbstractModel
                {
                public:
                    DescribeLoadBalancingDetailResponse();
                    ~DescribeLoadBalancingDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡ID
                     * @return LoadBalancingId 负载均衡ID
                     */
                    std::string GetLoadBalancingId() const;

                    /**
                     * 判断参数 LoadBalancingId 是否已赋值
                     * @return LoadBalancingId 是否已赋值
                     */
                    bool LoadBalancingIdHasBeenSet() const;

                    /**
                     * 获取站点ID
                     * @return ZoneId 站点ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取子域名，填写@表示根域
                     * @return Host 子域名，填写@表示根域
                     */
                    std::string GetHost() const;

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取代理模式：
dns_only: 仅DNS
proxied: 开启代理
                     * @return Type 代理模式：
dns_only: 仅DNS
proxied: 开启代理
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取当Type=dns_only表示DNS的TTL时间
                     * @return TTL 当Type=dns_only表示DNS的TTL时间
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取使用的源站组ID
                     * @return OriginId 使用的源站组ID
                     */
                    std::vector<std::string> GetOriginId() const;

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     */
                    bool OriginIdHasBeenSet() const;

                    /**
                     * 获取使用的源站信息
                     * @return Origin 使用的源站信息
                     */
                    std::vector<OriginGroup> GetOrigin() const;

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取调度域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cname 调度域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCname() const;

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     */
                    bool CnameHasBeenSet() const;

                private:

                    /**
                     * 负载均衡ID
                     */
                    std::string m_loadBalancingId;
                    bool m_loadBalancingIdHasBeenSet;

                    /**
                     * 站点ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 子域名，填写@表示根域
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 代理模式：
dns_only: 仅DNS
proxied: 开启代理
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 当Type=dns_only表示DNS的TTL时间
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * 使用的源站组ID
                     */
                    std::vector<std::string> m_originId;
                    bool m_originIdHasBeenSet;

                    /**
                     * 使用的源站信息
                     */
                    std::vector<OriginGroup> m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 调度域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBELOADBALANCINGDETAILRESPONSE_H_
