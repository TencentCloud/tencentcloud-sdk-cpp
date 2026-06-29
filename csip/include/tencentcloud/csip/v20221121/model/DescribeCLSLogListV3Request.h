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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLSLOGLISTV3REQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLSLOGLISTV3REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LogContextInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCLSLogListV3请求参数结构体
                */
                class DescribeCLSLogListV3Request : public AbstractModel
                {
                public:
                    DescribeCLSLogListV3Request();
                    ~DescribeCLSLogListV3Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开始时间</p>
                     * @return From <p>开始时间</p>
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _from <p>开始时间</p>
                     * 
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p>
                     * @return To <p>结束时间</p>
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _to <p>结束时间</p>
                     * 
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取<p>查询条件</p>
                     * @return Query <p>查询条件</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>查询条件</p>
                     * @param _query <p>查询条件</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>语法</p>
                     * @return SyntaxRule <p>语法</p>
                     * 
                     */
                    int64_t GetSyntaxRule() const;

                    /**
                     * 设置<p>语法</p>
                     * @param _syntaxRule <p>语法</p>
                     * 
                     */
                    void SetSyntaxRule(const int64_t& _syntaxRule);

                    /**
                     * 判断参数 SyntaxRule 是否已赋值
                     * @return SyntaxRule 是否已赋值
                     * 
                     */
                    bool SyntaxRuleHasBeenSet() const;

                    /**
                     * 获取<p>主题</p>
                     * @return Topics <p>主题</p>
                     * 
                     */
                    std::vector<LogContextInfo> GetTopics() const;

                    /**
                     * 设置<p>主题</p>
                     * @param _topics <p>主题</p>
                     * 
                     */
                    void SetTopics(const std::vector<LogContextInfo>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>排序</p>
                     * @return Sort <p>排序</p>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置<p>排序</p>
                     * @param _sort <p>排序</p>
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取<p>limit</p>
                     * @return Limit <p>limit</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>limit</p>
                     * @param _limit <p>limit</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>offset</p>
                     * @return Offset <p>offset</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>offset</p>
                     * @param _offset <p>offset</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>采样</p>
                     * @return SamplingRate <p>采样</p>
                     * 
                     */
                    double GetSamplingRate() const;

                    /**
                     * 设置<p>采样</p>
                     * @param _samplingRate <p>采样</p>
                     * 
                     */
                    void SetSamplingRate(const double& _samplingRate);

                    /**
                     * 判断参数 SamplingRate 是否已赋值
                     * @return SamplingRate 是否已赋值
                     * 
                     */
                    bool SamplingRateHasBeenSet() const;

                    /**
                     * 获取<p>是否高亮</p>
                     * @return HighLight <p>是否高亮</p>
                     * 
                     */
                    bool GetHighLight() const;

                    /**
                     * 设置<p>是否高亮</p>
                     * @param _highLight <p>是否高亮</p>
                     * 
                     */
                    void SetHighLight(const bool& _highLight);

                    /**
                     * 判断参数 HighLight 是否已赋值
                     * @return HighLight 是否已赋值
                     * 
                     */
                    bool HighLightHasBeenSet() const;

                    /**
                     * 获取<p>是否采用新分析</p>
                     * @return UseNewAnalysis <p>是否采用新分析</p>
                     * 
                     */
                    bool GetUseNewAnalysis() const;

                    /**
                     * 设置<p>是否采用新分析</p>
                     * @param _useNewAnalysis <p>是否采用新分析</p>
                     * 
                     */
                    void SetUseNewAnalysis(const bool& _useNewAnalysis);

                    /**
                     * 判断参数 UseNewAnalysis 是否已赋值
                     * @return UseNewAnalysis 是否已赋值
                     * 
                     */
                    bool UseNewAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>查询优化</p>
                     * @return QueryOptimize <p>查询优化</p>
                     * 
                     */
                    int64_t GetQueryOptimize() const;

                    /**
                     * 设置<p>查询优化</p>
                     * @param _queryOptimize <p>查询优化</p>
                     * 
                     */
                    void SetQueryOptimize(const int64_t& _queryOptimize);

                    /**
                     * 判断参数 QueryOptimize 是否已赋值
                     * @return QueryOptimize 是否已赋值
                     * 
                     */
                    bool QueryOptimizeHasBeenSet() const;

                    /**
                     * 获取<p>主题id</p>
                     * @return TopicId <p>主题id</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>主题id</p>
                     * @param _topicId <p>主题id</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>上下文信息</p>
                     * @return Context <p>上下文信息</p>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置<p>上下文信息</p>
                     * @param _context <p>上下文信息</p>
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取<p>查询类型</p>
                     * @return SubQueryTypes <p>查询类型</p>
                     * 
                     */
                    std::vector<std::string> GetSubQueryTypes() const;

                    /**
                     * 设置<p>查询类型</p>
                     * @param _subQueryTypes <p>查询类型</p>
                     * 
                     */
                    void SetSubQueryTypes(const std::vector<std::string>& _subQueryTypes);

                    /**
                     * 判断参数 SubQueryTypes 是否已赋值
                     * @return SubQueryTypes 是否已赋值
                     * 
                     */
                    bool SubQueryTypesHasBeenSet() const;

                private:

                    /**
                     * <p>开始时间</p>
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * <p>查询条件</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>语法</p>
                     */
                    int64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                    /**
                     * <p>主题</p>
                     */
                    std::vector<LogContextInfo> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>排序</p>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>limit</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>offset</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>采样</p>
                     */
                    double m_samplingRate;
                    bool m_samplingRateHasBeenSet;

                    /**
                     * <p>是否高亮</p>
                     */
                    bool m_highLight;
                    bool m_highLightHasBeenSet;

                    /**
                     * <p>是否采用新分析</p>
                     */
                    bool m_useNewAnalysis;
                    bool m_useNewAnalysisHasBeenSet;

                    /**
                     * <p>查询优化</p>
                     */
                    int64_t m_queryOptimize;
                    bool m_queryOptimizeHasBeenSet;

                    /**
                     * <p>主题id</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>上下文信息</p>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * <p>查询类型</p>
                     */
                    std::vector<std::string> m_subQueryTypes;
                    bool m_subQueryTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLSLOGLISTV3REQUEST_H_
