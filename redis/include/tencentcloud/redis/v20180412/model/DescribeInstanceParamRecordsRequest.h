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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEPARAMRECORDSREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEPARAMRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceParamRecords请求参数结构体
                */
                class DescribeInstanceParamRecordsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceParamRecordsRequest();
                    ~DescribeInstanceParamRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID 。请登录 [Redis 控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @return InstanceId 实例 ID 。请登录 [Redis 控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID 。请登录 [Redis 控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @param _instanceId 实例 ID 。请登录 [Redis 控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取分页大小。默认为100，最大值为 200。
                     * @return Limit 分页大小。默认为100，最大值为 200。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小。默认为100，最大值为 200。
                     * @param _limit 分页大小。默认为100，最大值为 200。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，取Limit整数倍，默认值为0。计算公式：offset=limit*(页码-1)。
                     * @return Offset 偏移量，取Limit整数倍，默认值为0。计算公式：offset=limit*(页码-1)。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，取Limit整数倍，默认值为0。计算公式：offset=limit*(页码-1)。
                     * @param _offset 偏移量，取Limit整数倍，默认值为0。计算公式：offset=limit*(页码-1)。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 实例 ID 。请登录 [Redis 控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 分页大小。默认为100，最大值为 200。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，取Limit整数倍，默认值为0。计算公式：offset=limit*(页码-1)。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEPARAMRECORDSREQUEST_H_
