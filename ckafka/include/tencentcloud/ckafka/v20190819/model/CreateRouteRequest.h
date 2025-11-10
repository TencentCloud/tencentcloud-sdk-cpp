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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEROUTEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEROUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * CreateRoute请求参数结构体
                */
                class CreateRouteRequest : public AbstractModel
                {
                public:
                    CreateRouteRequest();
                    ~CreateRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ckafka集群实例id,可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * @return InstanceId <p>ckafka集群实例id,可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka集群实例id,可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * @param _instanceId <p>ckafka集群实例id,可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>路由网络类型(3:vpc路由;7:内部支撑路由;1:公网路由)</p>
                     * @return VipType <p>路由网络类型(3:vpc路由;7:内部支撑路由;1:公网路由)</p>
                     * 
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置<p>路由网络类型(3:vpc路由;7:内部支撑路由;1:公网路由)</p>
                     * @param _vipType <p>路由网络类型(3:vpc路由;7:内部支撑路由;1:公网路由)</p>
                     * 
                     */
                    void SetVipType(const int64_t& _vipType);

                    /**
                     * 判断参数 VipType 是否已赋值
                     * @return VipType 是否已赋值
                     * 
                     */
                    bool VipTypeHasBeenSet() const;

                    /**
                     * 获取<p>vpc网络Id,当vipType为3时必填</p>
                     * @return VpcId <p>vpc网络Id,当vipType为3时必填</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>vpc网络Id,当vipType为3时必填</p>
                     * @param _vpcId <p>vpc网络Id,当vipType为3时必填</p>
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
                     * 获取<p>vpc子网id,当vipType为3时必填</p>
                     * @return SubnetId <p>vpc子网id,当vipType为3时必填</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>vpc子网id,当vipType为3时必填</p>
                     * @param _subnetId <p>vpc子网id,当vipType为3时必填</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>访问类型：0-plaintext；1-sasl_plaintext；3-sasl_ssl; 4-sasl_scram_sha_256; 5-sasl_scram_sha_512  默认为0vipType=3,支持 0,1,3,4,5vipType=7,支持0,1,3vipType=1,支持1,3</p>
                     * @return AccessType <p>访问类型：0-plaintext；1-sasl_plaintext；3-sasl_ssl; 4-sasl_scram_sha_256; 5-sasl_scram_sha_512  默认为0vipType=3,支持 0,1,3,4,5vipType=7,支持0,1,3vipType=1,支持1,3</p>
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置<p>访问类型：0-plaintext；1-sasl_plaintext；3-sasl_ssl; 4-sasl_scram_sha_256; 5-sasl_scram_sha_512  默认为0vipType=3,支持 0,1,3,4,5vipType=7,支持0,1,3vipType=1,支持1,3</p>
                     * @param _accessType <p>访问类型：0-plaintext；1-sasl_plaintext；3-sasl_ssl; 4-sasl_scram_sha_256; 5-sasl_scram_sha_512  默认为0vipType=3,支持 0,1,3,4,5vipType=7,支持0,1,3vipType=1,支持1,3</p>
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否需要权限管理,该字段已废弃</p>
                     * @return AuthFlag <p>是否需要权限管理,该字段已废弃</p>
                     * 
                     */
                    int64_t GetAuthFlag() const;

                    /**
                     * 设置<p>是否需要权限管理,该字段已废弃</p>
                     * @param _authFlag <p>是否需要权限管理,该字段已废弃</p>
                     * 
                     */
                    void SetAuthFlag(const int64_t& _authFlag);

                    /**
                     * 判断参数 AuthFlag 是否已赋值
                     * @return AuthFlag 是否已赋值
                     * 
                     */
                    bool AuthFlagHasBeenSet() const;

                    /**
                     * 获取<p>调用方appId</p>
                     * @return CallerAppid <p>调用方appId</p>
                     * 
                     */
                    int64_t GetCallerAppid() const;

                    /**
                     * 设置<p>调用方appId</p>
                     * @param _callerAppid <p>调用方appId</p>
                     * 
                     */
                    void SetCallerAppid(const int64_t& _callerAppid);

                    /**
                     * 判断参数 CallerAppid 是否已赋值
                     * @return CallerAppid 是否已赋值
                     * 
                     */
                    bool CallerAppidHasBeenSet() const;

                    /**
                     * 获取<p>公网带宽,公网路由必传,且是3的倍数,无默认值</p>
                     * @return PublicNetwork <p>公网带宽,公网路由必传,且是3的倍数,无默认值</p>
                     * 
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置<p>公网带宽,公网路由必传,且是3的倍数,无默认值</p>
                     * @param _publicNetwork <p>公网带宽,公网路由必传,且是3的倍数,无默认值</p>
                     * 
                     */
                    void SetPublicNetwork(const int64_t& _publicNetwork);

                    /**
                     * 判断参数 PublicNetwork 是否已赋值
                     * @return PublicNetwork 是否已赋值
                     * 
                     */
                    bool PublicNetworkHasBeenSet() const;

                    /**
                     * 获取<p>vip地址</p>
                     * @return Ip <p>vip地址</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>vip地址</p>
                     * @param _ip <p>vip地址</p>
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取<p>备注信息</p>
                     * @return Note <p>备注信息</p>
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置<p>备注信息</p>
                     * @param _note <p>备注信息</p>
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取<p>关联安全组有序列表</p>
                     * @return SecurityGroupIds <p>关联安全组有序列表</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>关联安全组有序列表</p>
                     * @param _securityGroupIds <p>关联安全组有序列表</p>
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * <p>ckafka集群实例id,可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>路由网络类型(3:vpc路由;7:内部支撑路由;1:公网路由)</p>
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * <p>vpc网络Id,当vipType为3时必填</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>vpc子网id,当vipType为3时必填</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>访问类型：0-plaintext；1-sasl_plaintext；3-sasl_ssl; 4-sasl_scram_sha_256; 5-sasl_scram_sha_512  默认为0vipType=3,支持 0,1,3,4,5vipType=7,支持0,1,3vipType=1,支持1,3</p>
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>是否需要权限管理,该字段已废弃</p>
                     */
                    int64_t m_authFlag;
                    bool m_authFlagHasBeenSet;

                    /**
                     * <p>调用方appId</p>
                     */
                    int64_t m_callerAppid;
                    bool m_callerAppidHasBeenSet;

                    /**
                     * <p>公网带宽,公网路由必传,且是3的倍数,无默认值</p>
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * <p>vip地址</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>备注信息</p>
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * <p>关联安全组有序列表</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEROUTEREQUEST_H_
