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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LOGVALUEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LOGVALUEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 日志索引值描述信息
                */
                class LogValueInfo : public AbstractModel
                {
                public:
                    LogValueInfo();
                    ~LogValueInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>类型</p>
                     * @return Type <p>类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>类型</p>
                     * @param _type <p>类型</p>
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
                     * 获取<p>标签</p>
                     * @return Tokenizer <p>标签</p>
                     * 
                     */
                    std::string GetTokenizer() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tokenizer <p>标签</p>
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
                     * 获取<p>sql标签</p>
                     * @return SqlFlag <p>sql标签</p>
                     * 
                     */
                    bool GetSqlFlag() const;

                    /**
                     * 设置<p>sql标签</p>
                     * @param _sqlFlag <p>sql标签</p>
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
                     * 获取<p>包含中文</p>
                     * @return ContainZH <p>包含中文</p>
                     * 
                     */
                    bool GetContainZH() const;

                    /**
                     * 设置<p>包含中文</p>
                     * @param _containZH <p>包含中文</p>
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
                     * 获取<p>别名</p>
                     * @return Alias <p>别名</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>别名</p>
                     * @param _alias <p>别名</p>
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
                     * <p>类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::string m_tokenizer;
                    bool m_tokenizerHasBeenSet;

                    /**
                     * <p>sql标签</p>
                     */
                    bool m_sqlFlag;
                    bool m_sqlFlagHasBeenSet;

                    /**
                     * <p>包含中文</p>
                     */
                    bool m_containZH;
                    bool m_containZHHasBeenSet;

                    /**
                     * <p>别名</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LOGVALUEINFO_H_
