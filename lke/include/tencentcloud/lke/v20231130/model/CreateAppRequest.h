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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREATEAPPREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREATEAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/BaseConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * CreateApp请求参数结构体
                */
                class CreateAppRequest : public AbstractModel
                {
                public:
                    CreateAppRequest();
                    ~CreateAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用类型；knowledge_qa-知识问答管理
                     * @return AppType 应用类型；knowledge_qa-知识问答管理
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置应用类型；knowledge_qa-知识问答管理
                     * @param _appType 应用类型；knowledge_qa-知识问答管理
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取应用基础配置
                     * @return BaseConfig 应用基础配置
                     * 
                     */
                    BaseConfig GetBaseConfig() const;

                    /**
                     * 设置应用基础配置
                     * @param _baseConfig 应用基础配置
                     * 
                     */
                    void SetBaseConfig(const BaseConfig& _baseConfig);

                    /**
                     * 判断参数 BaseConfig 是否已赋值
                     * @return BaseConfig 是否已赋值
                     * 
                     */
                    bool BaseConfigHasBeenSet() const;

                    /**
                     * 获取应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式
                     * @return Pattern 应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式
                     * @param _pattern 应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                private:

                    /**
                     * 应用类型；knowledge_qa-知识问答管理
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * 应用基础配置
                     */
                    BaseConfig m_baseConfig;
                    bool m_baseConfigHasBeenSet;

                    /**
                     * 应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATEAPPREQUEST_H_
