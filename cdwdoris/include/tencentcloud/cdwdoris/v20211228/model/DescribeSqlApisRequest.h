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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESQLAPISREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESQLAPISREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeSqlApis请求参数结构体
                */
                class DescribeSqlApisRequest : public AbstractModel
                {
                public:
                    DescribeSqlApisRequest();
                    ~DescribeSqlApisRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户链接来自的 IP
                     * @return WhiteHost 用户链接来自的 IP
                     * 
                     */
                    std::string GetWhiteHost() const;

                    /**
                     * 设置用户链接来自的 IP
                     * @param _whiteHost 用户链接来自的 IP
                     * 
                     */
                    void SetWhiteHost(const std::string& _whiteHost);

                    /**
                     * 判断参数 WhiteHost 是否已赋值
                     * @return WhiteHost 是否已赋值
                     * 
                     */
                    bool WhiteHostHasBeenSet() const;

                    /**
                     * 获取catalog名称
                     * @return Catalog catalog名称
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置catalog名称
                     * @param _catalog catalog名称
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取catalog集合
                     * @return Catalogs catalog集合
                     * 
                     */
                    std::vector<std::string> GetCatalogs() const;

                    /**
                     * 设置catalog集合
                     * @param _catalogs catalog集合
                     * 
                     */
                    void SetCatalogs(const std::vector<std::string>& _catalogs);

                    /**
                     * 判断参数 Catalogs 是否已赋值
                     * @return Catalogs 是否已赋值
                     * 
                     */
                    bool CatalogsHasBeenSet() const;

                private:

                    /**
                     * 用户链接来自的 IP
                     */
                    std::string m_whiteHost;
                    bool m_whiteHostHasBeenSet;

                    /**
                     * catalog名称
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * catalog集合
                     */
                    std::vector<std::string> m_catalogs;
                    bool m_catalogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESQLAPISREQUEST_H_
