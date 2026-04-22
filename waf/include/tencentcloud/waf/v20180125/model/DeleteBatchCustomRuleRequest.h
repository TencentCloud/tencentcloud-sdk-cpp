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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETEBATCHCUSTOMRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETEBATCHCUSTOMRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/FiltersItemNew.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DeleteBatchCustomRule请求参数结构体
                */
                class DeleteBatchCustomRuleRequest : public AbstractModel
                {
                public:
                    DeleteBatchCustomRuleRequest();
                    ~DeleteBatchCustomRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据类型 
"custom-rule"-自定义规则、"custom-white-rule"-精准白名单

                     * @return DataType 数据类型 
"custom-rule"-自定义规则、"custom-white-rule"-精准白名单

                     * 
                     */
                    std::string GetDataType() const;

                    /**
                     * 设置数据类型 
"custom-rule"-自定义规则、"custom-white-rule"-精准白名单

                     * @param _dataType 数据类型 
"custom-rule"-自定义规则、"custom-white-rule"-精准白名单

                     * 
                     */
                    void SetDataType(const std::string& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取0-指定Id删除、1-删除全部（除部分排除的Id）

                     * @return IsDeleteAll 0-指定Id删除、1-删除全部（除部分排除的Id）

                     * 
                     */
                    int64_t GetIsDeleteAll() const;

                    /**
                     * 设置0-指定Id删除、1-删除全部（除部分排除的Id）

                     * @param _isDeleteAll 0-指定Id删除、1-删除全部（除部分排除的Id）

                     * 
                     */
                    void SetIsDeleteAll(const int64_t& _isDeleteAll);

                    /**
                     * 判断参数 IsDeleteAll 是否已赋值
                     * @return IsDeleteAll 是否已赋值
                     * 
                     */
                    bool IsDeleteAllHasBeenSet() const;

                    /**
                     * 获取具体Ids 由IsDeleteAll而定
                     * @return Ids 具体Ids 由IsDeleteAll而定
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置具体Ids 由IsDeleteAll而定
                     * @param _ids 具体Ids 由IsDeleteAll而定
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取筛选条件
                     * @return Filters 筛选条件
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilters() const;

                    /**
                     * 设置筛选条件
                     * @param _filters 筛选条件
                     * 
                     */
                    void SetFilters(const std::vector<FiltersItemNew>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 数据类型 
"custom-rule"-自定义规则、"custom-white-rule"-精准白名单

                     */
                    std::string m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * 0-指定Id删除、1-删除全部（除部分排除的Id）

                     */
                    int64_t m_isDeleteAll;
                    bool m_isDeleteAllHasBeenSet;

                    /**
                     * 具体Ids 由IsDeleteAll而定
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * 筛选条件
                     */
                    std::vector<FiltersItemNew> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETEBATCHCUSTOMRULEREQUEST_H_
