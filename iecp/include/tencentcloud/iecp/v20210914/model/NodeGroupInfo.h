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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_NODEGROUPINFO_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_NODEGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/GridDetail.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * NodeGroup信息
                */
                class NodeGroupInfo : public AbstractModel
                {
                public:
                    NodeGroupInfo();
                    ~NodeGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取NodeGroup名称
                     * @return NodeGroupName NodeGroup名称
                     * 
                     */
                    std::string GetNodeGroupName() const;

                    /**
                     * 设置NodeGroup名称
                     * @param _nodeGroupName NodeGroup名称
                     * 
                     */
                    void SetNodeGroupName(const std::string& _nodeGroupName);

                    /**
                     * 判断参数 NodeGroupName 是否已赋值
                     * @return NodeGroupName 是否已赋值
                     * 
                     */
                    bool NodeGroupNameHasBeenSet() const;

                    /**
                     * 获取DeploymentGrid数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeploymentGridList DeploymentGrid数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GridDetail> GetDeploymentGridList() const;

                    /**
                     * 设置DeploymentGrid数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deploymentGridList DeploymentGrid数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeploymentGridList(const std::vector<GridDetail>& _deploymentGridList);

                    /**
                     * 判断参数 DeploymentGridList 是否已赋值
                     * @return DeploymentGridList 是否已赋值
                     * 
                     */
                    bool DeploymentGridListHasBeenSet() const;

                    /**
                     * 获取StatefulSetGrid数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatefulSetGridList StatefulSetGrid数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GridDetail> GetStatefulSetGridList() const;

                    /**
                     * 设置StatefulSetGrid数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statefulSetGridList StatefulSetGrid数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatefulSetGridList(const std::vector<GridDetail>& _statefulSetGridList);

                    /**
                     * 判断参数 StatefulSetGridList 是否已赋值
                     * @return StatefulSetGridList 是否已赋值
                     * 
                     */
                    bool StatefulSetGridListHasBeenSet() const;

                    /**
                     * 获取是否平台保护
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protect 是否平台保护
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetProtect() const;

                    /**
                     * 设置是否平台保护
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protect 是否平台保护
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtect(const bool& _protect);

                    /**
                     * 判断参数 Protect 是否已赋值
                     * @return Protect 是否已赋值
                     * 
                     */
                    bool ProtectHasBeenSet() const;

                private:

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * NodeGroup名称
                     */
                    std::string m_nodeGroupName;
                    bool m_nodeGroupNameHasBeenSet;

                    /**
                     * DeploymentGrid数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GridDetail> m_deploymentGridList;
                    bool m_deploymentGridListHasBeenSet;

                    /**
                     * StatefulSetGrid数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GridDetail> m_statefulSetGridList;
                    bool m_statefulSetGridListHasBeenSet;

                    /**
                     * 是否平台保护
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_protect;
                    bool m_protectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_NODEGROUPINFO_H_
