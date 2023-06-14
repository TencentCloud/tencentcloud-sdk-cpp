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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_APPLICATIONINFORMATION_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_APPLICATIONINFORMATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 应用信息列表。
                */
                class ApplicationInformation : public AbstractModel
                {
                public:
                    ApplicationInformation();
                    ~ApplicationInformation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取应用展示名称，长度限制：64个字符。 默认与应用名字相同。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName 应用展示名称，长度限制：64个字符。 默认与应用名字相同。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置应用展示名称，长度限制：64个字符。 默认与应用名字相同。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayName 应用展示名称，长度限制：64个字符。 默认与应用名字相同。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取应用创建时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedDate 应用创建时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedDate() const;

                    /**
                     * 设置应用创建时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdDate 应用创建时间，符合 ISO8601 标准。
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

                    /**
                     * 获取上次更新时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifiedDate 上次更新时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastModifiedDate() const;

                    /**
                     * 设置上次更新时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastModifiedDate 上次更新时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastModifiedDate(const std::string& _lastModifiedDate);

                    /**
                     * 判断参数 LastModifiedDate 是否已赋值
                     * @return LastModifiedDate 是否已赋值
                     * 
                     */
                    bool LastModifiedDateHasBeenSet() const;

                    /**
                     * 获取应用状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppStatus 应用状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAppStatus() const;

                    /**
                     * 设置应用状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appStatus 应用状态。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取应用图标。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Icon 应用图标。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置应用图标。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _icon 应用图标。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIcon(const std::string& _icon);

                    /**
                     * 判断参数 Icon 是否已赋值
                     * @return Icon 是否已赋值
                     * 
                     */
                    bool IconHasBeenSet() const;

                    /**
                     * 获取应用类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationType 应用类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置应用类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationType 应用类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取客户端id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientId 客户端id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置客户端id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientId 客户端id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                private:

                    /**
                     * 应用ID，是应用的全局唯一标识。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 应用展示名称，长度限制：64个字符。 默认与应用名字相同。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 应用创建时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdDate;
                    bool m_createdDateHasBeenSet;

                    /**
                     * 上次更新时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModifiedDate;
                    bool m_lastModifiedDateHasBeenSet;

                    /**
                     * 应用状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_appStatus;
                    bool m_appStatusHasBeenSet;

                    /**
                     * 应用图标。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * 应用类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 客户端id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_APPLICATIONINFORMATION_H_
