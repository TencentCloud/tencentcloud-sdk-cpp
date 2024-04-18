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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSINSTANCESREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSINSTANCESREQUEST_H_

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
                * DescribeServerlessInstances请求参数结构体
                */
                class DescribeServerlessInstancesRequest : public AbstractModel
                {
                public:
                    DescribeServerlessInstancesRequest();
                    ~DescribeServerlessInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取索引集群ID
                     * @return InstanceIds 索引集群ID
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置索引集群ID
                     * @param _instanceIds 索引集群ID
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取索引名
                     * @return IndexNames 索引名
                     * 
                     */
                    std::vector<std::string> GetIndexNames() const;

                    /**
                     * 设置索引名
                     * @param _indexNames 索引名
                     * 
                     */
                    void SetIndexNames(const std::vector<std::string>& _indexNames);

                    /**
                     * 判断参数 IndexNames 是否已赋值
                     * @return IndexNames 是否已赋值
                     * 
                     */
                    bool IndexNamesHasBeenSet() const;

                    /**
                     * 获取分页起始位置
                     * @return Offset 分页起始位置
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页起始位置
                     * @param _offset 分页起始位置
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
                     * 获取一页展示数量
                     * @return Limit 一页展示数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置一页展示数量
                     * @param _limit 一页展示数量
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
                     * 获取排序字段，支持索引名：IndexName、索引存储量：IndexStorage、索引创建时间：IndexCreateTime
                     * @return OrderBy 排序字段，支持索引名：IndexName、索引存储量：IndexStorage、索引创建时间：IndexCreateTime
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，支持索引名：IndexName、索引存储量：IndexStorage、索引创建时间：IndexCreateTime
                     * @param _orderBy 排序字段，支持索引名：IndexName、索引存储量：IndexStorage、索引创建时间：IndexCreateTime
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
                     * 获取过滤索引状态
                     * @return IndexStatusList 过滤索引状态
                     * 
                     */
                    std::vector<std::string> GetIndexStatusList() const;

                    /**
                     * 设置过滤索引状态
                     * @param _indexStatusList 过滤索引状态
                     * 
                     */
                    void SetIndexStatusList(const std::vector<std::string>& _indexStatusList);

                    /**
                     * 判断参数 IndexStatusList 是否已赋值
                     * @return IndexStatusList 是否已赋值
                     * 
                     */
                    bool IndexStatusListHasBeenSet() const;

                    /**
                     * 获取排序顺序，支持asc、desc，默认为desc
                     * @return Order 排序顺序，支持asc、desc，默认为desc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序顺序，支持asc、desc，默认为desc
                     * @param _order 排序顺序，支持asc、desc，默认为desc
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
                     * 获取索引空间ID列表
                     * @return SpaceIds 索引空间ID列表
                     * 
                     */
                    std::vector<std::string> GetSpaceIds() const;

                    /**
                     * 设置索引空间ID列表
                     * @param _spaceIds 索引空间ID列表
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
                     * 获取数据链路数据源类型
                     * @return DiSourceTypes 数据链路数据源类型
                     * 
                     */
                    std::vector<std::string> GetDiSourceTypes() const;

                    /**
                     * 设置数据链路数据源类型
                     * @param _diSourceTypes 数据链路数据源类型
                     * 
                     */
                    void SetDiSourceTypes(const std::vector<std::string>& _diSourceTypes);

                    /**
                     * 判断参数 DiSourceTypes 是否已赋值
                     * @return DiSourceTypes 是否已赋值
                     * 
                     */
                    bool DiSourceTypesHasBeenSet() const;

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
                     * 索引集群ID
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 索引名
                     */
                    std::vector<std::string> m_indexNames;
                    bool m_indexNamesHasBeenSet;

                    /**
                     * 分页起始位置
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 一页展示数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段，支持索引名：IndexName、索引存储量：IndexStorage、索引创建时间：IndexCreateTime
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 过滤索引状态
                     */
                    std::vector<std::string> m_indexStatusList;
                    bool m_indexStatusListHasBeenSet;

                    /**
                     * 排序顺序，支持asc、desc，默认为desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 索引空间ID列表
                     */
                    std::vector<std::string> m_spaceIds;
                    bool m_spaceIdsHasBeenSet;

                    /**
                     * 数据链路数据源类型
                     */
                    std::vector<std::string> m_diSourceTypes;
                    bool m_diSourceTypesHasBeenSet;

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

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSINSTANCESREQUEST_H_
