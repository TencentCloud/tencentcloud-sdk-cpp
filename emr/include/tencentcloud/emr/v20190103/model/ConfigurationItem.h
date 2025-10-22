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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CONFIGURATIONITEM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CONFIGURATIONITEM_H_

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
                * 配置项（配置管理页）
                */
                class ConfigurationItem : public AbstractModel
                {
                public:
                    ConfigurationItem();
                    ~ConfigurationItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置项名称
                     * @return Name 配置项名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置项名称
                     * @param _name 配置项名称
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
                     * 获取配置项值
                     * @return Value 配置项值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置配置项值
                     * @param _value 配置项值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取所在的配置文件名
                     * @return InFile 所在的配置文件名
                     * 
                     */
                    std::string GetInFile() const;

                    /**
                     * 设置所在的配置文件名
                     * @param _inFile 所在的配置文件名
                     * 
                     */
                    void SetInFile(const std::string& _inFile);

                    /**
                     * 判断参数 InFile 是否已赋值
                     * @return InFile 是否已赋值
                     * 
                     */
                    bool InFileHasBeenSet() const;

                private:

                    /**
                     * 配置项名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 配置项值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 所在的配置文件名
                     */
                    std::string m_inFile;
                    bool m_inFileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CONFIGURATIONITEM_H_
