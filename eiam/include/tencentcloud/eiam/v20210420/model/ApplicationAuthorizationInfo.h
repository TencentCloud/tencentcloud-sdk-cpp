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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_APPLICATIONAUTHORIZATIONINFO_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_APPLICATIONAUTHORIZATIONINFO_H_

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
                * 应用信息列表。
                */
                class ApplicationAuthorizationInfo : public AbstractModel
                {
                public:
                    ApplicationAuthorizationInfo();
                    ~ApplicationAuthorizationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户在被授权应用下对应的账号列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationAccounts 用户在被授权应用下对应的账号列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetApplicationAccounts() const;

                    /**
                     * 设置用户在被授权应用下对应的账号列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationAccounts 用户在被授权应用下对应的账号列表
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
                     * 获取应用ID，是应用的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 应用ID，是应用的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID，是应用的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationId 应用ID，是应用的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取展示用户所在的用户组、机构节点拥有该应用的访问权限的ID信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InheritedForm 展示用户所在的用户组、机构节点拥有该应用的访问权限的ID信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InheritedForm GetInheritedForm() const;

                    /**
                     * 设置展示用户所在的用户组、机构节点拥有该应用的访问权限的ID信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inheritedForm 展示用户所在的用户组、机构节点拥有该应用的访问权限的ID信息列表。
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
                     * 获取应用名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationName 应用名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationName 应用名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取应用创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedDate 应用创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedDate() const;

                    /**
                     * 设置应用创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdDate 应用创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedDate(const std::string& _createdDate);

                    /**
                     * 判断参数 CreatedDate 是否已赋值
                     * @return CreatedDate 是否已赋值
                     * 
                     */
                    bool CreatedDateHasBeenSet() const;

                private:

                    /**
                     * 用户在被授权应用下对应的账号列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_applicationAccounts;
                    bool m_applicationAccountsHasBeenSet;

                    /**
                     * 应用ID，是应用的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 展示用户所在的用户组、机构节点拥有该应用的访问权限的ID信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InheritedForm m_inheritedForm;
                    bool m_inheritedFormHasBeenSet;

                    /**
                     * 应用名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 应用创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdDate;
                    bool m_createdDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_APPLICATIONAUTHORIZATIONINFO_H_
