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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEREGIONSREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEREGIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeRegions请求参数结构体
                */
                class DescribeRegionsRequest : public AbstractModel
                {
                public:
                    DescribeRegionsRequest();
                    ~DescribeRegionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通过该参数指定不同压测网络环境，在不同网络环境下，PTS可用的地域不一样
                     * @return LoadType 通过该参数指定不同压测网络环境，在不同网络环境下，PTS可用的地域不一样
                     * 
                     */
                    uint64_t GetLoadType() const;

                    /**
                     * 设置通过该参数指定不同压测网络环境，在不同网络环境下，PTS可用的地域不一样
                     * @param _loadType 通过该参数指定不同压测网络环境，在不同网络环境下，PTS可用的地域不一样
                     * 
                     */
                    void SetLoadType(const uint64_t& _loadType);

                    /**
                     * 判断参数 LoadType 是否已赋值
                     * @return LoadType 是否已赋值
                     * 
                     */
                    bool LoadTypeHasBeenSet() const;

                private:

                    /**
                     * 通过该参数指定不同压测网络环境，在不同网络环境下，PTS可用的地域不一样
                     */
                    uint64_t m_loadType;
                    bool m_loadTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEREGIONSREQUEST_H_
