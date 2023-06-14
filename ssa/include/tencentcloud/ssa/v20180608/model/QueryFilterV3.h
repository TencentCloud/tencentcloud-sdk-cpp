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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_QUERYFILTERV3_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_QUERYFILTERV3_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/QueryFilter.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 过滤
                */
                class QueryFilterV3 : public AbstractModel
                {
                public:
                    QueryFilterV3();
                    ~QueryFilterV3() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤条件
                     * @return Filter 过滤条件
                     * 
                     */
                    QueryFilter GetFilter() const;

                    /**
                     * 设置过滤条件
                     * @param _filter 过滤条件
                     * 
                     */
                    void SetFilter(const QueryFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取有无子条件
                     * @return HasSub 有无子条件
                     * 
                     */
                    bool GetHasSub() const;

                    /**
                     * 设置有无子条件
                     * @param _hasSub 有无子条件
                     * 
                     */
                    void SetHasSub(const bool& _hasSub);

                    /**
                     * 判断参数 HasSub 是否已赋值
                     * @return HasSub 是否已赋值
                     * 
                     */
                    bool HasSubHasBeenSet() const;

                    /**
                     * 获取查询条件
                     * @return SubFilters 查询条件
                     * 
                     */
                    std::vector<QueryFilter> GetSubFilters() const;

                    /**
                     * 设置查询条件
                     * @param _subFilters 查询条件
                     * 
                     */
                    void SetSubFilters(const std::vector<QueryFilter>& _subFilters);

                    /**
                     * 判断参数 SubFilters 是否已赋值
                     * @return SubFilters 是否已赋值
                     * 
                     */
                    bool SubFiltersHasBeenSet() const;

                    /**
                     * 获取逻辑操作(只支持32位)
                     * @return Logic 逻辑操作(只支持32位)
                     * 
                     */
                    uint64_t GetLogic() const;

                    /**
                     * 设置逻辑操作(只支持32位)
                     * @param _logic 逻辑操作(只支持32位)
                     * 
                     */
                    void SetLogic(const uint64_t& _logic);

                    /**
                     * 判断参数 Logic 是否已赋值
                     * @return Logic 是否已赋值
                     * 
                     */
                    bool LogicHasBeenSet() const;

                private:

                    /**
                     * 过滤条件
                     */
                    QueryFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 有无子条件
                     */
                    bool m_hasSub;
                    bool m_hasSubHasBeenSet;

                    /**
                     * 查询条件
                     */
                    std::vector<QueryFilter> m_subFilters;
                    bool m_subFiltersHasBeenSet;

                    /**
                     * 逻辑操作(只支持32位)
                     */
                    uint64_t m_logic;
                    bool m_logicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_QUERYFILTERV3_H_
