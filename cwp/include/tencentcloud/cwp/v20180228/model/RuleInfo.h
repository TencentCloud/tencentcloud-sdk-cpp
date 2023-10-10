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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RULEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/FullTextInfo.h>
#include <tencentcloud/cwp/v20180228/model/KeyValueInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 索引规则
                */
                class RuleInfo : public AbstractModel
                {
                public:
                    RuleInfo();
                    ~RuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取全文索引的相关配置
                     * @return FullText 全文索引的相关配置
                     * 
                     */
                    FullTextInfo GetFullText() const;

                    /**
                     * 设置全文索引的相关配置
                     * @param _fullText 全文索引的相关配置
                     * 
                     */
                    void SetFullText(const FullTextInfo& _fullText);

                    /**
                     * 判断参数 FullText 是否已赋值
                     * @return FullText 是否已赋值
                     * 
                     */
                    bool FullTextHasBeenSet() const;

                    /**
                     * 获取键值索引的相关配置
                     * @return KeyValue 键值索引的相关配置
                     * 
                     */
                    KeyValueInfo GetKeyValue() const;

                    /**
                     * 设置键值索引的相关配置
                     * @param _keyValue 键值索引的相关配置
                     * 
                     */
                    void SetKeyValue(const KeyValueInfo& _keyValue);

                    /**
                     * 判断参数 KeyValue 是否已赋值
                     * @return KeyValue 是否已赋值
                     * 
                     */
                    bool KeyValueHasBeenSet() const;

                    /**
                     * 获取元字段索引配置
                     * @return Tag 元字段索引配置
                     * 
                     */
                    KeyValueInfo GetTag() const;

                    /**
                     * 设置元字段索引配置
                     * @param _tag 元字段索引配置
                     * 
                     */
                    void SetTag(const KeyValueInfo& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * 全文索引的相关配置
                     */
                    FullTextInfo m_fullText;
                    bool m_fullTextHasBeenSet;

                    /**
                     * 键值索引的相关配置
                     */
                    KeyValueInfo m_keyValue;
                    bool m_keyValueHasBeenSet;

                    /**
                     * 元字段索引配置
                     */
                    KeyValueInfo m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RULEINFO_H_
