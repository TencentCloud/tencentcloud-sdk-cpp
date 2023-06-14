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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEPARAMTEMPLATEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEPARAMTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/Parameter.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CreateParamTemplate请求参数结构体
                */
                class CreateParamTemplateRequest : public AbstractModel
                {
                public:
                    CreateParamTemplateRequest();
                    ~CreateParamTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取参数模板名称。
                     * @return Name 参数模板名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置参数模板名称。
                     * @param _name 参数模板名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取参数模板描述。
                     * @return Description 参数模板描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置参数模板描述。
                     * @param _description 参数模板描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取MySQL 版本号。
                     * @return EngineVersion MySQL 版本号。
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置MySQL 版本号。
                     * @param _engineVersion MySQL 版本号。
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
                     * 获取源参数模板 ID。
                     * @return TemplateId 源参数模板 ID。
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置源参数模板 ID。
                     * @param _templateId 源参数模板 ID。
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取参数列表。
                     * @return ParamList 参数列表。
                     * 
                     */
                    std::vector<Parameter> GetParamList() const;

                    /**
                     * 设置参数列表。
                     * @param _paramList 参数列表。
                     * 
                     */
                    void SetParamList(const std::vector<Parameter>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取默认参数模板类型。支持值包括："HIGH_STABILITY" - 高稳定模板，"HIGH_PERFORMANCE" - 高性能模板。
                     * @return TemplateType 默认参数模板类型。支持值包括："HIGH_STABILITY" - 高稳定模板，"HIGH_PERFORMANCE" - 高性能模板。
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置默认参数模板类型。支持值包括："HIGH_STABILITY" - 高稳定模板，"HIGH_PERFORMANCE" - 高性能模板。
                     * @param _templateType 默认参数模板类型。支持值包括："HIGH_STABILITY" - 高稳定模板，"HIGH_PERFORMANCE" - 高性能模板。
                     * 
                     */
                    void SetTemplateType(const std::string& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                    /**
                     * 获取实例引擎类型，默认为"InnoDB"，支持值包括："InnoDB"，"RocksDB"。
                     * @return EngineType 实例引擎类型，默认为"InnoDB"，支持值包括："InnoDB"，"RocksDB"。
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置实例引擎类型，默认为"InnoDB"，支持值包括："InnoDB"，"RocksDB"。
                     * @param _engineType 实例引擎类型，默认为"InnoDB"，支持值包括："InnoDB"，"RocksDB"。
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                private:

                    /**
                     * 参数模板名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 参数模板描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * MySQL 版本号。
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 源参数模板 ID。
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 参数列表。
                     */
                    std::vector<Parameter> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * 默认参数模板类型。支持值包括："HIGH_STABILITY" - 高稳定模板，"HIGH_PERFORMANCE" - 高性能模板。
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * 实例引擎类型，默认为"InnoDB"，支持值包括："InnoDB"，"RocksDB"。
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEPARAMTEMPLATEREQUEST_H_
