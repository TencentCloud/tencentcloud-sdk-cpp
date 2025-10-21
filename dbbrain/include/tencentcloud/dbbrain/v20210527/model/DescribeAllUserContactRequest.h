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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEALLUSERCONTACTREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEALLUSERCONTACTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeAllUserContact请求参数结构体
                */
                class DescribeAllUserContactRequest : public AbstractModel
                {
                public:
                    DescribeAllUserContactRequest();
                    ~DescribeAllUserContactRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务产品类型，固定值：mysql。
                     * @return Product 服务产品类型，固定值：mysql。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，固定值：mysql。
                     * @param _product 服务产品类型，固定值：mysql。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取联系人名数组，支持模糊搜索。
                     * @return Names 联系人名数组，支持模糊搜索。
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置联系人名数组，支持模糊搜索。
                     * @param _names 联系人名数组，支持模糊搜索。
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                private:

                    /**
                     * 服务产品类型，固定值：mysql。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 联系人名数组，支持模糊搜索。
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEALLUSERCONTACTREQUEST_H_
