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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_VALUEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_VALUEINFO_H_

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
                * 需要开启键值索引的字段的索引描述信息
                */
                class ValueInfo : public AbstractModel
                {
                public:
                    ValueInfo();
                    ~ValueInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段类型，目前支持的类型有：long、text、double
                     * @return Type 字段类型，目前支持的类型有：long、text、double
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置字段类型，目前支持的类型有：long、text、double
                     * @param _type 字段类型，目前支持的类型有：long、text、double
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取字段的分词符，其中的每个字符代表一个分词符；
仅支持英文符号、\n\t\r及转义符\；
long及double类型字段需为空；
注意：\n\t\r本身已被转义，直接使用双引号包裹即可作为入参，无需再次转义。使用API Explorer进行调试时请使用JSON参数输入方式，以避免\n\t\r被重复转义
                     * @return Tokenizer 字段的分词符，其中的每个字符代表一个分词符；
仅支持英文符号、\n\t\r及转义符\；
long及double类型字段需为空；
注意：\n\t\r本身已被转义，直接使用双引号包裹即可作为入参，无需再次转义。使用API Explorer进行调试时请使用JSON参数输入方式，以避免\n\t\r被重复转义
                     * 
                     */
                    std::string GetTokenizer() const;

                    /**
                     * 设置字段的分词符，其中的每个字符代表一个分词符；
仅支持英文符号、\n\t\r及转义符\；
long及double类型字段需为空；
注意：\n\t\r本身已被转义，直接使用双引号包裹即可作为入参，无需再次转义。使用API Explorer进行调试时请使用JSON参数输入方式，以避免\n\t\r被重复转义
                     * @param _tokenizer 字段的分词符，其中的每个字符代表一个分词符；
仅支持英文符号、\n\t\r及转义符\；
long及double类型字段需为空；
注意：\n\t\r本身已被转义，直接使用双引号包裹即可作为入参，无需再次转义。使用API Explorer进行调试时请使用JSON参数输入方式，以避免\n\t\r被重复转义
                     * 
                     */
                    void SetTokenizer(const std::string& _tokenizer);

                    /**
                     * 判断参数 Tokenizer 是否已赋值
                     * @return Tokenizer 是否已赋值
                     * 
                     */
                    bool TokenizerHasBeenSet() const;

                    /**
                     * 获取字段是否开启分析功能
                     * @return SqlFlag 字段是否开启分析功能
                     * 
                     */
                    bool GetSqlFlag() const;

                    /**
                     * 设置字段是否开启分析功能
                     * @param _sqlFlag 字段是否开启分析功能
                     * 
                     */
                    void SetSqlFlag(const bool& _sqlFlag);

                    /**
                     * 判断参数 SqlFlag 是否已赋值
                     * @return SqlFlag 是否已赋值
                     * 
                     */
                    bool SqlFlagHasBeenSet() const;

                    /**
                     * 获取是否包含中文，long及double类型字段需为false
                     * @return ContainZH 是否包含中文，long及double类型字段需为false
                     * 
                     */
                    bool GetContainZH() const;

                    /**
                     * 设置是否包含中文，long及double类型字段需为false
                     * @param _containZH 是否包含中文，long及double类型字段需为false
                     * 
                     */
                    void SetContainZH(const bool& _containZH);

                    /**
                     * 判断参数 ContainZH 是否已赋值
                     * @return ContainZH 是否已赋值
                     * 
                     */
                    bool ContainZHHasBeenSet() const;

                    /**
                     * 获取字段别名
                     * @return Alias 字段别名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置字段别名
                     * @param _alias 字段别名
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                private:

                    /**
                     * 字段类型，目前支持的类型有：long、text、double
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 字段的分词符，其中的每个字符代表一个分词符；
仅支持英文符号、\n\t\r及转义符\；
long及double类型字段需为空；
注意：\n\t\r本身已被转义，直接使用双引号包裹即可作为入参，无需再次转义。使用API Explorer进行调试时请使用JSON参数输入方式，以避免\n\t\r被重复转义
                     */
                    std::string m_tokenizer;
                    bool m_tokenizerHasBeenSet;

                    /**
                     * 字段是否开启分析功能
                     */
                    bool m_sqlFlag;
                    bool m_sqlFlagHasBeenSet;

                    /**
                     * 是否包含中文，long及double类型字段需为false
                     */
                    bool m_containZH;
                    bool m_containZHHasBeenSet;

                    /**
                     * 字段别名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_VALUEINFO_H_
