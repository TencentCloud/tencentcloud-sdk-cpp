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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBECOMMONDBINSTANCESRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBECOMMONDBINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/RedisCommonInstanceList.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeCommonDBInstances返回参数结构体
                */
                class DescribeCommonDBInstancesResponse : public AbstractModel
                {
                public:
                    DescribeCommonDBInstancesResponse();
                    ~DescribeCommonDBInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例数
                     * @return TotalCount 实例数
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
                     * 获取实例信息
                     * @return InstanceDetails 实例信息
                     * 
                     */
                    std::vector<RedisCommonInstanceList> GetInstanceDetails() const;

                    /**
                     * 判断参数 InstanceDetails 是否已赋值
                     * @return InstanceDetails 是否已赋值
                     * 
                     */
                    bool InstanceDetailsHasBeenSet() const;

                private:

                    /**
                     * 实例数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 实例信息
                     */
                    std::vector<RedisCommonInstanceList> m_instanceDetails;
                    bool m_instanceDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBECOMMONDBINSTANCESRESPONSE_H_
