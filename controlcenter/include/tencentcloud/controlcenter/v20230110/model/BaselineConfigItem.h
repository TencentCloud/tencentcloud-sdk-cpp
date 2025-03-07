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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_BASELINECONFIGITEM_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_BASELINECONFIGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            namespace Model
            {
                /**
                * 账号工厂基线配置项
                */
                class BaselineConfigItem : public AbstractModel
                {
                public:
                    BaselineConfigItem();
                    ~BaselineConfigItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号工厂基线项唯一标识,只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     * @return Identifier 账号工厂基线项唯一标识,只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置账号工厂基线项唯一标识,只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     * @param _identifier 账号工厂基线项唯一标识,只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                    /**
                     * 获取账号工厂基线项配置，不同基线项配置参数不同。
                     * @return Configuration 账号工厂基线项配置，不同基线项配置参数不同。
                     * 
                     */
                    std::string GetConfiguration() const;

                    /**
                     * 设置账号工厂基线项配置，不同基线项配置参数不同。
                     * @param _configuration 账号工厂基线项配置，不同基线项配置参数不同。
                     * 
                     */
                    void SetConfiguration(const std::string& _configuration);

                    /**
                     * 判断参数 Configuration 是否已赋值
                     * @return Configuration 是否已赋值
                     * 
                     */
                    bool ConfigurationHasBeenSet() const;

                private:

                    /**
                     * 账号工厂基线项唯一标识,只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * 账号工厂基线项配置，不同基线项配置参数不同。
                     */
                    std::string m_configuration;
                    bool m_configurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_BASELINECONFIGITEM_H_
