/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKIOTTOOL_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKIOTTOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * IoT工具配置列表
                */
                class TalkIOTTool : public AbstractModel
                {
                public:
                    TalkIOTTool();
                    ~TalkIOTTool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工具名称，同时作为IoT ActionId
                     * @return Name 工具名称，同时作为IoT ActionId
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置工具名称，同时作为IoT ActionId
                     * @param _name 工具名称，同时作为IoT ActionId
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
                     * 获取工具描述，用于模型判断何时调用
                     * @return Description 工具描述，用于模型判断何时调用
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置工具描述，用于模型判断何时调用
                     * @param _description 工具描述，用于模型判断何时调用
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
                     * 获取工具参数JSON Schema，JSON对象字符串，必须为type=object
                     * @return Parameters 工具参数JSON Schema，JSON对象字符串，必须为type=object
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置工具参数JSON Schema，JSON对象字符串，必须为type=object
                     * @param _parameters 工具参数JSON Schema，JSON对象字符串，必须为type=object
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
                     * 获取必填参数名列表，必须存在于Parameters.properties中
                     * @return Required 必填参数名列表，必须存在于Parameters.properties中
                     * 
                     */
                    std::vector<std::string> GetRequired() const;

                    /**
                     * 设置必填参数名列表，必须存在于Parameters.properties中
                     * @param _required 必填参数名列表，必须存在于Parameters.properties中
                     * 
                     */
                    void SetRequired(const std::vector<std::string>& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                private:

                    /**
                     * 工具名称，同时作为IoT ActionId
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 工具描述，用于模型判断何时调用
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 工具参数JSON Schema，JSON对象字符串，必须为type=object
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 必填参数名列表，必须存在于Parameters.properties中
                     */
                    std::vector<std::string> m_required;
                    bool m_requiredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKIOTTOOL_H_
