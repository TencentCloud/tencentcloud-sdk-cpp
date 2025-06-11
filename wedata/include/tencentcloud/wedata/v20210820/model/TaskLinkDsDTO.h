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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLINKDSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLINKDSDTO_H_

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
                * Task Link 信息
                */
                class TaskLinkDsDTO : public AbstractModel
                {
                public:
                    TaskLinkDsDTO();
                    ~TaskLinkDsDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TaskTo信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTo TaskTo信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskTo() const;

                    /**
                     * 设置TaskTo信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTo TaskTo信息
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
                     * 获取TaskFrom信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskFrom TaskFrom信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskFrom() const;

                    /**
                     * 设置TaskFrom信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskFrom TaskFrom信息
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
                     * 获取LinkType信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinkType LinkType信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLinkType() const;

                    /**
                     * 设置LinkType信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _linkType LinkType信息
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
                     * 获取key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinkKey key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLinkKey() const;

                    /**
                     * 设置key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _linkKey key
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
                     * 获取LinkId信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id LinkId信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置LinkId信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id LinkId信息
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
                    int64_t GetOffset() const;

                    /**
                     * 设置父子任务之间依赖偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offset 父子任务之间依赖偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

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

                    /**
                     * 获取实体任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealFromTaskId 实体任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRealFromTaskId() const;

                    /**
                     * 设置实体任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realFromTaskId 实体任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRealFromTaskId(const std::string& _realFromTaskId);

                    /**
                     * 判断参数 RealFromTaskId 是否已赋值
                     * @return RealFromTaskId 是否已赋值
                     * 
                     */
                    bool RealFromTaskIdHasBeenSet() const;

                    /**
                     * 获取实体任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealFromTaskName 实体任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRealFromTaskName() const;

                    /**
                     * 设置实体任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realFromTaskName 实体任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRealFromTaskName(const std::string& _realFromTaskName);

                    /**
                     * 判断参数 RealFromTaskName 是否已赋值
                     * @return RealFromTaskName 是否已赋值
                     * 
                     */
                    bool RealFromTaskNameHasBeenSet() const;

                    /**
                     * 获取实体任务所属工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealFromWorkflowId 实体任务所属工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRealFromWorkflowId() const;

                    /**
                     * 设置实体任务所属工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realFromWorkflowId 实体任务所属工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRealFromWorkflowId(const std::string& _realFromWorkflowId);

                    /**
                     * 判断参数 RealFromWorkflowId 是否已赋值
                     * @return RealFromWorkflowId 是否已赋值
                     * 
                     */
                    bool RealFromWorkflowIdHasBeenSet() const;

                    /**
                     * 获取实体任务所属工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealFromWorkflowName 实体任务所属工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRealFromWorkflowName() const;

                    /**
                     * 设置实体任务所属工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realFromWorkflowName 实体任务所属工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRealFromWorkflowName(const std::string& _realFromWorkflowName);

                    /**
                     * 判断参数 RealFromWorkflowName 是否已赋值
                     * @return RealFromWorkflowName 是否已赋值
                     * 
                     */
                    bool RealFromWorkflowNameHasBeenSet() const;

                    /**
                     * 获取实体任务所属项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealProjectId 实体任务所属项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRealProjectId() const;

                    /**
                     * 设置实体任务所属项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realProjectId 实体任务所属项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRealProjectId(const std::string& _realProjectId);

                    /**
                     * 判断参数 RealProjectId 是否已赋值
                     * @return RealProjectId 是否已赋值
                     * 
                     */
                    bool RealProjectIdHasBeenSet() const;

                    /**
                     * 获取实体任务所属项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealProjectIdent 实体任务所属项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRealProjectIdent() const;

                    /**
                     * 设置实体任务所属项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realProjectIdent 实体任务所属项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRealProjectIdent(const std::string& _realProjectIdent);

                    /**
                     * 判断参数 RealProjectIdent 是否已赋值
                     * @return RealProjectIdent 是否已赋值
                     * 
                     */
                    bool RealProjectIdentHasBeenSet() const;

                    /**
                     * 获取实体任务所属项目名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealProjectName 实体任务所属项目名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRealProjectName() const;

                    /**
                     * 设置实体任务所属项目名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realProjectName 实体任务所属项目名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRealProjectName(const std::string& _realProjectName);

                    /**
                     * 判断参数 RealProjectName 是否已赋值
                     * @return RealProjectName 是否已赋值
                     * 
                     */
                    bool RealProjectNameHasBeenSet() const;

                    /**
                     * 获取曲线类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurveType 曲线类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCurveType() const;

                    /**
                     * 设置曲线类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _curveType 曲线类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurveType(const std::string& _curveType);

                    /**
                     * 判断参数 CurveType 是否已赋值
                     * @return CurveType 是否已赋值
                     * 
                     */
                    bool CurveTypeHasBeenSet() const;

                private:

                    /**
                     * TaskTo信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskTo;
                    bool m_taskToHasBeenSet;

                    /**
                     * TaskFrom信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskFrom;
                    bool m_taskFromHasBeenSet;

                    /**
                     * LinkType信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_linkType;
                    bool m_linkTypeHasBeenSet;

                    /**
                     * key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_linkKey;
                    bool m_linkKeyHasBeenSet;

                    /**
                     * LinkId信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

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
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 实体任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realFromTaskId;
                    bool m_realFromTaskIdHasBeenSet;

                    /**
                     * 实体任务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realFromTaskName;
                    bool m_realFromTaskNameHasBeenSet;

                    /**
                     * 实体任务所属工作流
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realFromWorkflowId;
                    bool m_realFromWorkflowIdHasBeenSet;

                    /**
                     * 实体任务所属工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realFromWorkflowName;
                    bool m_realFromWorkflowNameHasBeenSet;

                    /**
                     * 实体任务所属项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realProjectId;
                    bool m_realProjectIdHasBeenSet;

                    /**
                     * 实体任务所属项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realProjectIdent;
                    bool m_realProjectIdentHasBeenSet;

                    /**
                     * 实体任务所属项目名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realProjectName;
                    bool m_realProjectNameHasBeenSet;

                    /**
                     * 曲线类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_curveType;
                    bool m_curveTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLINKDSDTO_H_
