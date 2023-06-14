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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMETERTEMPLATE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMETERTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 参数模板的基本信息
                */
                class ParameterTemplate : public AbstractModel
                {
                public:
                    ParameterTemplate();
                    ~ParameterTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数模板ID
                     * @return TemplateId 参数模板ID
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置参数模板ID
                     * @param _templateId 参数模板ID
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
                     * 获取参数模板名称
                     * @return TemplateName 参数模板名称
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置参数模板名称
                     * @param _templateName 参数模板名称
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取参数模板适用的数据库版本
                     * @return DBMajorVersion 参数模板适用的数据库版本
                     * 
                     */
                    std::string GetDBMajorVersion() const;

                    /**
                     * 设置参数模板适用的数据库版本
                     * @param _dBMajorVersion 参数模板适用的数据库版本
                     * 
                     */
                    void SetDBMajorVersion(const std::string& _dBMajorVersion);

                    /**
                     * 判断参数 DBMajorVersion 是否已赋值
                     * @return DBMajorVersion 是否已赋值
                     * 
                     */
                    bool DBMajorVersionHasBeenSet() const;

                    /**
                     * 获取参数模板适用的数据库引擎
                     * @return DBEngine 参数模板适用的数据库引擎
                     * 
                     */
                    std::string GetDBEngine() const;

                    /**
                     * 设置参数模板适用的数据库引擎
                     * @param _dBEngine 参数模板适用的数据库引擎
                     * 
                     */
                    void SetDBEngine(const std::string& _dBEngine);

                    /**
                     * 判断参数 DBEngine 是否已赋值
                     * @return DBEngine 是否已赋值
                     * 
                     */
                    bool DBEngineHasBeenSet() const;

                    /**
                     * 获取参数模板描述
                     * @return TemplateDescription 参数模板描述
                     * 
                     */
                    std::string GetTemplateDescription() const;

                    /**
                     * 设置参数模板描述
                     * @param _templateDescription 参数模板描述
                     * 
                     */
                    void SetTemplateDescription(const std::string& _templateDescription);

                    /**
                     * 判断参数 TemplateDescription 是否已赋值
                     * @return TemplateDescription 是否已赋值
                     * 
                     */
                    bool TemplateDescriptionHasBeenSet() const;

                private:

                    /**
                     * 参数模板ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 参数模板名称
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 参数模板适用的数据库版本
                     */
                    std::string m_dBMajorVersion;
                    bool m_dBMajorVersionHasBeenSet;

                    /**
                     * 参数模板适用的数据库引擎
                     */
                    std::string m_dBEngine;
                    bool m_dBEngineHasBeenSet;

                    /**
                     * 参数模板描述
                     */
                    std::string m_templateDescription;
                    bool m_templateDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMETERTEMPLATE_H_
