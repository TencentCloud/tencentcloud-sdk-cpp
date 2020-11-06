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

#ifndef TENCENTCLOUD_ASW_V20200722_MODEL_CREATEFLOWSERVICEREQUEST_H_
#define TENCENTCLOUD_ASW_V20200722_MODEL_CREATEFLOWSERVICEREQUEST_H_

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
                * CreateFlowService请求参数结构体
                */
                class CreateFlowServiceRequest : public AbstractModel
                {
                public:
                    CreateFlowServiceRequest();
                    ~CreateFlowServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取定义文本（JSON格式）
                     * @return Definition 定义文本（JSON格式）
                     */
                    std::string GetDefinition() const;

                    /**
                     * 设置定义文本（JSON格式）
                     * @param Definition 定义文本（JSON格式）
                     */
                    void SetDefinition(const std::string& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取状态机所属服务名
                     * @return FlowServiceName 状态机所属服务名
                     */
                    std::string GetFlowServiceName() const;

                    /**
                     * 设置状态机所属服务名
                     * @param FlowServiceName 状态机所属服务名
                     */
                    void SetFlowServiceName(const std::string& _flowServiceName);

                    /**
                     * 判断参数 FlowServiceName 是否已赋值
                     * @return FlowServiceName 是否已赋值
                     */
                    bool FlowServiceNameHasBeenSet() const;

                    /**
                     * 获取是不是新的角色
                     * @return IsNewRole 是不是新的角色
                     */
                    bool GetIsNewRole() const;

                    /**
                     * 设置是不是新的角色
                     * @param IsNewRole 是不是新的角色
                     */
                    void SetIsNewRole(const bool& _isNewRole);

                    /**
                     * 判断参数 IsNewRole 是否已赋值
                     * @return IsNewRole 是否已赋值
                     */
                    bool IsNewRoleHasBeenSet() const;

                    /**
                     * 获取状态机类型（EXPRESS，STANDARD）
                     * @return Type 状态机类型（EXPRESS，STANDARD）
                     */
                    std::string GetType() const;

                    /**
                     * 设置状态机类型（EXPRESS，STANDARD）
                     * @param Type 状态机类型（EXPRESS，STANDARD）
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取状态机所属服务中文名
                     * @return FlowServiceChineseName 状态机所属服务中文名
                     */
                    std::string GetFlowServiceChineseName() const;

                    /**
                     * 设置状态机所属服务中文名
                     * @param FlowServiceChineseName 状态机所属服务中文名
                     */
                    void SetFlowServiceChineseName(const std::string& _flowServiceChineseName);

                    /**
                     * 判断参数 FlowServiceChineseName 是否已赋值
                     * @return FlowServiceChineseName 是否已赋值
                     */
                    bool FlowServiceChineseNameHasBeenSet() const;

                    /**
                     * 获取角色资源名
                     * @return RoleResource 角色资源名
                     */
                    std::string GetRoleResource() const;

                    /**
                     * 设置角色资源名
                     * @param RoleResource 角色资源名
                     */
                    void SetRoleResource(const std::string& _roleResource);

                    /**
                     * 判断参数 RoleResource 是否已赋值
                     * @return RoleResource 是否已赋值
                     */
                    bool RoleResourceHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Description 备注
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param Description 备注
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 定义文本（JSON格式）
                     */
                    std::string m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 状态机所属服务名
                     */
                    std::string m_flowServiceName;
                    bool m_flowServiceNameHasBeenSet;

                    /**
                     * 是不是新的角色
                     */
                    bool m_isNewRole;
                    bool m_isNewRoleHasBeenSet;

                    /**
                     * 状态机类型（EXPRESS，STANDARD）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 状态机所属服务中文名
                     */
                    std::string m_flowServiceChineseName;
                    bool m_flowServiceChineseNameHasBeenSet;

                    /**
                     * 角色资源名
                     */
                    std::string m_roleResource;
                    bool m_roleResourceHasBeenSet;

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

#endif // !TENCENTCLOUD_ASW_V20200722_MODEL_CREATEFLOWSERVICEREQUEST_H_
