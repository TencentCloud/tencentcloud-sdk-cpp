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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMODELLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMODELLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeModelList请求参数结构体
                */
                class DescribeModelListRequest : public AbstractModel
                {
                public:
                    DescribeModelListRequest();
                    ~DescribeModelListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型场景。0-不区分场景, 1-标准生成, 2-标准思考, 3-Agent思考, 4-多模态理解, 5-多模态问答, 6-改写, 7-长期记忆, 8-自然语言转SQL, 9-AI优化, 10-实时文件解析, 11-文件解析, 12-GraphRAG, 13-OpenClaw, 14-多模态Embedding, 15-Rerank, 16-文本Embedding, 17-Widget, 18-Claw模式, 19-工作流代码生成, 20-工作流大模型节点, 21-工作流节点专用向量化, 22-工作流参数提取, 23-工作流大模型知识问答, 24-工作流标签提取, 25-工作流意图识别, 26-工作流选项卡, 27-工作流逻辑判断, 28-文档生成问答, 29-知识库Schema</p><p>枚举值：</p><ul><li>0： 不区分场景</li><li>1： 标准生成</li><li>2： 标准思考</li><li>3： Agent思考</li><li>4： 多模态理解</li><li>5： 多模态问答</li><li>6： 改写</li><li>7： 长期记忆</li><li>8： 自然语言转SQL</li><li>9： AI优化</li><li>10： 实时文件解析</li><li>11： 文件解析</li><li>12： GraphRAG</li><li>13： OpenClaw</li><li>14： 多模态Embedding</li><li>15： Rerank</li><li>16： 文本Embedding</li><li>17： Widget</li><li>18： Claw模式</li><li>19： 工作流代码生成</li><li>20： 工作流大模型节点</li><li>21： 工作流节点专用向量化</li><li>22： 工作流参数提取</li><li>23： 工作流大模型知识问答</li><li>24： 工作流标签提取</li><li>25： 工作流意图识别</li><li>26： 工作流选项卡</li><li>27： 工作流逻辑判断</li><li>28： 文档生成问答</li><li>29： 知识库Schema</li></ul>
                     * @return ModelScene <p>模型场景。0-不区分场景, 1-标准生成, 2-标准思考, 3-Agent思考, 4-多模态理解, 5-多模态问答, 6-改写, 7-长期记忆, 8-自然语言转SQL, 9-AI优化, 10-实时文件解析, 11-文件解析, 12-GraphRAG, 13-OpenClaw, 14-多模态Embedding, 15-Rerank, 16-文本Embedding, 17-Widget, 18-Claw模式, 19-工作流代码生成, 20-工作流大模型节点, 21-工作流节点专用向量化, 22-工作流参数提取, 23-工作流大模型知识问答, 24-工作流标签提取, 25-工作流意图识别, 26-工作流选项卡, 27-工作流逻辑判断, 28-文档生成问答, 29-知识库Schema</p><p>枚举值：</p><ul><li>0： 不区分场景</li><li>1： 标准生成</li><li>2： 标准思考</li><li>3： Agent思考</li><li>4： 多模态理解</li><li>5： 多模态问答</li><li>6： 改写</li><li>7： 长期记忆</li><li>8： 自然语言转SQL</li><li>9： AI优化</li><li>10： 实时文件解析</li><li>11： 文件解析</li><li>12： GraphRAG</li><li>13： OpenClaw</li><li>14： 多模态Embedding</li><li>15： Rerank</li><li>16： 文本Embedding</li><li>17： Widget</li><li>18： Claw模式</li><li>19： 工作流代码生成</li><li>20： 工作流大模型节点</li><li>21： 工作流节点专用向量化</li><li>22： 工作流参数提取</li><li>23： 工作流大模型知识问答</li><li>24： 工作流标签提取</li><li>25： 工作流意图识别</li><li>26： 工作流选项卡</li><li>27： 工作流逻辑判断</li><li>28： 文档生成问答</li><li>29： 知识库Schema</li></ul>
                     * 
                     */
                    int64_t GetModelScene() const;

                    /**
                     * 设置<p>模型场景。0-不区分场景, 1-标准生成, 2-标准思考, 3-Agent思考, 4-多模态理解, 5-多模态问答, 6-改写, 7-长期记忆, 8-自然语言转SQL, 9-AI优化, 10-实时文件解析, 11-文件解析, 12-GraphRAG, 13-OpenClaw, 14-多模态Embedding, 15-Rerank, 16-文本Embedding, 17-Widget, 18-Claw模式, 19-工作流代码生成, 20-工作流大模型节点, 21-工作流节点专用向量化, 22-工作流参数提取, 23-工作流大模型知识问答, 24-工作流标签提取, 25-工作流意图识别, 26-工作流选项卡, 27-工作流逻辑判断, 28-文档生成问答, 29-知识库Schema</p><p>枚举值：</p><ul><li>0： 不区分场景</li><li>1： 标准生成</li><li>2： 标准思考</li><li>3： Agent思考</li><li>4： 多模态理解</li><li>5： 多模态问答</li><li>6： 改写</li><li>7： 长期记忆</li><li>8： 自然语言转SQL</li><li>9： AI优化</li><li>10： 实时文件解析</li><li>11： 文件解析</li><li>12： GraphRAG</li><li>13： OpenClaw</li><li>14： 多模态Embedding</li><li>15： Rerank</li><li>16： 文本Embedding</li><li>17： Widget</li><li>18： Claw模式</li><li>19： 工作流代码生成</li><li>20： 工作流大模型节点</li><li>21： 工作流节点专用向量化</li><li>22： 工作流参数提取</li><li>23： 工作流大模型知识问答</li><li>24： 工作流标签提取</li><li>25： 工作流意图识别</li><li>26： 工作流选项卡</li><li>27： 工作流逻辑判断</li><li>28： 文档生成问答</li><li>29： 知识库Schema</li></ul>
                     * @param _modelScene <p>模型场景。0-不区分场景, 1-标准生成, 2-标准思考, 3-Agent思考, 4-多模态理解, 5-多模态问答, 6-改写, 7-长期记忆, 8-自然语言转SQL, 9-AI优化, 10-实时文件解析, 11-文件解析, 12-GraphRAG, 13-OpenClaw, 14-多模态Embedding, 15-Rerank, 16-文本Embedding, 17-Widget, 18-Claw模式, 19-工作流代码生成, 20-工作流大模型节点, 21-工作流节点专用向量化, 22-工作流参数提取, 23-工作流大模型知识问答, 24-工作流标签提取, 25-工作流意图识别, 26-工作流选项卡, 27-工作流逻辑判断, 28-文档生成问答, 29-知识库Schema</p><p>枚举值：</p><ul><li>0： 不区分场景</li><li>1： 标准生成</li><li>2： 标准思考</li><li>3： Agent思考</li><li>4： 多模态理解</li><li>5： 多模态问答</li><li>6： 改写</li><li>7： 长期记忆</li><li>8： 自然语言转SQL</li><li>9： AI优化</li><li>10： 实时文件解析</li><li>11： 文件解析</li><li>12： GraphRAG</li><li>13： OpenClaw</li><li>14： 多模态Embedding</li><li>15： Rerank</li><li>16： 文本Embedding</li><li>17： Widget</li><li>18： Claw模式</li><li>19： 工作流代码生成</li><li>20： 工作流大模型节点</li><li>21： 工作流节点专用向量化</li><li>22： 工作流参数提取</li><li>23： 工作流大模型知识问答</li><li>24： 工作流标签提取</li><li>25： 工作流意图识别</li><li>26： 工作流选项卡</li><li>27： 工作流逻辑判断</li><li>28： 文档生成问答</li><li>29： 知识库Schema</li></ul>
                     * 
                     */
                    void SetModelScene(const int64_t& _modelScene);

                    /**
                     * 判断参数 ModelScene 是否已赋值
                     * @return ModelScene 是否已赋值
                     * 
                     */
                    bool ModelSceneHasBeenSet() const;

                    /**
                     * 获取<p>空间ID</p>
                     * @return SpaceId <p>空间ID</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>空间ID</p>
                     * @param _spaceId <p>空间ID</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>关键词模糊搜索</p>
                     * @return Query <p>关键词模糊搜索</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>关键词模糊搜索</p>
                     * @param _query <p>关键词模糊搜索</p>
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
                     * 获取<p>页码。从0开始</p>
                     * @return PageNumber <p>页码。从0开始</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码。从0开始</p>
                     * @param _pageNumber <p>页码。从0开始</p>
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
                     * 获取<p>每页数量，默认20，最大100</p>
                     * @return PageSize <p>每页数量，默认20，最大100</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数量，默认20，最大100</p>
                     * @param _pageSize <p>每页数量，默认20，最大100</p>
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
                     * 获取<p>过滤条件(多个 Filter 之间为 AND, 同一 Filter 多 Values 为 OR)<br>DeveloperName： 模型作者名称<br>ProviderName： 模型提供商名称<br>ProviderType：模型提供商类型</p>
                     * @return FilterList <p>过滤条件(多个 Filter 之间为 AND, 同一 Filter 多 Values 为 OR)<br>DeveloperName： 模型作者名称<br>ProviderName： 模型提供商名称<br>ProviderType：模型提供商类型</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>过滤条件(多个 Filter 之间为 AND, 同一 Filter 多 Values 为 OR)<br>DeveloperName： 模型作者名称<br>ProviderName： 模型提供商名称<br>ProviderType：模型提供商类型</p>
                     * @param _filterList <p>过滤条件(多个 Filter 之间为 AND, 同一 Filter 多 Values 为 OR)<br>DeveloperName： 模型作者名称<br>ProviderName： 模型提供商名称<br>ProviderType：模型提供商类型</p>
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                private:

                    /**
                     * <p>模型场景。0-不区分场景, 1-标准生成, 2-标准思考, 3-Agent思考, 4-多模态理解, 5-多模态问答, 6-改写, 7-长期记忆, 8-自然语言转SQL, 9-AI优化, 10-实时文件解析, 11-文件解析, 12-GraphRAG, 13-OpenClaw, 14-多模态Embedding, 15-Rerank, 16-文本Embedding, 17-Widget, 18-Claw模式, 19-工作流代码生成, 20-工作流大模型节点, 21-工作流节点专用向量化, 22-工作流参数提取, 23-工作流大模型知识问答, 24-工作流标签提取, 25-工作流意图识别, 26-工作流选项卡, 27-工作流逻辑判断, 28-文档生成问答, 29-知识库Schema</p><p>枚举值：</p><ul><li>0： 不区分场景</li><li>1： 标准生成</li><li>2： 标准思考</li><li>3： Agent思考</li><li>4： 多模态理解</li><li>5： 多模态问答</li><li>6： 改写</li><li>7： 长期记忆</li><li>8： 自然语言转SQL</li><li>9： AI优化</li><li>10： 实时文件解析</li><li>11： 文件解析</li><li>12： GraphRAG</li><li>13： OpenClaw</li><li>14： 多模态Embedding</li><li>15： Rerank</li><li>16： 文本Embedding</li><li>17： Widget</li><li>18： Claw模式</li><li>19： 工作流代码生成</li><li>20： 工作流大模型节点</li><li>21： 工作流节点专用向量化</li><li>22： 工作流参数提取</li><li>23： 工作流大模型知识问答</li><li>24： 工作流标签提取</li><li>25： 工作流意图识别</li><li>26： 工作流选项卡</li><li>27： 工作流逻辑判断</li><li>28： 文档生成问答</li><li>29： 知识库Schema</li></ul>
                     */
                    int64_t m_modelScene;
                    bool m_modelSceneHasBeenSet;

                    /**
                     * <p>空间ID</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>关键词模糊搜索</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>页码。从0开始</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页数量，默认20，最大100</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>过滤条件(多个 Filter 之间为 AND, 同一 Filter 多 Values 为 OR)<br>DeveloperName： 模型作者名称<br>ProviderName： 模型提供商名称<br>ProviderType：模型提供商类型</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMODELLISTREQUEST_H_
