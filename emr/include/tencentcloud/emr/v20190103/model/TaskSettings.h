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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_TASKSETTINGS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_TASKSETTINGS_H_

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
                * 巡检任务参数
                */
                class TaskSettings : public AbstractModel
                {
                public:
                    TaskSettings();
                    ~TaskSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名称
                     * @return Name 参数名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置参数名称
                     * @param _name 参数名称
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
                     * 获取参数值
                     * @return Value 参数值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置参数值
                     * @param _value 参数值
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
                     * 获取参数唯一标记
                     * @return Key 参数唯一标记
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置参数唯一标记
                     * @param _key 参数唯一标记
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
                     * 获取是否可编辑，”true" "false"
                     * @return Editable 是否可编辑，”true" "false"
                     * 
                     */
                    std::string GetEditable() const;

                    /**
                     * 设置是否可编辑，”true" "false"
                     * @param _editable 是否可编辑，”true" "false"
                     * 
                     */
                    void SetEditable(const std::string& _editable);

                    /**
                     * 判断参数 Editable 是否已赋值
                     * @return Editable 是否已赋值
                     * 
                     */
                    bool EditableHasBeenSet() const;

                private:

                    /**
                     * 参数名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 参数值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 参数唯一标记
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 是否可编辑，”true" "false"
                     */
                    std::string m_editable;
                    bool m_editableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TASKSETTINGS_H_
