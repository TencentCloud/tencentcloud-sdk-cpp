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

#ifndef TENCENTCLOUD_ASW_V20200722_MODEL_STATEMACHINE_H_
#define TENCENTCLOUD_ASW_V20200722_MODEL_STATEMACHINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asw
    {
        namespace V20200722
        {
            namespace Model
            {
                /**
                * 状态机
                */
                class StateMachine : public AbstractModel
                {
                public:
                    StateMachine();
                    ~StateMachine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态机资源
                     * @return FlowServiceResource 状态机资源
                     * 
                     */
                    std::string GetFlowServiceResource() const;

                    /**
                     * 设置状态机资源
                     * @param _flowServiceResource 状态机资源
                     * 
                     */
                    void SetFlowServiceResource(const std::string& _flowServiceResource);

                    /**
                     * 判断参数 FlowServiceResource 是否已赋值
                     * @return FlowServiceResource 是否已赋值
                     * 
                     */
                    bool FlowServiceResourceHasBeenSet() const;

                    /**
                     * 获取状态机类型。EXPRESS，STANDARD
                     * @return Type 状态机类型。EXPRESS，STANDARD
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置状态机类型。EXPRESS，STANDARD
                     * @param _type 状态机类型。EXPRESS，STANDARD
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取状态机名称
                     * @return FlowServiceName 状态机名称
                     * 
                     */
                    std::string GetFlowServiceName() const;

                    /**
                     * 设置状态机名称
                     * @param _flowServiceName 状态机名称
                     * 
                     */
                    void SetFlowServiceName(const std::string& _flowServiceName);

                    /**
                     * 判断参数 FlowServiceName 是否已赋值
                     * @return FlowServiceName 是否已赋值
                     * 
                     */
                    bool FlowServiceNameHasBeenSet() const;

                    /**
                     * 获取状态机中文名
                     * @return FlowServiceChineseName 状态机中文名
                     * 
                     */
                    std::string GetFlowServiceChineseName() const;

                    /**
                     * 设置状态机中文名
                     * @param _flowServiceChineseName 状态机中文名
                     * 
                     */
                    void SetFlowServiceChineseName(const std::string& _flowServiceChineseName);

                    /**
                     * 判断参数 FlowServiceChineseName 是否已赋值
                     * @return FlowServiceChineseName 是否已赋值
                     * 
                     */
                    bool FlowServiceChineseNameHasBeenSet() const;

                    /**
                     * 获取创建时间。timestamp
                     * @return CreateDate 创建时间。timestamp
                     * 
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置创建时间。timestamp
                     * @param _createDate 创建时间。timestamp
                     * 
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     * 
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取修改时间。timestamp
                     * @return ModifyDate 修改时间。timestamp
                     * 
                     */
                    std::string GetModifyDate() const;

                    /**
                     * 设置修改时间。timestamp
                     * @param _modifyDate 修改时间。timestamp
                     * 
                     */
                    void SetModifyDate(const std::string& _modifyDate);

                    /**
                     * 判断参数 ModifyDate 是否已赋值
                     * @return ModifyDate 是否已赋值
                     * 
                     */
                    bool ModifyDateHasBeenSet() const;

                    /**
                     * 获取状态机状态
                     * @return Status 状态机状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态机状态
                     * @param _status 状态机状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建者的subAccountUin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator 创建者的subAccountUin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建者的subAccountUin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator 创建者的subAccountUin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取修改者的subAccountUin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Modifier 修改者的subAccountUin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifier() const;

                    /**
                     * 设置修改者的subAccountUin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifier 修改者的subAccountUin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifier(const std::string& _modifier);

                    /**
                     * 判断参数 Modifier 是否已赋值
                     * @return Modifier 是否已赋值
                     * 
                     */
                    bool ModifierHasBeenSet() const;

                    /**
                     * 获取状态机id
                     * @return FlowServiceId 状态机id
                     * 
                     */
                    std::string GetFlowServiceId() const;

                    /**
                     * 设置状态机id
                     * @param _flowServiceId 状态机id
                     * 
                     */
                    void SetFlowServiceId(const std::string& _flowServiceId);

                    /**
                     * 判断参数 FlowServiceId 是否已赋值
                     * @return FlowServiceId 是否已赋值
                     * 
                     */
                    bool FlowServiceIdHasBeenSet() const;

                    /**
                     * 获取模板id
                     * @return TemplateId 模板id
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板id
                     * @param _templateId 模板id
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Description 备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param _description 备注
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 状态机资源
                     */
                    std::string m_flowServiceResource;
                    bool m_flowServiceResourceHasBeenSet;

                    /**
                     * 状态机类型。EXPRESS，STANDARD
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 状态机名称
                     */
                    std::string m_flowServiceName;
                    bool m_flowServiceNameHasBeenSet;

                    /**
                     * 状态机中文名
                     */
                    std::string m_flowServiceChineseName;
                    bool m_flowServiceChineseNameHasBeenSet;

                    /**
                     * 创建时间。timestamp
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * 修改时间。timestamp
                     */
                    std::string m_modifyDate;
                    bool m_modifyDateHasBeenSet;

                    /**
                     * 状态机状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建者的subAccountUin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 修改者的subAccountUin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifier;
                    bool m_modifierHasBeenSet;

                    /**
                     * 状态机id
                     */
                    std::string m_flowServiceId;
                    bool m_flowServiceIdHasBeenSet;

                    /**
                     * 模板id
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASW_V20200722_MODEL_STATEMACHINE_H_
