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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWSTATISTICREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWSTATISTICREQUEST_H_

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
                * GetFlowStatistic请求参数结构体
                */
                class GetFlowStatisticRequest : public AbstractModel
                {
                public:
                    GetFlowStatisticRequest();
                    ~GetFlowStatisticRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备ID
                     * @return DeviceId 设备ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID
                     * @param _deviceId 设备ID
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
                     * 获取开始查找时间
                     * @return BeginTime 开始查找时间
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置开始查找时间
                     * @param _beginTime 开始查找时间
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
                     * 获取截止时间
                     * @return EndTime 截止时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置截止时间
                     * @param _endTime 截止时间
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
                     * 获取流量种类（1：上行流量，2：下行流量，3：上下行总和）
                     * @return Type 流量种类（1：上行流量，2：下行流量，3：上下行总和）
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置流量种类（1：上行流量，2：下行流量，3：上下行总和）
                     * @param _type 流量种类（1：上行流量，2：下行流量，3：上下行总和）
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取时间粒度（1：按小时统计，2：按天统计）
                     * @return TimeGranularity 时间粒度（1：按小时统计，2：按天统计）
                     * 
                     */
                    int64_t GetTimeGranularity() const;

                    /**
                     * 设置时间粒度（1：按小时统计，2：按天统计）
                     * @param _timeGranularity 时间粒度（1：按小时统计，2：按天统计）
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
                     * 获取设备ID列表，用于查询多设备流量，该字段启用时DeviceId可传"-1"
                     * @return DeviceList 设备ID列表，用于查询多设备流量，该字段启用时DeviceId可传"-1"
                     * 
                     */
                    std::vector<std::string> GetDeviceList() const;

                    /**
                     * 设置设备ID列表，用于查询多设备流量，该字段启用时DeviceId可传"-1"
                     * @param _deviceList 设备ID列表，用于查询多设备流量，该字段启用时DeviceId可传"-1"
                     * 
                     */
                    void SetDeviceList(const std::vector<std::string>& _deviceList);

                    /**
                     * 判断参数 DeviceList 是否已赋值
                     * @return DeviceList 是否已赋值
                     * 
                     */
                    bool DeviceListHasBeenSet() const;

                private:

                    /**
                     * 设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 开始查找时间
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 截止时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 流量种类（1：上行流量，2：下行流量，3：上下行总和）
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 时间粒度（1：按小时统计，2：按天统计）
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
                     * 设备ID列表，用于查询多设备流量，该字段启用时DeviceId可传"-1"
                     */
                    std::vector<std::string> m_deviceList;
                    bool m_deviceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWSTATISTICREQUEST_H_
