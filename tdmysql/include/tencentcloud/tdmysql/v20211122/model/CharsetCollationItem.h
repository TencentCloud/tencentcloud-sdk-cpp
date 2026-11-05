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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CHARSETCOLLATIONITEM_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CHARSETCOLLATIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 字符集与排序规则联动清单
                */
                class CharsetCollationItem : public AbstractModel
                {
                public:
                    CharsetCollationItem();
                    ~CharsetCollationItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>字符集</p>
                     * @return CharsetName <p>字符集</p>
                     * 
                     */
                    std::string GetCharsetName() const;

                    /**
                     * 设置<p>字符集</p>
                     * @param _charsetName <p>字符集</p>
                     * 
                     */
                    void SetCharsetName(const std::string& _charsetName);

                    /**
                     * 判断参数 CharsetName 是否已赋值
                     * @return CharsetName 是否已赋值
                     * 
                     */
                    bool CharsetNameHasBeenSet() const;

                    /**
                     * 获取<p>排序规则</p>
                     * @return Collations <p>排序规则</p>
                     * 
                     */
                    std::vector<std::string> GetCollations() const;

                    /**
                     * 设置<p>排序规则</p>
                     * @param _collations <p>排序规则</p>
                     * 
                     */
                    void SetCollations(const std::vector<std::string>& _collations);

                    /**
                     * 判断参数 Collations 是否已赋值
                     * @return Collations 是否已赋值
                     * 
                     */
                    bool CollationsHasBeenSet() const;

                    /**
                     * 获取<p>默认的排序规则</p>
                     * @return DefaultCollation <p>默认的排序规则</p>
                     * 
                     */
                    std::string GetDefaultCollation() const;

                    /**
                     * 设置<p>默认的排序规则</p>
                     * @param _defaultCollation <p>默认的排序规则</p>
                     * 
                     */
                    void SetDefaultCollation(const std::string& _defaultCollation);

                    /**
                     * 判断参数 DefaultCollation 是否已赋值
                     * @return DefaultCollation 是否已赋值
                     * 
                     */
                    bool DefaultCollationHasBeenSet() const;

                private:

                    /**
                     * <p>字符集</p>
                     */
                    std::string m_charsetName;
                    bool m_charsetNameHasBeenSet;

                    /**
                     * <p>排序规则</p>
                     */
                    std::vector<std::string> m_collations;
                    bool m_collationsHasBeenSet;

                    /**
                     * <p>默认的排序规则</p>
                     */
                    std::string m_defaultCollation;
                    bool m_defaultCollationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CHARSETCOLLATIONITEM_H_
