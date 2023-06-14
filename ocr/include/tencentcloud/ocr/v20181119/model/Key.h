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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_KEY_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_KEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * key信息组
                */
                class Key : public AbstractModel
                {
                public:
                    Key();
                    ~Key() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自动识别的字段名称
                     * @return AutoName 自动识别的字段名称
                     * 
                     */
                    std::string GetAutoName() const;

                    /**
                     * 设置自动识别的字段名称
                     * @param _autoName 自动识别的字段名称
                     * 
                     */
                    void SetAutoName(const std::string& _autoName);

                    /**
                     * 判断参数 AutoName 是否已赋值
                     * @return AutoName 是否已赋值
                     * 
                     */
                    bool AutoNameHasBeenSet() const;

                    /**
                     * 获取定义的字段名称（传key的名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigName 定义的字段名称（传key的名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置定义的字段名称（传key的名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configName 定义的字段名称（传key的名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                private:

                    /**
                     * 自动识别的字段名称
                     */
                    std::string m_autoName;
                    bool m_autoNameHasBeenSet;

                    /**
                     * 定义的字段名称（传key的名称）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_KEY_H_
