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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEINSTANCESNETWORKCONFIGREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEINSTANCESNETWORKCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeInstancesNetworkConfig请求参数结构体
                */
                class DescribeInstancesNetworkConfigRequest : public AbstractModel
                {
                public:
                    DescribeInstancesNetworkConfigRequest();
                    ~DescribeInstancesNetworkConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数量，默认为 20，最大值为 100。

                     * @return Limit 返回数量，默认为 20，最大值为 100。

                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 20，最大值为 100。

                     * @param _limit 返回数量，默认为 20，最大值为 100。

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
                     * 获取偏移量，默认为 0。

                     * @return Offset 偏移量，默认为 0。

                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0。

                     * @param _offset 偏移量，默认为 0。

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
                     * 返回数量，默认为 20，最大值为 100。

                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为 0。

                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEINSTANCESNETWORKCONFIGREQUEST_H_
