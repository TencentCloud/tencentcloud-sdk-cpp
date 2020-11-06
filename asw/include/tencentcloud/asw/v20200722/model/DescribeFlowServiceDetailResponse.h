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

#ifndef TENCENTCLOUD_ASW_V20200722_MODEL_DESCRIBEFLOWSERVICEDETAILRESPONSE_H_
#define TENCENTCLOUD_ASW_V20200722_MODEL_DESCRIBEFLOWSERVICEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeFlowServiceDetail返回参数结构体
                */
                class DescribeFlowServiceDetailResponse : public AbstractModel
                {
                public:
                    DescribeFlowServiceDetailResponse();
                    ~DescribeFlowServiceDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取状态机所属服务名
                     * @return FlowServiceName 状态机所属服务名
                     */
                    std::string GetFlowServiceName() const;

                    /**
                     * 判断参数 FlowServiceName 是否已赋值
                     * @return FlowServiceName 是否已赋值
                     */
                    bool FlowServiceNameHasBeenSet() const;

                    /**
                     * 获取状态机状态
                     * @return Status 状态机状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取定义文本（JSON格式）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Definition 定义文本（JSON格式）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDefinition() const;

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取角色资源名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleResource 角色资源名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRoleResource() const;

                    /**
                     * 判断参数 RoleResource 是否已赋值
                     * @return RoleResource 是否已赋值
                     */
                    bool RoleResourceHasBeenSet() const;

                    /**
                     * 获取状态机的类型，可以为 （EXPRESS/STANDARD）
                     * @return Type 状态机的类型，可以为 （EXPRESS/STANDARD）
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取生成时间
                     * @return CreateDate 生成时间
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取状态机所属服务中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowServiceChineseName 状态机所属服务中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFlowServiceChineseName() const;

                    /**
                     * 判断参数 FlowServiceChineseName 是否已赋值
                     * @return FlowServiceChineseName 是否已赋值
                     */
                    bool FlowServiceChineseNameHasBeenSet() const;

                private:

                    /**
                     * 状态机所属服务名
                     */
                    std::string m_flowServiceName;
                    bool m_flowServiceNameHasBeenSet;

                    /**
                     * 状态机状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 定义文本（JSON格式）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 角色资源名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleResource;
                    bool m_roleResourceHasBeenSet;

                    /**
                     * 状态机的类型，可以为 （EXPRESS/STANDARD）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 生成时间
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 状态机所属服务中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowServiceChineseName;
                    bool m_flowServiceChineseNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASW_V20200722_MODEL_DESCRIBEFLOWSERVICEDETAILRESPONSE_H_
