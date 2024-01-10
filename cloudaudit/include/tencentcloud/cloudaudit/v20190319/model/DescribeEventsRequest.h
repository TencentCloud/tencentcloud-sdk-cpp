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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEEVENTSREQUEST_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudaudit/v20190319/model/LookupAttribute.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * DescribeEvents请求参数结构体
                */
                class DescribeEventsRequest : public AbstractModel
                {
                public:
                    DescribeEventsRequest();
                    ~DescribeEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间戳（单位秒，不超过当前时间 90 天）
                     * @return StartTime 起始时间戳（单位秒，不超过当前时间 90 天）
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置起始时间戳（单位秒，不超过当前时间 90 天）
                     * @param _startTime 起始时间戳（单位秒，不超过当前时间 90 天）
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间戳（单位秒，查询时间跨度小于 30 天）
                     * @return EndTime 结束时间戳（单位秒，查询时间跨度小于 30 天）
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间戳（单位秒，查询时间跨度小于 30 天）
                     * @param _endTime 结束时间戳（单位秒，查询时间跨度小于 30 天）
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取查看更多日志的凭证
                     * @return NextToken 查看更多日志的凭证
                     * 
                     */
                    uint64_t GetNextToken() const;

                    /**
                     * 设置查看更多日志的凭证
                     * @param _nextToken 查看更多日志的凭证
                     * 
                     */
                    void SetNextToken(const uint64_t& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取返回日志的最大条数（最大 50 条）
                     * @return MaxResults 返回日志的最大条数（最大 50 条）
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置返回日志的最大条数（最大 50 条）
                     * @param _maxResults 返回日志的最大条数（最大 50 条）
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
                     * 获取检索条件（目前支持 RequestId：请求 ID、EventName：事件名称、ActionType：操作类型（Write：写；Read：读）、PrincipalId：子账号、ResourceType：资源类型、ResourceId：资源Id、ResourceName：资源名称、AccessKeyId：密钥 ID、SensitiveAction：是否敏感操作、ApiErrorCode：API 错误码、CamErrorCode：CAM 错误码、Tags：标签（AttributeValue格式：[{"key":"*","value":"*"}]）备注:检索的各个条件间是与的关系,EventName传多个值内部是或的关系）
                     * @return LookupAttributes 检索条件（目前支持 RequestId：请求 ID、EventName：事件名称、ActionType：操作类型（Write：写；Read：读）、PrincipalId：子账号、ResourceType：资源类型、ResourceId：资源Id、ResourceName：资源名称、AccessKeyId：密钥 ID、SensitiveAction：是否敏感操作、ApiErrorCode：API 错误码、CamErrorCode：CAM 错误码、Tags：标签（AttributeValue格式：[{"key":"*","value":"*"}]）备注:检索的各个条件间是与的关系,EventName传多个值内部是或的关系）
                     * 
                     */
                    std::vector<LookupAttribute> GetLookupAttributes() const;

                    /**
                     * 设置检索条件（目前支持 RequestId：请求 ID、EventName：事件名称、ActionType：操作类型（Write：写；Read：读）、PrincipalId：子账号、ResourceType：资源类型、ResourceId：资源Id、ResourceName：资源名称、AccessKeyId：密钥 ID、SensitiveAction：是否敏感操作、ApiErrorCode：API 错误码、CamErrorCode：CAM 错误码、Tags：标签（AttributeValue格式：[{"key":"*","value":"*"}]）备注:检索的各个条件间是与的关系,EventName传多个值内部是或的关系）
                     * @param _lookupAttributes 检索条件（目前支持 RequestId：请求 ID、EventName：事件名称、ActionType：操作类型（Write：写；Read：读）、PrincipalId：子账号、ResourceType：资源类型、ResourceId：资源Id、ResourceName：资源名称、AccessKeyId：密钥 ID、SensitiveAction：是否敏感操作、ApiErrorCode：API 错误码、CamErrorCode：CAM 错误码、Tags：标签（AttributeValue格式：[{"key":"*","value":"*"}]）备注:检索的各个条件间是与的关系,EventName传多个值内部是或的关系）
                     * 
                     */
                    void SetLookupAttributes(const std::vector<LookupAttribute>& _lookupAttributes);

                    /**
                     * 判断参数 LookupAttributes 是否已赋值
                     * @return LookupAttributes 是否已赋值
                     * 
                     */
                    bool LookupAttributesHasBeenSet() const;

                    /**
                     * 获取是否返回 IP 归属地（1 返回，0 不返回）
                     * @return IsReturnLocation 是否返回 IP 归属地（1 返回，0 不返回）
                     * 
                     */
                    uint64_t GetIsReturnLocation() const;

                    /**
                     * 设置是否返回 IP 归属地（1 返回，0 不返回）
                     * @param _isReturnLocation 是否返回 IP 归属地（1 返回，0 不返回）
                     * 
                     */
                    void SetIsReturnLocation(const uint64_t& _isReturnLocation);

                    /**
                     * 判断参数 IsReturnLocation 是否已赋值
                     * @return IsReturnLocation 是否已赋值
                     * 
                     */
                    bool IsReturnLocationHasBeenSet() const;

                private:

                    /**
                     * 起始时间戳（单位秒，不超过当前时间 90 天）
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间戳（单位秒，查询时间跨度小于 30 天）
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 查看更多日志的凭证
                     */
                    uint64_t m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 返回日志的最大条数（最大 50 条）
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * 检索条件（目前支持 RequestId：请求 ID、EventName：事件名称、ActionType：操作类型（Write：写；Read：读）、PrincipalId：子账号、ResourceType：资源类型、ResourceId：资源Id、ResourceName：资源名称、AccessKeyId：密钥 ID、SensitiveAction：是否敏感操作、ApiErrorCode：API 错误码、CamErrorCode：CAM 错误码、Tags：标签（AttributeValue格式：[{"key":"*","value":"*"}]）备注:检索的各个条件间是与的关系,EventName传多个值内部是或的关系）
                     */
                    std::vector<LookupAttribute> m_lookupAttributes;
                    bool m_lookupAttributesHasBeenSet;

                    /**
                     * 是否返回 IP 归属地（1 返回，0 不返回）
                     */
                    uint64_t m_isReturnLocation;
                    bool m_isReturnLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEEVENTSREQUEST_H_
