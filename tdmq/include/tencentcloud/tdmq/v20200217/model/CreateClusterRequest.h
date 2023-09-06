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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATECLUSTERREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateCluster请求参数结构体
                */
                class CreateClusterRequest : public AbstractModel
                {
                public:
                    CreateClusterRequest();
                    ~CreateClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群名称，不支持中字以及除了短线和下划线外的特殊字符且不超过64个字符。
                     * @return ClusterName 集群名称，不支持中字以及除了短线和下划线外的特殊字符且不超过64个字符。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称，不支持中字以及除了短线和下划线外的特殊字符且不超过64个字符。
                     * @param _clusterName 集群名称，不支持中字以及除了短线和下划线外的特殊字符且不超过64个字符。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取用户专享物理集群ID，如果不传，则默认在公共集群上创建用户集群资源。
                     * @return BindClusterId 用户专享物理集群ID，如果不传，则默认在公共集群上创建用户集群资源。
                     * 
                     */
                    uint64_t GetBindClusterId() const;

                    /**
                     * 设置用户专享物理集群ID，如果不传，则默认在公共集群上创建用户集群资源。
                     * @param _bindClusterId 用户专享物理集群ID，如果不传，则默认在公共集群上创建用户集群资源。
                     * 
                     */
                    void SetBindClusterId(const uint64_t& _bindClusterId);

                    /**
                     * 判断参数 BindClusterId 是否已赋值
                     * @return BindClusterId 是否已赋值
                     * 
                     */
                    bool BindClusterIdHasBeenSet() const;

                    /**
                     * 获取说明，128个字符以内。
                     * @return Remark 说明，128个字符以内。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明，128个字符以内。
                     * @param _remark 说明，128个字符以内。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取集群的标签列表(已废弃)
                     * @return Tags 集群的标签列表(已废弃)
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置集群的标签列表(已废弃)
                     * @param _tags 集群的标签列表(已废弃)
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
                     * 获取是否开启公网访问，不填时默认开启
                     * @return PublicAccessEnabled 是否开启公网访问，不填时默认开启
                     * 
                     */
                    bool GetPublicAccessEnabled() const;

                    /**
                     * 设置是否开启公网访问，不填时默认开启
                     * @param _publicAccessEnabled 是否开启公网访问，不填时默认开启
                     * 
                     */
                    void SetPublicAccessEnabled(const bool& _publicAccessEnabled);

                    /**
                     * 判断参数 PublicAccessEnabled 是否已赋值
                     * @return PublicAccessEnabled 是否已赋值
                     * 
                     */
                    bool PublicAccessEnabledHasBeenSet() const;

                private:

                    /**
                     * 集群名称，不支持中字以及除了短线和下划线外的特殊字符且不超过64个字符。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 用户专享物理集群ID，如果不传，则默认在公共集群上创建用户集群资源。
                     */
                    uint64_t m_bindClusterId;
                    bool m_bindClusterIdHasBeenSet;

                    /**
                     * 说明，128个字符以内。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 集群的标签列表(已废弃)
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否开启公网访问，不填时默认开启
                     */
                    bool m_publicAccessEnabled;
                    bool m_publicAccessEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATECLUSTERREQUEST_H_
