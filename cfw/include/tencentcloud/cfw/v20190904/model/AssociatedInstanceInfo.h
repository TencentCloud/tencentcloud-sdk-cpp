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
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
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
                     * 获取实例类型，3是cvm实例,4是clb实例,5是eni实例,6是云数据库
                     * @return Type 实例类型，3是cvm实例,4是clb实例,5是eni实例,6是云数据库
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置实例类型，3是cvm实例,4是clb实例,5是eni实例,6是云数据库
                     * @param _type 实例类型，3是cvm实例,4是clb实例,5是eni实例,6是云数据库
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
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
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
                     * 获取私有网络名称
                     * @return VpcName 私有网络名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置私有网络名称
                     * @param _vpcName 私有网络名称
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
                     * 获取公网IP
                     * @return PublicIp 公网IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网IP
                     * @param _publicIp 公网IP
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
                     * 获取内网IP
                     * @return Ip 内网IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置内网IP
                     * @param _ip 内网IP
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
                     * 获取关联安全组数量
                     * @return SecurityGroupCount 关联安全组数量
                     * 
                     */
                    uint64_t GetSecurityGroupCount() const;

                    /**
                     * 设置关联安全组数量
                     * @param _securityGroupCount 关联安全组数量
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
                     * 获取关联安全组规则数量
                     * @return SecurityGroupRuleCount 关联安全组规则数量
                     * 
                     */
                    uint64_t GetSecurityGroupRuleCount() const;

                    /**
                     * 设置关联安全组规则数量
                     * @param _securityGroupRuleCount 关联安全组规则数量
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
                     * 获取关联数据库代理Id
                     * @return CdbId 关联数据库代理Id
                     * 
                     */
                    std::string GetCdbId() const;

                    /**
                     * 设置关联数据库代理Id
                     * @param _cdbId 关联数据库代理Id
                     * 
                     */
                    void SetCdbId(const std::string& _cdbId);

                    /**
                     * 判断参数 CdbId 是否已赋值
                     * @return CdbId 是否已赋值
                     * 
                     */
                    bool CdbIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例类型，3是cvm实例,4是clb实例,5是eni实例,6是云数据库
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 公网IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 关联安全组数量
                     */
                    uint64_t m_securityGroupCount;
                    bool m_securityGroupCountHasBeenSet;

                    /**
                     * 关联安全组规则数量
                     */
                    uint64_t m_securityGroupRuleCount;
                    bool m_securityGroupRuleCountHasBeenSet;

                    /**
                     * 关联数据库代理Id
                     */
                    std::string m_cdbId;
                    bool m_cdbIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ASSOCIATEDINSTANCEINFO_H_
