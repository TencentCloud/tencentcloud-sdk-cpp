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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ModifyApplication请求参数结构体
                */
                class ModifyApplicationRequest : public AbstractModel
                {
                public:
                    ModifyApplicationRequest();
                    ~ModifyApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID，是应用的全局唯一标识。
                     * @return ApplicationId 应用ID，是应用的全局唯一标识。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID，是应用的全局唯一标识。
                     * @param _applicationId 应用ID，是应用的全局唯一标识。
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
                     * 获取安全级别。
                     * @return SecureLevel 安全级别。
                     * 
                     */
                    std::string GetSecureLevel() const;

                    /**
                     * 设置安全级别。
                     * @param _secureLevel 安全级别。
                     * 
                     */
                    void SetSecureLevel(const std::string& _secureLevel);

                    /**
                     * 判断参数 SecureLevel 是否已赋值
                     * @return SecureLevel 是否已赋值
                     * 
                     */
                    bool SecureLevelHasBeenSet() const;

                    /**
                     * 获取应用展示名称，长度限制：32个字符。 默认与应用名字相同。
                     * @return DisplayName 应用展示名称，长度限制：32个字符。 默认与应用名字相同。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置应用展示名称，长度限制：32个字符。 默认与应用名字相同。
                     * @param _displayName 应用展示名称，长度限制：32个字符。 默认与应用名字相同。
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取应用状态，true表示启用，false表示禁用。
                     * @return AppStatus 应用状态，true表示启用，false表示禁用。
                     * 
                     */
                    bool GetAppStatus() const;

                    /**
                     * 设置应用状态，true表示启用，false表示禁用。
                     * @param _appStatus 应用状态，true表示启用，false表示禁用。
                     * 
                     */
                    void SetAppStatus(const bool& _appStatus);

                    /**
                     * 判断参数 AppStatus 是否已赋值
                     * @return AppStatus 是否已赋值
                     * 
                     */
                    bool AppStatusHasBeenSet() const;

                    /**
                     * 获取应用图标图片访问地址。
                     * @return IconUrl 应用图标图片访问地址。
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置应用图标图片访问地址。
                     * @param _iconUrl 应用图标图片访问地址。
                     * 
                     */
                    void SetIconUrl(const std::string& _iconUrl);

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

                    /**
                     * 获取描述。长度不超过128。
                     * @return Description 描述。长度不超过128。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述。长度不超过128。
                     * @param _description 描述。长度不超过128。
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
                     * 应用ID，是应用的全局唯一标识。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 安全级别。
                     */
                    std::string m_secureLevel;
                    bool m_secureLevelHasBeenSet;

                    /**
                     * 应用展示名称，长度限制：32个字符。 默认与应用名字相同。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 应用状态，true表示启用，false表示禁用。
                     */
                    bool m_appStatus;
                    bool m_appStatusHasBeenSet;

                    /**
                     * 应用图标图片访问地址。
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * 描述。长度不超过128。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYAPPLICATIONREQUEST_H_
