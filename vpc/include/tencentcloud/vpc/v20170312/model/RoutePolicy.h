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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ROUTEPOLICY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ROUTEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/RoutePolicyEntry.h>
#include <tencentcloud/vpc/v20170312/model/RoutePolicyAssociation.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 路由接收策略。当云联网或其他业务添加路由到VPC自定义路由表时，可以丢弃或启用，禁用相应的路由条目。
                */
                class RoutePolicy : public AbstractModel
                {
                public:
                    RoutePolicy();
                    ~RoutePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取路由策略唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoutePolicyId 路由策略唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoutePolicyId() const;

                    /**
                     * 设置路由策略唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _routePolicyId 路由策略唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoutePolicyId(const std::string& _routePolicyId);

                    /**
                     * 判断参数 RoutePolicyId 是否已赋值
                     * @return RoutePolicyId 是否已赋值
                     * 
                     */
                    bool RoutePolicyIdHasBeenSet() const;

                    /**
                     * 获取路由策略名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoutePolicyName 路由策略名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoutePolicyName() const;

                    /**
                     * 设置路由策略名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _routePolicyName 路由策略名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoutePolicyName(const std::string& _routePolicyName);

                    /**
                     * 判断参数 RoutePolicyName 是否已赋值
                     * @return RoutePolicyName 是否已赋值
                     * 
                     */
                    bool RoutePolicyNameHasBeenSet() const;

                    /**
                     * 获取路由策略描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoutePolicyDescription 路由策略描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoutePolicyDescription() const;

                    /**
                     * 设置路由策略描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _routePolicyDescription 路由策略描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoutePolicyDescription(const std::string& _routePolicyDescription);

                    /**
                     * 判断参数 RoutePolicyDescription 是否已赋值
                     * @return RoutePolicyDescription 是否已赋值
                     * 
                     */
                    bool RoutePolicyDescriptionHasBeenSet() const;

                    /**
                     * 获取路由策略规则列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoutePolicyEntrySet 路由策略规则列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RoutePolicyEntry> GetRoutePolicyEntrySet() const;

                    /**
                     * 设置路由策略规则列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _routePolicyEntrySet 路由策略规则列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoutePolicyEntrySet(const std::vector<RoutePolicyEntry>& _routePolicyEntrySet);

                    /**
                     * 判断参数 RoutePolicyEntrySet 是否已赋值
                     * @return RoutePolicyEntrySet 是否已赋值
                     * 
                     */
                    bool RoutePolicyEntrySetHasBeenSet() const;

                    /**
                     * 获取路由策略绑定。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoutePolicyAssociationSet 路由策略绑定。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RoutePolicyAssociation> GetRoutePolicyAssociationSet() const;

                    /**
                     * 设置路由策略绑定。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _routePolicyAssociationSet 路由策略绑定。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoutePolicyAssociationSet(const std::vector<RoutePolicyAssociation>& _routePolicyAssociationSet);

                    /**
                     * 判断参数 RoutePolicyAssociationSet 是否已赋值
                     * @return RoutePolicyAssociationSet 是否已赋值
                     * 
                     */
                    bool RoutePolicyAssociationSetHasBeenSet() const;

                    /**
                     * 获取创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取标签键值对。
                     * @return TagSet 标签键值对。
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对。
                     * @param _tagSet 标签键值对。
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * 路由策略唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_routePolicyId;
                    bool m_routePolicyIdHasBeenSet;

                    /**
                     * 路由策略名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_routePolicyName;
                    bool m_routePolicyNameHasBeenSet;

                    /**
                     * 路由策略描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_routePolicyDescription;
                    bool m_routePolicyDescriptionHasBeenSet;

                    /**
                     * 路由策略规则列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RoutePolicyEntry> m_routePolicyEntrySet;
                    bool m_routePolicyEntrySetHasBeenSet;

                    /**
                     * 路由策略绑定。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RoutePolicyAssociation> m_routePolicyAssociationSet;
                    bool m_routePolicyAssociationSetHasBeenSet;

                    /**
                     * 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 标签键值对。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ROUTEPOLICY_H_
