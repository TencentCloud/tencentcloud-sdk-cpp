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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_MODIFYCLUSTERMACHINEREQUEST_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_MODIFYCLUSTERMACHINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/Disk.h>
#include <tencentcloud/tke/v20220501/model/InstanceChargePrepaid.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * ModifyClusterMachine请求参数结构体
                */
                class ModifyClusterMachineRequest : public AbstractModel
                {
                public:
                    ModifyClusterMachineRequest();
                    ~ModifyClusterMachineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群 ID</p>
                     * @return ClusterId <p>集群 ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID</p>
                     * @param _clusterId <p>集群 ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>节点名列表</p>
                     * @return MachineNames <p>节点名列表</p>
                     * 
                     */
                    std::vector<std::string> GetMachineNames() const;

                    /**
                     * 设置<p>节点名列表</p>
                     * @param _machineNames <p>节点名列表</p>
                     * 
                     */
                    void SetMachineNames(const std::vector<std::string>& _machineNames);

                    /**
                     * 判断参数 MachineNames 是否已赋值
                     * @return MachineNames 是否已赋值
                     * 
                     */
                    bool MachineNamesHasBeenSet() const;

                    /**
                     * 获取<p>machine的display name</p>
                     * @return DisplayName <p>machine的display name</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>machine的display name</p>
                     * @param _displayName <p>machine的display name</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>系统盘的信息</p>
                     * @return SystemDisk <p>系统盘的信息</p>
                     * 
                     */
                    Disk GetSystemDisk() const;

                    /**
                     * 设置<p>系统盘的信息</p>
                     * @param _systemDisk <p>系统盘的信息</p>
                     * 
                     */
                    void SetSystemDisk(const Disk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取<p>安全组列表</p>
                     * @return SecurityGroupIDs <p>安全组列表</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIDs() const;

                    /**
                     * 设置<p>安全组列表</p>
                     * @param _securityGroupIDs <p>安全组列表</p>
                     * 
                     */
                    void SetSecurityGroupIDs(const std::vector<std::string>& _securityGroupIDs);

                    /**
                     * 判断参数 SecurityGroupIDs 是否已赋值
                     * @return SecurityGroupIDs 是否已赋值
                     * 
                     */
                    bool SecurityGroupIDsHasBeenSet() const;

                    /**
                     * 获取<p>节点预付费信息</p>
                     * @return InstanceChargePrepaid <p>节点预付费信息</p>
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置<p>节点预付费信息</p>
                     * @param _instanceChargePrepaid <p>节点预付费信息</p>
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                private:

                    /**
                     * <p>集群 ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>节点名列表</p>
                     */
                    std::vector<std::string> m_machineNames;
                    bool m_machineNamesHasBeenSet;

                    /**
                     * <p>machine的display name</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>系统盘的信息</p>
                     */
                    Disk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>安全组列表</p>
                     */
                    std::vector<std::string> m_securityGroupIDs;
                    bool m_securityGroupIDsHasBeenSet;

                    /**
                     * <p>节点预付费信息</p>
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_MODIFYCLUSTERMACHINEREQUEST_H_
