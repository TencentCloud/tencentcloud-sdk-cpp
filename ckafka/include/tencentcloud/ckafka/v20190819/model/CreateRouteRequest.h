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
                     * 获取ckafka集群实例id,可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
                     * @return InstanceId ckafka集群实例id,可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka集群实例id,可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
                     * @param _instanceId ckafka集群实例id,可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
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
                     * 获取路由网络类型(3:vpc路由;7:内部支撑路由;1:公网路由)
                     * @return VipType 路由网络类型(3:vpc路由;7:内部支撑路由;1:公网路由)
                     * 
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置路由网络类型(3:vpc路由;7:内部支撑路由;1:公网路由)
                     * @param _vipType 路由网络类型(3:vpc路由;7:内部支撑路由;1:公网路由)
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
                     * 获取vpc网络Id,当vipType为3时必填
                     * @return VpcId vpc网络Id,当vipType为3时必填
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc网络Id,当vipType为3时必填
                     * @param _vpcId vpc网络Id,当vipType为3时必填
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
                     * 获取vpc子网id,当vipType为3时必填
                     * @return SubnetId vpc子网id,当vipType为3时必填
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置vpc子网id,当vipType为3时必填
                     * @param _subnetId vpc子网id,当vipType为3时必填
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
                     * 获取访问类型：0-plaintext；1-sasl_plaintext；3-sasl_ssl; 4-sasl_scram_sha_256; 5-sasl_scram_sha_512  默认为0
vipType=3,支持 0,1,3,4,5
vipType=7,支持0,1,3
vipType=1,支持1,3

                     * @return AccessType 访问类型：0-plaintext；1-sasl_plaintext；3-sasl_ssl; 4-sasl_scram_sha_256; 5-sasl_scram_sha_512  默认为0
vipType=3,支持 0,1,3,4,5
vipType=7,支持0,1,3
vipType=1,支持1,3

                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置访问类型：0-plaintext；1-sasl_plaintext；3-sasl_ssl; 4-sasl_scram_sha_256; 5-sasl_scram_sha_512  默认为0
vipType=3,支持 0,1,3,4,5
vipType=7,支持0,1,3
vipType=1,支持1,3

                     * @param _accessType 访问类型：0-plaintext；1-sasl_plaintext；3-sasl_ssl; 4-sasl_scram_sha_256; 5-sasl_scram_sha_512  默认为0
vipType=3,支持 0,1,3,4,5
vipType=7,支持0,1,3
vipType=1,支持1,3

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
                     * 获取是否需要权限管理,该字段已废弃
                     * @return AuthFlag 是否需要权限管理,该字段已废弃
                     * 
                     */
                    int64_t GetAuthFlag() const;

                    /**
                     * 设置是否需要权限管理,该字段已废弃
                     * @param _authFlag 是否需要权限管理,该字段已废弃
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
                     * 获取调用方appId
                     * @return CallerAppid 调用方appId
                     * 
                     */
                    int64_t GetCallerAppid() const;

                    /**
                     * 设置调用方appId
                     * @param _callerAppid 调用方appId
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
                     * 获取公网带宽,公网路由必传,且是3的倍数,无默认值
                     * @return PublicNetwork 公网带宽,公网路由必传,且是3的倍数,无默认值
                     * 
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置公网带宽,公网路由必传,且是3的倍数,无默认值
                     * @param _publicNetwork 公网带宽,公网路由必传,且是3的倍数,无默认值
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
                     * 获取vip地址
                     * @return Ip vip地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置vip地址
                     * @param _ip vip地址
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
                     * 获取备注信息
                     * @return Note 备注信息
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置备注信息
                     * @param _note 备注信息
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例id,可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 路由网络类型(3:vpc路由;7:内部支撑路由;1:公网路由)
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * vpc网络Id,当vipType为3时必填
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vpc子网id,当vipType为3时必填
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 访问类型：0-plaintext；1-sasl_plaintext；3-sasl_ssl; 4-sasl_scram_sha_256; 5-sasl_scram_sha_512  默认为0
vipType=3,支持 0,1,3,4,5
vipType=7,支持0,1,3
vipType=1,支持1,3

                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 是否需要权限管理,该字段已废弃
                     */
                    int64_t m_authFlag;
                    bool m_authFlagHasBeenSet;

                    /**
                     * 调用方appId
                     */
                    int64_t m_callerAppid;
                    bool m_callerAppidHasBeenSet;

                    /**
                     * 公网带宽,公网路由必传,且是3的倍数,无默认值
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * vip地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEROUTEREQUEST_H_
