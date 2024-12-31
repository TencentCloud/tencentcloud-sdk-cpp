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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DEFAULTSETTING_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DEFAULTSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 资源调度的默认设置
                */
                class DefaultSetting : public AbstractModel
                {
                public:
                    DefaultSetting();
                    ~DefaultSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称，作为入参的key
                     * @return Name 名称，作为入参的key
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称，作为入参的key
                     * @param _name 名称，作为入参的key
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
                     * 获取描述
                     * @return Desc 描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置描述
                     * @param _desc 描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取提示
                     * @return Prompt 提示
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置提示
                     * @param _prompt 提示
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取key，用于展示，该配置对应与配置文件中的配置项
                     * @return Key key，用于展示，该配置对应与配置文件中的配置项
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置key，用于展示，该配置对应与配置文件中的配置项
                     * @param _key key，用于展示，该配置对应与配置文件中的配置项
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Name对应的值
                     * @return Value Name对应的值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Name对应的值
                     * @param _value Name对应的值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 名称，作为入参的key
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 提示
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * key，用于展示，该配置对应与配置文件中的配置项
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Name对应的值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DEFAULTSETTING_H_
