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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECATALOGSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECATALOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/CatalogConfig.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeCatalogs返回参数结构体
                */
                class DescribeCatalogsResponse : public AbstractModel
                {
                public:
                    DescribeCatalogsResponse();
                    ~DescribeCatalogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Catalog详细信息列表</p>
                     * @return Catalogs <p>Catalog详细信息列表</p>
                     * 
                     */
                    std::vector<CatalogConfig> GetCatalogs() const;

                    /**
                     * 判断参数 Catalogs 是否已赋值
                     * @return Catalogs 是否已赋值
                     * 
                     */
                    bool CatalogsHasBeenSet() const;

                    /**
                     * 获取<p>Catalog总数</p>
                     * @return Total <p>Catalog总数</p>
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * <p>Catalog详细信息列表</p>
                     */
                    std::vector<CatalogConfig> m_catalogs;
                    bool m_catalogsHasBeenSet;

                    /**
                     * <p>Catalog总数</p>
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECATALOGSRESPONSE_H_
