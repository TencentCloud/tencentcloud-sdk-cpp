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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_KEYVALUEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_KEYVALUEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/KeyValueArrayInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 键值索引配置
                */
                class KeyValueInfo : public AbstractModel
                {
                public:
                    KeyValueInfo();
                    ~KeyValueInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否大小写敏感
                     * @return CaseSensitive 是否大小写敏感
                     * 
                     */
                    bool GetCaseSensitive() const;

                    /**
                     * 设置是否大小写敏感
                     * @param _caseSensitive 是否大小写敏感
                     * 
                     */
                    void SetCaseSensitive(const bool& _caseSensitive);

                    /**
                     * 判断参数 CaseSensitive 是否已赋值
                     * @return CaseSensitive 是否已赋值
                     * 
                     */
                    bool CaseSensitiveHasBeenSet() const;

                    /**
                     * 获取需要建立索引的键值对信息
                     * @return KeyValues 需要建立索引的键值对信息
                     * 
                     */
                    std::vector<KeyValueArrayInfo> GetKeyValues() const;

                    /**
                     * 设置需要建立索引的键值对信息
                     * @param _keyValues 需要建立索引的键值对信息
                     * 
                     */
                    void SetKeyValues(const std::vector<KeyValueArrayInfo>& _keyValues);

                    /**
                     * 判断参数 KeyValues 是否已赋值
                     * @return KeyValues 是否已赋值
                     * 
                     */
                    bool KeyValuesHasBeenSet() const;

                private:

                    /**
                     * 是否大小写敏感
                     */
                    bool m_caseSensitive;
                    bool m_caseSensitiveHasBeenSet;

                    /**
                     * 需要建立索引的键值对信息
                     */
                    std::vector<KeyValueArrayInfo> m_keyValues;
                    bool m_keyValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_KEYVALUEINFO_H_
