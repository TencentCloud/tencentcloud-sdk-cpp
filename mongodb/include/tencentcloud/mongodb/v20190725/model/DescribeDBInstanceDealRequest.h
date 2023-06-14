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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEDEALREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEDEALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceDeal请求参数结构体
                */
                class DescribeDBInstanceDealRequest : public AbstractModel
                {
                public:
                    DescribeDBInstanceDealRequest();
                    ~DescribeDBInstanceDealRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取订单ID，通过CreateDBInstance等接口返回
                     * @return DealId 订单ID，通过CreateDBInstance等接口返回
                     * 
                     */
                    std::string GetDealId() const;

                    /**
                     * 设置订单ID，通过CreateDBInstance等接口返回
                     * @param _dealId 订单ID，通过CreateDBInstance等接口返回
                     * 
                     */
                    void SetDealId(const std::string& _dealId);

                    /**
                     * 判断参数 DealId 是否已赋值
                     * @return DealId 是否已赋值
                     * 
                     */
                    bool DealIdHasBeenSet() const;

                private:

                    /**
                     * 订单ID，通过CreateDBInstance等接口返回
                     */
                    std::string m_dealId;
                    bool m_dealIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEDEALREQUEST_H_
