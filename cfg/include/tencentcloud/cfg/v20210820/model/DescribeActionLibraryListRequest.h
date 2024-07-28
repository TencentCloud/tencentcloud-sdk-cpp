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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEACTIONLIBRARYLISTREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEACTIONLIBRARYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/ActionFilter.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeActionLibraryList请求参数结构体
                */
                class DescribeActionLibraryListRequest : public AbstractModel
                {
                public:
                    DescribeActionLibraryListRequest();
                    ~DescribeActionLibraryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0-100
                     * @return Limit 0-100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置0-100
                     * @param _limit 0-100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取默认值0
                     * @return Offset 默认值0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置默认值0
                     * @param _offset 默认值0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取对象类型ID
                     * @return ObjectType 对象类型ID
                     * 
                     */
                    uint64_t GetObjectType() const;

                    /**
                     * 设置对象类型ID
                     * @param _objectType 对象类型ID
                     * 
                     */
                    void SetObjectType(const uint64_t& _objectType);

                    /**
                     * 判断参数 ObjectType 是否已赋值
                     * @return ObjectType 是否已赋值
                     * 
                     */
                    bool ObjectTypeHasBeenSet() const;

                    /**
                     * 获取Keyword取值{"动作名称": "a_title", "描述": "a_desc", "动作类型": "a_type", "创建时间": "a_create_time", "二级分类": "a_resource_type"}
                     * @return Filters Keyword取值{"动作名称": "a_title", "描述": "a_desc", "动作类型": "a_type", "创建时间": "a_create_time", "二级分类": "a_resource_type"}
                     * 
                     */
                    std::vector<ActionFilter> GetFilters() const;

                    /**
                     * 设置Keyword取值{"动作名称": "a_title", "描述": "a_desc", "动作类型": "a_type", "创建时间": "a_create_time", "二级分类": "a_resource_type"}
                     * @param _filters Keyword取值{"动作名称": "a_title", "描述": "a_desc", "动作类型": "a_type", "创建时间": "a_create_time", "二级分类": "a_resource_type"}
                     * 
                     */
                    void SetFilters(const std::vector<ActionFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取动作分类，1表示故障动作，2表示恢复动作
                     * @return Attribute 动作分类，1表示故障动作，2表示恢复动作
                     * 
                     */
                    std::vector<int64_t> GetAttribute() const;

                    /**
                     * 设置动作分类，1表示故障动作，2表示恢复动作
                     * @param _attribute 动作分类，1表示故障动作，2表示恢复动作
                     * 
                     */
                    void SetAttribute(const std::vector<int64_t>& _attribute);

                    /**
                     * 判断参数 Attribute 是否已赋值
                     * @return Attribute 是否已赋值
                     * 
                     */
                    bool AttributeHasBeenSet() const;

                    /**
                     * 获取筛选项 -动作ID
                     * @return ActionIds 筛选项 -动作ID
                     * 
                     */
                    std::vector<uint64_t> GetActionIds() const;

                    /**
                     * 设置筛选项 -动作ID
                     * @param _actionIds 筛选项 -动作ID
                     * 
                     */
                    void SetActionIds(const std::vector<uint64_t>& _actionIds);

                    /**
                     * 判断参数 ActionIds 是否已赋值
                     * @return ActionIds 是否已赋值
                     * 
                     */
                    bool ActionIdsHasBeenSet() const;

                private:

                    /**
                     * 0-100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 默认值0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 对象类型ID
                     */
                    uint64_t m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * Keyword取值{"动作名称": "a_title", "描述": "a_desc", "动作类型": "a_type", "创建时间": "a_create_time", "二级分类": "a_resource_type"}
                     */
                    std::vector<ActionFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 动作分类，1表示故障动作，2表示恢复动作
                     */
                    std::vector<int64_t> m_attribute;
                    bool m_attributeHasBeenSet;

                    /**
                     * 筛选项 -动作ID
                     */
                    std::vector<uint64_t> m_actionIds;
                    bool m_actionIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEACTIONLIBRARYLISTREQUEST_H_
