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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERROLLOUTSEQUENCETAGSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERROLLOUTSEQUENCETAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Tag.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ModifyClusterRollOutSequenceTags请求参数结构体
                */
                class ModifyClusterRollOutSequenceTagsRequest : public AbstractModel
                {
                public:
                    ModifyClusterRollOutSequenceTagsRequest();
                    ~ModifyClusterRollOutSequenceTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID，可以从容器服务集群控制台获取（https://console.cloud.tencent.com/tke2/cluster）。
                     * @return ClusterID 集群ID，可以从容器服务集群控制台获取（https://console.cloud.tencent.com/tke2/cluster）。
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群ID，可以从容器服务集群控制台获取（https://console.cloud.tencent.com/tke2/cluster）。
                     * @param _clusterID 集群ID，可以从容器服务集群控制台获取（https://console.cloud.tencent.com/tke2/cluster）。
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取集群发布序列标签（为空时表示移除集群标签）。支持以下集群标签：
- 标签键："Env"，支持的标签值：["Test","Pre-Production","Production"]
- 标签键："Protection-Level"，支持的标签值：["Low","Medium","High"]
                     * @return Tags 集群发布序列标签（为空时表示移除集群标签）。支持以下集群标签：
- 标签键："Env"，支持的标签值：["Test","Pre-Production","Production"]
- 标签键："Protection-Level"，支持的标签值：["Low","Medium","High"]
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置集群发布序列标签（为空时表示移除集群标签）。支持以下集群标签：
- 标签键："Env"，支持的标签值：["Test","Pre-Production","Production"]
- 标签键："Protection-Level"，支持的标签值：["Low","Medium","High"]
                     * @param _tags 集群发布序列标签（为空时表示移除集群标签）。支持以下集群标签：
- 标签键："Env"，支持的标签值：["Test","Pre-Production","Production"]
- 标签键："Protection-Level"，支持的标签值：["Low","Medium","High"]
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 集群ID，可以从容器服务集群控制台获取（https://console.cloud.tencent.com/tke2/cluster）。
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 集群发布序列标签（为空时表示移除集群标签）。支持以下集群标签：
- 标签键："Env"，支持的标签值：["Test","Pre-Production","Production"]
- 标签键："Protection-Level"，支持的标签值：["Low","Medium","High"]
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERROLLOUTSEQUENCETAGSREQUEST_H_
