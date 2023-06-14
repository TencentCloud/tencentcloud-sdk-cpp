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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEHISTORYNETWORKINFOREQUEST_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEHISTORYNETWORKINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeHistoryNetworkInfo请求参数结构体
                */
                class DescribeHistoryNetworkInfoRequest : public AbstractModel
                {
                public:
                    DescribeHistoryNetworkInfoRequest();
                    ~DescribeHistoryNetworkInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求时间戳
                     * @return Time 请求时间戳
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置请求时间戳
                     * @param _time 请求时间戳
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
                     * @return CompanyId 优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 设置优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
                     * @param _companyId 优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
                     * 
                     */
                    void SetCompanyId(const std::string& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取，为0则拉取集团全部店铺当前
                     * @return ShopId 优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取，为0则拉取集团全部店铺当前
                     * 
                     */
                    int64_t GetShopId() const;

                    /**
                     * 设置优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取，为0则拉取集团全部店铺当前
                     * @param _shopId 优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取，为0则拉取集团全部店铺当前
                     * 
                     */
                    void SetShopId(const int64_t& _shopId);

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取拉取开始日期，格式：2018-09-05
                     * @return StartDay 拉取开始日期，格式：2018-09-05
                     * 
                     */
                    std::string GetStartDay() const;

                    /**
                     * 设置拉取开始日期，格式：2018-09-05
                     * @param _startDay 拉取开始日期，格式：2018-09-05
                     * 
                     */
                    void SetStartDay(const std::string& _startDay);

                    /**
                     * 判断参数 StartDay 是否已赋值
                     * @return StartDay 是否已赋值
                     * 
                     */
                    bool StartDayHasBeenSet() const;

                    /**
                     * 获取拉取结束日期，格式L:2018-09-05，超过StartDay 90天，按StartDay+90天算
                     * @return EndDay 拉取结束日期，格式L:2018-09-05，超过StartDay 90天，按StartDay+90天算
                     * 
                     */
                    std::string GetEndDay() const;

                    /**
                     * 设置拉取结束日期，格式L:2018-09-05，超过StartDay 90天，按StartDay+90天算
                     * @param _endDay 拉取结束日期，格式L:2018-09-05，超过StartDay 90天，按StartDay+90天算
                     * 
                     */
                    void SetEndDay(const std::string& _endDay);

                    /**
                     * 判断参数 EndDay 是否已赋值
                     * @return EndDay 是否已赋值
                     * 
                     */
                    bool EndDayHasBeenSet() const;

                    /**
                     * 获取拉取条数，默认10
                     * @return Limit 拉取条数，默认10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置拉取条数，默认10
                     * @param _limit 拉取条数，默认10
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取拉取偏移，返回offset之后的数据
                     * @return Offset 拉取偏移，返回offset之后的数据
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置拉取偏移，返回offset之后的数据
                     * @param _offset 拉取偏移，返回offset之后的数据
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 请求时间戳
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取，为0则拉取集团全部店铺当前
                     */
                    int64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 拉取开始日期，格式：2018-09-05
                     */
                    std::string m_startDay;
                    bool m_startDayHasBeenSet;

                    /**
                     * 拉取结束日期，格式L:2018-09-05，超过StartDay 90天，按StartDay+90天算
                     */
                    std::string m_endDay;
                    bool m_endDayHasBeenSet;

                    /**
                     * 拉取条数，默认10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 拉取偏移，返回offset之后的数据
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEHISTORYNETWORKINFOREQUEST_H_
