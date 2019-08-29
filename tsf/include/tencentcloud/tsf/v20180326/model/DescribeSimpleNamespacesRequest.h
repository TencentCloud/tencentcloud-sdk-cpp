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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESIMPLENAMESPACESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESIMPLENAMESPACESREQUEST_H_

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
                * DescribeSimpleNamespaces请求参数结构体
                */
                class DescribeSimpleNamespacesRequest : public AbstractModel
                {
                public:
                    DescribeSimpleNamespacesRequest();
                    ~DescribeSimpleNamespacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取命名空间ID列表，不传入时查询全量
                     * @return NamespaceIdList 命名空间ID列表，不传入时查询全量
                     */
                    std::vector<std::string> GetNamespaceIdList() const;

                    /**
                     * 设置命名空间ID列表，不传入时查询全量
                     * @param NamespaceIdList 命名空间ID列表，不传入时查询全量
                     */
                    void SetNamespaceIdList(const std::vector<std::string>& _namespaceIdList);

                    /**
                     * 判断参数 NamespaceIdList 是否已赋值
                     * @return NamespaceIdList 是否已赋值
                     */
                    bool NamespaceIdListHasBeenSet() const;

                    /**
                     * 获取集群ID，不传入时查询全量
                     * @return ClusterId 集群ID，不传入时查询全量
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID，不传入时查询全量
                     * @param ClusterId 集群ID，不传入时查询全量
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取每页条数
                     * @return Limit 每页条数
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页条数
                     * @param Limit 每页条数
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取起始偏移量
                     * @return Offset 起始偏移量
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置起始偏移量
                     * @param Offset 起始偏移量
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取命名空间ID，不传入时查询全量
                     * @return NamespaceId 命名空间ID，不传入时查询全量
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID，不传入时查询全量
                     * @param NamespaceId 命名空间ID，不传入时查询全量
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取查询资源类型列表
                     * @return NamespaceResourceTypeList 查询资源类型列表
                     */
                    std::vector<std::string> GetNamespaceResourceTypeList() const;

                    /**
                     * 设置查询资源类型列表
                     * @param NamespaceResourceTypeList 查询资源类型列表
                     */
                    void SetNamespaceResourceTypeList(const std::vector<std::string>& _namespaceResourceTypeList);

                    /**
                     * 判断参数 NamespaceResourceTypeList 是否已赋值
                     * @return NamespaceResourceTypeList 是否已赋值
                     */
                    bool NamespaceResourceTypeListHasBeenSet() const;

                private:

                    /**
                     * 命名空间ID列表，不传入时查询全量
                     */
                    std::vector<std::string> m_namespaceIdList;
                    bool m_namespaceIdListHasBeenSet;

                    /**
                     * 集群ID，不传入时查询全量
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 每页条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 起始偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 命名空间ID，不传入时查询全量
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 查询资源类型列表
                     */
                    std::vector<std::string> m_namespaceResourceTypeList;
                    bool m_namespaceResourceTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESIMPLENAMESPACESREQUEST_H_
