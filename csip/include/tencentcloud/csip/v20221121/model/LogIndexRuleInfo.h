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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LOGINDEXRULEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LOGINDEXRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LogFullTextInfo.h>
#include <tencentcloud/csip/v20221121/model/LogRuleKeyValueInfo.h>
#include <tencentcloud/csip/v20221121/model/LogDynamicIndex.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 日志索引规则信息
                */
                class LogIndexRuleInfo : public AbstractModel
                {
                public:
                    LogIndexRuleInfo();
                    ~LogIndexRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>全文索引</p>
                     * @return FullText <p>全文索引</p>
                     * 
                     */
                    LogFullTextInfo GetFullText() const;

                    /**
                     * 设置<p>全文索引</p>
                     * @param _fullText <p>全文索引</p>
                     * 
                     */
                    void SetFullText(const LogFullTextInfo& _fullText);

                    /**
                     * 判断参数 FullText 是否已赋值
                     * @return FullText 是否已赋值
                     * 
                     */
                    bool FullTextHasBeenSet() const;

                    /**
                     * 获取<p>键值索引</p>
                     * @return KeyValue <p>键值索引</p>
                     * 
                     */
                    LogRuleKeyValueInfo GetKeyValue() const;

                    /**
                     * 设置<p>键值索引</p>
                     * @param _keyValue <p>键值索引</p>
                     * 
                     */
                    void SetKeyValue(const LogRuleKeyValueInfo& _keyValue);

                    /**
                     * 判断参数 KeyValue 是否已赋值
                     * @return KeyValue 是否已赋值
                     * 
                     */
                    bool KeyValueHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tag <p>标签</p>
                     * 
                     */
                    LogRuleKeyValueInfo GetTag() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tag <p>标签</p>
                     * 
                     */
                    void SetTag(const LogRuleKeyValueInfo& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取<p>动态索引</p>
                     * @return DynamicIndex <p>动态索引</p>
                     * 
                     */
                    LogDynamicIndex GetDynamicIndex() const;

                    /**
                     * 设置<p>动态索引</p>
                     * @param _dynamicIndex <p>动态索引</p>
                     * 
                     */
                    void SetDynamicIndex(const LogDynamicIndex& _dynamicIndex);

                    /**
                     * 判断参数 DynamicIndex 是否已赋值
                     * @return DynamicIndex 是否已赋值
                     * 
                     */
                    bool DynamicIndexHasBeenSet() const;

                private:

                    /**
                     * <p>全文索引</p>
                     */
                    LogFullTextInfo m_fullText;
                    bool m_fullTextHasBeenSet;

                    /**
                     * <p>键值索引</p>
                     */
                    LogRuleKeyValueInfo m_keyValue;
                    bool m_keyValueHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    LogRuleKeyValueInfo m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>动态索引</p>
                     */
                    LogDynamicIndex m_dynamicIndex;
                    bool m_dynamicIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LOGINDEXRULEINFO_H_
