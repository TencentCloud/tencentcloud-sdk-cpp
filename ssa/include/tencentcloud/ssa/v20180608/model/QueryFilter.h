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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_QUERYFILTER_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_QUERYFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 查询参数
                */
                class QueryFilter : public AbstractModel
                {
                public:
                    QueryFilter();
                    ~QueryFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询的字段
                     * @return FilterKey 查询的字段
                     */
                    std::string GetFilterKey() const;

                    /**
                     * 设置查询的字段
                     * @param FilterKey 查询的字段
                     */
                    void SetFilterKey(const std::string& _filterKey);

                    /**
                     * 判断参数 FilterKey 是否已赋值
                     * @return FilterKey 是否已赋值
                     */
                    bool FilterKeyHasBeenSet() const;

                    /**
                     * 获取查询的值
                     * @return FilterValue 查询的值
                     */
                    std::string GetFilterValue() const;

                    /**
                     * 设置查询的值
                     * @param FilterValue 查询的值
                     */
                    void SetFilterValue(const std::string& _filterValue);

                    /**
                     * 判断参数 FilterValue 是否已赋值
                     * @return FilterValue 是否已赋值
                     */
                    bool FilterValueHasBeenSet() const;

                    /**
                     * 获取匹配类型，枚举见pb
                     * @return FilterOperatorType 匹配类型，枚举见pb
                     */
                    int64_t GetFilterOperatorType() const;

                    /**
                     * 设置匹配类型，枚举见pb
                     * @param FilterOperatorType 匹配类型，枚举见pb
                     */
                    void SetFilterOperatorType(const int64_t& _filterOperatorType);

                    /**
                     * 判断参数 FilterOperatorType 是否已赋值
                     * @return FilterOperatorType 是否已赋值
                     */
                    bool FilterOperatorTypeHasBeenSet() const;

                private:

                    /**
                     * 查询的字段
                     */
                    std::string m_filterKey;
                    bool m_filterKeyHasBeenSet;

                    /**
                     * 查询的值
                     */
                    std::string m_filterValue;
                    bool m_filterValueHasBeenSet;

                    /**
                     * 匹配类型，枚举见pb
                     */
                    int64_t m_filterOperatorType;
                    bool m_filterOperatorTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_QUERYFILTER_H_
