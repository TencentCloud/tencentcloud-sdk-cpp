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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTDOCREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTDOCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/DocFilterFlag.h>
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
                * ListDoc请求参数结构体
                */
                class ListDocRequest : public AbstractModel
                {
                public:
                    ListDocRequest();
                    ~ListDocRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用ID, 获取方式参看 <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。<br>查询知识库下文档时，该参数填入知识库ID。</p>
                     * @return BotBizId <p>应用ID, 获取方式参看 <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。<br>查询知识库下文档时，该参数填入知识库ID。</p>
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置<p>应用ID, 获取方式参看 <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。<br>查询知识库下文档时，该参数填入知识库ID。</p>
                     * @param _botBizId <p>应用ID, 获取方式参看 <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。<br>查询知识库下文档时，该参数填入知识库ID。</p>
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
                     * 获取<p>页码(必须大于0)</p>
                     * @return PageNumber <p>页码(必须大于0)</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码(必须大于0)</p>
                     * @param _pageNumber <p>页码(必须大于0)</p>
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
                     * 获取<p>每页数量(取值范围1-200)</p>
                     * @return PageSize <p>每页数量(取值范围1-200)</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数量(取值范围1-200)</p>
                     * @param _pageSize <p>每页数量(取值范围1-200)</p>
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
                     * 获取<p>查询内容</p><p>输入特定标识 lke:system:untagged  将查询所有未关联标签的文档</p>
                     * @return Query <p>查询内容</p><p>输入特定标识 lke:system:untagged  将查询所有未关联标签的文档</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>查询内容</p><p>输入特定标识 lke:system:untagged  将查询所有未关联标签的文档</p>
                     * @param _query <p>查询内容</p><p>输入特定标识 lke:system:untagged  将查询所有未关联标签的文档</p>
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
                     * 获取<p>文档状态： 1-未生成 2-生成中 3-生成成功 4-生成失败 5-删除中 6-删除成功  7-审核中  8-审核失败 9-审核成功  10,12-导入成功  13-学习中  14-学习失败  15-更新中  16-更新失败  17-解析中  18-解析失败  19-导入失败   20-已过期 21-超量失效 22-超量失效恢复</p>
                     * @return Status <p>文档状态： 1-未生成 2-生成中 3-生成成功 4-生成失败 5-删除中 6-删除成功  7-审核中  8-审核失败 9-审核成功  10,12-导入成功  13-学习中  14-学习失败  15-更新中  16-更新失败  17-解析中  18-解析失败  19-导入失败   20-已过期 21-超量失效 22-超量失效恢复</p>
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置<p>文档状态： 1-未生成 2-生成中 3-生成成功 4-生成失败 5-删除中 6-删除成功  7-审核中  8-审核失败 9-审核成功  10,12-导入成功  13-学习中  14-学习失败  15-更新中  16-更新失败  17-解析中  18-解析失败  19-导入失败   20-已过期 21-超量失效 22-超量失效恢复</p>
                     * @param _status <p>文档状态： 1-未生成 2-生成中 3-生成成功 4-生成失败 5-删除中 6-删除成功  7-审核中  8-审核失败 9-审核成功  10,12-导入成功  13-学习中  14-学习失败  15-更新中  16-更新失败  17-解析中  18-解析失败  19-导入失败   20-已过期 21-超量失效 22-超量失效恢复</p>
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>查询类型 filename 文档、 attribute 标签</p>
                     * @return QueryType <p>查询类型 filename 文档、 attribute 标签</p>
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置<p>查询类型 filename 文档、 attribute 标签</p>
                     * @param _queryType <p>查询类型 filename 文档、 attribute 标签</p>
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
                     * 获取<p>分类ID, 可以通过调用ListDocCate接口,查看其返回结果获取</p>
                     * @return CateBizId <p>分类ID, 可以通过调用ListDocCate接口,查看其返回结果获取</p>
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 设置<p>分类ID, 可以通过调用ListDocCate接口,查看其返回结果获取</p>
                     * @param _cateBizId <p>分类ID, 可以通过调用ListDocCate接口,查看其返回结果获取</p>
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
                     * 获取<p>文件类型分类筛选</p>
                     * @return FileTypes <p>文件类型分类筛选</p>
                     * 
                     */
                    std::vector<std::string> GetFileTypes() const;

                    /**
                     * 设置<p>文件类型分类筛选</p>
                     * @param _fileTypes <p>文件类型分类筛选</p>
                     * 
                     */
                    void SetFileTypes(const std::vector<std::string>& _fileTypes);

                    /**
                     * 判断参数 FileTypes 是否已赋值
                     * @return FileTypes 是否已赋值
                     * 
                     */
                    bool FileTypesHasBeenSet() const;

                    /**
                     * 获取<p>文档列表筛选标识位</p>
                     * @return FilterFlag <p>文档列表筛选标识位</p>
                     * 
                     */
                    std::vector<DocFilterFlag> GetFilterFlag() const;

                    /**
                     * 设置<p>文档列表筛选标识位</p>
                     * @param _filterFlag <p>文档列表筛选标识位</p>
                     * 
                     */
                    void SetFilterFlag(const std::vector<DocFilterFlag>& _filterFlag);

                    /**
                     * 判断参数 FilterFlag 是否已赋值
                     * @return FilterFlag 是否已赋值
                     * 
                     */
                    bool FilterFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否只展示当前分类的数据 0不是，1是</p>
                     * @return ShowCurrCate <p>是否只展示当前分类的数据 0不是，1是</p>
                     * 
                     */
                    uint64_t GetShowCurrCate() const;

                    /**
                     * 设置<p>是否只展示当前分类的数据 0不是，1是</p>
                     * @param _showCurrCate <p>是否只展示当前分类的数据 0不是，1是</p>
                     * 
                     */
                    void SetShowCurrCate(const uint64_t& _showCurrCate);

                    /**
                     * 判断参数 ShowCurrCate 是否已赋值
                     * @return ShowCurrCate 是否已赋值
                     * 
                     */
                    bool ShowCurrCateHasBeenSet() const;

                    /**
                     * 获取<p>文档生效域；不检索默认为0。检索枚举值如下：<br>1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效</p>
                     * @return EnableScope <p>文档生效域；不检索默认为0。检索枚举值如下：<br>1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效</p>
                     * 
                     */
                    int64_t GetEnableScope() const;

                    /**
                     * 设置<p>文档生效域；不检索默认为0。检索枚举值如下：<br>1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效</p>
                     * @param _enableScope <p>文档生效域；不检索默认为0。检索枚举值如下：<br>1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效</p>
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
                     * 获取<p>文档更新时间范围</p>
                     * @return UpdateTime <p>文档更新时间范围</p>
                     * 
                     */
                    TimeRange GetUpdateTime() const;

                    /**
                     * 设置<p>文档更新时间范围</p>
                     * @param _updateTime <p>文档更新时间范围</p>
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
                     * <p>应用ID, 获取方式参看 <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。<br>查询知识库下文档时，该参数填入知识库ID。</p>
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * <p>页码(必须大于0)</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页数量(取值范围1-200)</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>查询内容</p><p>输入特定标识 lke:system:untagged  将查询所有未关联标签的文档</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>文档状态： 1-未生成 2-生成中 3-生成成功 4-生成失败 5-删除中 6-删除成功  7-审核中  8-审核失败 9-审核成功  10,12-导入成功  13-学习中  14-学习失败  15-更新中  16-更新失败  17-解析中  18-解析失败  19-导入失败   20-已过期 21-超量失效 22-超量失效恢复</p>
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>查询类型 filename 文档、 attribute 标签</p>
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * <p>分类ID, 可以通过调用ListDocCate接口,查看其返回结果获取</p>
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * <p>文件类型分类筛选</p>
                     */
                    std::vector<std::string> m_fileTypes;
                    bool m_fileTypesHasBeenSet;

                    /**
                     * <p>文档列表筛选标识位</p>
                     */
                    std::vector<DocFilterFlag> m_filterFlag;
                    bool m_filterFlagHasBeenSet;

                    /**
                     * <p>是否只展示当前分类的数据 0不是，1是</p>
                     */
                    uint64_t m_showCurrCate;
                    bool m_showCurrCateHasBeenSet;

                    /**
                     * <p>文档生效域；不检索默认为0。检索枚举值如下：<br>1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效</p>
                     */
                    int64_t m_enableScope;
                    bool m_enableScopeHasBeenSet;

                    /**
                     * <p>文档更新时间范围</p>
                     */
                    TimeRange m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTDOCREQUEST_H_
