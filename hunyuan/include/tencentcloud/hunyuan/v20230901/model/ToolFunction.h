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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_TOOLFUNCTION_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_TOOLFUNCTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * function定义
                */
                class ToolFunction : public AbstractModel
                {
                public:
                    ToolFunction();
                    ~ToolFunction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取function名称，只能包含a-z，A-Z，0-9，\_或-
                     * @return Name function名称，只能包含a-z，A-Z，0-9，\_或-
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置function名称，只能包含a-z，A-Z，0-9，\_或-
                     * @param _name function名称，只能包含a-z，A-Z，0-9，\_或-
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
                     * 获取function参数，一般为json字符串
                     * @return Parameters function参数，一般为json字符串
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置function参数，一般为json字符串
                     * @param _parameters function参数，一般为json字符串
                     * 
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取function的简单描述
                     * @return Description function的简单描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置function的简单描述
                     * @param _description function的简单描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * function名称，只能包含a-z，A-Z，0-9，\_或-
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * function参数，一般为json字符串
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * function的简单描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_TOOLFUNCTION_H_
