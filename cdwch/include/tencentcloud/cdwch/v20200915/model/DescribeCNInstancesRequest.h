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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBECNINSTANCESREQUEST_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBECNINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/SearchTags.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * DescribeCNInstances请求参数结构体
                */
                class DescribeCNInstancesRequest : public AbstractModel
                {
                public:
                    DescribeCNInstancesRequest();
                    ~DescribeCNInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索的集群id名称
                     * @return SearchInstanceID 搜索的集群id名称
                     * 
                     */
                    std::string GetSearchInstanceID() const;

                    /**
                     * 设置搜索的集群id名称
                     * @param _searchInstanceID 搜索的集群id名称
                     * 
                     */
                    void SetSearchInstanceID(const std::string& _searchInstanceID);

                    /**
                     * 判断参数 SearchInstanceID 是否已赋值
                     * @return SearchInstanceID 是否已赋值
                     * 
                     */
                    bool SearchInstanceIDHasBeenSet() const;

                    /**
                     * 获取搜索的集群name
                     * @return SearchInstanceName 搜索的集群name
                     * 
                     */
                    std::string GetSearchInstanceName() const;

                    /**
                     * 设置搜索的集群name
                     * @param _searchInstanceName 搜索的集群name
                     * 
                     */
                    void SetSearchInstanceName(const std::string& _searchInstanceName);

                    /**
                     * 判断参数 SearchInstanceName 是否已赋值
                     * @return SearchInstanceName 是否已赋值
                     * 
                     */
                    bool SearchInstanceNameHasBeenSet() const;

                    /**
                     * 获取分页参数，第一页为0，第二页为10
                     * @return Offset 分页参数，第一页为0，第二页为10
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数，第一页为0，第二页为10
                     * @param _offset 分页参数，第一页为0，第二页为10
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
                     * 获取分页参数，分页步长，默认为10
                     * @return Limit 分页参数，分页步长，默认为10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数，分页步长，默认为10
                     * @param _limit 分页参数，分页步长，默认为10
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
                     * 获取搜索标签列表
                     * @return SearchTags 搜索标签列表
                     * 
                     */
                    std::vector<SearchTags> GetSearchTags() const;

                    /**
                     * 设置搜索标签列表
                     * @param _searchTags 搜索标签列表
                     * 
                     */
                    void SetSearchTags(const std::vector<SearchTags>& _searchTags);

                    /**
                     * 判断参数 SearchTags 是否已赋值
                     * @return SearchTags 是否已赋值
                     * 
                     */
                    bool SearchTagsHasBeenSet() const;

                    /**
                     * 获取集群类型，弹性版或自研数仓版
                     * @return InstanceType 集群类型，弹性版或自研数仓版
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置集群类型，弹性版或自研数仓版
                     * @param _instanceType 集群类型，弹性版或自研数仓版
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取组件名称列表
                     * @return Components 组件名称列表
                     * 
                     */
                    std::vector<std::string> GetComponents() const;

                    /**
                     * 设置组件名称列表
                     * @param _components 组件名称列表
                     * 
                     */
                    void SetComponents(const std::vector<std::string>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                private:

                    /**
                     * 搜索的集群id名称
                     */
                    std::string m_searchInstanceID;
                    bool m_searchInstanceIDHasBeenSet;

                    /**
                     * 搜索的集群name
                     */
                    std::string m_searchInstanceName;
                    bool m_searchInstanceNameHasBeenSet;

                    /**
                     * 分页参数，第一页为0，第二页为10
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页参数，分页步长，默认为10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索标签列表
                     */
                    std::vector<SearchTags> m_searchTags;
                    bool m_searchTagsHasBeenSet;

                    /**
                     * 集群类型，弹性版或自研数仓版
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 组件名称列表
                     */
                    std::vector<std::string> m_components;
                    bool m_componentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBECNINSTANCESREQUEST_H_
