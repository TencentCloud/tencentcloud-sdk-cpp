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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_ANNOTATION_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_ANNOTATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * 合规详情
                */
                class Annotation : public AbstractModel
                {
                public:
                    Annotation();
                    ~Annotation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源当前实际配置。长度为0~256位字符，即资源不合规配置
                     * @return Configuration 资源当前实际配置。长度为0~256位字符，即资源不合规配置
                     * 
                     */
                    std::string GetConfiguration() const;

                    /**
                     * 设置资源当前实际配置。长度为0~256位字符，即资源不合规配置
                     * @param _configuration 资源当前实际配置。长度为0~256位字符，即资源不合规配置
                     * 
                     */
                    void SetConfiguration(const std::string& _configuration);

                    /**
                     * 判断参数 Configuration 是否已赋值
                     * @return Configuration 是否已赋值
                     * 
                     */
                    bool ConfigurationHasBeenSet() const;

                    /**
                     * 获取资源期望配置。长度为0~256位字符，即资源合规配置
                     * @return DesiredValue 资源期望配置。长度为0~256位字符，即资源合规配置
                     * 
                     */
                    std::string GetDesiredValue() const;

                    /**
                     * 设置资源期望配置。长度为0~256位字符，即资源合规配置
                     * @param _desiredValue 资源期望配置。长度为0~256位字符，即资源合规配置
                     * 
                     */
                    void SetDesiredValue(const std::string& _desiredValue);

                    /**
                     * 判断参数 DesiredValue 是否已赋值
                     * @return DesiredValue 是否已赋值
                     * 
                     */
                    bool DesiredValueHasBeenSet() const;

                    /**
                     * 获取资源当前配置和期望配置之间的比较运算符。长度为0~16位字符，自定义规则上报评估结果此字段可能为空
                     * @return Operator 资源当前配置和期望配置之间的比较运算符。长度为0~16位字符，自定义规则上报评估结果此字段可能为空
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置资源当前配置和期望配置之间的比较运算符。长度为0~16位字符，自定义规则上报评估结果此字段可能为空
                     * @param _operator 资源当前配置和期望配置之间的比较运算符。长度为0~16位字符，自定义规则上报评估结果此字段可能为空
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取当前配置在资源属性结构体中的JSON路径。长度为0~256位字符，自定义规则上报评估结果此字段可能为空
                     * @return Property 当前配置在资源属性结构体中的JSON路径。长度为0~256位字符，自定义规则上报评估结果此字段可能为空
                     * 
                     */
                    std::string GetProperty() const;

                    /**
                     * 设置当前配置在资源属性结构体中的JSON路径。长度为0~256位字符，自定义规则上报评估结果此字段可能为空
                     * @param _property 当前配置在资源属性结构体中的JSON路径。长度为0~256位字符，自定义规则上报评估结果此字段可能为空
                     * 
                     */
                    void SetProperty(const std::string& _property);

                    /**
                     * 判断参数 Property 是否已赋值
                     * @return Property 是否已赋值
                     * 
                     */
                    bool PropertyHasBeenSet() const;

                private:

                    /**
                     * 资源当前实际配置。长度为0~256位字符，即资源不合规配置
                     */
                    std::string m_configuration;
                    bool m_configurationHasBeenSet;

                    /**
                     * 资源期望配置。长度为0~256位字符，即资源合规配置
                     */
                    std::string m_desiredValue;
                    bool m_desiredValueHasBeenSet;

                    /**
                     * 资源当前配置和期望配置之间的比较运算符。长度为0~16位字符，自定义规则上报评估结果此字段可能为空
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 当前配置在资源属性结构体中的JSON路径。长度为0~256位字符，自定义规则上报评估结果此字段可能为空
                     */
                    std::string m_property;
                    bool m_propertyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_ANNOTATION_H_
