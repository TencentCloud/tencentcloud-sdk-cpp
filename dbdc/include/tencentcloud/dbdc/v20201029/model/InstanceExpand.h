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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_INSTANCEEXPAND_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_INSTANCEEXPAND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/InstanceDetail.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * 集群扩展信息。
                */
                class InstanceExpand : public AbstractModel
                {
                public:
                    InstanceExpand();
                    ~InstanceExpand() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
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
                     * 获取集群名称
                     * @return InstanceName 集群名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置集群名称
                     * @param _instanceName 集群名称
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
                     * 获取用户ID
                     * @return AppId 用户ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置用户ID
                     * @param _appId 用户ID
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取集群类型： 0：一主一备，1：一主两备
                     * @return InstanceType 集群类型： 0：一主一备，1：一主两备
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置集群类型： 0：一主一备，1：一主两备
                     * @param _instanceType 集群类型： 0：一主一备，1：一主两备
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取集群状态: 0 集群创建中, 1 集群有效, 2 集群扩容中, 3 集群删除中, 4 集群缩容中 -1 集群已隔离 -2 集群已删除
                     * @return InstanceStatus 集群状态: 0 集群创建中, 1 集群有效, 2 集群扩容中, 3 集群删除中, 4 集群缩容中 -1 集群已隔离 -2 集群已删除
                     * 
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置集群状态: 0 集群创建中, 1 集群有效, 2 集群扩容中, 3 集群删除中, 4 集群缩容中 -1 集群已隔离 -2 集群已删除
                     * @param _instanceStatus 集群状态: 0 集群创建中, 1 集群有效, 2 集群扩容中, 3 集群删除中, 4 集群缩容中 -1 集群已隔离 -2 集群已删除
                     * 
                     */
                    void SetInstanceStatus(const int64_t& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取实例自动续费标识： 0正常续费 1自动续费 2到期不续费
                     * @return AutoRenewFlag 实例自动续费标识： 0正常续费 1自动续费 2到期不续费
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置实例自动续费标识： 0正常续费 1自动续费 2到期不续费
                     * @param _autoRenewFlag 实例自动续费标识： 0正常续费 1自动续费 2到期不续费
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取机型
                     * @return Machine 机型
                     * 
                     */
                    std::string GetMachine() const;

                    /**
                     * 设置机型
                     * @param _machine 机型
                     * 
                     */
                    void SetMachine(const std::string& _machine);

                    /**
                     * 判断参数 Machine 是否已赋值
                     * @return Machine 是否已赋值
                     * 
                     */
                    bool MachineHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return PeriodEndTime 过期时间
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置过期时间
                     * @param _periodEndTime 过期时间
                     * 
                     */
                    void SetPeriodEndTime(const std::string& _periodEndTime);

                    /**
                     * 判断参数 PeriodEndTime 是否已赋值
                     * @return PeriodEndTime 是否已赋值
                     * 
                     */
                    bool PeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取集群信息
                     * @return InstanceDetail 集群信息
                     * 
                     */
                    InstanceDetail GetInstanceDetail() const;

                    /**
                     * 设置集群信息
                     * @param _instanceDetail 集群信息
                     * 
                     */
                    void SetInstanceDetail(const InstanceDetail& _instanceDetail);

                    /**
                     * 判断参数 InstanceDetail 是否已赋值
                     * @return InstanceDetail 是否已赋值
                     * 
                     */
                    bool InstanceDetailHasBeenSet() const;

                    /**
                     * 获取计费侧的产品ID
                     * @return Pid 计费侧的产品ID
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置计费侧的产品ID
                     * @param _pid 计费侧的产品ID
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 用户ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 集群类型： 0：一主一备，1：一主两备
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 集群状态: 0 集群创建中, 1 集群有效, 2 集群扩容中, 3 集群删除中, 4 集群缩容中 -1 集群已隔离 -2 集群已删除
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例自动续费标识： 0正常续费 1自动续费 2到期不续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 机型
                     */
                    std::string m_machine;
                    bool m_machineHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * 集群信息
                     */
                    InstanceDetail m_instanceDetail;
                    bool m_instanceDetailHasBeenSet;

                    /**
                     * 计费侧的产品ID
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_INSTANCEEXPAND_H_
