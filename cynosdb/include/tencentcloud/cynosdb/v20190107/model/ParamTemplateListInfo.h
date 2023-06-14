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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMTEMPLATELISTINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMTEMPLATELISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/TemplateParamInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 参数模板信息
                */
                class ParamTemplateListInfo : public AbstractModel
                {
                public:
                    ParamTemplateListInfo();
                    ~ParamTemplateListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数模板ID
                     * @return Id 参数模板ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置参数模板ID
                     * @param _id 参数模板ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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

                    /**
                     * 获取引擎版本
                     * @return EngineVersion 引擎版本
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置引擎版本
                     * @param _engineVersion 引擎版本
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取数据库类型，可选值：NORMAL，SERVERLESS
                     * @return DbMode 数据库类型，可选值：NORMAL，SERVERLESS
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置数据库类型，可选值：NORMAL，SERVERLESS
                     * @param _dbMode 数据库类型，可选值：NORMAL，SERVERLESS
                     * 
                     */
                    void SetDbMode(const std::string& _dbMode);

                    /**
                     * 判断参数 DbMode 是否已赋值
                     * @return DbMode 是否已赋值
                     * 
                     */
                    bool DbModeHasBeenSet() const;

                    /**
                     * 获取参数模板详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamInfoSet 参数模板详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TemplateParamInfo> GetParamInfoSet() const;

                    /**
                     * 设置参数模板详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramInfoSet 参数模板详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamInfoSet(const std::vector<TemplateParamInfo>& _paramInfoSet);

                    /**
                     * 判断参数 ParamInfoSet 是否已赋值
                     * @return ParamInfoSet 是否已赋值
                     * 
                     */
                    bool ParamInfoSetHasBeenSet() const;

                private:

                    /**
                     * 参数模板ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 参数模板名称
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 参数模板描述
                     */
                    std::string m_templateDescription;
                    bool m_templateDescriptionHasBeenSet;

                    /**
                     * 引擎版本
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 数据库类型，可选值：NORMAL，SERVERLESS
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * 参数模板详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TemplateParamInfo> m_paramInfoSet;
                    bool m_paramInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMTEMPLATELISTINFO_H_
