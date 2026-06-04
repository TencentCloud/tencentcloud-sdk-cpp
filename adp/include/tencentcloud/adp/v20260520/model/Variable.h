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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_VARIABLE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_VARIABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 变量信息
                */
                class Variable : public AbstractModel
                {
                public:
                    Variable();
                    ~Variable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取默认文件名称
                     * @return DefaultFileName 默认文件名称
                     * 
                     */
                    std::string GetDefaultFileName() const;

                    /**
                     * 设置默认文件名称
                     * @param _defaultFileName 默认文件名称
                     * 
                     */
                    void SetDefaultFileName(const std::string& _defaultFileName);

                    /**
                     * 判断参数 DefaultFileName 是否已赋值
                     * @return DefaultFileName 是否已赋值
                     * 
                     */
                    bool DefaultFileNameHasBeenSet() const;

                    /**
                     * 获取默认值
                     * @return DefaultValue 默认值
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置默认值
                     * @param _defaultValue 默认值
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取变量描述
                     * @return Description 变量描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置变量描述
                     * @param _description 变量描述
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
                     * 获取模块类型。枚举值: 1:环境参数, 2:应用参数, 3:系统参数, -1:所有参数
                     * @return ModuleType 模块类型。枚举值: 1:环境参数, 2:应用参数, 3:系统参数, -1:所有参数
                     * 
                     */
                    int64_t GetModuleType() const;

                    /**
                     * 设置模块类型。枚举值: 1:环境参数, 2:应用参数, 3:系统参数, -1:所有参数
                     * @param _moduleType 模块类型。枚举值: 1:环境参数, 2:应用参数, 3:系统参数, -1:所有参数
                     * 
                     */
                    void SetModuleType(const int64_t& _moduleType);

                    /**
                     * 判断参数 ModuleType 是否已赋值
                     * @return ModuleType 是否已赋值
                     * 
                     */
                    bool ModuleTypeHasBeenSet() const;

                    /**
                     * 获取变量名称
                     * @return Name 变量名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置变量名称
                     * @param _name 变量名称
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
                     * 获取变量类型。枚举值: 1:字符串, 2:整数, 3:浮点数, 4:布尔值, 5:对象, 6:字符串数组, 7:整数数组, 8:浮点数数组, 9:布尔值数组, 10:对象数组, 11:文件, 12:文档, 13:图片, 14:音频, 15:视频, 16:文件数组, 17:文档数组, 18:图片数组, 19:音频数组, 20:视频数组, 21:数组的数组, 22:密钥/敏感信息, 99:空值
                     * @return Type 变量类型。枚举值: 1:字符串, 2:整数, 3:浮点数, 4:布尔值, 5:对象, 6:字符串数组, 7:整数数组, 8:浮点数数组, 9:布尔值数组, 10:对象数组, 11:文件, 12:文档, 13:图片, 14:音频, 15:视频, 16:文件数组, 17:文档数组, 18:图片数组, 19:音频数组, 20:视频数组, 21:数组的数组, 22:密钥/敏感信息, 99:空值
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置变量类型。枚举值: 1:字符串, 2:整数, 3:浮点数, 4:布尔值, 5:对象, 6:字符串数组, 7:整数数组, 8:浮点数数组, 9:布尔值数组, 10:对象数组, 11:文件, 12:文档, 13:图片, 14:音频, 15:视频, 16:文件数组, 17:文档数组, 18:图片数组, 19:音频数组, 20:视频数组, 21:数组的数组, 22:密钥/敏感信息, 99:空值
                     * @param _type 变量类型。枚举值: 1:字符串, 2:整数, 3:浮点数, 4:布尔值, 5:对象, 6:字符串数组, 7:整数数组, 8:浮点数数组, 9:布尔值数组, 10:对象数组, 11:文件, 12:文档, 13:图片, 14:音频, 15:视频, 16:文件数组, 17:文档数组, 18:图片数组, 19:音频数组, 20:视频数组, 21:数组的数组, 22:密钥/敏感信息, 99:空值
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取变量ID
                     * @return VariableId 变量ID
                     * 
                     */
                    std::string GetVariableId() const;

                    /**
                     * 设置变量ID
                     * @param _variableId 变量ID
                     * 
                     */
                    void SetVariableId(const std::string& _variableId);

                    /**
                     * 判断参数 VariableId 是否已赋值
                     * @return VariableId 是否已赋值
                     * 
                     */
                    bool VariableIdHasBeenSet() const;

                private:

                    /**
                     * 默认文件名称
                     */
                    std::string m_defaultFileName;
                    bool m_defaultFileNameHasBeenSet;

                    /**
                     * 默认值
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 变量描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 模块类型。枚举值: 1:环境参数, 2:应用参数, 3:系统参数, -1:所有参数
                     */
                    int64_t m_moduleType;
                    bool m_moduleTypeHasBeenSet;

                    /**
                     * 变量名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 变量类型。枚举值: 1:字符串, 2:整数, 3:浮点数, 4:布尔值, 5:对象, 6:字符串数组, 7:整数数组, 8:浮点数数组, 9:布尔值数组, 10:对象数组, 11:文件, 12:文档, 13:图片, 14:音频, 15:视频, 16:文件数组, 17:文档数组, 18:图片数组, 19:音频数组, 20:视频数组, 21:数组的数组, 22:密钥/敏感信息, 99:空值
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 变量ID
                     */
                    std::string m_variableId;
                    bool m_variableIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_VARIABLE_H_
