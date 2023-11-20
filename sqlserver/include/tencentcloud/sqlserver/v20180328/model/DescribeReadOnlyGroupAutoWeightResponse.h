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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEREADONLYGROUPAUTOWEIGHTRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEREADONLYGROUPAUTOWEIGHTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/ReadOnlyInstance.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeReadOnlyGroupAutoWeight返回参数结构体
                */
                class DescribeReadOnlyGroupAutoWeightResponse : public AbstractModel
                {
                public:
                    DescribeReadOnlyGroupAutoWeightResponse();
                    ~DescribeReadOnlyGroupAutoWeightResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取只读组ID，格式如：mssqlro-3l3fgqn7
                     * @return ReadOnlyGroupId 只读组ID，格式如：mssqlro-3l3fgqn7
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取只读组名称
                     * @return ReadOnlyGroupName 只读组名称
                     * 
                     */
                    std::string GetReadOnlyGroupName() const;

                    /**
                     * 判断参数 ReadOnlyGroupName 是否已赋值
                     * @return ReadOnlyGroupName 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupNameHasBeenSet() const;

                    /**
                     * 获取只读组的地域ID，与主实例相同
                     * @return RegionId 只读组的地域ID，与主实例相同
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取只读组的可用区，与主实例相同
                     * @return ZoneId 只读组的可用区，与主实例相同
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取是否启动超时剔除功能，1-开启，0-不开启
                     * @return IsOfflineDelay 是否启动超时剔除功能，1-开启，0-不开启
                     * 
                     */
                    int64_t GetIsOfflineDelay() const;

                    /**
                     * 判断参数 IsOfflineDelay 是否已赋值
                     * @return IsOfflineDelay 是否已赋值
                     * 
                     */
                    bool IsOfflineDelayHasBeenSet() const;

                    /**
                     * 获取启动超时剔除功能后，使用的超时阈值(秒)
                     * @return ReadOnlyMaxDelayTime 启动超时剔除功能后，使用的超时阈值(秒)
                     * 
                     */
                    int64_t GetReadOnlyMaxDelayTime() const;

                    /**
                     * 判断参数 ReadOnlyMaxDelayTime 是否已赋值
                     * @return ReadOnlyMaxDelayTime 是否已赋值
                     * 
                     */
                    bool ReadOnlyMaxDelayTimeHasBeenSet() const;

                    /**
                     * 获取启动超时剔除功能后，至少只读组保留的只读副本数
                     * @return MinReadOnlyInGroup 启动超时剔除功能后，至少只读组保留的只读副本数
                     * 
                     */
                    int64_t GetMinReadOnlyInGroup() const;

                    /**
                     * 判断参数 MinReadOnlyInGroup 是否已赋值
                     * @return MinReadOnlyInGroup 是否已赋值
                     * 
                     */
                    bool MinReadOnlyInGroupHasBeenSet() const;

                    /**
                     * 获取只读组vip
                     * @return Vip 只读组vip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取只读组vport
                     * @return Vport 只读组vport
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取只读组在私有网络ID
                     * @return VpcId 只读组在私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取只读组在私有网络子网ID
                     * @return SubnetId 只读组在私有网络子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取只读实例副本集合
                     * @return ReadOnlyInstanceSet 只读实例副本集合
                     * 
                     */
                    std::vector<ReadOnlyInstance> GetReadOnlyInstanceSet() const;

                    /**
                     * 判断参数 ReadOnlyInstanceSet 是否已赋值
                     * @return ReadOnlyInstanceSet 是否已赋值
                     * 
                     */
                    bool ReadOnlyInstanceSetHasBeenSet() const;

                    /**
                     * 获取只读组状态: 1-申请成功运行中，5-申请中
                     * @return Status 只读组状态: 1-申请成功运行中，5-申请中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取主实例ID，形如mssql-sgeshe3th
                     * @return MasterInstanceId 主实例ID，形如mssql-sgeshe3th
                     * 
                     */
                    std::string GetMasterInstanceId() const;

                    /**
                     * 判断参数 MasterInstanceId 是否已赋值
                     * @return MasterInstanceId 是否已赋值
                     * 
                     */
                    bool MasterInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 只读组ID，格式如：mssqlro-3l3fgqn7
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * 只读组名称
                     */
                    std::string m_readOnlyGroupName;
                    bool m_readOnlyGroupNameHasBeenSet;

                    /**
                     * 只读组的地域ID，与主实例相同
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 只读组的可用区，与主实例相同
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 是否启动超时剔除功能，1-开启，0-不开启
                     */
                    int64_t m_isOfflineDelay;
                    bool m_isOfflineDelayHasBeenSet;

                    /**
                     * 启动超时剔除功能后，使用的超时阈值(秒)
                     */
                    int64_t m_readOnlyMaxDelayTime;
                    bool m_readOnlyMaxDelayTimeHasBeenSet;

                    /**
                     * 启动超时剔除功能后，至少只读组保留的只读副本数
                     */
                    int64_t m_minReadOnlyInGroup;
                    bool m_minReadOnlyInGroupHasBeenSet;

                    /**
                     * 只读组vip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 只读组vport
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 只读组在私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 只读组在私有网络子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 只读实例副本集合
                     */
                    std::vector<ReadOnlyInstance> m_readOnlyInstanceSet;
                    bool m_readOnlyInstanceSetHasBeenSet;

                    /**
                     * 只读组状态: 1-申请成功运行中，5-申请中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 主实例ID，形如mssql-sgeshe3th
                     */
                    std::string m_masterInstanceId;
                    bool m_masterInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEREADONLYGROUPAUTOWEIGHTRESPONSE_H_
