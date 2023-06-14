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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DEVICESBINDINFOLOADBALANCER_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DEVICESBINDINFOLOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/DevicesBindInfoL4Listener.h>
#include <tencentcloud/bmlb/v20180625/model/DevicesBindInfoL7Listener.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * 获取设备绑定信息时返回的设备被绑定所在的负载均衡信息。
                */
                class DevicesBindInfoLoadBalancer : public AbstractModel
                {
                public:
                    DevicesBindInfoLoadBalancer();
                    ~DevicesBindInfoLoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡实例ID。
                     * @return LoadBalancerId 负载均衡实例ID。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例ID。
                     * @param _loadBalancerId 负载均衡实例ID。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取开发商AppId。
                     * @return AppId 开发商AppId。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置开发商AppId。
                     * @param _appId 开发商AppId。
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取负载均衡所属的项目ID。
                     * @return ProjectId 负载均衡所属的项目ID。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置负载均衡所属的项目ID。
                     * @param _projectId 负载均衡所属的项目ID。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取黑石私有网络唯一ID。
                     * @return VpcId 黑石私有网络唯一ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置黑石私有网络唯一ID。
                     * @param _vpcId 黑石私有网络唯一ID。
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
                     * 获取负载均衡的IP地址。
                     * @return Vip 负载均衡的IP地址。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置负载均衡的IP地址。
                     * @param _vip 负载均衡的IP地址。
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取负载均衡对应的TGW集群类别，取值为tunnel或fullnat。tunnel表示隧道集群，fullnat表示FULLNAT集群。
                     * @return TgwSetType 负载均衡对应的TGW集群类别，取值为tunnel或fullnat。tunnel表示隧道集群，fullnat表示FULLNAT集群。
                     * 
                     */
                    std::string GetTgwSetType() const;

                    /**
                     * 设置负载均衡对应的TGW集群类别，取值为tunnel或fullnat。tunnel表示隧道集群，fullnat表示FULLNAT集群。
                     * @param _tgwSetType 负载均衡对应的TGW集群类别，取值为tunnel或fullnat。tunnel表示隧道集群，fullnat表示FULLNAT集群。
                     * 
                     */
                    void SetTgwSetType(const std::string& _tgwSetType);

                    /**
                     * 判断参数 TgwSetType 是否已赋值
                     * @return TgwSetType 是否已赋值
                     * 
                     */
                    bool TgwSetTypeHasBeenSet() const;

                    /**
                     * 获取是否独占TGW集群。
                     * @return Exclusive 是否独占TGW集群。
                     * 
                     */
                    int64_t GetExclusive() const;

                    /**
                     * 设置是否独占TGW集群。
                     * @param _exclusive 是否独占TGW集群。
                     * 
                     */
                    void SetExclusive(const int64_t& _exclusive);

                    /**
                     * 判断参数 Exclusive 是否已赋值
                     * @return Exclusive 是否已赋值
                     * 
                     */
                    bool ExclusiveHasBeenSet() const;

                    /**
                     * 获取具有该绑定关系的四层监听器列表。
                     * @return L4ListenerSet 具有该绑定关系的四层监听器列表。
                     * 
                     */
                    std::vector<DevicesBindInfoL4Listener> GetL4ListenerSet() const;

                    /**
                     * 设置具有该绑定关系的四层监听器列表。
                     * @param _l4ListenerSet 具有该绑定关系的四层监听器列表。
                     * 
                     */
                    void SetL4ListenerSet(const std::vector<DevicesBindInfoL4Listener>& _l4ListenerSet);

                    /**
                     * 判断参数 L4ListenerSet 是否已赋值
                     * @return L4ListenerSet 是否已赋值
                     * 
                     */
                    bool L4ListenerSetHasBeenSet() const;

                    /**
                     * 获取具有该绑定关系的七层监听器列表。
                     * @return L7ListenerSet 具有该绑定关系的七层监听器列表。
                     * 
                     */
                    std::vector<DevicesBindInfoL7Listener> GetL7ListenerSet() const;

                    /**
                     * 设置具有该绑定关系的七层监听器列表。
                     * @param _l7ListenerSet 具有该绑定关系的七层监听器列表。
                     * 
                     */
                    void SetL7ListenerSet(const std::vector<DevicesBindInfoL7Listener>& _l7ListenerSet);

                    /**
                     * 判断参数 L7ListenerSet 是否已赋值
                     * @return L7ListenerSet 是否已赋值
                     * 
                     */
                    bool L7ListenerSetHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 开发商AppId。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 负载均衡所属的项目ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 黑石私有网络唯一ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 负载均衡的IP地址。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 负载均衡对应的TGW集群类别，取值为tunnel或fullnat。tunnel表示隧道集群，fullnat表示FULLNAT集群。
                     */
                    std::string m_tgwSetType;
                    bool m_tgwSetTypeHasBeenSet;

                    /**
                     * 是否独占TGW集群。
                     */
                    int64_t m_exclusive;
                    bool m_exclusiveHasBeenSet;

                    /**
                     * 具有该绑定关系的四层监听器列表。
                     */
                    std::vector<DevicesBindInfoL4Listener> m_l4ListenerSet;
                    bool m_l4ListenerSetHasBeenSet;

                    /**
                     * 具有该绑定关系的七层监听器列表。
                     */
                    std::vector<DevicesBindInfoL7Listener> m_l7ListenerSet;
                    bool m_l7ListenerSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DEVICESBINDINFOLOADBALANCER_H_
