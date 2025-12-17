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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALARMNOTICESREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALARMNOTICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Filter.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeAlarmNotices请求参数结构体
                */
                class DescribeAlarmNoticesRequest : public AbstractModel
                {
                public:
                    DescribeAlarmNoticesRequest();
                    ~DescribeAlarmNoticesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取name
按照【通知渠道组名称】进行过滤。
类型：String
示例："Filters":[{"Key":"name","Values":["test-notice"]}]
必选：否
alarmNoticeId
按照【通知渠道组ID】进行过滤。
类型：String
示例："Filters": [{Key: "alarmNoticeId", Values: ["notice-5281f1d2-6275-4e56-9ec3-a1eb19d8bc2f"]}]
必选：否
uid
按照【接收用户ID】进行过滤。
类型：String
示例："Filters": [{Key: "uid", Values: ["1137546"]}]
必选：否
groupId
按照【接收用户组ID】进行过滤。
类型：String
示例："Filters": [{Key: "groupId", Values: ["344098"]}]
必选：否

deliverFlag
按照【投递状态】进行过滤。
类型：String
必选：否
可选值： "1":未启用,  "2": 已启用, "3":投递异常
示例："Filters":[{"Key":"deliverFlag","Values":["2"]}]
每次请求的Filters的上限为10，Filter.Values的上限为5。
                     * @return Filters name
按照【通知渠道组名称】进行过滤。
类型：String
示例："Filters":[{"Key":"name","Values":["test-notice"]}]
必选：否
alarmNoticeId
按照【通知渠道组ID】进行过滤。
类型：String
示例："Filters": [{Key: "alarmNoticeId", Values: ["notice-5281f1d2-6275-4e56-9ec3-a1eb19d8bc2f"]}]
必选：否
uid
按照【接收用户ID】进行过滤。
类型：String
示例："Filters": [{Key: "uid", Values: ["1137546"]}]
必选：否
groupId
按照【接收用户组ID】进行过滤。
类型：String
示例："Filters": [{Key: "groupId", Values: ["344098"]}]
必选：否

deliverFlag
按照【投递状态】进行过滤。
类型：String
必选：否
可选值： "1":未启用,  "2": 已启用, "3":投递异常
示例："Filters":[{"Key":"deliverFlag","Values":["2"]}]
每次请求的Filters的上限为10，Filter.Values的上限为5。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置name
按照【通知渠道组名称】进行过滤。
类型：String
示例："Filters":[{"Key":"name","Values":["test-notice"]}]
必选：否
alarmNoticeId
按照【通知渠道组ID】进行过滤。
类型：String
示例："Filters": [{Key: "alarmNoticeId", Values: ["notice-5281f1d2-6275-4e56-9ec3-a1eb19d8bc2f"]}]
必选：否
uid
按照【接收用户ID】进行过滤。
类型：String
示例："Filters": [{Key: "uid", Values: ["1137546"]}]
必选：否
groupId
按照【接收用户组ID】进行过滤。
类型：String
示例："Filters": [{Key: "groupId", Values: ["344098"]}]
必选：否

deliverFlag
按照【投递状态】进行过滤。
类型：String
必选：否
可选值： "1":未启用,  "2": 已启用, "3":投递异常
示例："Filters":[{"Key":"deliverFlag","Values":["2"]}]
每次请求的Filters的上限为10，Filter.Values的上限为5。
                     * @param _filters name
按照【通知渠道组名称】进行过滤。
类型：String
示例："Filters":[{"Key":"name","Values":["test-notice"]}]
必选：否
alarmNoticeId
按照【通知渠道组ID】进行过滤。
类型：String
示例："Filters": [{Key: "alarmNoticeId", Values: ["notice-5281f1d2-6275-4e56-9ec3-a1eb19d8bc2f"]}]
必选：否
uid
按照【接收用户ID】进行过滤。
类型：String
示例："Filters": [{Key: "uid", Values: ["1137546"]}]
必选：否
groupId
按照【接收用户组ID】进行过滤。
类型：String
示例："Filters": [{Key: "groupId", Values: ["344098"]}]
必选：否

deliverFlag
按照【投递状态】进行过滤。
类型：String
必选：否
可选值： "1":未启用,  "2": 已启用, "3":投递异常
示例："Filters":[{"Key":"deliverFlag","Values":["2"]}]
每次请求的Filters的上限为10，Filter.Values的上限为5。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取分页的偏移量，默认值为0。
                     * @return Offset 分页的偏移量，默认值为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页的偏移量，默认值为0。
                     * @param _offset 分页的偏移量，默认值为0。
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
                     * 获取分页单页限制数目，默认值为20，最大值100。
                     * @return Limit 分页单页限制数目，默认值为20，最大值100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页单页限制数目，默认值为20，最大值100。
                     * @param _limit 分页单页限制数目，默认值为20，最大值100。
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
                     * 获取是否需要返回通知渠道组配置的告警屏蔽统计状态数量信息。
- true：需要返回；
- false：不返回（默认false）。
                     * @return HasAlarmShieldCount 是否需要返回通知渠道组配置的告警屏蔽统计状态数量信息。
- true：需要返回；
- false：不返回（默认false）。
                     * 
                     */
                    bool GetHasAlarmShieldCount() const;

                    /**
                     * 设置是否需要返回通知渠道组配置的告警屏蔽统计状态数量信息。
- true：需要返回；
- false：不返回（默认false）。
                     * @param _hasAlarmShieldCount 是否需要返回通知渠道组配置的告警屏蔽统计状态数量信息。
- true：需要返回；
- false：不返回（默认false）。
                     * 
                     */
                    void SetHasAlarmShieldCount(const bool& _hasAlarmShieldCount);

                    /**
                     * 判断参数 HasAlarmShieldCount 是否已赋值
                     * @return HasAlarmShieldCount 是否已赋值
                     * 
                     */
                    bool HasAlarmShieldCountHasBeenSet() const;

                private:

                    /**
                     * name
按照【通知渠道组名称】进行过滤。
类型：String
示例："Filters":[{"Key":"name","Values":["test-notice"]}]
必选：否
alarmNoticeId
按照【通知渠道组ID】进行过滤。
类型：String
示例："Filters": [{Key: "alarmNoticeId", Values: ["notice-5281f1d2-6275-4e56-9ec3-a1eb19d8bc2f"]}]
必选：否
uid
按照【接收用户ID】进行过滤。
类型：String
示例："Filters": [{Key: "uid", Values: ["1137546"]}]
必选：否
groupId
按照【接收用户组ID】进行过滤。
类型：String
示例："Filters": [{Key: "groupId", Values: ["344098"]}]
必选：否

deliverFlag
按照【投递状态】进行过滤。
类型：String
必选：否
可选值： "1":未启用,  "2": 已启用, "3":投递异常
示例："Filters":[{"Key":"deliverFlag","Values":["2"]}]
每次请求的Filters的上限为10，Filter.Values的上限为5。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页的偏移量，默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页单页限制数目，默认值为20，最大值100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 是否需要返回通知渠道组配置的告警屏蔽统计状态数量信息。
- true：需要返回；
- false：不返回（默认false）。
                     */
                    bool m_hasAlarmShieldCount;
                    bool m_hasAlarmShieldCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALARMNOTICESREQUEST_H_
