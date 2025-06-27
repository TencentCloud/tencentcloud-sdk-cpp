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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPROXYSLOWLOGRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPROXYSLOWLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/InstanceProxySlowlogDetail.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeProxySlowLog返回参数结构体
                */
                class DescribeProxySlowLogResponse : public AbstractModel
                {
                public:
                    DescribeProxySlowLogResponse();
                    ~DescribeProxySlowLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取慢查询总数。
                     * @return TotalCount 慢查询总数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取慢查询详情，注意：TotalCount大于1W，即慢日志超过1万条，不支持返回日志详情，返回数据为空。 建议缩小BeginTime和EndTime的时间间隔，多次查询。
                     * @return InstanceProxySlowLogDetail 慢查询详情，注意：TotalCount大于1W，即慢日志超过1万条，不支持返回日志详情，返回数据为空。 建议缩小BeginTime和EndTime的时间间隔，多次查询。
                     * 
                     */
                    std::vector<InstanceProxySlowlogDetail> GetInstanceProxySlowLogDetail() const;

                    /**
                     * 判断参数 InstanceProxySlowLogDetail 是否已赋值
                     * @return InstanceProxySlowLogDetail 是否已赋值
                     * 
                     */
                    bool InstanceProxySlowLogDetailHasBeenSet() const;

                private:

                    /**
                     * 慢查询总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 慢查询详情，注意：TotalCount大于1W，即慢日志超过1万条，不支持返回日志详情，返回数据为空。 建议缩小BeginTime和EndTime的时间间隔，多次查询。
                     */
                    std::vector<InstanceProxySlowlogDetail> m_instanceProxySlowLogDetail;
                    bool m_instanceProxySlowLogDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPROXYSLOWLOGRESPONSE_H_
