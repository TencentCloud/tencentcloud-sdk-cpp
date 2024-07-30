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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECONTAINERGROUPSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECONTAINERGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeContainerGroups请求参数结构体
                */
                class DescribeContainerGroupsRequest : public AbstractModel
                {
                public:
                    DescribeContainerGroupsRequest();
                    ~DescribeContainerGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分组所属应用ID。
                     * @return ApplicationId 分组所属应用ID。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置分组所属应用ID。
                     * @param _applicationId 分组所属应用ID。
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取搜索字段，模糊搜索groupName字段
                     * @return SearchWord 搜索字段，模糊搜索groupName字段
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索字段，模糊搜索groupName字段
                     * @param _searchWord 搜索字段，模糊搜索groupName字段
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取排序字段，默认为 createTime字段，支持id， name， createTime
                     * @return OrderBy 排序字段，默认为 createTime字段，支持id， name， createTime
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，默认为 createTime字段，支持id， name， createTime
                     * @param _orderBy 排序字段，默认为 createTime字段，支持id， name， createTime
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
                     * 获取排序方式，默认为1：倒序排序，0：正序，1：倒序
                     * @return OrderType 排序方式，默认为1：倒序排序，0：正序，1：倒序
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置排序方式，默认为1：倒序排序，0：正序，1：倒序
                     * @param _orderType 排序方式，默认为1：倒序排序，0：正序，1：倒序
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取偏移量，取值从0开始
                     * @return Offset 偏移量，取值从0开始
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，取值从0开始
                     * @param _offset 偏移量，取值从0开始
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
                     * 获取分页个数，默认为20， 取值应为1~50
                     * @return Limit 分页个数，默认为20， 取值应为1~50
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页个数，默认为20， 取值应为1~50
                     * @param _limit 分页个数，默认为20， 取值应为1~50
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
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取命名空间 ID
                     * @return NamespaceId 命名空间 ID
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间 ID
                     * @param _namespaceId 命名空间 ID
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                private:

                    /**
                     * 分组所属应用ID。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 搜索字段，模糊搜索groupName字段
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 排序字段，默认为 createTime字段，支持id， name， createTime
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式，默认为1：倒序排序，0：正序，1：倒序
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 偏移量，取值从0开始
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页个数，默认为20， 取值应为1~50
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 命名空间 ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECONTAINERGROUPSREQUEST_H_
