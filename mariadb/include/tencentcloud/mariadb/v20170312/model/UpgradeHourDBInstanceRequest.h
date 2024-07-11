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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_UPGRADEHOURDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_UPGRADEHOURDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * UpgradeHourDBInstance请求参数结构体
                */
                class UpgradeHourDBInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeHourDBInstanceRequest();
                    ~UpgradeHourDBInstanceRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取内存大小，单位：GB
                     * @return Memory 内存大小，单位：GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位：GB
                     * @param _memory 内存大小，单位：GB
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取存储大小，单位：GB
                     * @return Storage 存储大小，单位：GB
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置存储大小，单位：GB
                     * @param _storage 存储大小，单位：GB
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取切换开始时间，格式如: "2019-12-12 07:00:00"。开始时间必须在当前时间一个小时以后，3天以内。
                     * @return SwitchStartTime 切换开始时间，格式如: "2019-12-12 07:00:00"。开始时间必须在当前时间一个小时以后，3天以内。
                     * 
                     */
                    std::string GetSwitchStartTime() const;

                    /**
                     * 设置切换开始时间，格式如: "2019-12-12 07:00:00"。开始时间必须在当前时间一个小时以后，3天以内。
                     * @param _switchStartTime 切换开始时间，格式如: "2019-12-12 07:00:00"。开始时间必须在当前时间一个小时以后，3天以内。
                     * 
                     */
                    void SetSwitchStartTime(const std::string& _switchStartTime);

                    /**
                     * 判断参数 SwitchStartTime 是否已赋值
                     * @return SwitchStartTime 是否已赋值
                     * 
                     */
                    bool SwitchStartTimeHasBeenSet() const;

                    /**
                     * 获取切换结束时间,  格式如: "2019-12-12 07:15:00"，结束时间必须大于开始时间。
                     * @return SwitchEndTime 切换结束时间,  格式如: "2019-12-12 07:15:00"，结束时间必须大于开始时间。
                     * 
                     */
                    std::string GetSwitchEndTime() const;

                    /**
                     * 设置切换结束时间,  格式如: "2019-12-12 07:15:00"，结束时间必须大于开始时间。
                     * @param _switchEndTime 切换结束时间,  格式如: "2019-12-12 07:15:00"，结束时间必须大于开始时间。
                     * 
                     */
                    void SetSwitchEndTime(const std::string& _switchEndTime);

                    /**
                     * 判断参数 SwitchEndTime 是否已赋值
                     * @return SwitchEndTime 是否已赋值
                     * 
                     */
                    bool SwitchEndTimeHasBeenSet() const;

                    /**
                     * 获取是否自动重试。 0：不自动重试  1：自动重试
                     * @return SwitchAutoRetry 是否自动重试。 0：不自动重试  1：自动重试
                     * 
                     */
                    int64_t GetSwitchAutoRetry() const;

                    /**
                     * 设置是否自动重试。 0：不自动重试  1：自动重试
                     * @param _switchAutoRetry 是否自动重试。 0：不自动重试  1：自动重试
                     * 
                     */
                    void SetSwitchAutoRetry(const int64_t& _switchAutoRetry);

                    /**
                     * 判断参数 SwitchAutoRetry 是否已赋值
                     * @return SwitchAutoRetry 是否已赋值
                     * 
                     */
                    bool SwitchAutoRetryHasBeenSet() const;

                    /**
                     * 获取变更部署时指定的新可用区列表，第1个为主可用区，其余为从可用区
                     * @return Zones 变更部署时指定的新可用区列表，第1个为主可用区，其余为从可用区
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置变更部署时指定的新可用区列表，第1个为主可用区，其余为从可用区
                     * @param _zones 变更部署时指定的新可用区列表，第1个为主可用区，其余为从可用区
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 内存大小，单位：GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 存储大小，单位：GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 切换开始时间，格式如: "2019-12-12 07:00:00"。开始时间必须在当前时间一个小时以后，3天以内。
                     */
                    std::string m_switchStartTime;
                    bool m_switchStartTimeHasBeenSet;

                    /**
                     * 切换结束时间,  格式如: "2019-12-12 07:15:00"，结束时间必须大于开始时间。
                     */
                    std::string m_switchEndTime;
                    bool m_switchEndTimeHasBeenSet;

                    /**
                     * 是否自动重试。 0：不自动重试  1：自动重试
                     */
                    int64_t m_switchAutoRetry;
                    bool m_switchAutoRetryHasBeenSet;

                    /**
                     * 变更部署时指定的新可用区列表，第1个为主可用区，其余为从可用区
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_UPGRADEHOURDBINSTANCEREQUEST_H_
