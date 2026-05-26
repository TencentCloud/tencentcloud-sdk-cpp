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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_EXPANDINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_EXPANDINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * ExpandInstance请求参数结构体
                */
                class ExpandInstanceRequest : public AbstractModel
                {
                public:
                    ExpandInstanceRequest();
                    ~ExpandInstanceRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>存储节点扩容至多少个节点，如果没有变化，传当前节点数</p>
                     * @return StorageNodeNum <p>存储节点扩容至多少个节点，如果没有变化，传当前节点数</p>
                     * 
                     */
                    int64_t GetStorageNodeNum() const;

                    /**
                     * 设置<p>存储节点扩容至多少个节点，如果没有变化，传当前节点数</p>
                     * @param _storageNodeNum <p>存储节点扩容至多少个节点，如果没有变化，传当前节点数</p>
                     * 
                     */
                    void SetStorageNodeNum(const int64_t& _storageNodeNum);

                    /**
                     * 判断参数 StorageNodeNum 是否已赋值
                     * @return StorageNodeNum 是否已赋值
                     * 
                     */
                    bool StorageNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>可用区列表</p>
                     * @return Zones <p>可用区列表</p>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<p>可用区列表</p>
                     * @param _zones <p>可用区列表</p>
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取<p>az模式，1: 单AZ 2: 多AZ非主AZ模式 3: 多AZ主AZ模式</p>
                     * @return AZMode <p>az模式，1: 单AZ 2: 多AZ非主AZ模式 3: 多AZ主AZ模式</p>
                     * 
                     */
                    int64_t GetAZMode() const;

                    /**
                     * 设置<p>az模式，1: 单AZ 2: 多AZ非主AZ模式 3: 多AZ主AZ模式</p>
                     * @param _aZMode <p>az模式，1: 单AZ 2: 多AZ非主AZ模式 3: 多AZ主AZ模式</p>
                     * 
                     */
                    void SetAZMode(const int64_t& _aZMode);

                    /**
                     * 判断参数 AZMode 是否已赋值
                     * @return AZMode 是否已赋值
                     * 
                     */
                    bool AZModeHasBeenSet() const;

                    /**
                     * 获取<p>AZMode传3时，表示主AZ</p>
                     * @return PrimaryAZ <p>AZMode传3时，表示主AZ</p>
                     * 
                     */
                    std::string GetPrimaryAZ() const;

                    /**
                     * 设置<p>AZMode传3时，表示主AZ</p>
                     * @param _primaryAZ <p>AZMode传3时，表示主AZ</p>
                     * 
                     */
                    void SetPrimaryAZ(const std::string& _primaryAZ);

                    /**
                     * 判断参数 PrimaryAZ 是否已赋值
                     * @return PrimaryAZ 是否已赋值
                     * 
                     */
                    bool PrimaryAZHasBeenSet() const;

                    /**
                     * 获取<p>全能型副本数，取值范围包括1-3</p>
                     * @return FullReplications <p>全能型副本数，取值范围包括1-3</p>
                     * 
                     */
                    int64_t GetFullReplications() const;

                    /**
                     * 设置<p>全能型副本数，取值范围包括1-3</p>
                     * @param _fullReplications <p>全能型副本数，取值范围包括1-3</p>
                     * 
                     */
                    void SetFullReplications(const int64_t& _fullReplications);

                    /**
                     * 判断参数 FullReplications 是否已赋值
                     * @return FullReplications 是否已赋值
                     * 
                     */
                    bool FullReplicationsHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>存储节点扩容至多少个节点，如果没有变化，传当前节点数</p>
                     */
                    int64_t m_storageNodeNum;
                    bool m_storageNodeNumHasBeenSet;

                    /**
                     * <p>可用区列表</p>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>az模式，1: 单AZ 2: 多AZ非主AZ模式 3: 多AZ主AZ模式</p>
                     */
                    int64_t m_aZMode;
                    bool m_aZModeHasBeenSet;

                    /**
                     * <p>AZMode传3时，表示主AZ</p>
                     */
                    std::string m_primaryAZ;
                    bool m_primaryAZHasBeenSet;

                    /**
                     * <p>全能型副本数，取值范围包括1-3</p>
                     */
                    int64_t m_fullReplications;
                    bool m_fullReplicationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_EXPANDINSTANCEREQUEST_H_
