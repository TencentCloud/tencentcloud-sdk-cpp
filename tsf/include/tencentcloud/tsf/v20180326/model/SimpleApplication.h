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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_SIMPLEAPPLICATION_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_SIMPLEAPPLICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 简单应用
                */
                class SimpleApplication : public AbstractModel
                {
                public:
                    SimpleApplication();
                    ~SimpleApplication() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationType 应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationType 应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取应用微服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MicroserviceType 应用微服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置应用微服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MicroserviceType 应用微服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMicroserviceType(const std::string& _microserviceType);

                    /**
                     * 判断参数 MicroserviceType 是否已赋值
                     * @return MicroserviceType 是否已赋值
                     */
                    bool MicroserviceTypeHasBeenSet() const;

                    /**
                     * 获取ApplicationDesc
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationDesc ApplicationDesc
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplicationDesc() const;

                    /**
                     * 设置ApplicationDesc
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationDesc ApplicationDesc
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationDesc(const std::string& _applicationDesc);

                    /**
                     * 判断参数 ApplicationDesc 是否已赋值
                     * @return ApplicationDesc 是否已赋值
                     */
                    bool ApplicationDescHasBeenSet() const;

                    /**
                     * 获取ProgLang
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProgLang ProgLang
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProgLang() const;

                    /**
                     * 设置ProgLang
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProgLang ProgLang
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProgLang(const std::string& _progLang);

                    /**
                     * 判断参数 ProgLang 是否已赋值
                     * @return ProgLang 是否已赋值
                     */
                    bool ProgLangHasBeenSet() const;

                    /**
                     * 获取ApplicationResourceType
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationResourceType ApplicationResourceType
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplicationResourceType() const;

                    /**
                     * 设置ApplicationResourceType
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationResourceType ApplicationResourceType
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationResourceType(const std::string& _applicationResourceType);

                    /**
                     * 判断参数 ApplicationResourceType 是否已赋值
                     * @return ApplicationResourceType 是否已赋值
                     */
                    bool ApplicationResourceTypeHasBeenSet() const;

                    /**
                     * 获取CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取UpdateTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime UpdateTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置UpdateTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime UpdateTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 应用微服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_microserviceType;
                    bool m_microserviceTypeHasBeenSet;

                    /**
                     * ApplicationDesc
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationDesc;
                    bool m_applicationDescHasBeenSet;

                    /**
                     * ProgLang
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_progLang;
                    bool m_progLangHasBeenSet;

                    /**
                     * ApplicationResourceType
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationResourceType;
                    bool m_applicationResourceTypeHasBeenSet;

                    /**
                     * CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * UpdateTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_SIMPLEAPPLICATION_H_
