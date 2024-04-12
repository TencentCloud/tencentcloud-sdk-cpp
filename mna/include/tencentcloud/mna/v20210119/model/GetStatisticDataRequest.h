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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETSTATISTICDATAREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETSTATISTICDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetStatisticData请求参数结构体
                */
                class GetStatisticDataRequest : public AbstractModel
                {
                public:
                    GetStatisticDataRequest();
                    ~GetStatisticDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备ID。若不指定设备，可传"-1"
                     * @return DeviceId 设备ID。若不指定设备，可传"-1"
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID。若不指定设备，可传"-1"
                     * @param _deviceId 设备ID。若不指定设备，可传"-1"
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
                     * 获取统计开始时间，单位：s
                     * @return BeginTime 统计开始时间，单位：s
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置统计开始时间，单位：s
                     * @param _beginTime 统计开始时间，单位：s
                     * 
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取统计结束时间，单位：s
                     * @return EndTime 统计结束时间，单位：s
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置统计结束时间，单位：s
                     * @param _endTime 统计结束时间，单位：s
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取聚合粒度：
1:按小时统计
2:按天统计
                     * @return TimeGranularity 聚合粒度：
1:按小时统计
2:按天统计
                     * 
                     */
                    int64_t GetTimeGranularity() const;

                    /**
                     * 设置聚合粒度：
1:按小时统计
2:按天统计
                     * @param _timeGranularity 聚合粒度：
1:按小时统计
2:按天统计
                     * 
                     */
                    void SetTimeGranularity(const int64_t& _timeGranularity);

                    /**
                     * 判断参数 TimeGranularity 是否已赋值
                     * @return TimeGranularity 是否已赋值
                     * 
                     */
                    bool TimeGranularityHasBeenSet() const;

                    /**
                     * 获取接入区域。取值范围：['MC','AP','EU','AM'] MC=中国大陆 AP=亚太 EU=欧洲 AM=美洲。不填代表全量区域。
                     * @return AccessRegion 接入区域。取值范围：['MC','AP','EU','AM'] MC=中国大陆 AP=亚太 EU=欧洲 AM=美洲。不填代表全量区域。
                     * 
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置接入区域。取值范围：['MC','AP','EU','AM'] MC=中国大陆 AP=亚太 EU=欧洲 AM=美洲。不填代表全量区域。
                     * @param _accessRegion 接入区域。取值范围：['MC','AP','EU','AM'] MC=中国大陆 AP=亚太 EU=欧洲 AM=美洲。不填代表全量区域。
                     * 
                     */
                    void SetAccessRegion(const std::string& _accessRegion);

                    /**
                     * 判断参数 AccessRegion 是否已赋值
                     * @return AccessRegion 是否已赋值
                     * 
                     */
                    bool AccessRegionHasBeenSet() const;

                    /**
                     * 获取网关类型。0：公有云网关；1：自有网关。不传默认为0。
                     * @return GatewayType 网关类型。0：公有云网关；1：自有网关。不传默认为0。
                     * 
                     */
                    int64_t GetGatewayType() const;

                    /**
                     * 设置网关类型。0：公有云网关；1：自有网关。不传默认为0。
                     * @param _gatewayType 网关类型。0：公有云网关；1：自有网关。不传默认为0。
                     * 
                     */
                    void SetGatewayType(const int64_t& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     * 
                     */
                    bool GatewayTypeHasBeenSet() const;

                    /**
                     * 获取设备ID列表，最多10个设备，下载多个设备流量和时使用，此时DeviceId可传"-1"
                     * @return DeviceList 设备ID列表，最多10个设备，下载多个设备流量和时使用，此时DeviceId可传"-1"
                     * 
                     */
                    std::vector<std::string> GetDeviceList() const;

                    /**
                     * 设置设备ID列表，最多10个设备，下载多个设备流量和时使用，此时DeviceId可传"-1"
                     * @param _deviceList 设备ID列表，最多10个设备，下载多个设备流量和时使用，此时DeviceId可传"-1"
                     * 
                     */
                    void SetDeviceList(const std::vector<std::string>& _deviceList);

                    /**
                     * 判断参数 DeviceList 是否已赋值
                     * @return DeviceList 是否已赋值
                     * 
                     */
                    bool DeviceListHasBeenSet() const;

                    /**
                     * 获取设备分组ID，若不指定分组则不传，按分组下载数据时使用
                     * @return GroupId 设备分组ID，若不指定分组则不传，按分组下载数据时使用
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置设备分组ID，若不指定分组则不传，按分组下载数据时使用
                     * @param _groupId 设备分组ID，若不指定分组则不传，按分组下载数据时使用
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 设备ID。若不指定设备，可传"-1"
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 统计开始时间，单位：s
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 统计结束时间，单位：s
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 聚合粒度：
1:按小时统计
2:按天统计
                     */
                    int64_t m_timeGranularity;
                    bool m_timeGranularityHasBeenSet;

                    /**
                     * 接入区域。取值范围：['MC','AP','EU','AM'] MC=中国大陆 AP=亚太 EU=欧洲 AM=美洲。不填代表全量区域。
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                    /**
                     * 网关类型。0：公有云网关；1：自有网关。不传默认为0。
                     */
                    int64_t m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * 设备ID列表，最多10个设备，下载多个设备流量和时使用，此时DeviceId可传"-1"
                     */
                    std::vector<std::string> m_deviceList;
                    bool m_deviceListHasBeenSet;

                    /**
                     * 设备分组ID，若不指定分组则不传，按分组下载数据时使用
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETSTATISTICDATAREQUEST_H_
