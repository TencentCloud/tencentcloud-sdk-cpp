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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DYNAMICINDEX_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DYNAMICINDEX_H_

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
                * 键值索引自动配置，启用后自动将日志内的字段添加到键值索引中，包括日志中后续新增的字段。
                */
                class DynamicIndex : public AbstractModel
                {
                public:
                    DynamicIndex();
                    ~DynamicIndex() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>键值索引自动配置开关</p>
                     * @return Status <p>键值索引自动配置开关</p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>键值索引自动配置开关</p>
                     * @param _status <p>键值索引自动配置开关</p>
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>索引的分词符，其中的每个字符代表一个分词符；<br>仅支持英文符号、\n\t\r及转义符\；<br>注意：\n\t\r本身已被转义，直接使用双引号包裹即可作为入参，无需再次转义。使用API Explorer进行调试时请使用JSON参数输入方式，以避免\n\t\r被重复转义</p>
                     * @return Tokenizer <p>索引的分词符，其中的每个字符代表一个分词符；<br>仅支持英文符号、\n\t\r及转义符\；<br>注意：\n\t\r本身已被转义，直接使用双引号包裹即可作为入参，无需再次转义。使用API Explorer进行调试时请使用JSON参数输入方式，以避免\n\t\r被重复转义</p>
                     * 
                     */
                    std::string GetTokenizer() const;

                    /**
                     * 设置<p>索引的分词符，其中的每个字符代表一个分词符；<br>仅支持英文符号、\n\t\r及转义符\；<br>注意：\n\t\r本身已被转义，直接使用双引号包裹即可作为入参，无需再次转义。使用API Explorer进行调试时请使用JSON参数输入方式，以避免\n\t\r被重复转义</p>
                     * @param _tokenizer <p>索引的分词符，其中的每个字符代表一个分词符；<br>仅支持英文符号、\n\t\r及转义符\；<br>注意：\n\t\r本身已被转义，直接使用双引号包裹即可作为入参，无需再次转义。使用API Explorer进行调试时请使用JSON参数输入方式，以避免\n\t\r被重复转义</p>
                     * 
                     */
                    void SetTokenizer(const std::string& _tokenizer);

                    /**
                     * 判断参数 Tokenizer 是否已赋值
                     * @return Tokenizer 是否已赋值
                     * 
                     */
                    bool TokenizerHasBeenSet() const;

                private:

                    /**
                     * <p>键值索引自动配置开关</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>索引的分词符，其中的每个字符代表一个分词符；<br>仅支持英文符号、\n\t\r及转义符\；<br>注意：\n\t\r本身已被转义，直接使用双引号包裹即可作为入参，无需再次转义。使用API Explorer进行调试时请使用JSON参数输入方式，以避免\n\t\r被重复转义</p>
                     */
                    std::string m_tokenizer;
                    bool m_tokenizerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DYNAMICINDEX_H_
