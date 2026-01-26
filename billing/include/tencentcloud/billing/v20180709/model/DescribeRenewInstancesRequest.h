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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBERENEWINSTANCESREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBERENEWINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeRenewInstances请求参数结构体
                */
                class DescribeRenewInstancesRequest : public AbstractModel
                {
                public:
                    DescribeRenewInstancesRequest();
                    ~DescribeRenewInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每页的最大实例条数。 取值范围：1~100。
                     * @return MaxResults 每页的最大实例条数。 取值范围：1~100。
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置每页的最大实例条数。 取值范围：1~100。
                     * @param _maxResults 每页的最大实例条数。 取值范围：1~100。
                     * 
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取查询返回结果下一页的令牌。首次调用 API 不需要NextToken。
                     * @return NextToken 查询返回结果下一页的令牌。首次调用 API 不需要NextToken。
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置查询返回结果下一页的令牌。首次调用 API 不需要NextToken。
                     * @param _nextToken 查询返回结果下一页的令牌。首次调用 API 不需要NextToken。
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取获取实例的排序方向。枚举值如下：
false=正序（默认）
true=倒序
                     * @return Reverse 获取实例的排序方向。枚举值如下：
false=正序（默认）
true=倒序
                     * 
                     */
                    bool GetReverse() const;

                    /**
                     * 设置获取实例的排序方向。枚举值如下：
false=正序（默认）
true=倒序
                     * @param _reverse 获取实例的排序方向。枚举值如下：
false=正序（默认）
true=倒序
                     * 
                     */
                    void SetReverse(const bool& _reverse);

                    /**
                     * 判断参数 Reverse 是否已赋值
                     * @return Reverse 是否已赋值
                     * 
                     */
                    bool ReverseHasBeenSet() const;

                    /**
                     * 获取续费标识。多个值用英文逗号分隔。枚举值如下：
NOTIFY_AND_MANUAL_RENEW：手动续费
NOTIFY_AND_AUTO_RENEW：自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW：到期不续
                     * @return RenewFlagList 续费标识。多个值用英文逗号分隔。枚举值如下：
NOTIFY_AND_MANUAL_RENEW：手动续费
NOTIFY_AND_AUTO_RENEW：自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW：到期不续
                     * 
                     */
                    std::vector<std::string> GetRenewFlagList() const;

                    /**
                     * 设置续费标识。多个值用英文逗号分隔。枚举值如下：
NOTIFY_AND_MANUAL_RENEW：手动续费
NOTIFY_AND_AUTO_RENEW：自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW：到期不续
                     * @param _renewFlagList 续费标识。多个值用英文逗号分隔。枚举值如下：
NOTIFY_AND_MANUAL_RENEW：手动续费
NOTIFY_AND_AUTO_RENEW：自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW：到期不续
                     * 
                     */
                    void SetRenewFlagList(const std::vector<std::string>& _renewFlagList);

                    /**
                     * 判断参数 RenewFlagList 是否已赋值
                     * @return RenewFlagList 是否已赋值
                     * 
                     */
                    bool RenewFlagListHasBeenSet() const;

                    /**
                     * 获取实例ID。多个ID用英文逗号分隔，最多不超过100个。
                     * @return InstanceIdList 实例ID。多个ID用英文逗号分隔，最多不超过100个。
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置实例ID。多个ID用英文逗号分隔，最多不超过100个。
                     * @param _instanceIdList 实例ID。多个ID用英文逗号分隔，最多不超过100个。
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取到期时间段起，格式为yyyy-MM-dd HH:mm:ss。
                     * @return ExpireTimeStart 到期时间段起，格式为yyyy-MM-dd HH:mm:ss。
                     * 
                     */
                    std::string GetExpireTimeStart() const;

                    /**
                     * 设置到期时间段起，格式为yyyy-MM-dd HH:mm:ss。
                     * @param _expireTimeStart 到期时间段起，格式为yyyy-MM-dd HH:mm:ss。
                     * 
                     */
                    void SetExpireTimeStart(const std::string& _expireTimeStart);

                    /**
                     * 判断参数 ExpireTimeStart 是否已赋值
                     * @return ExpireTimeStart 是否已赋值
                     * 
                     */
                    bool ExpireTimeStartHasBeenSet() const;

                    /**
                     * 获取到期时间段止，格式为yyyy-MM-dd HH:mm:ss。
                     * @return ExpireTimeEnd 到期时间段止，格式为yyyy-MM-dd HH:mm:ss。
                     * 
                     */
                    std::string GetExpireTimeEnd() const;

                    /**
                     * 设置到期时间段止，格式为yyyy-MM-dd HH:mm:ss。
                     * @param _expireTimeEnd 到期时间段止，格式为yyyy-MM-dd HH:mm:ss。
                     * 
                     */
                    void SetExpireTimeEnd(const std::string& _expireTimeEnd);

                    /**
                     * 判断参数 ExpireTimeEnd 是否已赋值
                     * @return ExpireTimeEnd 是否已赋值
                     * 
                     */
                    bool ExpireTimeEndHasBeenSet() const;

                private:

                    /**
                     * 每页的最大实例条数。 取值范围：1~100。
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * 查询返回结果下一页的令牌。首次调用 API 不需要NextToken。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 获取实例的排序方向。枚举值如下：
false=正序（默认）
true=倒序
                     */
                    bool m_reverse;
                    bool m_reverseHasBeenSet;

                    /**
                     * 续费标识。多个值用英文逗号分隔。枚举值如下：
NOTIFY_AND_MANUAL_RENEW：手动续费
NOTIFY_AND_AUTO_RENEW：自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW：到期不续
                     */
                    std::vector<std::string> m_renewFlagList;
                    bool m_renewFlagListHasBeenSet;

                    /**
                     * 实例ID。多个ID用英文逗号分隔，最多不超过100个。
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * 到期时间段起，格式为yyyy-MM-dd HH:mm:ss。
                     */
                    std::string m_expireTimeStart;
                    bool m_expireTimeStartHasBeenSet;

                    /**
                     * 到期时间段止，格式为yyyy-MM-dd HH:mm:ss。
                     */
                    std::string m_expireTimeEnd;
                    bool m_expireTimeEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBERENEWINSTANCESREQUEST_H_
