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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMDICTIONARYLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMDICTIONARYLISTREQUEST_H_

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
                * DescribeDspmDictionaryList请求参数结构体
                */
                class DescribeDspmDictionaryListRequest : public AbstractModel
                {
                public:
                    DescribeDspmDictionaryListRequest();
                    ~DescribeDspmDictionaryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取字典类型（RootCategory：一级分类，IdentifyRule:敏感识别数据项）
                     * @return DictType 字典类型（RootCategory：一级分类，IdentifyRule:敏感识别数据项）
                     * 
                     */
                    std::string GetDictType() const;

                    /**
                     * 设置字典类型（RootCategory：一级分类，IdentifyRule:敏感识别数据项）
                     * @param _dictType 字典类型（RootCategory：一级分类，IdentifyRule:敏感识别数据项）
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
                     * 获取筛选条件
                     * @return Filters 筛选条件
                     * 
                     */
                    std::vector<WhereFilter> GetFilters() const;

                    /**
                     * 设置筛选条件
                     * @param _filters 筛选条件
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
                     * 字典类型（RootCategory：一级分类，IdentifyRule:敏感识别数据项）
                     */
                    std::string m_dictType;
                    bool m_dictTypeHasBeenSet;

                    /**
                     * 筛选条件
                     */
                    std::vector<WhereFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMDICTIONARYLISTREQUEST_H_
