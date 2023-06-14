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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMDAYPLAYINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMDAYPLAYINFOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeStreamDayPlayInfoList请求参数结构体
                */
                class DescribeStreamDayPlayInfoListRequest : public AbstractModel
                {
                public:
                    DescribeStreamDayPlayInfoListRequest();
                    ~DescribeStreamDayPlayInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日期，格式：YYYY-mm-dd。
第二天凌晨3点出昨天的数据，建议在这个时间点之后查询最新数据。支持最近3个月的数据查询。
                     * @return DayTime 日期，格式：YYYY-mm-dd。
第二天凌晨3点出昨天的数据，建议在这个时间点之后查询最新数据。支持最近3个月的数据查询。
                     * 
                     */
                    std::string GetDayTime() const;

                    /**
                     * 设置日期，格式：YYYY-mm-dd。
第二天凌晨3点出昨天的数据，建议在这个时间点之后查询最新数据。支持最近3个月的数据查询。
                     * @param _dayTime 日期，格式：YYYY-mm-dd。
第二天凌晨3点出昨天的数据，建议在这个时间点之后查询最新数据。支持最近3个月的数据查询。
                     * 
                     */
                    void SetDayTime(const std::string& _dayTime);

                    /**
                     * 判断参数 DayTime 是否已赋值
                     * @return DayTime 是否已赋值
                     * 
                     */
                    bool DayTimeHasBeenSet() const;

                    /**
                     * 获取播放域名。
                     * @return PlayDomain 播放域名。
                     * 
                     */
                    std::string GetPlayDomain() const;

                    /**
                     * 设置播放域名。
                     * @param _playDomain 播放域名。
                     * 
                     */
                    void SetPlayDomain(const std::string& _playDomain);

                    /**
                     * 判断参数 PlayDomain 是否已赋值
                     * @return PlayDomain 是否已赋值
                     * 
                     */
                    bool PlayDomainHasBeenSet() const;

                    /**
                     * 获取页号，范围[1,1000]，默认值是1。
                     * @return PageNum 页号，范围[1,1000]，默认值是1。
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置页号，范围[1,1000]，默认值是1。
                     * @param _pageNum 页号，范围[1,1000]，默认值是1。
                     * 
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取每页个数，范围[100,1000]，默认值是1000。
                     * @return PageSize 每页个数，范围[100,1000]，默认值是1000。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页个数，范围[100,1000]，默认值是1000。
                     * @param _pageSize 每页个数，范围[100,1000]，默认值是1000。
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取可选值：
Mainland：查询国内数据，
Oversea：则查询国外数据，
默认：查询国内+国外的数据。
                     * @return MainlandOrOversea 可选值：
Mainland：查询国内数据，
Oversea：则查询国外数据，
默认：查询国内+国外的数据。
                     * 
                     */
                    std::string GetMainlandOrOversea() const;

                    /**
                     * 设置可选值：
Mainland：查询国内数据，
Oversea：则查询国外数据，
默认：查询国内+国外的数据。
                     * @param _mainlandOrOversea 可选值：
Mainland：查询国内数据，
Oversea：则查询国外数据，
默认：查询国内+国外的数据。
                     * 
                     */
                    void SetMainlandOrOversea(const std::string& _mainlandOrOversea);

                    /**
                     * 判断参数 MainlandOrOversea 是否已赋值
                     * @return MainlandOrOversea 是否已赋值
                     * 
                     */
                    bool MainlandOrOverseaHasBeenSet() const;

                    /**
                     * 获取服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。
                     * @return ServiceName 服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。
                     * @param _serviceName 服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                private:

                    /**
                     * 日期，格式：YYYY-mm-dd。
第二天凌晨3点出昨天的数据，建议在这个时间点之后查询最新数据。支持最近3个月的数据查询。
                     */
                    std::string m_dayTime;
                    bool m_dayTimeHasBeenSet;

                    /**
                     * 播放域名。
                     */
                    std::string m_playDomain;
                    bool m_playDomainHasBeenSet;

                    /**
                     * 页号，范围[1,1000]，默认值是1。
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 每页个数，范围[100,1000]，默认值是1000。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 可选值：
Mainland：查询国内数据，
Oversea：则查询国外数据，
默认：查询国内+国外的数据。
                     */
                    std::string m_mainlandOrOversea;
                    bool m_mainlandOrOverseaHasBeenSet;

                    /**
                     * 服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMDAYPLAYINFOLISTREQUEST_H_
