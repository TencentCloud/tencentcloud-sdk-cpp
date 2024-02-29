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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_RULEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_RULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/FullTextInfo.h>
#include <tencentcloud/cls/v20201016/model/RuleKeyValueInfo.h>
#include <tencentcloud/cls/v20201016/model/RuleTagInfo.h>
#include <tencentcloud/cls/v20201016/model/DynamicIndex.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 索引规则，FullText、KeyValue、Tag参数必须输入一个有效参数
                */
                class RuleInfo : public AbstractModel
                {
                public:
                    RuleInfo();
                    ~RuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取全文索引配置, 为空时代表未开启全文索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullText 全文索引配置, 为空时代表未开启全文索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FullTextInfo GetFullText() const;

                    /**
                     * 设置全文索引配置, 为空时代表未开启全文索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullText 全文索引配置, 为空时代表未开启全文索引
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取键值索引配置，为空时代表未开启键值索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyValue 键值索引配置，为空时代表未开启键值索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RuleKeyValueInfo GetKeyValue() const;

                    /**
                     * 设置键值索引配置，为空时代表未开启键值索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyValue 键值索引配置，为空时代表未开启键值索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyValue(const RuleKeyValueInfo& _keyValue);

                    /**
                     * 判断参数 KeyValue 是否已赋值
                     * @return KeyValue 是否已赋值
                     * 
                     */
                    bool KeyValueHasBeenSet() const;

                    /**
                     * 获取元字段索引配置，为空时代表未开启元字段索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag 元字段索引配置，为空时代表未开启元字段索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RuleTagInfo GetTag() const;

                    /**
                     * 设置元字段索引配置，为空时代表未开启元字段索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tag 元字段索引配置，为空时代表未开启元字段索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTag(const RuleTagInfo& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取键值索引自动配置，为空时代表未开启该功能。
启用后自动将日志内的字段添加到键值索引中，包括日志中后续新增的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DynamicIndex 键值索引自动配置，为空时代表未开启该功能。
启用后自动将日志内的字段添加到键值索引中，包括日志中后续新增的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DynamicIndex GetDynamicIndex() const;

                    /**
                     * 设置键值索引自动配置，为空时代表未开启该功能。
启用后自动将日志内的字段添加到键值索引中，包括日志中后续新增的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dynamicIndex 键值索引自动配置，为空时代表未开启该功能。
启用后自动将日志内的字段添加到键值索引中，包括日志中后续新增的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDynamicIndex(const DynamicIndex& _dynamicIndex);

                    /**
                     * 判断参数 DynamicIndex 是否已赋值
                     * @return DynamicIndex 是否已赋值
                     * 
                     */
                    bool DynamicIndexHasBeenSet() const;

                private:

                    /**
                     * 全文索引配置, 为空时代表未开启全文索引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FullTextInfo m_fullText;
                    bool m_fullTextHasBeenSet;

                    /**
                     * 键值索引配置，为空时代表未开启键值索引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleKeyValueInfo m_keyValue;
                    bool m_keyValueHasBeenSet;

                    /**
                     * 元字段索引配置，为空时代表未开启元字段索引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleTagInfo m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 键值索引自动配置，为空时代表未开启该功能。
启用后自动将日志内的字段添加到键值索引中，包括日志中后续新增的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DynamicIndex m_dynamicIndex;
                    bool m_dynamicIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_RULEINFO_H_
