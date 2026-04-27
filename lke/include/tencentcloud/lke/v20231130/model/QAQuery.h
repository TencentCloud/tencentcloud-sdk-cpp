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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_QAQUERY_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_QAQUERY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/TimeRange.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * QA查询参数
                */
                class QAQuery : public AbstractModel
                {
                public:
                    QAQuery();
                    ~QAQuery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>页码 从1开始</p>
                     * @return PageNumber <p>页码 从1开始</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码 从1开始</p>
                     * @param _pageNumber <p>页码 从1开始</p>
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>页大小 默认15 最大100</p>
                     * @return PageSize <p>页大小 默认15 最大100</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>页大小 默认15 最大100</p>
                     * @param _pageSize <p>页大小 默认15 最大100</p>
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>应用ID</p>
                     * @return BotBizId <p>应用ID</p>
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _botBizId <p>应用ID</p>
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取<p>查询内容</p>
                     * @return Query <p>查询内容</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>查询内容</p>
                     * @param _query <p>查询内容</p>
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
                     * 获取<p>分类ID</p>
                     * @return CateBizId <p>分类ID</p>
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 设置<p>分类ID</p>
                     * @param _cateBizId <p>分类ID</p>
                     * 
                     */
                    void SetCateBizId(const std::string& _cateBizId);

                    /**
                     * 判断参数 CateBizId 是否已赋值
                     * @return CateBizId 是否已赋值
                     * 
                     */
                    bool CateBizIdHasBeenSet() const;

                    /**
                     * 获取<p>校验状态的枚举值</p>
                     * @return AcceptStatus <p>校验状态的枚举值</p>
                     * 
                     */
                    std::vector<uint64_t> GetAcceptStatus() const;

                    /**
                     * 设置<p>校验状态的枚举值</p>
                     * @param _acceptStatus <p>校验状态的枚举值</p>
                     * 
                     */
                    void SetAcceptStatus(const std::vector<uint64_t>& _acceptStatus);

                    /**
                     * 判断参数 AcceptStatus 是否已赋值
                     * @return AcceptStatus 是否已赋值
                     * 
                     */
                    bool AcceptStatusHasBeenSet() const;

                    /**
                     * 获取<p>发布状态的枚举值</p>
                     * @return ReleaseStatus <p>发布状态的枚举值</p>
                     * 
                     */
                    std::vector<uint64_t> GetReleaseStatus() const;

                    /**
                     * 设置<p>发布状态的枚举值</p>
                     * @param _releaseStatus <p>发布状态的枚举值</p>
                     * 
                     */
                    void SetReleaseStatus(const std::vector<uint64_t>& _releaseStatus);

                    /**
                     * 判断参数 ReleaseStatus 是否已赋值
                     * @return ReleaseStatus 是否已赋值
                     * 
                     */
                    bool ReleaseStatusHasBeenSet() const;

                    /**
                     * 获取<p>文档ID</p>
                     * @return DocBizId <p>文档ID</p>
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置<p>文档ID</p>
                     * @param _docBizId <p>文档ID</p>
                     * 
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取<p>QAID</p>
                     * @return QaBizId <p>QAID</p>
                     * 
                     */
                    std::string GetQaBizId() const;

                    /**
                     * 设置<p>QAID</p>
                     * @param _qaBizId <p>QAID</p>
                     * 
                     */
                    void SetQaBizId(const std::string& _qaBizId);

                    /**
                     * 判断参数 QaBizId 是否已赋值
                     * @return QaBizId 是否已赋值
                     * 
                     */
                    bool QaBizIdHasBeenSet() const;

                    /**
                     * 获取<p>来源</p>
                     * @return Source <p>来源</p>
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置<p>来源</p>
                     * @param _source <p>来源</p>
                     * 
                     */
                    void SetSource(const uint64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>查询答案</p>
                     * @return QueryAnswer <p>查询答案</p>
                     * 
                     */
                    std::string GetQueryAnswer() const;

                    /**
                     * 设置<p>查询答案</p>
                     * @param _queryAnswer <p>查询答案</p>
                     * 
                     */
                    void SetQueryAnswer(const std::string& _queryAnswer);

                    /**
                     * 判断参数 QueryAnswer 是否已赋值
                     * @return QueryAnswer 是否已赋值
                     * 
                     */
                    bool QueryAnswerHasBeenSet() const;

                    /**
                     * 获取<p>查询类型 filename 名称、 attribute 标签</p>
                     * @return QueryType <p>查询类型 filename 名称、 attribute 标签</p>
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置<p>查询类型 filename 名称、 attribute 标签</p>
                     * @param _queryType <p>查询类型 filename 名称、 attribute 标签</p>
                     * 
                     */
                    void SetQueryType(const std::string& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

                    /**
                     * 获取<p>问答生效域检索，不检索不传。枚举值如下：<br>1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效。</p>
                     * @return EnableScope <p>问答生效域检索，不检索不传。枚举值如下：<br>1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效。</p>
                     * 
                     */
                    int64_t GetEnableScope() const;

                    /**
                     * 设置<p>问答生效域检索，不检索不传。枚举值如下：<br>1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效。</p>
                     * @param _enableScope <p>问答生效域检索，不检索不传。枚举值如下：<br>1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效。</p>
                     * 
                     */
                    void SetEnableScope(const int64_t& _enableScope);

                    /**
                     * 判断参数 EnableScope 是否已赋值
                     * @return EnableScope 是否已赋值
                     * 
                     */
                    bool EnableScopeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间范围</p>
                     * @return CreateTime <p>创建时间范围</p>
                     * 
                     */
                    TimeRange GetCreateTime() const;

                    /**
                     * 设置<p>创建时间范围</p>
                     * @param _createTime <p>创建时间范围</p>
                     * 
                     */
                    void SetCreateTime(const TimeRange& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间范围</p>
                     * @return UpdateTime <p>更新时间范围</p>
                     * 
                     */
                    TimeRange GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间范围</p>
                     * @param _updateTime <p>更新时间范围</p>
                     * 
                     */
                    void SetUpdateTime(const TimeRange& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>页码 从1开始</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>页大小 默认15 最大100</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>应用ID</p>
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * <p>查询内容</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>分类ID</p>
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * <p>校验状态的枚举值</p>
                     */
                    std::vector<uint64_t> m_acceptStatus;
                    bool m_acceptStatusHasBeenSet;

                    /**
                     * <p>发布状态的枚举值</p>
                     */
                    std::vector<uint64_t> m_releaseStatus;
                    bool m_releaseStatusHasBeenSet;

                    /**
                     * <p>文档ID</p>
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * <p>QAID</p>
                     */
                    std::string m_qaBizId;
                    bool m_qaBizIdHasBeenSet;

                    /**
                     * <p>来源</p>
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>查询答案</p>
                     */
                    std::string m_queryAnswer;
                    bool m_queryAnswerHasBeenSet;

                    /**
                     * <p>查询类型 filename 名称、 attribute 标签</p>
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * <p>问答生效域检索，不检索不传。枚举值如下：<br>1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效。</p>
                     */
                    int64_t m_enableScope;
                    bool m_enableScopeHasBeenSet;

                    /**
                     * <p>创建时间范围</p>
                     */
                    TimeRange m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间范围</p>
                     */
                    TimeRange m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_QAQUERY_H_
