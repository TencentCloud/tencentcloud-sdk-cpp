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
                     * 获取<p>文档解析策略：1=OCR解析 2=智能解析 3=MLLM解析；不传默认智能解析<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DOC_PARSE_STRATEGY_UNKNOWN</td><td>0</td><td>未指定，走服务端默认（智能解析）</td></tr><tr><td>DOC_PARSE_STRATEGY_OCR</td><td>1</td><td>OCR 解析</td></tr><tr><td>DOC_PARSE_STRATEGY_SMART</td><td>2</td><td>智能解析（按图片类型自动选择：数据图/思维导图/架构图/流程图用 MLLM，其他图片用 OCR）</td></tr><tr><td>DOC_PARSE_STRATEGY_MLLM</td><td>3</td><td>MLLM 解析</td></tr></tbody></table></p>
                     * @return ParseStrategy <p>文档解析策略：1=OCR解析 2=智能解析 3=MLLM解析；不传默认智能解析<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DOC_PARSE_STRATEGY_UNKNOWN</td><td>0</td><td>未指定，走服务端默认（智能解析）</td></tr><tr><td>DOC_PARSE_STRATEGY_OCR</td><td>1</td><td>OCR 解析</td></tr><tr><td>DOC_PARSE_STRATEGY_SMART</td><td>2</td><td>智能解析（按图片类型自动选择：数据图/思维导图/架构图/流程图用 MLLM，其他图片用 OCR）</td></tr><tr><td>DOC_PARSE_STRATEGY_MLLM</td><td>3</td><td>MLLM 解析</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetParseStrategy() const;

                    /**
                     * 设置<p>文档解析策略：1=OCR解析 2=智能解析 3=MLLM解析；不传默认智能解析<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DOC_PARSE_STRATEGY_UNKNOWN</td><td>0</td><td>未指定，走服务端默认（智能解析）</td></tr><tr><td>DOC_PARSE_STRATEGY_OCR</td><td>1</td><td>OCR 解析</td></tr><tr><td>DOC_PARSE_STRATEGY_SMART</td><td>2</td><td>智能解析（按图片类型自动选择：数据图/思维导图/架构图/流程图用 MLLM，其他图片用 OCR）</td></tr><tr><td>DOC_PARSE_STRATEGY_MLLM</td><td>3</td><td>MLLM 解析</td></tr></tbody></table></p>
                     * @param _parseStrategy <p>文档解析策略：1=OCR解析 2=智能解析 3=MLLM解析；不传默认智能解析<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DOC_PARSE_STRATEGY_UNKNOWN</td><td>0</td><td>未指定，走服务端默认（智能解析）</td></tr><tr><td>DOC_PARSE_STRATEGY_OCR</td><td>1</td><td>OCR 解析</td></tr><tr><td>DOC_PARSE_STRATEGY_SMART</td><td>2</td><td>智能解析（按图片类型自动选择：数据图/思维导图/架构图/流程图用 MLLM，其他图片用 OCR）</td></tr><tr><td>DOC_PARSE_STRATEGY_MLLM</td><td>3</td><td>MLLM 解析</td></tr></tbody></table></p>
                     * 
                     */
                    void SetParseStrategy(const int64_t& _parseStrategy);

                    /**
                     * 判断参数 ParseStrategy 是否已赋值
                     * @return ParseStrategy 是否已赋值
                     * 
                     */
                    bool ParseStrategyHasBeenSet() const;

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
                     * <p>文档解析策略：1=OCR解析 2=智能解析 3=MLLM解析；不传默认智能解析<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DOC_PARSE_STRATEGY_UNKNOWN</td><td>0</td><td>未指定，走服务端默认（智能解析）</td></tr><tr><td>DOC_PARSE_STRATEGY_OCR</td><td>1</td><td>OCR 解析</td></tr><tr><td>DOC_PARSE_STRATEGY_SMART</td><td>2</td><td>智能解析（按图片类型自动选择：数据图/思维导图/架构图/流程图用 MLLM，其他图片用 OCR）</td></tr><tr><td>DOC_PARSE_STRATEGY_MLLM</td><td>3</td><td>MLLM 解析</td></tr></tbody></table></p>
                     */
                    int64_t m_parseStrategy;
                    bool m_parseStrategyHasBeenSet;

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
