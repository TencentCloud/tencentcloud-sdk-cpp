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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGESTATS_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGESTATS_H_

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
                * 时间周期内的统计聚合值（按 metric key 索引）。声明 tokens / search 两族字段都在本 schema 中，按 MetricKeys 实际返回取值，参见响应顶层 `MetricKeys` 字段。
                */
                class UsageStats : public AbstractModel
                {
                public:
                    UsageStats();
                    ~UsageStats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>[tokens 族] 时间周期内的累计总 token 数。</p>
                     * @return TotalToken <p>[tokens 族] 时间周期内的累计总 token 数。</p>
                     * 
                     */
                    int64_t GetTotalToken() const;

                    /**
                     * 设置<p>[tokens 族] 时间周期内的累计总 token 数。</p>
                     * @param _totalToken <p>[tokens 族] 时间周期内的累计总 token 数。</p>
                     * 
                     */
                    void SetTotalToken(const int64_t& _totalToken);

                    /**
                     * 判断参数 TotalToken 是否已赋值
                     * @return TotalToken 是否已赋值
                     * 
                     */
                    bool TotalTokenHasBeenSet() const;

                    /**
                     * 获取<p>[tokens 族] 时间周期内的累计输入 token 数。</p>
                     * @return InputTotalToken <p>[tokens 族] 时间周期内的累计输入 token 数。</p>
                     * 
                     */
                    int64_t GetInputTotalToken() const;

                    /**
                     * 设置<p>[tokens 族] 时间周期内的累计输入 token 数。</p>
                     * @param _inputTotalToken <p>[tokens 族] 时间周期内的累计输入 token 数。</p>
                     * 
                     */
                    void SetInputTotalToken(const int64_t& _inputTotalToken);

                    /**
                     * 判断参数 InputTotalToken 是否已赋值
                     * @return InputTotalToken 是否已赋值
                     * 
                     */
                    bool InputTotalTokenHasBeenSet() const;

                    /**
                     * 获取<p>[tokens 族] 时间周期内的累计输出 token 数。</p>
                     * @return OutputTotalToken <p>[tokens 族] 时间周期内的累计输出 token 数。</p>
                     * 
                     */
                    int64_t GetOutputTotalToken() const;

                    /**
                     * 设置<p>[tokens 族] 时间周期内的累计输出 token 数。</p>
                     * @param _outputTotalToken <p>[tokens 族] 时间周期内的累计输出 token 数。</p>
                     * 
                     */
                    void SetOutputTotalToken(const int64_t& _outputTotalToken);

                    /**
                     * 判断参数 OutputTotalToken 是否已赋值
                     * @return OutputTotalToken 是否已赋值
                     * 
                     */
                    bool OutputTotalTokenHasBeenSet() const;

                    /**
                     * 获取<p>[tokens 族] 时间周期内的累计读缓存 token 数（命中缓存部分）</p>
                     * @return CacheTotalToken <p>[tokens 族] 时间周期内的累计读缓存 token 数（命中缓存部分）</p>
                     * 
                     */
                    int64_t GetCacheTotalToken() const;

                    /**
                     * 设置<p>[tokens 族] 时间周期内的累计读缓存 token 数（命中缓存部分）</p>
                     * @param _cacheTotalToken <p>[tokens 族] 时间周期内的累计读缓存 token 数（命中缓存部分）</p>
                     * 
                     */
                    void SetCacheTotalToken(const int64_t& _cacheTotalToken);

                    /**
                     * 判断参数 CacheTotalToken 是否已赋值
                     * @return CacheTotalToken 是否已赋值
                     * 
                     */
                    bool CacheTotalTokenHasBeenSet() const;

                    /**
                     * 获取<p>[search 族] 整段累计联网搜索请求数</p>
                     * @return SearchRequestCount <p>[search 族] 整段累计联网搜索请求数</p>
                     * 
                     */
                    int64_t GetSearchRequestCount() const;

                    /**
                     * 设置<p>[search 族] 整段累计联网搜索请求数</p>
                     * @param _searchRequestCount <p>[search 族] 整段累计联网搜索请求数</p>
                     * 
                     */
                    void SetSearchRequestCount(const int64_t& _searchRequestCount);

                    /**
                     * 判断参数 SearchRequestCount 是否已赋值
                     * @return SearchRequestCount 是否已赋值
                     * 
                     */
                    bool SearchRequestCountHasBeenSet() const;

                    /**
                     * 获取<p>[search 族] 整段累计搜索引擎调用次数</p>
                     * @return SearchCount <p>[search 族] 整段累计搜索引擎调用次数</p>
                     * 
                     */
                    int64_t GetSearchCount() const;

                    /**
                     * 设置<p>[search 族] 整段累计搜索引擎调用次数</p>
                     * @param _searchCount <p>[search 族] 整段累计搜索引擎调用次数</p>
                     * 
                     */
                    void SetSearchCount(const int64_t& _searchCount);

                    /**
                     * 判断参数 SearchCount 是否已赋值
                     * @return SearchCount 是否已赋值
                     * 
                     */
                    bool SearchCountHasBeenSet() const;

                private:

                    /**
                     * <p>[tokens 族] 时间周期内的累计总 token 数。</p>
                     */
                    int64_t m_totalToken;
                    bool m_totalTokenHasBeenSet;

                    /**
                     * <p>[tokens 族] 时间周期内的累计输入 token 数。</p>
                     */
                    int64_t m_inputTotalToken;
                    bool m_inputTotalTokenHasBeenSet;

                    /**
                     * <p>[tokens 族] 时间周期内的累计输出 token 数。</p>
                     */
                    int64_t m_outputTotalToken;
                    bool m_outputTotalTokenHasBeenSet;

                    /**
                     * <p>[tokens 族] 时间周期内的累计读缓存 token 数（命中缓存部分）</p>
                     */
                    int64_t m_cacheTotalToken;
                    bool m_cacheTotalTokenHasBeenSet;

                    /**
                     * <p>[search 族] 整段累计联网搜索请求数</p>
                     */
                    int64_t m_searchRequestCount;
                    bool m_searchRequestCountHasBeenSet;

                    /**
                     * <p>[search 族] 整段累计搜索引擎调用次数</p>
                     */
                    int64_t m_searchCount;
                    bool m_searchCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGESTATS_H_
