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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_APPLYCDBPROXYREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_APPLYCDBPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ApplyCDBProxy请求参数结构体
                */
                class ApplyCDBProxyRequest : public AbstractModel
                {
                public:
                    ApplyCDBProxyRequest();
                    ~ApplyCDBProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主实例唯一标识ID
                     * @return InstanceId 主实例唯一标识ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置主实例唯一标识ID
                     * @param InstanceId 主实例唯一标识ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return UniqVpcId 私有网络ID
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param UniqVpcId 私有网络ID
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络子网ID
                     * @return UniqSubnetId 私有网络子网ID
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置私有网络子网ID
                     * @param UniqSubnetId 私有网络子网ID
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取代理组节点个数
                     * @return ProxyCount 代理组节点个数
                     */
                    uint64_t GetProxyCount() const;

                    /**
                     * 设置代理组节点个数
                     * @param ProxyCount 代理组节点个数
                     */
                    void SetProxyCount(const uint64_t& _proxyCount);

                    /**
                     * 判断参数 ProxyCount 是否已赋值
                     * @return ProxyCount 是否已赋值
                     */
                    bool ProxyCountHasBeenSet() const;

                    /**
                     * 获取cpu核数
                     * @return Cpu cpu核数
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置cpu核数
                     * @param Cpu cpu核数
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存
                     * @return Mem 内存
                     */
                    uint64_t GetMem() const;

                    /**
                     * 设置内存
                     * @param Mem 内存
                     */
                    void SetMem(const uint64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取安全组
                     * @return SecurityGroup 安全组
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置安全组
                     * @param SecurityGroup 安全组
                     */
                    void SetSecurityGroup(const std::vector<std::string>& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取描述说明，最大支持256位。
                     * @return Desc 描述说明，最大支持256位。
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置描述说明，最大支持256位。
                     * @param Desc 描述说明，最大支持256位。
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * 主实例唯一标识ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 私有网络子网ID
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 代理组节点个数
                     */
                    uint64_t m_proxyCount;
                    bool m_proxyCountHasBeenSet;

                    /**
                     * cpu核数
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存
                     */
                    uint64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 安全组
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * 描述说明，最大支持256位。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_APPLYCDBPROXYREQUEST_H_
