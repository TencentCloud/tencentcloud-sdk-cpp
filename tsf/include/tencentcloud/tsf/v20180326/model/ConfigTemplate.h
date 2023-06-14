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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CONFIGTEMPLATE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CONFIGTEMPLATE_H_

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
                * 配置模板对象
                */
                class ConfigTemplate : public AbstractModel
                {
                public:
                    ConfigTemplate();
                    ~ConfigTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigTemplateId 配置模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigTemplateId() const;

                    /**
                     * 设置配置模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configTemplateId 配置模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigTemplateId(const std::string& _configTemplateId);

                    /**
                     * 判断参数 ConfigTemplateId 是否已赋值
                     * @return ConfigTemplateId 是否已赋值
                     * 
                     */
                    bool ConfigTemplateIdHasBeenSet() const;

                    /**
                     * 获取配置模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigTemplateName 配置模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigTemplateName() const;

                    /**
                     * 设置配置模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configTemplateName 配置模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigTemplateName(const std::string& _configTemplateName);

                    /**
                     * 判断参数 ConfigTemplateName 是否已赋值
                     * @return ConfigTemplateName 是否已赋值
                     * 
                     */
                    bool ConfigTemplateNameHasBeenSet() const;

                    /**
                     * 获取配置模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigTemplateDesc 配置模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigTemplateDesc() const;

                    /**
                     * 设置配置模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configTemplateDesc 配置模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigTemplateDesc(const std::string& _configTemplateDesc);

                    /**
                     * 判断参数 ConfigTemplateDesc 是否已赋值
                     * @return ConfigTemplateDesc 是否已赋值
                     * 
                     */
                    bool ConfigTemplateDescHasBeenSet() const;

                    /**
                     * 获取配置模板对应的微服务框架
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigTemplateType 配置模板对应的微服务框架
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigTemplateType() const;

                    /**
                     * 设置配置模板对应的微服务框架
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configTemplateType 配置模板对应的微服务框架
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigTemplateType(const std::string& _configTemplateType);

                    /**
                     * 判断参数 ConfigTemplateType 是否已赋值
                     * @return ConfigTemplateType 是否已赋值
                     * 
                     */
                    bool ConfigTemplateTypeHasBeenSet() const;

                    /**
                     * 获取配置模板数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigTemplateValue 配置模板数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigTemplateValue() const;

                    /**
                     * 设置配置模板数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configTemplateValue 配置模板数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigTemplateValue(const std::string& _configTemplateValue);

                    /**
                     * 判断参数 ConfigTemplateValue 是否已赋值
                     * @return ConfigTemplateValue 是否已赋值
                     * 
                     */
                    bool ConfigTemplateValueHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
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
                     * 配置模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configTemplateId;
                    bool m_configTemplateIdHasBeenSet;

                    /**
                     * 配置模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configTemplateName;
                    bool m_configTemplateNameHasBeenSet;

                    /**
                     * 配置模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configTemplateDesc;
                    bool m_configTemplateDescHasBeenSet;

                    /**
                     * 配置模板对应的微服务框架
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configTemplateType;
                    bool m_configTemplateTypeHasBeenSet;

                    /**
                     * 配置模板数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configTemplateValue;
                    bool m_configTemplateValueHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONFIGTEMPLATE_H_
