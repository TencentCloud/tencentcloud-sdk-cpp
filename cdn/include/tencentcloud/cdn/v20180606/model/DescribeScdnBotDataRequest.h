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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBESCDNBOTDATAREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBESCDNBOTDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeScdnBotData请求参数结构体
                */
                class DescribeScdnBotDataRequest : public AbstractModel
                {
                public:
                    DescribeScdnBotDataRequest();
                    ~DescribeScdnBotDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
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
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 获取mainland 大陆地区 overseas境外地区
                     * @return Area mainland 大陆地区 overseas境外地区
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置mainland 大陆地区 overseas境外地区
                     * @param _area mainland 大陆地区 overseas境外地区
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取取值："2min"或者"hour"，表示查询2分钟或者1小时粒度的数据，如果查询时间范围>1天，则强制返回1小时粒度数据
                     * @return Interval 取值："2min"或者"hour"，表示查询2分钟或者1小时粒度的数据，如果查询时间范围>1天，则强制返回1小时粒度数据
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置取值："2min"或者"hour"，表示查询2分钟或者1小时粒度的数据，如果查询时间范围>1天，则强制返回1小时粒度数据
                     * @param _interval 取值："2min"或者"hour"，表示查询2分钟或者1小时粒度的数据，如果查询时间范围>1天，则强制返回1小时粒度数据
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取域名数组，多选域名时，使用此参数,不填写表示查询所有域名的数据（AppID维度数据）
                     * @return Domains 域名数组，多选域名时，使用此参数,不填写表示查询所有域名的数据（AppID维度数据）
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置域名数组，多选域名时，使用此参数,不填写表示查询所有域名的数据（AppID维度数据）
                     * @param _domains 域名数组，多选域名时，使用此参数,不填写表示查询所有域名的数据（AppID维度数据）
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                private:

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * mainland 大陆地区 overseas境外地区
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 取值："2min"或者"hour"，表示查询2分钟或者1小时粒度的数据，如果查询时间范围>1天，则强制返回1小时粒度数据
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 域名数组，多选域名时，使用此参数,不填写表示查询所有域名的数据（AppID维度数据）
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBESCDNBOTDATAREQUEST_H_
