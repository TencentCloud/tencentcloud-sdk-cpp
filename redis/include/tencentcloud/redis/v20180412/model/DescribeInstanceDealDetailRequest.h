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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEDEALDETAILREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEDEALDETAILREQUEST_H_

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
                * DescribeInstanceDealDetail请求参数结构体
                */
                class DescribeInstanceDealDetailRequest : public AbstractModel
                {
                public:
                    DescribeInstanceDealDetailRequest();
                    ~DescribeInstanceDealDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取订单号，即 [CreateInstances](https://cloud.tencent.com/document/api/239/20026) 的输出参数DealId。数组最大长度限制为10
                     * @return DealIds 订单号，即 [CreateInstances](https://cloud.tencent.com/document/api/239/20026) 的输出参数DealId。数组最大长度限制为10
                     * @deprecated
                     */
                    std::vector<std::string> GetDealIds() const;

                    /**
                     * 设置订单号，即 [CreateInstances](https://cloud.tencent.com/document/api/239/20026) 的输出参数DealId。数组最大长度限制为10
                     * @param _dealIds 订单号，即 [CreateInstances](https://cloud.tencent.com/document/api/239/20026) 的输出参数DealId。数组最大长度限制为10
                     * @deprecated
                     */
                    void SetDealIds(const std::vector<std::string>& _dealIds);

                    /**
                     * 判断参数 DealIds 是否已赋值
                     * @return DealIds 是否已赋值
                     * @deprecated
                     */
                    bool DealIdsHasBeenSet() const;

                    /**
                     * 获取订单号，即 [CreateInstances](https://cloud.tencent.com/document/api/239/20026) 的输出参数DealName。数组最大长度限制为10
                     * @return DealName 订单号，即 [CreateInstances](https://cloud.tencent.com/document/api/239/20026) 的输出参数DealName。数组最大长度限制为10
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置订单号，即 [CreateInstances](https://cloud.tencent.com/document/api/239/20026) 的输出参数DealName。数组最大长度限制为10
                     * @param _dealName 订单号，即 [CreateInstances](https://cloud.tencent.com/document/api/239/20026) 的输出参数DealName。数组最大长度限制为10
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                private:

                    /**
                     * 订单号，即 [CreateInstances](https://cloud.tencent.com/document/api/239/20026) 的输出参数DealId。数组最大长度限制为10
                     */
                    std::vector<std::string> m_dealIds;
                    bool m_dealIdsHasBeenSet;

                    /**
                     * 订单号，即 [CreateInstances](https://cloud.tencent.com/document/api/239/20026) 的输出参数DealName。数组最大长度限制为10
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEDEALDETAILREQUEST_H_
