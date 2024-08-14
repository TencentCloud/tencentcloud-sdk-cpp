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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSSPACESREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSSPACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/TagInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeServerlessSpaces请求参数结构体
                */
                class DescribeServerlessSpacesRequest : public AbstractModel
                {
                public:
                    DescribeServerlessSpacesRequest();
                    ~DescribeServerlessSpacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤的空间ID
                     * @return SpaceIds 过滤的空间ID
                     * 
                     */
                    std::vector<std::string> GetSpaceIds() const;

                    /**
                     * 设置过滤的空间ID
                     * @param _spaceIds 过滤的空间ID
                     * 
                     */
                    void SetSpaceIds(const std::vector<std::string>& _spaceIds);

                    /**
                     * 判断参数 SpaceIds 是否已赋值
                     * @return SpaceIds 是否已赋值
                     * 
                     */
                    bool SpaceIdsHasBeenSet() const;

                    /**
                     * 获取过滤的空间名
                     * @return SpaceNames 过滤的空间名
                     * 
                     */
                    std::vector<std::string> GetSpaceNames() const;

                    /**
                     * 设置过滤的空间名
                     * @param _spaceNames 过滤的空间名
                     * 
                     */
                    void SetSpaceNames(const std::vector<std::string>& _spaceNames);

                    /**
                     * 判断参数 SpaceNames 是否已赋值
                     * @return SpaceNames 是否已赋值
                     * 
                     */
                    bool SpaceNamesHasBeenSet() const;

                    /**
                     * 获取排序顺序，支持升序asc、降序desc
                     * @return Order 排序顺序，支持升序asc、降序desc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序顺序，支持升序asc、降序desc
                     * @param _order 排序顺序，支持升序asc、降序desc
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取排序字段，支持空间创建时间SpaceCreateTime
                     * @return OrderBy 排序字段，支持空间创建时间SpaceCreateTime
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，支持空间创建时间SpaceCreateTime
                     * @param _orderBy 排序字段，支持空间创建时间SpaceCreateTime
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取vpcId信息数组
                     * @return VpcIds vpcId信息数组
                     * 
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置vpcId信息数组
                     * @param _vpcIds vpcId信息数组
                     * 
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取分页起始
                     * @return Offset 分页起始
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页起始
                     * @param _offset 分页起始
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
                     * 获取分页条数
                     * @return Limit 分页条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页条数
                     * @param _limit 分页条数
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
                     * 获取标签信息
                     * @return TagList 标签信息
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置标签信息
                     * @param _tagList 标签信息
                     * 
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * 过滤的空间ID
                     */
                    std::vector<std::string> m_spaceIds;
                    bool m_spaceIdsHasBeenSet;

                    /**
                     * 过滤的空间名
                     */
                    std::vector<std::string> m_spaceNames;
                    bool m_spaceNamesHasBeenSet;

                    /**
                     * 排序顺序，支持升序asc、降序desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段，支持空间创建时间SpaceCreateTime
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * vpcId信息数组
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * 分页起始
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSSPACESREQUEST_H_
