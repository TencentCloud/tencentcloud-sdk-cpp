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

#ifndef TENCENTCLOUD_TCCATALOG_V20241024_MODEL_DESCRIBETCCCATALOGSRESPONSE_H_
#define TENCENTCLOUD_TCCATALOG_V20241024_MODEL_DESCRIBETCCCATALOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tccatalog/v20241024/model/TccCatalogSet.h>


namespace TencentCloud
{
    namespace Tccatalog
    {
        namespace V20241024
        {
            namespace Model
            {
                /**
                * DescribeTccCatalogs返回参数结构体
                */
                class DescribeTccCatalogsResponse : public AbstractModel
                {
                public:
                    DescribeTccCatalogsResponse();
                    ~DescribeTccCatalogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据目录列表
                     * @return TccCatalogSet 数据目录列表
                     * 
                     */
                    std::vector<TccCatalogSet> GetTccCatalogSet() const;

                    /**
                     * 判断参数 TccCatalogSet 是否已赋值
                     * @return TccCatalogSet 是否已赋值
                     * 
                     */
                    bool TccCatalogSetHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 数据目录列表
                     */
                    std::vector<TccCatalogSet> m_tccCatalogSet;
                    bool m_tccCatalogSetHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCCATALOG_V20241024_MODEL_DESCRIBETCCCATALOGSRESPONSE_H_
