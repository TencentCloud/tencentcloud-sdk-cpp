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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_TAGSPECIFICATION_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_TAGSPECIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/Tag.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 标签描述列表。通过指定该参数可以同时绑定标签到相应的资源实例，当前仅支持绑定标签到云主机实例。
                */
                class TagSpecification : public AbstractModel
                {
                public:
                    TagSpecification();
                    ~TagSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签绑定的资源类型，当前支持类型：
1.cluster：集群相关接口，TagSpecification 的 ResourceType 传参为 cluster
2.machine：节点池相关接口，如：CreateNodePool, DescribeNodePools 等，TagSpecification 的 ResourceType 传参为 machine
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType 标签绑定的资源类型，当前支持类型：
1.cluster：集群相关接口，TagSpecification 的 ResourceType 传参为 cluster
2.machine：节点池相关接口，如：CreateNodePool, DescribeNodePools 等，TagSpecification 的 ResourceType 传参为 machine
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置标签绑定的资源类型，当前支持类型：
1.cluster：集群相关接口，TagSpecification 的 ResourceType 传参为 cluster
2.machine：节点池相关接口，如：CreateNodePool, DescribeNodePools 等，TagSpecification 的 ResourceType 传参为 machine
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType 标签绑定的资源类型，当前支持类型：
1.cluster：集群相关接口，TagSpecification 的 ResourceType 传参为 cluster
2.machine：节点池相关接口，如：CreateNodePool, DescribeNodePools 等，TagSpecification 的 ResourceType 传参为 machine
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取标签对列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签对列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签对列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签对列表
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 标签绑定的资源类型，当前支持类型：
1.cluster：集群相关接口，TagSpecification 的 ResourceType 传参为 cluster
2.machine：节点池相关接口，如：CreateNodePool, DescribeNodePools 等，TagSpecification 的 ResourceType 传参为 machine
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 标签对列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_TAGSPECIFICATION_H_
