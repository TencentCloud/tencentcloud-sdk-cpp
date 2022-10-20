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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CKAFKAROUTEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CKAFKAROUTEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ckafkal路由详情
                */
                class CkafkaRouteInfo : public AbstractModel
                {
                public:
                    CkafkaRouteInfo();
                    ~CkafkaRouteInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取路由ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RouteID 路由ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRouteID() const;

                    /**
                     * 设置路由ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RouteID 路由ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRouteID(const int64_t& _routeID);

                    /**
                     * 判断参数 RouteID 是否已赋值
                     * @return RouteID 是否已赋值
                     */
                    bool RouteIDHasBeenSet() const;

                    /**
                     * 获取域名名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 域名名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Domain 域名名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取域名端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainPort 域名端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDomainPort() const;

                    /**
                     * 设置域名端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DomainPort 域名端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDomainPort(const uint64_t& _domainPort);

                    /**
                     * 判断参数 DomainPort 是否已赋值
                     * @return DomainPort 是否已赋值
                     */
                    bool DomainPortHasBeenSet() const;

                    /**
                     * 获取虚拟ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vip 虚拟ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVip() const;

                    /**
                     * 设置虚拟ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Vip 虚拟ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取虚拟ip类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VipType 虚拟ip类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置虚拟ip类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VipType 虚拟ip类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVipType(const int64_t& _vipType);

                    /**
                     * 判断参数 VipType 是否已赋值
                     * @return VipType 是否已赋值
                     */
                    bool VipTypeHasBeenSet() const;

                    /**
                     * 获取接入类型
// 0：PLAINTEXT (明文方式，没有带用户信息老版本及社区版本都支持)
	// 1：SASL_PLAINTEXT（明文方式，不过在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）
	// 2：SSL（SSL加密通信，没有带用户信息，老版本及社区版本都支持）
	// 3：SASL_SSL（SSL加密通信，在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessType 接入类型
// 0：PLAINTEXT (明文方式，没有带用户信息老版本及社区版本都支持)
	// 1：SASL_PLAINTEXT（明文方式，不过在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）
	// 2：SSL（SSL加密通信，没有带用户信息，老版本及社区版本都支持）
	// 3：SASL_SSL（SSL加密通信，在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置接入类型
// 0：PLAINTEXT (明文方式，没有带用户信息老版本及社区版本都支持)
	// 1：SASL_PLAINTEXT（明文方式，不过在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）
	// 2：SSL（SSL加密通信，没有带用户信息，老版本及社区版本都支持）
	// 3：SASL_SSL（SSL加密通信，在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AccessType 接入类型
// 0：PLAINTEXT (明文方式，没有带用户信息老版本及社区版本都支持)
	// 1：SASL_PLAINTEXT（明文方式，不过在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）
	// 2：SSL（SSL加密通信，没有带用户信息，老版本及社区版本都支持）
	// 3：SASL_SSL（SSL加密通信，在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     */
                    bool AccessTypeHasBeenSet() const;

                private:

                    /**
                     * 路由ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_routeID;
                    bool m_routeIDHasBeenSet;

                    /**
                     * 域名名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_domainPort;
                    bool m_domainPortHasBeenSet;

                    /**
                     * 虚拟ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 虚拟ip类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * 接入类型
// 0：PLAINTEXT (明文方式，没有带用户信息老版本及社区版本都支持)
	// 1：SASL_PLAINTEXT（明文方式，不过在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）
	// 2：SSL（SSL加密通信，没有带用户信息，老版本及社区版本都支持）
	// 3：SASL_SSL（SSL加密通信，在数据开始时，会通过SASL方式登录鉴权，仅社区版本支持）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CKAFKAROUTEINFO_H_
