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
                     * 获取页码


                     * @return PageNumber 页码


                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码


                     * @param _pageNumber 页码


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
                     * 获取每页数量

                     * @return PageSize 每页数量

                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数量

                     * @param _pageSize 每页数量

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
                     * 获取应用ID
                     * @return BotBizId 应用ID
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置应用ID
                     * @param _botBizId 应用ID
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
                     * 获取查询内容

                     * @return Query 查询内容

                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询内容

                     * @param _query 查询内容

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
                     * 获取分类ID

                     * @return CateBizId 分类ID

                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 设置分类ID

                     * @param _cateBizId 分类ID

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
                     * 获取校验状态

                     * @return AcceptStatus 校验状态

                     * 
                     */
                    std::vector<uint64_t> GetAcceptStatus() const;

                    /**
                     * 设置校验状态

                     * @param _acceptStatus 校验状态

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
                     * 获取发布状态

                     * @return ReleaseStatus 发布状态

                     * 
                     */
                    std::vector<uint64_t> GetReleaseStatus() const;

                    /**
                     * 设置发布状态

                     * @param _releaseStatus 发布状态

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
                     * 获取文档ID

                     * @return DocBizId 文档ID

                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置文档ID

                     * @param _docBizId 文档ID

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
                     * 获取QAID

                     * @return QaBizId QAID

                     * 
                     */
                    std::string GetQaBizId() const;

                    /**
                     * 设置QAID

                     * @param _qaBizId QAID

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
                     * 获取来源

                     * @return Source 来源

                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置来源

                     * @param _source 来源

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
                     * 获取查询答案

                     * @return QueryAnswer 查询答案

                     * 
                     */
                    std::string GetQueryAnswer() const;

                    /**
                     * 设置查询答案

                     * @param _queryAnswer 查询答案

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
                     * 获取查询类型 filename 名称、 attribute 标签
                     * @return QueryType 查询类型 filename 名称、 attribute 标签
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置查询类型 filename 名称、 attribute 标签
                     * @param _queryType 查询类型 filename 名称、 attribute 标签
                     * 
                     */
                    void SetQueryType(const std::string& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

                private:

                    /**
                     * 页码


                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数量

                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 查询内容

                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 分类ID

                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * 校验状态

                     */
                    std::vector<uint64_t> m_acceptStatus;
                    bool m_acceptStatusHasBeenSet;

                    /**
                     * 发布状态

                     */
                    std::vector<uint64_t> m_releaseStatus;
                    bool m_releaseStatusHasBeenSet;

                    /**
                     * 文档ID

                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * QAID

                     */
                    std::string m_qaBizId;
                    bool m_qaBizIdHasBeenSet;

                    /**
                     * 来源

                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 查询答案

                     */
                    std::string m_queryAnswer;
                    bool m_queryAnswerHasBeenSet;

                    /**
                     * 查询类型 filename 名称、 attribute 标签
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_QAQUERY_H_
