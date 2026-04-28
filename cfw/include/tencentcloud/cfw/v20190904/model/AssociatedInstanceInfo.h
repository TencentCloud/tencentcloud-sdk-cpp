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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ASSOCIATEDINSTANCEINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ASSOCIATEDINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 企业安全组关联实例信息
                */
                class AssociatedInstanceInfo : public AbstractModel
                {
                public:
                    AssociatedInstanceInfo();
                    ~AssociatedInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>实例类型，3是cvm实例,4是clb实例,5是eni实例,6是云数据库</p>
                     * @return Type <p>实例类型，3是cvm实例,4是clb实例,5是eni实例,6是云数据库</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>实例类型，3是cvm实例,4是clb实例,5是eni实例,6是云数据库</p>
                     * @param _type <p>实例类型，3是cvm实例,4是clb实例,5是eni实例,6是云数据库</p>
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>私有网络ID</p>
                     * @return VpcId <p>私有网络ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络ID</p>
                     * @param _vpcId <p>私有网络ID</p>
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
                     * 获取<p>私有网络名称</p>
                     * @return VpcName <p>私有网络名称</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>私有网络名称</p>
                     * @param _vpcName <p>私有网络名称</p>
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取<p>公网IP</p>
                     * @return PublicIp <p>公网IP</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>公网IP</p>
                     * @param _publicIp <p>公网IP</p>
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取<p>内网IP</p>
                     * @return Ip <p>内网IP</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>内网IP</p>
                     * @param _ip <p>内网IP</p>
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
                     * 获取<p>关联安全组数量</p>
                     * @return SecurityGroupCount <p>关联安全组数量</p>
                     * 
                     */
                    uint64_t GetSecurityGroupCount() const;

                    /**
                     * 设置<p>关联安全组数量</p>
                     * @param _securityGroupCount <p>关联安全组数量</p>
                     * 
                     */
                    void SetSecurityGroupCount(const uint64_t& _securityGroupCount);

                    /**
                     * 判断参数 SecurityGroupCount 是否已赋值
                     * @return SecurityGroupCount 是否已赋值
                     * 
                     */
                    bool SecurityGroupCountHasBeenSet() const;

                    /**
                     * 获取<p>关联安全组规则数量</p>
                     * @return SecurityGroupRuleCount <p>关联安全组规则数量</p>
                     * 
                     */
                    uint64_t GetSecurityGroupRuleCount() const;

                    /**
                     * 设置<p>关联安全组规则数量</p>
                     * @param _securityGroupRuleCount <p>关联安全组规则数量</p>
                     * 
                     */
                    void SetSecurityGroupRuleCount(const uint64_t& _securityGroupRuleCount);

                    /**
                     * 判断参数 SecurityGroupRuleCount 是否已赋值
                     * @return SecurityGroupRuleCount 是否已赋值
                     * 
                     */
                    bool SecurityGroupRuleCountHasBeenSet() const;

                    /**
                     * 获取<p>关联数据库代理Id</p>
                     * @return CdbId <p>关联数据库代理Id</p>
                     * 
                     */
                    std::string GetCdbId() const;

                    /**
                     * 设置<p>关联数据库代理Id</p>
                     * @param _cdbId <p>关联数据库代理Id</p>
                     * 
                     */
                    void SetCdbId(const std::string& _cdbId);

                    /**
                     * 判断参数 CdbId 是否已赋值
                     * @return CdbId 是否已赋值
                     * 
                     */
                    bool CdbIdHasBeenSet() const;

                    /**
                     * 获取<p>容器服务集群ID</p>
                     * @return TkeClusterId <p>容器服务集群ID</p>
                     * 
                     */
                    std::string GetTkeClusterId() const;

                    /**
                     * 设置<p>容器服务集群ID</p>
                     * @param _tkeClusterId <p>容器服务集群ID</p>
                     * 
                     */
                    void SetTkeClusterId(const std::string& _tkeClusterId);

                    /**
                     * 判断参数 TkeClusterId 是否已赋值
                     * @return TkeClusterId 是否已赋值
                     * 
                     */
                    bool TkeClusterIdHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例类型，3是cvm实例,4是clb实例,5是eni实例,6是云数据库</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>私有网络ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>私有网络名称</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>公网IP</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>内网IP</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>关联安全组数量</p>
                     */
                    uint64_t m_securityGroupCount;
                    bool m_securityGroupCountHasBeenSet;

                    /**
                     * <p>关联安全组规则数量</p>
                     */
                    uint64_t m_securityGroupRuleCount;
                    bool m_securityGroupRuleCountHasBeenSet;

                    /**
                     * <p>关联数据库代理Id</p>
                     */
                    std::string m_cdbId;
                    bool m_cdbIdHasBeenSet;

                    /**
                     * <p>容器服务集群ID</p>
                     */
                    std::string m_tkeClusterId;
                    bool m_tkeClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ASSOCIATEDINSTANCEINFO_H_
