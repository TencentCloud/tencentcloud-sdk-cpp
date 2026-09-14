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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DOCPARSECONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DOCPARSECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ContentFilter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 文档解析配置
                */
                class DocParseConfig : public AbstractModel
                {
                public:
                    DocParseConfig();
                    ~DocParseConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>内容过滤配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContentFilter <p>内容过滤配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ContentFilter GetContentFilter() const;

                    /**
                     * 设置<p>内容过滤配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contentFilter <p>内容过滤配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContentFilter(const ContentFilter& _contentFilter);

                    /**
                     * 判断参数 ContentFilter 是否已赋值
                     * @return ContentFilter 是否已赋值
                     * 
                     */
                    bool ContentFilterHasBeenSet() const;

                    /**
                     * 获取<p>分割规则</p>
                     * @return SplitRule <p>分割规则</p>
                     * 
                     */
                    std::string GetSplitRule() const;

                    /**
                     * 设置<p>分割规则</p>
                     * @param _splitRule <p>分割规则</p>
                     * 
                     */
                    void SetSplitRule(const std::string& _splitRule);

                    /**
                     * 判断参数 SplitRule 是否已赋值
                     * @return SplitRule 是否已赋值
                     * 
                     */
                    bool SplitRuleHasBeenSet() const;

                private:

                    /**
                     * <p>内容过滤配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ContentFilter m_contentFilter;
                    bool m_contentFilterHasBeenSet;

                    /**
                     * <p>分割规则</p>
                     */
                    std::string m_splitRule;
                    bool m_splitRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DOCPARSECONFIG_H_
