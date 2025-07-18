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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPODCHARGEINFOREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPODCHARGEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribePodChargeInfo请求参数结构体
                */
                class DescribePodChargeInfoRequest : public AbstractModel
                {
                public:
                    DescribePodChargeInfoRequest();
                    ~DescribePodChargeInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群 ID。TKE 集群可通过 [DescribeClusters](https://cloud.tencent.com/document/api/457/31862) 接口返回值中的ClusterId获取。
                     * @return ClusterId 集群 ID。TKE 集群可通过 [DescribeClusters](https://cloud.tencent.com/document/api/457/31862) 接口返回值中的ClusterId获取。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID。TKE 集群可通过 [DescribeClusters](https://cloud.tencent.com/document/api/457/31862) 接口返回值中的ClusterId获取。
                     * @param _clusterId 集群 ID。TKE 集群可通过 [DescribeClusters](https://cloud.tencent.com/document/api/457/31862) 接口返回值中的ClusterId获取。
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
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Pod名称
                     * @return Name Pod名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Pod名称
                     * @param _name Pod名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Pod的Uid，可以通过Uids 来批量查询，也可以通过 Namespace 和 Name 来查询某个 Pod 的计费信息。Uids 不传时，Namespace 和 Name 必须同时传。
                     * @return Uids Pod的Uid，可以通过Uids 来批量查询，也可以通过 Namespace 和 Name 来查询某个 Pod 的计费信息。Uids 不传时，Namespace 和 Name 必须同时传。
                     * 
                     */
                    std::vector<std::string> GetUids() const;

                    /**
                     * 设置Pod的Uid，可以通过Uids 来批量查询，也可以通过 Namespace 和 Name 来查询某个 Pod 的计费信息。Uids 不传时，Namespace 和 Name 必须同时传。
                     * @param _uids Pod的Uid，可以通过Uids 来批量查询，也可以通过 Namespace 和 Name 来查询某个 Pod 的计费信息。Uids 不传时，Namespace 和 Name 必须同时传。
                     * 
                     */
                    void SetUids(const std::vector<std::string>& _uids);

                    /**
                     * 判断参数 Uids 是否已赋值
                     * @return Uids 是否已赋值
                     * 
                     */
                    bool UidsHasBeenSet() const;

                private:

                    /**
                     * 集群 ID。TKE 集群可通过 [DescribeClusters](https://cloud.tencent.com/document/api/457/31862) 接口返回值中的ClusterId获取。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Pod名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Pod的Uid，可以通过Uids 来批量查询，也可以通过 Namespace 和 Name 来查询某个 Pod 的计费信息。Uids 不传时，Namespace 和 Name 必须同时传。
                     */
                    std::vector<std::string> m_uids;
                    bool m_uidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPODCHARGEINFOREQUEST_H_
