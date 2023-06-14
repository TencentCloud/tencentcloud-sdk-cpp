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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCENODEINFOREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCENODEINFOREQUEST_H_

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
                * DescribeInstanceNodeInfo请求参数结构体
                */
                class DescribeInstanceNodeInfoRequest : public AbstractModel
                {
                public:
                    DescribeInstanceNodeInfoRequest();
                    ~DescribeInstanceNodeInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * @return InstanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * @param _instanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
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
                     * 获取列表大小。每页输出的节点信息大小。默认为 20，最多输出1000条。该字段已不再使用，请忽略。
                     * @return Limit 列表大小。每页输出的节点信息大小。默认为 20，最多输出1000条。该字段已不再使用，请忽略。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置列表大小。每页输出的节点信息大小。默认为 20，最多输出1000条。该字段已不再使用，请忽略。
                     * @param _limit 列表大小。每页输出的节点信息大小。默认为 20，最多输出1000条。该字段已不再使用，请忽略。
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
                     * 获取分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。该字段已不再使用，请忽略。
                     * @return Offset 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。该字段已不再使用，请忽略。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。该字段已不再使用，请忽略。
                     * @param _offset 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。该字段已不再使用，请忽略。
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
                     * 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 列表大小。每页输出的节点信息大小。默认为 20，最多输出1000条。该字段已不再使用，请忽略。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。该字段已不再使用，请忽略。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCENODEINFOREQUEST_H_
