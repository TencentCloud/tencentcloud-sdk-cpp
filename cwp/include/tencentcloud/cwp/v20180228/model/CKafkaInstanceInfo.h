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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CKAFKAINSTANCEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CKAFKAINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/CKafkaTopicInfo.h>
#include <tencentcloud/cwp/v20180228/model/CKafkaRouteInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CKafka实例信息
                */
                class CKafkaInstanceInfo : public AbstractModel
                {
                public:
                    CKafkaInstanceInfo();
                    ~CKafkaInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceID 实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例ID
                     * @param _instanceID 实例ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

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
                     * 获取版本号
                     * @return KafkaVersion 版本号
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置版本号
                     * @param _kafkaVersion 版本号
                     * 
                     */
                    void SetKafkaVersion(const std::string& _kafkaVersion);

                    /**
                     * 判断参数 KafkaVersion 是否已赋值
                     * @return KafkaVersion 是否已赋值
                     * 
                     */
                    bool KafkaVersionHasBeenSet() const;

                    /**
                     * 获取主题列表
                     * @return TopicList 主题列表
                     * 
                     */
                    std::vector<CKafkaTopicInfo> GetTopicList() const;

                    /**
                     * 设置主题列表
                     * @param _topicList 主题列表
                     * 
                     */
                    void SetTopicList(const std::vector<CKafkaTopicInfo>& _topicList);

                    /**
                     * 判断参数 TopicList 是否已赋值
                     * @return TopicList 是否已赋值
                     * 
                     */
                    bool TopicListHasBeenSet() const;

                    /**
                     * 获取路由列表
                     * @return RouteList 路由列表
                     * 
                     */
                    std::vector<CKafkaRouteInfo> GetRouteList() const;

                    /**
                     * 设置路由列表
                     * @param _routeList 路由列表
                     * 
                     */
                    void SetRouteList(const std::vector<CKafkaRouteInfo>& _routeList);

                    /**
                     * 判断参数 RouteList 是否已赋值
                     * @return RouteList 是否已赋值
                     * 
                     */
                    bool RouteListHasBeenSet() const;

                    /**
                     * 获取磁盘容量，单位GB
                     * @return DiskSize 磁盘容量，单位GB
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置磁盘容量，单位GB
                     * @param _diskSize 磁盘容量，单位GB
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取vpcId，如果为空，说明是基础网络
                     * @return VpcId vpcId，如果为空，说明是基础网络
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpcId，如果为空，说明是基础网络
                     * @param _vpcId vpcId，如果为空，说明是基础网络
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
                     * 获取子网id
                     * @return SubnetId 子网id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网id
                     * @param _subnetId 子网id
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取状态，1表示健康，2表示告警，3 表示实例状态异常
                     * @return Healthy 状态，1表示健康，2表示告警，3 表示实例状态异常
                     * 
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置状态，1表示健康，2表示告警，3 表示实例状态异常
                     * @param _healthy 状态，1表示健康，2表示告警，3 表示实例状态异常
                     * 
                     */
                    void SetHealthy(const int64_t& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     * 
                     */
                    bool HealthyHasBeenSet() const;

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
                     * 获取地域
                     * @return Az 地域
                     * 
                     */
                    std::string GetAz() const;

                    /**
                     * 设置地域
                     * @param _az 地域
                     * 
                     */
                    void SetAz(const std::string& _az);

                    /**
                     * 判断参数 Az 是否已赋值
                     * @return Az 是否已赋值
                     * 
                     */
                    bool AzHasBeenSet() const;

                    /**
                     * 获取实例带宽，单位Mbps
                     * @return Bandwidth 实例带宽，单位Mbps
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置实例带宽，单位Mbps
                     * @param _bandwidth 实例带宽，单位Mbps
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 版本号
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * 主题列表
                     */
                    std::vector<CKafkaTopicInfo> m_topicList;
                    bool m_topicListHasBeenSet;

                    /**
                     * 路由列表
                     */
                    std::vector<CKafkaRouteInfo> m_routeList;
                    bool m_routeListHasBeenSet;

                    /**
                     * 磁盘容量，单位GB
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * vpcId，如果为空，说明是基础网络
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 状态，1表示健康，2表示告警，3 表示实例状态异常
                     */
                    int64_t m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_az;
                    bool m_azHasBeenSet;

                    /**
                     * 实例带宽，单位Mbps
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CKAFKAINSTANCEINFO_H_
