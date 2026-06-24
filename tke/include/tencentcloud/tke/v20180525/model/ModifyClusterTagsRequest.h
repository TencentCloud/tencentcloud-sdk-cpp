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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERTAGSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERTAGSREQUEST_H_

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
                * ModifyClusterTags请求参数结构体
                */
                class ModifyClusterTagsRequest : public AbstractModel
                {
                public:
                    ModifyClusterTagsRequest();
                    ~ModifyClusterTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
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
                     * 获取<p>集群标签:<br>[{&quot;TagKey&quot;:&quot;env&quot;,&quot;TagValue&quot;:&quot;dev&quot;}]}]</p>
                     * @return Tags <p>集群标签:<br>[{&quot;TagKey&quot;:&quot;env&quot;,&quot;TagValue&quot;:&quot;dev&quot;}]}]</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>集群标签:<br>[{&quot;TagKey&quot;:&quot;env&quot;,&quot;TagValue&quot;:&quot;dev&quot;}]}]</p>
                     * @param _tags <p>集群标签:<br>[{&quot;TagKey&quot;:&quot;env&quot;,&quot;TagValue&quot;:&quot;dev&quot;}]}]</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>是否同步集群内子资源标签</p>
                     * @return SyncSubresource <p>是否同步集群内子资源标签</p>
                     * 
                     */
                    bool GetSyncSubresource() const;

                    /**
                     * 设置<p>是否同步集群内子资源标签</p>
                     * @param _syncSubresource <p>是否同步集群内子资源标签</p>
                     * 
                     */
                    void SetSyncSubresource(const bool& _syncSubresource);

                    /**
                     * 判断参数 SyncSubresource 是否已赋值
                     * @return SyncSubresource 是否已赋值
                     * 
                     */
                    bool SyncSubresourceHasBeenSet() const;

                    /**
                     * 获取<p>是否同步节点池标签</p>
                     * @return SyncNodePoolTags <p>是否同步节点池标签</p>
                     * 
                     */
                    bool GetSyncNodePoolTags() const;

                    /**
                     * 设置<p>是否同步节点池标签</p>
                     * @param _syncNodePoolTags <p>是否同步节点池标签</p>
                     * 
                     */
                    void SetSyncNodePoolTags(const bool& _syncNodePoolTags);

                    /**
                     * 判断参数 SyncNodePoolTags 是否已赋值
                     * @return SyncNodePoolTags 是否已赋值
                     * 
                     */
                    bool SyncNodePoolTagsHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群标签:<br>[{&quot;TagKey&quot;:&quot;env&quot;,&quot;TagValue&quot;:&quot;dev&quot;}]}]</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否同步集群内子资源标签</p>
                     */
                    bool m_syncSubresource;
                    bool m_syncSubresourceHasBeenSet;

                    /**
                     * <p>是否同步节点池标签</p>
                     */
                    bool m_syncNodePoolTags;
                    bool m_syncNodePoolTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERTAGSREQUEST_H_
