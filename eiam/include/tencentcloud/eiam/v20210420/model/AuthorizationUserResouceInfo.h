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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_AUTHORIZATIONUSERRESOUCEINFO_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_AUTHORIZATIONUSERRESOUCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/InheritedForm.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * 返回符合条件的用户数据列表
                */
                class AuthorizationUserResouceInfo : public AbstractModel
                {
                public:
                    AuthorizationUserResouceInfo();
                    ~AuthorizationUserResouceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType 资源类型
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
                     * 获取授权资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource 授权资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置授权资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resource 授权资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取继承关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InheritedForm 继承关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InheritedForm GetInheritedForm() const;

                    /**
                     * 设置继承关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inheritedForm 继承关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInheritedForm(const InheritedForm& _inheritedForm);

                    /**
                     * 判断参数 InheritedForm 是否已赋值
                     * @return InheritedForm 是否已赋值
                     * 
                     */
                    bool InheritedFormHasBeenSet() const;

                    /**
                     * 获取应用账户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationAccounts 应用账户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetApplicationAccounts() const;

                    /**
                     * 设置应用账户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationAccounts 应用账户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationAccounts(const std::vector<std::string>& _applicationAccounts);

                    /**
                     * 判断参数 ApplicationAccounts 是否已赋值
                     * @return ApplicationAccounts 是否已赋值
                     * 
                     */
                    bool ApplicationAccountsHasBeenSet() const;

                    /**
                     * 获取资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceName 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceName 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                private:

                    /**
                     * 资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 授权资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 继承关系
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InheritedForm m_inheritedForm;
                    bool m_inheritedFormHasBeenSet;

                    /**
                     * 应用账户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_applicationAccounts;
                    bool m_applicationAccountsHasBeenSet;

                    /**
                     * 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_AUTHORIZATIONUSERRESOUCEINFO_H_
