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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICEIDENTITYBACKUPHISTORYREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICEIDENTITYBACKUPHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * DescribeDeviceIdentityBackupHistory请求参数结构体
                */
                class DescribeDeviceIdentityBackupHistoryRequest : public AbstractModel
                {
                public:
                    DescribeDeviceIdentityBackupHistoryRequest();
                    ~DescribeDeviceIdentityBackupHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群id</p>
                     * @return InstanceId <p>集群id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _instanceId <p>集群id</p>
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
                     * 获取<p>灾备集群的集群ID</p>
                     * @return Destination <p>灾备集群的集群ID</p>
                     * 
                     */
                    std::string GetDestination() const;

                    /**
                     * 设置<p>灾备集群的集群ID</p>
                     * @param _destination <p>灾备集群的集群ID</p>
                     * 
                     */
                    void SetDestination(const std::string& _destination);

                    /**
                     * 判断参数 Destination 是否已赋值
                     * @return Destination 是否已赋值
                     * 
                     */
                    bool DestinationHasBeenSet() const;

                    /**
                     * 获取<p>设备ID</p>
                     * @return DeviceId <p>设备ID</p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>设备ID</p>
                     * @param _deviceId <p>设备ID</p>
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取<p>同步发生的开始时间</p>
                     * @return ModificationTimeStart <p>同步发生的开始时间</p>
                     * 
                     */
                    int64_t GetModificationTimeStart() const;

                    /**
                     * 设置<p>同步发生的开始时间</p>
                     * @param _modificationTimeStart <p>同步发生的开始时间</p>
                     * 
                     */
                    void SetModificationTimeStart(const int64_t& _modificationTimeStart);

                    /**
                     * 判断参数 ModificationTimeStart 是否已赋值
                     * @return ModificationTimeStart 是否已赋值
                     * 
                     */
                    bool ModificationTimeStartHasBeenSet() const;

                    /**
                     * 获取<p>同步发生的结束时间</p>
                     * @return ModificationTimeEnd <p>同步发生的结束时间</p>
                     * 
                     */
                    int64_t GetModificationTimeEnd() const;

                    /**
                     * 设置<p>同步发生的结束时间</p>
                     * @param _modificationTimeEnd <p>同步发生的结束时间</p>
                     * 
                     */
                    void SetModificationTimeEnd(const int64_t& _modificationTimeEnd);

                    /**
                     * 判断参数 ModificationTimeEnd 是否已赋值
                     * @return ModificationTimeEnd 是否已赋值
                     * 
                     */
                    bool ModificationTimeEndHasBeenSet() const;

                    /**
                     * 获取<p>查询条数</p>
                     * @return Limit <p>查询条数</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>查询条数</p>
                     * @param _limit <p>查询条数</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>集群id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>灾备集群的集群ID</p>
                     */
                    std::string m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * <p>设备ID</p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>同步发生的开始时间</p>
                     */
                    int64_t m_modificationTimeStart;
                    bool m_modificationTimeStartHasBeenSet;

                    /**
                     * <p>同步发生的结束时间</p>
                     */
                    int64_t m_modificationTimeEnd;
                    bool m_modificationTimeEndHasBeenSet;

                    /**
                     * <p>查询条数</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICEIDENTITYBACKUPHISTORYREQUEST_H_
