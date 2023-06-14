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
                * 过滤条件
                */
                class QueryFilter : public AbstractModel
                {
                public:
                    QueryFilter();
                    ~QueryFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤key
                     * @return FilterKey 过滤key
                     * 
                     */
                    std::string GetFilterKey() const;

                    /**
                     * 设置过滤key
                     * @param _filterKey 过滤key
                     * 
                     */
                    void SetFilterKey(const std::string& _filterKey);

                    /**
                     * 判断参数 FilterKey 是否已赋值
                     * @return FilterKey 是否已赋值
                     * 
                     */
                    bool FilterKeyHasBeenSet() const;

                    /**
                     * 获取操作符(只支持32位)
                     * @return FilterOperatorType 操作符(只支持32位)
                     * 
                     */
                    int64_t GetFilterOperatorType() const;

                    /**
                     * 设置操作符(只支持32位)
                     * @param _filterOperatorType 操作符(只支持32位)
                     * 
                     */
                    void SetFilterOperatorType(const int64_t& _filterOperatorType);

                    /**
                     * 判断参数 FilterOperatorType 是否已赋值
                     * @return FilterOperatorType 是否已赋值
                     * 
                     */
                    bool FilterOperatorTypeHasBeenSet() const;

                    /**
                     * 获取过滤value
                     * @return FilterValue 过滤value
                     * 
                     */
                    std::string GetFilterValue() const;

                    /**
                     * 设置过滤value
                     * @param _filterValue 过滤value
                     * 
                     */
                    void SetFilterValue(const std::string& _filterValue);

                    /**
                     * 判断参数 FilterValue 是否已赋值
                     * @return FilterValue 是否已赋值
                     * 
                     */
                    bool FilterValueHasBeenSet() const;

                private:

                    /**
                     * 过滤key
                     */
                    std::string m_filterKey;
                    bool m_filterKeyHasBeenSet;

                    /**
                     * 操作符(只支持32位)
                     */
                    int64_t m_filterOperatorType;
                    bool m_filterOperatorTypeHasBeenSet;

                    /**
                     * 过滤value
                     */
                    std::string m_filterValue;
                    bool m_filterValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_QUERYFILTER_H_
