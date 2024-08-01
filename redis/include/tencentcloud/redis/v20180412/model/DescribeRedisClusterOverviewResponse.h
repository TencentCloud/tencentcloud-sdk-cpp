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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEREDISCLUSTEROVERVIEWRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEREDISCLUSTEROVERVIEWRESPONSE_H_

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
                * DescribeRedisClusterOverview返回参数结构体
                */
                class DescribeRedisClusterOverviewResponse : public AbstractModel
                {
                public:
                    DescribeRedisClusterOverviewResponse();
                    ~DescribeRedisClusterOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源包总数
                     * @return TotalBundle 资源包总数
                     * 
                     */
                    int64_t GetTotalBundle() const;

                    /**
                     * 判断参数 TotalBundle 是否已赋值
                     * @return TotalBundle 是否已赋值
                     * 
                     */
                    bool TotalBundleHasBeenSet() const;

                    /**
                     * 获取资源包总内存大小，单位：GB
                     * @return TotalMemory 资源包总内存大小，单位：GB
                     * 
                     */
                    int64_t GetTotalMemory() const;

                    /**
                     * 判断参数 TotalMemory 是否已赋值
                     * @return TotalMemory 是否已赋值
                     * 
                     */
                    bool TotalMemoryHasBeenSet() const;

                private:

                    /**
                     * 资源包总数
                     */
                    int64_t m_totalBundle;
                    bool m_totalBundleHasBeenSet;

                    /**
                     * 资源包总内存大小，单位：GB
                     */
                    int64_t m_totalMemory;
                    bool m_totalMemoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEREDISCLUSTEROVERVIEWRESPONSE_H_
