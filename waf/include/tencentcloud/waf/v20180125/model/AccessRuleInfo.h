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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_ACCESSRULEINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_ACCESSRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/AccessFullTextInfo.h>
#include <tencentcloud/waf/v20180125/model/AccessRuleKeyValueInfo.h>
#include <tencentcloud/waf/v20180125/model/AccessRuleTagInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeAccessIndex接口的出参数
                */
                class AccessRuleInfo : public AbstractModel
                {
                public:
                    AccessRuleInfo();
                    ~AccessRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取全文索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullText 全文索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AccessFullTextInfo GetFullText() const;

                    /**
                     * 设置全文索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullText 全文索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFullText(const AccessFullTextInfo& _fullText);

                    /**
                     * 判断参数 FullText 是否已赋值
                     * @return FullText 是否已赋值
                     * 
                     */
                    bool FullTextHasBeenSet() const;

                    /**
                     * 获取键值索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyValue 键值索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AccessRuleKeyValueInfo GetKeyValue() const;

                    /**
                     * 设置键值索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyValue 键值索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyValue(const AccessRuleKeyValueInfo& _keyValue);

                    /**
                     * 判断参数 KeyValue 是否已赋值
                     * @return KeyValue 是否已赋值
                     * 
                     */
                    bool KeyValueHasBeenSet() const;

                    /**
                     * 获取元字段索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag 元字段索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AccessRuleTagInfo GetTag() const;

                    /**
                     * 设置元字段索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tag 元字段索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTag(const AccessRuleTagInfo& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * 全文索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AccessFullTextInfo m_fullText;
                    bool m_fullTextHasBeenSet;

                    /**
                     * 键值索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AccessRuleKeyValueInfo m_keyValue;
                    bool m_keyValueHasBeenSet;

                    /**
                     * 元字段索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AccessRuleTagInfo m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ACCESSRULEINFO_H_
