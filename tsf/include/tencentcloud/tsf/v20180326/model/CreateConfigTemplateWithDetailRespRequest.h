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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATECONFIGTEMPLATEWITHDETAILRESPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATECONFIGTEMPLATEWITHDETAILRESPREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateConfigTemplateWithDetailResp请求参数结构体
                */
                class CreateConfigTemplateWithDetailRespRequest : public AbstractModel
                {
                public:
                    CreateConfigTemplateWithDetailRespRequest();
                    ~CreateConfigTemplateWithDetailRespRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置模板名称
                     * @return ConfigTemplateName 配置模板名称
                     * 
                     */
                    std::string GetConfigTemplateName() const;

                    /**
                     * 设置配置模板名称
                     * @param _configTemplateName 配置模板名称
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
                     * 获取配置模板对应的微服务框架
                     * @return ConfigTemplateType 配置模板对应的微服务框架
                     * 
                     */
                    std::string GetConfigTemplateType() const;

                    /**
                     * 设置配置模板对应的微服务框架
                     * @param _configTemplateType 配置模板对应的微服务框架
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
                     * @return ConfigTemplateValue 配置模板数据
                     * 
                     */
                    std::string GetConfigTemplateValue() const;

                    /**
                     * 设置配置模板数据
                     * @param _configTemplateValue 配置模板数据
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
                     * 获取配置模板描述
                     * @return ConfigTemplateDesc 配置模板描述
                     * 
                     */
                    std::string GetConfigTemplateDesc() const;

                    /**
                     * 设置配置模板描述
                     * @param _configTemplateDesc 配置模板描述
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
                     * 获取无
                     * @return ProgramIdList 无
                     * 
                     */
                    std::vector<std::string> GetProgramIdList() const;

                    /**
                     * 设置无
                     * @param _programIdList 无
                     * 
                     */
                    void SetProgramIdList(const std::vector<std::string>& _programIdList);

                    /**
                     * 判断参数 ProgramIdList 是否已赋值
                     * @return ProgramIdList 是否已赋值
                     * 
                     */
                    bool ProgramIdListHasBeenSet() const;

                private:

                    /**
                     * 配置模板名称
                     */
                    std::string m_configTemplateName;
                    bool m_configTemplateNameHasBeenSet;

                    /**
                     * 配置模板对应的微服务框架
                     */
                    std::string m_configTemplateType;
                    bool m_configTemplateTypeHasBeenSet;

                    /**
                     * 配置模板数据
                     */
                    std::string m_configTemplateValue;
                    bool m_configTemplateValueHasBeenSet;

                    /**
                     * 配置模板描述
                     */
                    std::string m_configTemplateDesc;
                    bool m_configTemplateDescHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<std::string> m_programIdList;
                    bool m_programIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATECONFIGTEMPLATEWITHDETAILRESPREQUEST_H_
