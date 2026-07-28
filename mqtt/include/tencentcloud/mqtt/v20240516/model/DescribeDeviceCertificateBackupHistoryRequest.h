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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICECERTIFICATEBACKUPHISTORYREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICECERTIFICATEBACKUPHISTORYREQUEST_H_

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
                * DescribeDeviceCertificateBackupHistory请求参数结构体
                */
                class DescribeDeviceCertificateBackupHistoryRequest : public AbstractModel
                {
                public:
                    DescribeDeviceCertificateBackupHistoryRequest();
                    ~DescribeDeviceCertificateBackupHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @return InstanceId <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @param _instanceId <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
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
                     * 获取<p>目标集群的集群ID</p>
                     * @return Destination <p>目标集群的集群ID</p>
                     * 
                     */
                    std::string GetDestination() const;

                    /**
                     * 设置<p>目标集群的集群ID</p>
                     * @param _destination <p>目标集群的集群ID</p>
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
                     * 获取<p>CA证书的SN</p>
                     * @return CaSn <p>CA证书的SN</p>
                     * 
                     */
                    std::string GetCaSn() const;

                    /**
                     * 设置<p>CA证书的SN</p>
                     * @param _caSn <p>CA证书的SN</p>
                     * 
                     */
                    void SetCaSn(const std::string& _caSn);

                    /**
                     * 判断参数 CaSn 是否已赋值
                     * @return CaSn 是否已赋值
                     * 
                     */
                    bool CaSnHasBeenSet() const;

                    /**
                     * 获取<p>设备证书的SN</p>
                     * @return DeviceCertificateSn <p>设备证书的SN</p>
                     * 
                     */
                    std::string GetDeviceCertificateSn() const;

                    /**
                     * 设置<p>设备证书的SN</p>
                     * @param _deviceCertificateSn <p>设备证书的SN</p>
                     * 
                     */
                    void SetDeviceCertificateSn(const std::string& _deviceCertificateSn);

                    /**
                     * 判断参数 DeviceCertificateSn 是否已赋值
                     * @return DeviceCertificateSn 是否已赋值
                     * 
                     */
                    bool DeviceCertificateSnHasBeenSet() const;

                    /**
                     * 获取<p>同步发生开始时间（毫秒级时间戳）</p>
                     * @return ModificationTimeStart <p>同步发生开始时间（毫秒级时间戳）</p>
                     * 
                     */
                    int64_t GetModificationTimeStart() const;

                    /**
                     * 设置<p>同步发生开始时间（毫秒级时间戳）</p>
                     * @param _modificationTimeStart <p>同步发生开始时间（毫秒级时间戳）</p>
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
                     * 获取<p>同步结束时间（毫秒级时间戳）</p>
                     * @return ModificationTimeEnd <p>同步结束时间（毫秒级时间戳）</p>
                     * 
                     */
                    int64_t GetModificationTimeEnd() const;

                    /**
                     * 设置<p>同步结束时间（毫秒级时间戳）</p>
                     * @param _modificationTimeEnd <p>同步结束时间（毫秒级时间戳）</p>
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
                     * 获取<p>查询条数，默认20，最大1024</p>
                     * @return Limit <p>查询条数，默认20，最大1024</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>查询条数，默认20，最大1024</p>
                     * @param _limit <p>查询条数，默认20，最大1024</p>
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
                     * <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>目标集群的集群ID</p>
                     */
                    std::string m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * <p>CA证书的SN</p>
                     */
                    std::string m_caSn;
                    bool m_caSnHasBeenSet;

                    /**
                     * <p>设备证书的SN</p>
                     */
                    std::string m_deviceCertificateSn;
                    bool m_deviceCertificateSnHasBeenSet;

                    /**
                     * <p>同步发生开始时间（毫秒级时间戳）</p>
                     */
                    int64_t m_modificationTimeStart;
                    bool m_modificationTimeStartHasBeenSet;

                    /**
                     * <p>同步结束时间（毫秒级时间戳）</p>
                     */
                    int64_t m_modificationTimeEnd;
                    bool m_modificationTimeEndHasBeenSet;

                    /**
                     * <p>查询条数，默认20，最大1024</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICECERTIFICATEBACKUPHISTORYREQUEST_H_
