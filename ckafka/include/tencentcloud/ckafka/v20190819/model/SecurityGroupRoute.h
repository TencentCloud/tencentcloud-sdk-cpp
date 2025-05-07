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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_SECURITYGROUPROUTE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_SECURITYGROUPROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/InstanceRoute.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 安全组路由信息
                */
                class SecurityGroupRoute : public AbstractModel
                {
                public:
                    SecurityGroupRoute();
                    ~SecurityGroupRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取路由信息
                     * @return InstanceRoute 路由信息
                     * 
                     */
                    InstanceRoute GetInstanceRoute() const;

                    /**
                     * 设置路由信息
                     * @param _instanceRoute 路由信息
                     * 
                     */
                    void SetInstanceRoute(const InstanceRoute& _instanceRoute);

                    /**
                     * 判断参数 InstanceRoute 是否已赋值
                     * @return InstanceRoute 是否已赋值
                     * 
                     */
                    bool InstanceRouteHasBeenSet() const;

                    /**
                     * 获取关联的安全组列表
                     * @return SecurityGroupIds 关联的安全组列表
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置关联的安全组列表
                     * @param _securityGroupIds 关联的安全组列表
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取ckafka集群实例名称
                     * @return InstanceName ckafka集群实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置ckafka集群实例名称
                     * @param _instanceName ckafka集群实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取路由vpcId
                     * @return VpcId 路由vpcId
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置路由vpcId
                     * @param _vpcId 路由vpcId
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取路由vip
                     * @return Vip 路由vip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置路由vip
                     * @param _vip 路由vip
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                private:

                    /**
                     * 路由信息
                     */
                    InstanceRoute m_instanceRoute;
                    bool m_instanceRouteHasBeenSet;

                    /**
                     * 关联的安全组列表
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * ckafka集群实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 路由vpcId
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 路由vip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_SECURITYGROUPROUTE_H_
