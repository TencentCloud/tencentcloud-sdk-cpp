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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGESERIES_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGESERIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * 用量时间周期内的时序点列表（按 metric key 索引）。为 JSON 数组的字符串形式,数组长度与响应 Timestamps 一致，无数据点处为 null。具体包含哪些 key 由响应 MetricKeys 决定。
                */
                class UsageSeries : public AbstractModel
                {
                public:
                    UsageSeries();
                    ~UsageSeries() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>[tokens 族]总 token 数用量时间周期内的 JSON 字符串形式，如 <code>&quot;[12,null,15]&quot;</code>。</p>
                     * @return TotalToken <p>[tokens 族]总 token 数用量时间周期内的 JSON 字符串形式，如 <code>&quot;[12,null,15]&quot;</code>。</p>
                     * 
                     */
                    std::string GetTotalToken() const;

                    /**
                     * 设置<p>[tokens 族]总 token 数用量时间周期内的 JSON 字符串形式，如 <code>&quot;[12,null,15]&quot;</code>。</p>
                     * @param _totalToken <p>[tokens 族]总 token 数用量时间周期内的 JSON 字符串形式，如 <code>&quot;[12,null,15]&quot;</code>。</p>
                     * 
                     */
                    void SetTotalToken(const std::string& _totalToken);

                    /**
                     * 判断参数 TotalToken 是否已赋值
                     * @return TotalToken 是否已赋值
                     * 
                     */
                    bool TotalTokenHasBeenSet() const;

                    /**
                     * 获取<p>[tokens 族]输入 token 数用量时间周期内的 JSON 字符串形式，如 <code>&quot;[7,null,9]&quot;</code>。</p>
                     * @return InputTotalToken <p>[tokens 族]输入 token 数用量时间周期内的 JSON 字符串形式，如 <code>&quot;[7,null,9]&quot;</code>。</p>
                     * 
                     */
                    std::string GetInputTotalToken() const;

                    /**
                     * 设置<p>[tokens 族]输入 token 数用量时间周期内的 JSON 字符串形式，如 <code>&quot;[7,null,9]&quot;</code>。</p>
                     * @param _inputTotalToken <p>[tokens 族]输入 token 数用量时间周期内的 JSON 字符串形式，如 <code>&quot;[7,null,9]&quot;</code>。</p>
                     * 
                     */
                    void SetInputTotalToken(const std::string& _inputTotalToken);

                    /**
                     * 判断参数 InputTotalToken 是否已赋值
                     * @return InputTotalToken 是否已赋值
                     * 
                     */
                    bool InputTotalTokenHasBeenSet() const;

                    /**
                     * 获取<p>[tokens 族]输出 token 数用量时间周期内的 JSON 字符串形式，如 <code>&quot;[5,null,6]&quot;</code>。</p>
                     * @return OutputTotalToken <p>[tokens 族]输出 token 数用量时间周期内的 JSON 字符串形式，如 <code>&quot;[5,null,6]&quot;</code>。</p>
                     * 
                     */
                    std::string GetOutputTotalToken() const;

                    /**
                     * 设置<p>[tokens 族]输出 token 数用量时间周期内的 JSON 字符串形式，如 <code>&quot;[5,null,6]&quot;</code>。</p>
                     * @param _outputTotalToken <p>[tokens 族]输出 token 数用量时间周期内的 JSON 字符串形式，如 <code>&quot;[5,null,6]&quot;</code>。</p>
                     * 
                     */
                    void SetOutputTotalToken(const std::string& _outputTotalToken);

                    /**
                     * 判断参数 OutputTotalToken 是否已赋值
                     * @return OutputTotalToken 是否已赋值
                     * 
                     */
                    bool OutputTotalTokenHasBeenSet() const;

                    /**
                     * 获取<p>[tokens 族]读缓存 token 数用量时间周期内的 JSON 字符串形式，如<code>&quot;[5,null,6]&quot;</code>。</p>
                     * @return CacheTotalToken <p>[tokens 族]读缓存 token 数用量时间周期内的 JSON 字符串形式，如<code>&quot;[5,null,6]&quot;</code>。</p>
                     * 
                     */
                    std::string GetCacheTotalToken() const;

                    /**
                     * 设置<p>[tokens 族]读缓存 token 数用量时间周期内的 JSON 字符串形式，如<code>&quot;[5,null,6]&quot;</code>。</p>
                     * @param _cacheTotalToken <p>[tokens 族]读缓存 token 数用量时间周期内的 JSON 字符串形式，如<code>&quot;[5,null,6]&quot;</code>。</p>
                     * 
                     */
                    void SetCacheTotalToken(const std::string& _cacheTotalToken);

                    /**
                     * 判断参数 CacheTotalToken 是否已赋值
                     * @return CacheTotalToken 是否已赋值
                     * 
                     */
                    bool CacheTotalTokenHasBeenSet() const;

                    /**
                     * 获取<p>[search 族] 搜索请求数用量时间周期内的 JSON 字符串形式，如<code>&quot;[5,null,6]&quot;</code>。</p>
                     * @return SearchRequestCount <p>[search 族] 搜索请求数用量时间周期内的 JSON 字符串形式，如<code>&quot;[5,null,6]&quot;</code>。</p>
                     * 
                     */
                    std::string GetSearchRequestCount() const;

                    /**
                     * 设置<p>[search 族] 搜索请求数用量时间周期内的 JSON 字符串形式，如<code>&quot;[5,null,6]&quot;</code>。</p>
                     * @param _searchRequestCount <p>[search 族] 搜索请求数用量时间周期内的 JSON 字符串形式，如<code>&quot;[5,null,6]&quot;</code>。</p>
                     * 
                     */
                    void SetSearchRequestCount(const std::string& _searchRequestCount);

                    /**
                     * 判断参数 SearchRequestCount 是否已赋值
                     * @return SearchRequestCount 是否已赋值
                     * 
                     */
                    bool SearchRequestCountHasBeenSet() const;

                    /**
                     * 获取<p>[search 族] 搜索引擎调用次数用量时间周期内的 JSON 字符串形式，如<code>&quot;[5,null,6]&quot;</code>。</p>
                     * @return SearchCount <p>[search 族] 搜索引擎调用次数用量时间周期内的 JSON 字符串形式，如<code>&quot;[5,null,6]&quot;</code>。</p>
                     * 
                     */
                    std::string GetSearchCount() const;

                    /**
                     * 设置<p>[search 族] 搜索引擎调用次数用量时间周期内的 JSON 字符串形式，如<code>&quot;[5,null,6]&quot;</code>。</p>
                     * @param _searchCount <p>[search 族] 搜索引擎调用次数用量时间周期内的 JSON 字符串形式，如<code>&quot;[5,null,6]&quot;</code>。</p>
                     * 
                     */
                    void SetSearchCount(const std::string& _searchCount);

                    /**
                     * 判断参数 SearchCount 是否已赋值
                     * @return SearchCount 是否已赋值
                     * 
                     */
                    bool SearchCountHasBeenSet() const;

                private:

                    /**
                     * <p>[tokens 族]总 token 数用量时间周期内的 JSON 字符串形式，如 <code>&quot;[12,null,15]&quot;</code>。</p>
                     */
                    std::string m_totalToken;
                    bool m_totalTokenHasBeenSet;

                    /**
                     * <p>[tokens 族]输入 token 数用量时间周期内的 JSON 字符串形式，如 <code>&quot;[7,null,9]&quot;</code>。</p>
                     */
                    std::string m_inputTotalToken;
                    bool m_inputTotalTokenHasBeenSet;

                    /**
                     * <p>[tokens 族]输出 token 数用量时间周期内的 JSON 字符串形式，如 <code>&quot;[5,null,6]&quot;</code>。</p>
                     */
                    std::string m_outputTotalToken;
                    bool m_outputTotalTokenHasBeenSet;

                    /**
                     * <p>[tokens 族]读缓存 token 数用量时间周期内的 JSON 字符串形式，如<code>&quot;[5,null,6]&quot;</code>。</p>
                     */
                    std::string m_cacheTotalToken;
                    bool m_cacheTotalTokenHasBeenSet;

                    /**
                     * <p>[search 族] 搜索请求数用量时间周期内的 JSON 字符串形式，如<code>&quot;[5,null,6]&quot;</code>。</p>
                     */
                    std::string m_searchRequestCount;
                    bool m_searchRequestCountHasBeenSet;

                    /**
                     * <p>[search 族] 搜索引擎调用次数用量时间周期内的 JSON 字符串形式，如<code>&quot;[5,null,6]&quot;</code>。</p>
                     */
                    std::string m_searchCount;
                    bool m_searchCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGESERIES_H_
