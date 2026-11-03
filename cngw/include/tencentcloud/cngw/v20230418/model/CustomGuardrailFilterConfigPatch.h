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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILFILTERCONFIGPATCH_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILFILTERCONFIGPATCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 自定义安全护栏过滤与采样局部更新配置。仅更新显式传入的字段；省略字段保留原值，文中默认值指创建时默认值，不表示修改时重置。
                */
                class CustomGuardrailFilterConfigPatch : public AbstractModel
                {
                public:
                    CustomGuardrailFilterConfigPatch();
                    ~CustomGuardrailFilterConfigPatch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>请求方向的流式筛选：all 全部（创建默认）、streaming 流式、non_streaming 非流式。依据请求的流式意图/协议识别；无法可靠判别时保守保留送审资格，不应依赖该字段实现强隔离。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestStreamMode <p>请求方向的流式筛选：all 全部（创建默认）、streaming 流式、non_streaming 非流式。依据请求的流式意图/协议识别；无法可靠判别时保守保留送审资格，不应依赖该字段实现强隔离。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestStreamMode() const;

                    /**
                     * 设置<p>请求方向的流式筛选：all 全部（创建默认）、streaming 流式、non_streaming 非流式。依据请求的流式意图/协议识别；无法可靠判别时保守保留送审资格，不应依赖该字段实现强隔离。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestStreamMode <p>请求方向的流式筛选：all 全部（创建默认）、streaming 流式、non_streaming 非流式。依据请求的流式意图/协议识别；无法可靠判别时保守保留送审资格，不应依赖该字段实现强隔离。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestStreamMode(const std::string& _requestStreamMode);

                    /**
                     * 判断参数 RequestStreamMode 是否已赋值
                     * @return RequestStreamMode 是否已赋值
                     * 
                     */
                    bool RequestStreamModeHasBeenSet() const;

                    /**
                     * 获取<p>响应方向的流式筛选：all 全部（创建默认）、streaming 仅流式、non_streaming 仅非流式。开启输出审核并选择 streaming 可用于 SSE 响应审核。此字段不设置窗口大小或分片步长。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseStreamMode <p>响应方向的流式筛选：all 全部（创建默认）、streaming 仅流式、non_streaming 仅非流式。开启输出审核并选择 streaming 可用于 SSE 响应审核。此字段不设置窗口大小或分片步长。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResponseStreamMode() const;

                    /**
                     * 设置<p>响应方向的流式筛选：all 全部（创建默认）、streaming 仅流式、non_streaming 仅非流式。开启输出审核并选择 streaming 可用于 SSE 响应审核。此字段不设置窗口大小或分片步长。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseStreamMode <p>响应方向的流式筛选：all 全部（创建默认）、streaming 仅流式、non_streaming 仅非流式。开启输出审核并选择 streaming 可用于 SSE 响应审核。此字段不设置窗口大小或分片步长。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResponseStreamMode(const std::string& _responseStreamMode);

                    /**
                     * 判断参数 ResponseStreamMode 是否已赋值
                     * @return ResponseStreamMode 是否已赋值
                     * 
                     */
                    bool ResponseStreamModeHasBeenSet() const;

                    /**
                     * 获取<p>请求送审触发关键词；最多 64 项，每项非空且最长 128 字符。默认 [] 不按关键词过滤；非空时按 KeywordMatchMode 满足条件才送审，不是本地违禁词阻断列表。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestKeywords <p>请求送审触发关键词；最多 64 项，每项非空且最长 128 字符。默认 [] 不按关键词过滤；非空时按 KeywordMatchMode 满足条件才送审，不是本地违禁词阻断列表。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRequestKeywords() const;

                    /**
                     * 设置<p>请求送审触发关键词；最多 64 项，每项非空且最长 128 字符。默认 [] 不按关键词过滤；非空时按 KeywordMatchMode 满足条件才送审，不是本地违禁词阻断列表。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestKeywords <p>请求送审触发关键词；最多 64 项，每项非空且最长 128 字符。默认 [] 不按关键词过滤；非空时按 KeywordMatchMode 满足条件才送审，不是本地违禁词阻断列表。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestKeywords(const std::vector<std::string>& _requestKeywords);

                    /**
                     * 判断参数 RequestKeywords 是否已赋值
                     * @return RequestKeywords 是否已赋值
                     * 
                     */
                    bool RequestKeywordsHasBeenSet() const;

                    /**
                     * 获取<p>响应送审触发关键词；最多 64 项，每项非空且最长 128 字符。默认 [] 不按关键词过滤。流式审核按增量审核单元执行筛选，不代表等待完整响应后统一判断。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseKeywords <p>响应送审触发关键词；最多 64 项，每项非空且最长 128 字符。默认 [] 不按关键词过滤。流式审核按增量审核单元执行筛选，不代表等待完整响应后统一判断。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetResponseKeywords() const;

                    /**
                     * 设置<p>响应送审触发关键词；最多 64 项，每项非空且最长 128 字符。默认 [] 不按关键词过滤。流式审核按增量审核单元执行筛选，不代表等待完整响应后统一判断。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseKeywords <p>响应送审触发关键词；最多 64 项，每项非空且最长 128 字符。默认 [] 不按关键词过滤。流式审核按增量审核单元执行筛选，不代表等待完整响应后统一判断。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResponseKeywords(const std::vector<std::string>& _responseKeywords);

                    /**
                     * 判断参数 ResponseKeywords 是否已赋值
                     * @return ResponseKeywords 是否已赋值
                     * 
                     */
                    bool ResponseKeywordsHasBeenSet() const;

                    /**
                     * 获取<p>关键词匹配方式：any 任一关键词命中（创建默认）；all 所有关键词命中。按文本字面子串匹配，不是正则表达式。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeywordMatchMode <p>关键词匹配方式：any 任一关键词命中（创建默认）；all 所有关键词命中。按文本字面子串匹配，不是正则表达式。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeywordMatchMode() const;

                    /**
                     * 设置<p>关键词匹配方式：any 任一关键词命中（创建默认）；all 所有关键词命中。按文本字面子串匹配，不是正则表达式。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keywordMatchMode <p>关键词匹配方式：any 任一关键词命中（创建默认）；all 所有关键词命中。按文本字面子串匹配，不是正则表达式。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeywordMatchMode(const std::string& _keywordMatchMode);

                    /**
                     * 判断参数 KeywordMatchMode 是否已赋值
                     * @return KeywordMatchMode 是否已赋值
                     * 
                     */
                    bool KeywordMatchModeHasBeenSet() const;

                    /**
                     * 获取<p>关键词匹配是否区分大小写，创建默认 false。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeywordCaseSensitive <p>关键词匹配是否区分大小写，创建默认 false。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetKeywordCaseSensitive() const;

                    /**
                     * 设置<p>关键词匹配是否区分大小写，创建默认 false。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keywordCaseSensitive <p>关键词匹配是否区分大小写，创建默认 false。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeywordCaseSensitive(const bool& _keywordCaseSensitive);

                    /**
                     * 判断参数 KeywordCaseSensitive 是否已赋值
                     * @return KeywordCaseSensitive 是否已赋值
                     * 
                     */
                    bool KeywordCaseSensitiveHasBeenSet() const;

                    /**
                     * 获取<p>是否启用送审采样，创建默认 false（不按采样率跳过）。采样与方向、流式、关键词过滤叠加；开启低比例采样会使未抽中的内容不送审。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SamplingEnabled <p>是否启用送审采样，创建默认 false（不按采样率跳过）。采样与方向、流式、关键词过滤叠加；开启低比例采样会使未抽中的内容不送审。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSamplingEnabled() const;

                    /**
                     * 设置<p>是否启用送审采样，创建默认 false（不按采样率跳过）。采样与方向、流式、关键词过滤叠加；开启低比例采样会使未抽中的内容不送审。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _samplingEnabled <p>是否启用送审采样，创建默认 false（不按采样率跳过）。采样与方向、流式、关键词过滤叠加；开启低比例采样会使未抽中的内容不送审。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSamplingEnabled(const bool& _samplingEnabled);

                    /**
                     * 判断参数 SamplingEnabled 是否已赋值
                     * @return SamplingEnabled 是否已赋值
                     * 
                     */
                    bool SamplingEnabledHasBeenSet() const;

                    /**
                     * 获取<p>请求送审采样比例，范围 0～1，创建默认 1；SamplingEnabled=true 时使用。0 不抽取，1 全量，0.1 表示 10%，不是填写整数 10。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestSamplingRate <p>请求送审采样比例，范围 0～1，创建默认 1；SamplingEnabled=true 时使用。0 不抽取，1 全量，0.1 表示 10%，不是填写整数 10。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRequestSamplingRate() const;

                    /**
                     * 设置<p>请求送审采样比例，范围 0～1，创建默认 1；SamplingEnabled=true 时使用。0 不抽取，1 全量，0.1 表示 10%，不是填写整数 10。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestSamplingRate <p>请求送审采样比例，范围 0～1，创建默认 1；SamplingEnabled=true 时使用。0 不抽取，1 全量，0.1 表示 10%，不是填写整数 10。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestSamplingRate(const double& _requestSamplingRate);

                    /**
                     * 判断参数 RequestSamplingRate 是否已赋值
                     * @return RequestSamplingRate 是否已赋值
                     * 
                     */
                    bool RequestSamplingRateHasBeenSet() const;

                    /**
                     * 获取<p>响应送审采样比例，范围 0～1，创建默认 1；SamplingEnabled=true 时使用。同一请求响应流保持一致的采样选择，不是对每个 SSE 网络 chunk 独立抽样。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseSamplingRate <p>响应送审采样比例，范围 0～1，创建默认 1；SamplingEnabled=true 时使用。同一请求响应流保持一致的采样选择，不是对每个 SSE 网络 chunk 独立抽样。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetResponseSamplingRate() const;

                    /**
                     * 设置<p>响应送审采样比例，范围 0～1，创建默认 1；SamplingEnabled=true 时使用。同一请求响应流保持一致的采样选择，不是对每个 SSE 网络 chunk 独立抽样。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseSamplingRate <p>响应送审采样比例，范围 0～1，创建默认 1；SamplingEnabled=true 时使用。同一请求响应流保持一致的采样选择，不是对每个 SSE 网络 chunk 独立抽样。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResponseSamplingRate(const double& _responseSamplingRate);

                    /**
                     * 判断参数 ResponseSamplingRate 是否已赋值
                     * @return ResponseSamplingRate 是否已赋值
                     * 
                     */
                    bool ResponseSamplingRateHasBeenSet() const;

                private:

                    /**
                     * <p>请求方向的流式筛选：all 全部（创建默认）、streaming 流式、non_streaming 非流式。依据请求的流式意图/协议识别；无法可靠判别时保守保留送审资格，不应依赖该字段实现强隔离。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestStreamMode;
                    bool m_requestStreamModeHasBeenSet;

                    /**
                     * <p>响应方向的流式筛选：all 全部（创建默认）、streaming 仅流式、non_streaming 仅非流式。开启输出审核并选择 streaming 可用于 SSE 响应审核。此字段不设置窗口大小或分片步长。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_responseStreamMode;
                    bool m_responseStreamModeHasBeenSet;

                    /**
                     * <p>请求送审触发关键词；最多 64 项，每项非空且最长 128 字符。默认 [] 不按关键词过滤；非空时按 KeywordMatchMode 满足条件才送审，不是本地违禁词阻断列表。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_requestKeywords;
                    bool m_requestKeywordsHasBeenSet;

                    /**
                     * <p>响应送审触发关键词；最多 64 项，每项非空且最长 128 字符。默认 [] 不按关键词过滤。流式审核按增量审核单元执行筛选，不代表等待完整响应后统一判断。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_responseKeywords;
                    bool m_responseKeywordsHasBeenSet;

                    /**
                     * <p>关键词匹配方式：any 任一关键词命中（创建默认）；all 所有关键词命中。按文本字面子串匹配，不是正则表达式。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keywordMatchMode;
                    bool m_keywordMatchModeHasBeenSet;

                    /**
                     * <p>关键词匹配是否区分大小写，创建默认 false。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_keywordCaseSensitive;
                    bool m_keywordCaseSensitiveHasBeenSet;

                    /**
                     * <p>是否启用送审采样，创建默认 false（不按采样率跳过）。采样与方向、流式、关键词过滤叠加；开启低比例采样会使未抽中的内容不送审。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_samplingEnabled;
                    bool m_samplingEnabledHasBeenSet;

                    /**
                     * <p>请求送审采样比例，范围 0～1，创建默认 1；SamplingEnabled=true 时使用。0 不抽取，1 全量，0.1 表示 10%，不是填写整数 10。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_requestSamplingRate;
                    bool m_requestSamplingRateHasBeenSet;

                    /**
                     * <p>响应送审采样比例，范围 0～1，创建默认 1；SamplingEnabled=true 时使用。同一请求响应流保持一致的采样选择，不是对每个 SSE 网络 chunk 独立抽样。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_responseSamplingRate;
                    bool m_responseSamplingRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILFILTERCONFIGPATCH_H_
