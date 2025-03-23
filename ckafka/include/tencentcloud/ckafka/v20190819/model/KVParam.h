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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_KVPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_KVPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * key-value二次解析
                */
                class KVParam : public AbstractModel
                {
                public:
                    KVParam();
                    ~KVParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分隔符
                     * @return Delimiter 分隔符
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置分隔符
                     * @param _delimiter 分隔符
                     * 
                     */
                    void SetDelimiter(const std::string& _delimiter);

                    /**
                     * 判断参数 Delimiter 是否已赋值
                     * @return Delimiter 是否已赋值
                     * 
                     */
                    bool DelimiterHasBeenSet() const;

                    /**
                     * 获取key-value二次解析分隔符
                     * @return Regex key-value二次解析分隔符
                     * 
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置key-value二次解析分隔符
                     * @param _regex key-value二次解析分隔符
                     * 
                     */
                    void SetRegex(const std::string& _regex);

                    /**
                     * 判断参数 Regex 是否已赋值
                     * @return Regex 是否已赋值
                     * 
                     */
                    bool RegexHasBeenSet() const;

                    /**
                     * 获取保留源Key，默认为false不保留
                     * @return KeepOriginalKey 保留源Key，默认为false不保留
                     * 
                     */
                    std::string GetKeepOriginalKey() const;

                    /**
                     * 设置保留源Key，默认为false不保留
                     * @param _keepOriginalKey 保留源Key，默认为false不保留
                     * 
                     */
                    void SetKeepOriginalKey(const std::string& _keepOriginalKey);

                    /**
                     * 判断参数 KeepOriginalKey 是否已赋值
                     * @return KeepOriginalKey 是否已赋值
                     * 
                     */
                    bool KeepOriginalKeyHasBeenSet() const;

                private:

                    /**
                     * 分隔符
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * key-value二次解析分隔符
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                    /**
                     * 保留源Key，默认为false不保留
                     */
                    std::string m_keepOriginalKey;
                    bool m_keepOriginalKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_KVPARAM_H_
