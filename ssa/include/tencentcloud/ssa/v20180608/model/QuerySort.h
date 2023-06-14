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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_QUERYSORT_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_QUERYSORT_H_

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
                * 排序的字段
                */
                class QuerySort : public AbstractModel
                {
                public:
                    QuerySort();
                    ~QuerySort() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取排序字段
                     * @return SortKey 排序字段
                     * 
                     */
                    std::string GetSortKey() const;

                    /**
                     * 设置排序字段
                     * @param _sortKey 排序字段
                     * 
                     */
                    void SetSortKey(const std::string& _sortKey);

                    /**
                     * 判断参数 SortKey 是否已赋值
                     * @return SortKey 是否已赋值
                     * 
                     */
                    bool SortKeyHasBeenSet() const;

                    /**
                     * 获取顺序，1升序2降序
                     * @return SortType 顺序，1升序2降序
                     * 
                     */
                    int64_t GetSortType() const;

                    /**
                     * 设置顺序，1升序2降序
                     * @param _sortType 顺序，1升序2降序
                     * 
                     */
                    void SetSortType(const int64_t& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                private:

                    /**
                     * 排序字段
                     */
                    std::string m_sortKey;
                    bool m_sortKeyHasBeenSet;

                    /**
                     * 顺序，1升序2降序
                     */
                    int64_t m_sortType;
                    bool m_sortTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_QUERYSORT_H_
