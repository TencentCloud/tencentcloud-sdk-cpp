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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPAYWAITDETAILREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPAYWAITDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribePayWaitDetail请求参数结构体
                */
                class DescribePayWaitDetailRequest : public AbstractModel
                {
                public:
                    DescribePayWaitDetailRequest();
                    ~DescribePayWaitDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务ID(竞价域名的预约ID) 
可通过[DescribeBiddingList](https://cloud.tencent.com/document/api/242/106598)接口获取
                     * @return BusinessId 业务ID(竞价域名的预约ID) 
可通过[DescribeBiddingList](https://cloud.tencent.com/document/api/242/106598)接口获取
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置业务ID(竞价域名的预约ID) 
可通过[DescribeBiddingList](https://cloud.tencent.com/document/api/242/106598)接口获取
                     * @param _businessId 业务ID(竞价域名的预约ID) 
可通过[DescribeBiddingList](https://cloud.tencent.com/document/api/242/106598)接口获取
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                private:

                    /**
                     * 业务ID(竞价域名的预约ID) 
可通过[DescribeBiddingList](https://cloud.tencent.com/document/api/242/106598)接口获取
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPAYWAITDETAILREQUEST_H_
