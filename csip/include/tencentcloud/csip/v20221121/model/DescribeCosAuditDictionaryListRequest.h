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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSAUDITDICTIONARYLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSAUDITDICTIONARYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/WhereFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCosAuditDictionaryList请求参数结构体
                */
                class DescribeCosAuditDictionaryListRequest : public AbstractModel
                {
                public:
                    DescribeCosAuditDictionaryListRequest();
                    ~DescribeCosAuditDictionaryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>字典类型（RootCategory：一级分类，IdentifyRule:敏感识别数据项）</p>
                     * @return DictType <p>字典类型（RootCategory：一级分类，IdentifyRule:敏感识别数据项）</p>
                     * 
                     */
                    std::string GetDictType() const;

                    /**
                     * 设置<p>字典类型（RootCategory：一级分类，IdentifyRule:敏感识别数据项）</p>
                     * @param _dictType <p>字典类型（RootCategory：一级分类，IdentifyRule:敏感识别数据项）</p>
                     * 
                     */
                    void SetDictType(const std::string& _dictType);

                    /**
                     * 判断参数 DictType 是否已赋值
                     * @return DictType 是否已赋值
                     * 
                     */
                    bool DictTypeHasBeenSet() const;

                    /**
                     * 获取<p>筛选条件</p>
                     * @return Filters <p>筛选条件</p>
                     * 
                     */
                    std::vector<WhereFilter> GetFilters() const;

                    /**
                     * 设置<p>筛选条件</p>
                     * @param _filters <p>筛选条件</p>
                     * 
                     */
                    void SetFilters(const std::vector<WhereFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>字典类型（RootCategory：一级分类，IdentifyRule:敏感识别数据项）</p>
                     */
                    std::string m_dictType;
                    bool m_dictTypeHasBeenSet;

                    /**
                     * <p>筛选条件</p>
                     */
                    std::vector<WhereFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSAUDITDICTIONARYLISTREQUEST_H_
