/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERPODLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERPODLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ClusterPodListItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterPodList返回参数结构体
                */
                class DescribeClusterPodListResponse : public AbstractModel
                {
                public:
                    DescribeClusterPodListResponse();
                    ~DescribeClusterPodListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>总数</p>
                     * @return TotalCount <p>总数</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>列表</p>
                     * @return List <p>列表</p>
                     * 
                     */
                    std::vector<ClusterPodListItem> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取<p>命名空间可选范围</p>
                     * @return Namespaces <p>命名空间可选范围</p>
                     * 
                     */
                    std::vector<std::string> GetNamespaces() const;

                    /**
                     * 判断参数 Namespaces 是否已赋值
                     * @return Namespaces 是否已赋值
                     * 
                     */
                    bool NamespacesHasBeenSet() const;

                private:

                    /**
                     * <p>总数</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>列表</p>
                     */
                    std::vector<ClusterPodListItem> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * <p>命名空间可选范围</p>
                     */
                    std::vector<std::string> m_namespaces;
                    bool m_namespacesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERPODLISTRESPONSE_H_
