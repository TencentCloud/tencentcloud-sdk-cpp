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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWBASEINFODETAIL_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWBASEINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 工作流基本信息（出参用，含系统生成字段与负责人展示信息）
                */
                class WorkflowBaseInfoDetail : public AbstractModel
                {
                public:
                    WorkflowBaseInfoDetail();
                    ~WorkflowBaseInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId 工作流ID
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
                     * 获取创建人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserUin 创建人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置创建人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUserUin 创建人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取工作流运行人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunUserUin 工作流运行人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunUserUin() const;

                    /**
                     * 设置工作流运行人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runUserUin 工作流运行人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunUserUin(const std::string& _runUserUin);

                    /**
                     * 判断参数 RunUserUin 是否已赋值
                     * @return RunUserUin 是否已赋值
                     * 
                     */
                    bool RunUserUinHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取工作流负责人用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUserName 工作流负责人用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUserName() const;

                    /**
                     * 设置工作流负责人用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUserName 工作流负责人用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUserName(const std::string& _ownerUserName);

                    /**
                     * 判断参数 OwnerUserName 是否已赋值
                     * @return OwnerUserName 是否已赋值
                     * 
                     */
                    bool OwnerUserNameHasBeenSet() const;

                    /**
                     * 获取工作流负责人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUserUin 工作流负责人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUserUin() const;

                    /**
                     * 设置工作流负责人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUserUin 工作流负责人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUserUin(const std::string& _ownerUserUin);

                    /**
                     * 判断参数 OwnerUserUin 是否已赋值
                     * @return OwnerUserUin 是否已赋值
                     * 
                     */
                    bool OwnerUserUinHasBeenSet() const;

                    /**
                     * 获取工作流负责人展示名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerDisplayName 工作流负责人展示名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerDisplayName() const;

                    /**
                     * 设置工作流负责人展示名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerDisplayName 工作流负责人展示名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerDisplayName(const std::string& _ownerDisplayName);

                    /**
                     * 判断参数 OwnerDisplayName 是否已赋值
                     * @return OwnerDisplayName 是否已赋值
                     * 
                     */
                    bool OwnerDisplayNameHasBeenSet() const;

                    /**
                     * 获取创建时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取更新时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 创建人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * 工作流运行人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runUserUin;
                    bool m_runUserUinHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 工作流负责人用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUserName;
                    bool m_ownerUserNameHasBeenSet;

                    /**
                     * 工作流负责人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUserUin;
                    bool m_ownerUserUinHasBeenSet;

                    /**
                     * 工作流负责人展示名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerDisplayName;
                    bool m_ownerDisplayNameHasBeenSet;

                    /**
                     * 创建时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWBASEINFODETAIL_H_
