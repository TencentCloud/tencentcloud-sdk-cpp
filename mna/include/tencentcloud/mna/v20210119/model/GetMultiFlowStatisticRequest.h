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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETMULTIFLOWSTATISTICREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETMULTIFLOWSTATISTICREQUEST_H_

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
                * GetMultiFlowStatistic请求参数结构体
                */
                class GetMultiFlowStatisticRequest : public AbstractModel
                {
                public:
                    GetMultiFlowStatisticRequest();
                    ~GetMultiFlowStatisticRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备id列表，单次最多请求10个设备
                     * @return DeviceIds 设备id列表，单次最多请求10个设备
                     * 
                     */
                    std::vector<std::string> GetDeviceIds() const;

                    /**
                     * 设置设备id列表，单次最多请求10个设备
                     * @param _deviceIds 设备id列表，单次最多请求10个设备
                     * 
                     */
                    void SetDeviceIds(const std::vector<std::string>& _deviceIds);

                    /**
                     * 判断参数 DeviceIds 是否已赋值
                     * @return DeviceIds 是否已赋值
                     * 
                     */
                    bool DeviceIdsHasBeenSet() const;

                    /**
                     * 获取1659514436
                     * @return BeginTime 1659514436
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置1659514436
                     * @param _beginTime 1659514436
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
                     * 获取1659515000
                     * @return EndTime 1659515000
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置1659515000
                     * @param _endTime 1659515000
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
                     * 获取统计流量类型（1：上行流量，2：下行流量， 3: 上下行总和）
                     * @return Type 统计流量类型（1：上行流量，2：下行流量， 3: 上下行总和）
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置统计流量类型（1：上行流量，2：下行流量， 3: 上下行总和）
                     * @param _type 统计流量类型（1：上行流量，2：下行流量， 3: 上下行总和）
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
                     * 获取统计时间粒度（1：按小时统计，2：按天统计）
                     * @return TimeGranularity 统计时间粒度（1：按小时统计，2：按天统计）
                     * 
                     */
                    int64_t GetTimeGranularity() const;

                    /**
                     * 设置统计时间粒度（1：按小时统计，2：按天统计）
                     * @param _timeGranularity 统计时间粒度（1：按小时统计，2：按天统计）
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

                private:

                    /**
                     * 设备id列表，单次最多请求10个设备
                     */
                    std::vector<std::string> m_deviceIds;
                    bool m_deviceIdsHasBeenSet;

                    /**
                     * 1659514436
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 1659515000
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 统计流量类型（1：上行流量，2：下行流量， 3: 上下行总和）
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 统计时间粒度（1：按小时统计，2：按天统计）
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETMULTIFLOWSTATISTICREQUEST_H_
