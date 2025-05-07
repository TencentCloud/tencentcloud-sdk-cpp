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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERROLESREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERROLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeUserRoles请求参数结构体
                */
                class DescribeUserRolesRequest : public AbstractModel
                {
                public:
                    DescribeUserRolesRequest();
                    ~DescribeUserRolesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取列举的数量限制
                     * @return Limit 列举的数量限制
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置列举的数量限制
                     * @param _limit 列举的数量限制
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取列举的偏移位置
                     * @return Offset 列举的偏移位置
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置列举的偏移位置
                     * @param _offset 列举的偏移位置
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取按照arn模糊列举
                     * @return Fuzzy 按照arn模糊列举
                     * 
                     */
                    std::string GetFuzzy() const;

                    /**
                     * 设置按照arn模糊列举
                     * @param _fuzzy 按照arn模糊列举
                     * 
                     */
                    void SetFuzzy(const std::string& _fuzzy);

                    /**
                     * 判断参数 Fuzzy 是否已赋值
                     * @return Fuzzy 是否已赋值
                     * 
                     */
                    bool FuzzyHasBeenSet() const;

                    /**
                     * 获取返回结果按照该字段排序
                     * @return SortBy 返回结果按照该字段排序
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置返回结果按照该字段排序
                     * @param _sortBy 返回结果按照该字段排序
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取正序或者倒序，例如：desc
                     * @return Sorting 正序或者倒序，例如：desc
                     * 
                     */
                    std::string GetSorting() const;

                    /**
                     * 设置正序或者倒序，例如：desc
                     * @param _sorting 正序或者倒序，例如：desc
                     * 
                     */
                    void SetSorting(const std::string& _sorting);

                    /**
                     * 判断参数 Sorting 是否已赋值
                     * @return Sorting 是否已赋值
                     * 
                     */
                    bool SortingHasBeenSet() const;

                    /**
                     * 获取是否设置为常驻：1非常驻（默认）、2常驻（仅能设置一个常驻）
                     * @return IsDefault 是否设置为常驻：1非常驻（默认）、2常驻（仅能设置一个常驻）
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置是否设置为常驻：1非常驻（默认）、2常驻（仅能设置一个常驻）
                     * @param _isDefault 是否设置为常驻：1非常驻（默认）、2常驻（仅能设置一个常驻）
                     * 
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                private:

                    /**
                     * 列举的数量限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 列举的偏移位置
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 按照arn模糊列举
                     */
                    std::string m_fuzzy;
                    bool m_fuzzyHasBeenSet;

                    /**
                     * 返回结果按照该字段排序
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 正序或者倒序，例如：desc
                     */
                    std::string m_sorting;
                    bool m_sortingHasBeenSet;

                    /**
                     * 是否设置为常驻：1非常驻（默认）、2常驻（仅能设置一个常驻）
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERROLESREQUEST_H_
