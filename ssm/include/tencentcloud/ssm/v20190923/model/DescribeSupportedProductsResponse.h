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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBESUPPORTEDPRODUCTSRESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBESUPPORTEDPRODUCTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * DescribeSupportedProducts返回参数结构体
                */
                class DescribeSupportedProductsResponse : public AbstractModel
                {
                public:
                    DescribeSupportedProductsResponse();
                    ~DescribeSupportedProductsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取支持的所有云产品列表。
每种云产品与凭据类型的对应关系如下：
当SecretType为1时，支持的云产品列表包括：Mysql、Tdsql-mysql、Tdsql_C_Mysql；
当SecretType为2时，支持的产品列表为：Cvm；
当SecretType为3时，支持的产品列表为：Cam（此功能的使用需要联系云助手单独开始白名单）；
当SecretType为4时，支持的产品列表为：Redis。
                     * @return Products 支持的所有云产品列表。
每种云产品与凭据类型的对应关系如下：
当SecretType为1时，支持的云产品列表包括：Mysql、Tdsql-mysql、Tdsql_C_Mysql；
当SecretType为2时，支持的产品列表为：Cvm；
当SecretType为3时，支持的产品列表为：Cam（此功能的使用需要联系云助手单独开始白名单）；
当SecretType为4时，支持的产品列表为：Redis。
                     * 
                     */
                    std::vector<std::string> GetProducts() const;

                    /**
                     * 判断参数 Products 是否已赋值
                     * @return Products 是否已赋值
                     * 
                     */
                    bool ProductsHasBeenSet() const;

                    /**
                     * 获取支持的产品个数
                     * @return TotalCount 支持的产品个数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 支持的所有云产品列表。
每种云产品与凭据类型的对应关系如下：
当SecretType为1时，支持的云产品列表包括：Mysql、Tdsql-mysql、Tdsql_C_Mysql；
当SecretType为2时，支持的产品列表为：Cvm；
当SecretType为3时，支持的产品列表为：Cam（此功能的使用需要联系云助手单独开始白名单）；
当SecretType为4时，支持的产品列表为：Redis。
                     */
                    std::vector<std::string> m_products;
                    bool m_productsHasBeenSet;

                    /**
                     * 支持的产品个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBESUPPORTEDPRODUCTSRESPONSE_H_
