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
                     */
                    std::string GetName() const;

                    /**
                     * 设置参数模板名称。
                     * @param Name 参数模板名称。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取参数模板描述。
                     * @return Description 参数模板描述。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置参数模板描述。
                     * @param Description 参数模板描述。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取mysql版本。
                     * @return EngineVersion mysql版本。
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置mysql版本。
                     * @param EngineVersion mysql版本。
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取源参数模板ID。
                     * @return TemplateId 源参数模板ID。
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置源参数模板ID。
                     * @param TemplateId 源参数模板ID。
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取参数列表。
                     * @return ParamList 参数列表。
                     */
                    std::vector<Parameter> GetParamList() const;

                    /**
                     * 设置参数列表。
                     * @param ParamList 参数列表。
                     */
                    void SetParamList(const std::vector<Parameter>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     */
                    bool ParamListHasBeenSet() const;

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
                     * mysql版本。
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 源参数模板ID。
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 参数列表。
                     */
                    std::vector<Parameter> m_paramList;
                    bool m_paramListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEPARAMTEMPLATEREQUEST_H_
