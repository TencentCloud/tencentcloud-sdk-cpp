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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETIMESHIFTWRITESIZEINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETIMESHIFTWRITESIZEINFOLISTREQUEST_H_

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
                * DescribeLiveTimeShiftWriteSizeInfoList请求参数结构体
                */
                class DescribeLiveTimeShiftWriteSizeInfoListRequest : public AbstractModel
                {
                public:
                    DescribeLiveTimeShiftWriteSizeInfoListRequest();
                    ~DescribeLiveTimeShiftWriteSizeInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间点，
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
支持最近六个月的查询，查询开始和结束时间跨度不支持超过31天。
                     * @return StartTime 起始时间点，
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
支持最近六个月的查询，查询开始和结束时间跨度不支持超过31天。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间点，
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
支持最近六个月的查询，查询开始和结束时间跨度不支持超过31天。
                     * @param _startTime 起始时间点，
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
支持最近六个月的查询，查询开始和结束时间跨度不支持超过31天。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间点，
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
支持最近六个月的查询，查询开始和结束时间跨度不支持超过31天。
                     * @return EndTime 结束时间点，
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
支持最近六个月的查询，查询开始和结束时间跨度不支持超过31天。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间点，
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
支持最近六个月的查询，查询开始和结束时间跨度不支持超过31天。
                     * @param _endTime 结束时间点，
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
支持最近六个月的查询，查询开始和结束时间跨度不支持超过31天。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取域名。
                     * @return DomainNames 域名。
                     * 
                     */
                    std::vector<std::string> GetDomainNames() const;

                    /**
                     * 设置域名。
                     * @param _domainNames 域名。
                     * 
                     */
                    void SetDomainNames(const std::vector<std::string>& _domainNames);

                    /**
                     * 判断参数 DomainNames 是否已赋值
                     * @return DomainNames 是否已赋值
                     * 
                     */
                    bool DomainNamesHasBeenSet() const;

                    /**
                     * 获取维度
Area地区、Domain 域名、StorageDays 时移天数
                     * @return Dimensions 维度
Area地区、Domain 域名、StorageDays 时移天数
                     * 
                     */
                    std::vector<std::string> GetDimensions() const;

                    /**
                     * 设置维度
Area地区、Domain 域名、StorageDays 时移天数
                     * @param _dimensions 维度
Area地区、Domain 域名、StorageDays 时移天数
                     * 
                     */
                    void SetDimensions(const std::vector<std::string>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取时移天数。
                     * @return StorageDays 时移天数。
                     * 
                     */
                    std::vector<int64_t> GetStorageDays() const;

                    /**
                     * 设置时移天数。
                     * @param _storageDays 时移天数。
                     * 
                     */
                    void SetStorageDays(const std::vector<int64_t>& _storageDays);

                    /**
                     * 判断参数 StorageDays 是否已赋值
                     * @return StorageDays 是否已赋值
                     * 
                     */
                    bool StorageDaysHasBeenSet() const;

                    /**
                     * 获取时间跨度（分钟）
默认5，可选 5、60或者1440。
                     * @return Granularity 时间跨度（分钟）
默认5，可选 5、60或者1440。
                     * 
                     */
                    int64_t GetGranularity() const;

                    /**
                     * 设置时间跨度（分钟）
默认5，可选 5、60或者1440。
                     * @param _granularity 时间跨度（分钟）
默认5，可选 5、60或者1440。
                     * 
                     */
                    void SetGranularity(const int64_t& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                    /**
                     * 获取区域
可选Mainland、Oversea。
                     * @return MainlandOrOversea 区域
可选Mainland、Oversea。
                     * 
                     */
                    std::string GetMainlandOrOversea() const;

                    /**
                     * 设置区域
可选Mainland、Oversea。
                     * @param _mainlandOrOversea 区域
可选Mainland、Oversea。
                     * 
                     */
                    void SetMainlandOrOversea(const std::string& _mainlandOrOversea);

                    /**
                     * 判断参数 MainlandOrOversea 是否已赋值
                     * @return MainlandOrOversea 是否已赋值
                     * 
                     */
                    bool MainlandOrOverseaHasBeenSet() const;

                private:

                    /**
                     * 起始时间点，
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
支持最近六个月的查询，查询开始和结束时间跨度不支持超过31天。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间点，
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
支持最近六个月的查询，查询开始和结束时间跨度不支持超过31天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 域名。
                     */
                    std::vector<std::string> m_domainNames;
                    bool m_domainNamesHasBeenSet;

                    /**
                     * 维度
Area地区、Domain 域名、StorageDays 时移天数
                     */
                    std::vector<std::string> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * 时移天数。
                     */
                    std::vector<int64_t> m_storageDays;
                    bool m_storageDaysHasBeenSet;

                    /**
                     * 时间跨度（分钟）
默认5，可选 5、60或者1440。
                     */
                    int64_t m_granularity;
                    bool m_granularityHasBeenSet;

                    /**
                     * 区域
可选Mainland、Oversea。
                     */
                    std::string m_mainlandOrOversea;
                    bool m_mainlandOrOverseaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETIMESHIFTWRITESIZEINFOLISTREQUEST_H_
