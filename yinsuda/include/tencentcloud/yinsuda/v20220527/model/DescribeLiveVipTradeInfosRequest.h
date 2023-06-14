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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBELIVEVIPTRADEINFOSREQUEST_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBELIVEVIPTRADEINFOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * DescribeLiveVipTradeInfos请求参数结构体
                */
                class DescribeLiveVipTradeInfosRequest : public AbstractModel
                {
                public:
                    DescribeLiveVipTradeInfosRequest();
                    ~DescribeLiveVipTradeInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用名称。
                     * @return AppName 应用名称。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称。
                     * @param _appName 应用名称。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取直播会员充值下单起始时间，格式为 ISO。默认为当前时间前一天。
                     * @return StartTime 直播会员充值下单起始时间，格式为 ISO。默认为当前时间前一天。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置直播会员充值下单起始时间，格式为 ISO。默认为当前时间前一天。
                     * @param _startTime 直播会员充值下单起始时间，格式为 ISO。默认为当前时间前一天。
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
                     * 获取直播会员充值下单截止时间，格式为 ISO。默认为当前时间。 EndTime不能小于StartTime
                     * @return EndTime 直播会员充值下单截止时间，格式为 ISO。默认为当前时间。 EndTime不能小于StartTime
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置直播会员充值下单截止时间，格式为 ISO。默认为当前时间。 EndTime不能小于StartTime
                     * @param _endTime 直播会员充值下单截止时间，格式为 ISO。默认为当前时间。 EndTime不能小于StartTime
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
                     * 获取交易流水号集合，匹配集合指定所有流水号 。
<li>数组长度限制：10。</li>
                     * @return TradeSerialNos 交易流水号集合，匹配集合指定所有流水号 。
<li>数组长度限制：10。</li>
                     * 
                     */
                    std::vector<std::string> GetTradeSerialNos() const;

                    /**
                     * 设置交易流水号集合，匹配集合指定所有流水号 。
<li>数组长度限制：10。</li>
                     * @param _tradeSerialNos 交易流水号集合，匹配集合指定所有流水号 。
<li>数组长度限制：10。</li>
                     * 
                     */
                    void SetTradeSerialNos(const std::vector<std::string>& _tradeSerialNos);

                    /**
                     * 判断参数 TradeSerialNos 是否已赋值
                     * @return TradeSerialNos 是否已赋值
                     * 
                     */
                    bool TradeSerialNosHasBeenSet() const;

                    /**
                     * 获取用户标识集合，匹配集合指定所有用户标识 。
<li>数组长度限制：10。</li>
                     * @return UserIds 用户标识集合，匹配集合指定所有用户标识 。
<li>数组长度限制：10。</li>
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置用户标识集合，匹配集合指定所有用户标识 。
<li>数组长度限制：10。</li>
                     * @param _userIds 用户标识集合，匹配集合指定所有用户标识 。
<li>数组长度限制：10。</li>
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
                     * @return Offset 分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
                     * @param _offset 分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页返回的记录条数，默认值：20，最大值：50。
                     * @return Limit 分页返回的记录条数，默认值：20，最大值：50。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回的记录条数，默认值：20，最大值：50。
                     * @param _limit 分页返回的记录条数，默认值：20，最大值：50。
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
                     * 应用名称。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 直播会员充值下单起始时间，格式为 ISO。默认为当前时间前一天。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 直播会员充值下单截止时间，格式为 ISO。默认为当前时间。 EndTime不能小于StartTime
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 交易流水号集合，匹配集合指定所有流水号 。
<li>数组长度限制：10。</li>
                     */
                    std::vector<std::string> m_tradeSerialNos;
                    bool m_tradeSerialNosHasBeenSet;

                    /**
                     * 用户标识集合，匹配集合指定所有用户标识 。
<li>数组长度限制：10。</li>
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * 分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页返回的记录条数，默认值：20，最大值：50。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBELIVEVIPTRADEINFOSREQUEST_H_
