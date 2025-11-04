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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINTEGRATETASKREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINTEGRATETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeIntegrateTask请求参数结构体
                */
                class DescribeIntegrateTaskRequest : public AbstractModel
                {
                public:
                    DescribeIntegrateTaskRequest();
                    ~DescribeIntegrateTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大订单id，大订单id和子订单id必须二选一
                     * @return BigDealId 大订单id，大订单id和子订单id必须二选一
                     * 
                     */
                    std::string GetBigDealId() const;

                    /**
                     * 设置大订单id，大订单id和子订单id必须二选一
                     * @param _bigDealId 大订单id，大订单id和子订单id必须二选一
                     * 
                     */
                    void SetBigDealId(const std::string& _bigDealId);

                    /**
                     * 判断参数 BigDealId 是否已赋值
                     * @return BigDealId 是否已赋值
                     * 
                     */
                    bool BigDealIdHasBeenSet() const;

                    /**
                     * 获取订单列表
                     * @return DealNames 订单列表
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 设置订单列表
                     * @param _dealNames 订单列表
                     * 
                     */
                    void SetDealNames(const std::vector<std::string>& _dealNames);

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                private:

                    /**
                     * 大订单id，大订单id和子订单id必须二选一
                     */
                    std::string m_bigDealId;
                    bool m_bigDealIdHasBeenSet;

                    /**
                     * 订单列表
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINTEGRATETASKREQUEST_H_
