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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_LINKOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_LINKOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务依赖边详情
                */
                class LinkOpsDto : public AbstractModel
                {
                public:
                    LinkOpsDto();
                    ~LinkOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取边的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 边的id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置边的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 边的id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取边的key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinkKey 边的key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLinkKey() const;

                    /**
                     * 设置边的key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _linkKey 边的key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLinkKey(const std::string& _linkKey);

                    /**
                     * 判断参数 LinkKey 是否已赋值
                     * @return LinkKey 是否已赋值
                     * 
                     */
                    bool LinkKeyHasBeenSet() const;

                    /**
                     * 获取边的源节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskFrom 边的源节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskFrom() const;

                    /**
                     * 设置边的源节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskFrom 边的源节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskFrom(const std::string& _taskFrom);

                    /**
                     * 判断参数 TaskFrom 是否已赋值
                     * @return TaskFrom 是否已赋值
                     * 
                     */
                    bool TaskFromHasBeenSet() const;

                    /**
                     * 获取边的目标节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTo 边的目标节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskTo() const;

                    /**
                     * 设置边的目标节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTo 边的目标节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTo(const std::string& _taskTo);

                    /**
                     * 判断参数 TaskTo 是否已赋值
                     * @return TaskTo 是否已赋值
                     * 
                     */
                    bool TaskToHasBeenSet() const;

                    /**
                     * 获取责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InCharge 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inCharge 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取父子任务之间的依赖关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinkDependencyType 父子任务之间的依赖关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLinkDependencyType() const;

                    /**
                     * 设置父子任务之间的依赖关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _linkDependencyType 父子任务之间的依赖关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLinkDependencyType(const std::string& _linkDependencyType);

                    /**
                     * 判断参数 LinkDependencyType 是否已赋值
                     * @return LinkDependencyType 是否已赋值
                     * 
                     */
                    bool LinkDependencyTypeHasBeenSet() const;

                    /**
                     * 获取父子任务之间依赖偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Offset 父子任务之间依赖偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置父子任务之间依赖偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offset 父子任务之间依赖偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取边的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinkType 边的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLinkType() const;

                    /**
                     * 设置边的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _linkType 边的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLinkType(const std::string& _linkType);

                    /**
                     * 判断参数 LinkType 是否已赋值
                     * @return LinkType 是否已赋值
                     * 
                     */
                    bool LinkTypeHasBeenSet() const;

                    /**
                     * 获取工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId 工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId 工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                private:

                    /**
                     * 边的id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 边的key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_linkKey;
                    bool m_linkKeyHasBeenSet;

                    /**
                     * 边的源节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskFrom;
                    bool m_taskFromHasBeenSet;

                    /**
                     * 边的目标节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskTo;
                    bool m_taskToHasBeenSet;

                    /**
                     * 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * 父子任务之间的依赖关系
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_linkDependencyType;
                    bool m_linkDependencyTypeHasBeenSet;

                    /**
                     * 父子任务之间依赖偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 边的类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_linkType;
                    bool m_linkTypeHasBeenSet;

                    /**
                     * 工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_LINKOPSDTO_H_
