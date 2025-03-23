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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_PARQUETKEYINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_PARQUETKEYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Parquet内容描述
                */
                class ParquetKeyInfo : public AbstractModel
                {
                public:
                    ParquetKeyInfo();
                    ~ParquetKeyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取键值名称
                     * @return KeyName 键值名称
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置键值名称
                     * @param _keyName 键值名称
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取数据类型，目前支持6种类型：string、boolean、int32、int64、float、double
                     * @return KeyType 数据类型，目前支持6种类型：string、boolean、int32、int64、float、double
                     * 
                     */
                    std::string GetKeyType() const;

                    /**
                     * 设置数据类型，目前支持6种类型：string、boolean、int32、int64、float、double
                     * @param _keyType 数据类型，目前支持6种类型：string、boolean、int32、int64、float、double
                     * 
                     */
                    void SetKeyType(const std::string& _keyType);

                    /**
                     * 判断参数 KeyType 是否已赋值
                     * @return KeyType 是否已赋值
                     * 
                     */
                    bool KeyTypeHasBeenSet() const;

                    /**
                     * 获取解析失败赋值信息
                     * @return KeyNonExistingField 解析失败赋值信息
                     * 
                     */
                    std::string GetKeyNonExistingField() const;

                    /**
                     * 设置解析失败赋值信息
                     * @param _keyNonExistingField 解析失败赋值信息
                     * 
                     */
                    void SetKeyNonExistingField(const std::string& _keyNonExistingField);

                    /**
                     * 判断参数 KeyNonExistingField 是否已赋值
                     * @return KeyNonExistingField 是否已赋值
                     * 
                     */
                    bool KeyNonExistingFieldHasBeenSet() const;

                private:

                    /**
                     * 键值名称
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * 数据类型，目前支持6种类型：string、boolean、int32、int64、float、double
                     */
                    std::string m_keyType;
                    bool m_keyTypeHasBeenSet;

                    /**
                     * 解析失败赋值信息
                     */
                    std::string m_keyNonExistingField;
                    bool m_keyNonExistingFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_PARQUETKEYINFO_H_
