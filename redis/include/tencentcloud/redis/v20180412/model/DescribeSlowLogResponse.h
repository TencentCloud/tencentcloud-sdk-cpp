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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESLOWLOGRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESLOWLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/InstanceSlowlogDetail.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeSlowLog返回参数结构体
                */
                class DescribeSlowLogResponse : public AbstractModel
                {
                public:
                    DescribeSlowLogResponse();
                    ~DescribeSlowLogResponse() = default;
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
                     * 获取已废弃，该参数存在命名不规范问题，后续用参数InstanceSlowLogDetail取代。慢查询详情。
                     * @return InstanceSlowlogDetail 已废弃，该参数存在命名不规范问题，后续用参数InstanceSlowLogDetail取代。慢查询详情。
                     * @deprecated
                     */
                    std::vector<InstanceSlowlogDetail> GetInstanceSlowlogDetail() const;

                    /**
                     * 判断参数 InstanceSlowlogDetail 是否已赋值
                     * @return InstanceSlowlogDetail 是否已赋值
                     * @deprecated
                     */
                    bool InstanceSlowlogDetailHasBeenSet() const;

                    /**
                     * 获取慢查询详情，注意：TotalCount大于1W，即慢日志超过1万条，不支持返回日志详情，返回数据为空。 建议缩小BeginTime和EndTime的时间间隔，多次查询。
                     * @return InstanceSlowLogDetail 慢查询详情，注意：TotalCount大于1W，即慢日志超过1万条，不支持返回日志详情，返回数据为空。 建议缩小BeginTime和EndTime的时间间隔，多次查询。
                     * 
                     */
                    std::vector<InstanceSlowlogDetail> GetInstanceSlowLogDetail() const;

                    /**
                     * 判断参数 InstanceSlowLogDetail 是否已赋值
                     * @return InstanceSlowLogDetail 是否已赋值
                     * 
                     */
                    bool InstanceSlowLogDetailHasBeenSet() const;

                private:

                    /**
                     * 慢查询总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 已废弃，该参数存在命名不规范问题，后续用参数InstanceSlowLogDetail取代。慢查询详情。
                     */
                    std::vector<InstanceSlowlogDetail> m_instanceSlowlogDetail;
                    bool m_instanceSlowlogDetailHasBeenSet;

                    /**
                     * 慢查询详情，注意：TotalCount大于1W，即慢日志超过1万条，不支持返回日志详情，返回数据为空。 建议缩小BeginTime和EndTime的时间间隔，多次查询。
                     */
                    std::vector<InstanceSlowlogDetail> m_instanceSlowLogDetail;
                    bool m_instanceSlowLogDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESLOWLOGRESPONSE_H_
