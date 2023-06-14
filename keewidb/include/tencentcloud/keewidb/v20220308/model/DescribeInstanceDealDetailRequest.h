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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCEDEALDETAILREQUEST_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCEDEALDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
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
                     * 获取订单交易ID数组，即 [CreateInstances](https://cloud.tencent.com/document/api/1520/86207) 的输出参数DealId。
                     * @return DealIds 订单交易ID数组，即 [CreateInstances](https://cloud.tencent.com/document/api/1520/86207) 的输出参数DealId。
                     * 
                     */
                    std::vector<std::string> GetDealIds() const;

                    /**
                     * 设置订单交易ID数组，即 [CreateInstances](https://cloud.tencent.com/document/api/1520/86207) 的输出参数DealId。
                     * @param _dealIds 订单交易ID数组，即 [CreateInstances](https://cloud.tencent.com/document/api/1520/86207) 的输出参数DealId。
                     * 
                     */
                    void SetDealIds(const std::vector<std::string>& _dealIds);

                    /**
                     * 判断参数 DealIds 是否已赋值
                     * @return DealIds 是否已赋值
                     * 
                     */
                    bool DealIdsHasBeenSet() const;

                private:

                    /**
                     * 订单交易ID数组，即 [CreateInstances](https://cloud.tencent.com/document/api/1520/86207) 的输出参数DealId。
                     */
                    std::vector<std::string> m_dealIds;
                    bool m_dealIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCEDEALDETAILREQUEST_H_
