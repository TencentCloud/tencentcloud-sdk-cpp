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
                     * 获取应用ID, 获取方式参看 [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
                     * @return BotBizId 应用ID, 获取方式参看 [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置应用ID, 获取方式参看 [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
                     * @param _botBizId 应用ID, 获取方式参看 [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
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
                     * 获取页码(必须大于0)
                     * @return PageNumber 页码(必须大于0)
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码(必须大于0)
                     * @param _pageNumber 页码(必须大于0)
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
                     * 获取每页数量(取值范围1-200)
                     * @return PageSize 每页数量(取值范围1-200)
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数量(取值范围1-200)
                     * @param _pageSize 每页数量(取值范围1-200)
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
                     * 获取查询内容

输入特定标识 lke:system:untagged  将查询所有未关联标签的文档
                     * @return Query 查询内容

输入特定标识 lke:system:untagged  将查询所有未关联标签的文档
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询内容

输入特定标识 lke:system:untagged  将查询所有未关联标签的文档
                     * @param _query 查询内容

输入特定标识 lke:system:untagged  将查询所有未关联标签的文档
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
                     * 获取文档状态： 1-未生成 2-生成中 3-生成成功 4-生成失败 5-删除中 6-删除成功  7-审核中  8-审核失败 9-审核成功  10,12-导入成功  13-学习中  14-学习失败  15-更新中  16-更新失败  17-解析中  18-解析失败  19-导入失败   20-已过期 21-超量失效 22-超量失效恢复
                     * @return Status 文档状态： 1-未生成 2-生成中 3-生成成功 4-生成失败 5-删除中 6-删除成功  7-审核中  8-审核失败 9-审核成功  10,12-导入成功  13-学习中  14-学习失败  15-更新中  16-更新失败  17-解析中  18-解析失败  19-导入失败   20-已过期 21-超量失效 22-超量失效恢复
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置文档状态： 1-未生成 2-生成中 3-生成成功 4-生成失败 5-删除中 6-删除成功  7-审核中  8-审核失败 9-审核成功  10,12-导入成功  13-学习中  14-学习失败  15-更新中  16-更新失败  17-解析中  18-解析失败  19-导入失败   20-已过期 21-超量失效 22-超量失效恢复
                     * @param _status 文档状态： 1-未生成 2-生成中 3-生成成功 4-生成失败 5-删除中 6-删除成功  7-审核中  8-审核失败 9-审核成功  10,12-导入成功  13-学习中  14-学习失败  15-更新中  16-更新失败  17-解析中  18-解析失败  19-导入失败   20-已过期 21-超量失效 22-超量失效恢复
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
                     * 获取查询类型 filename 文档、 attribute 标签
                     * @return QueryType 查询类型 filename 文档、 attribute 标签
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置查询类型 filename 文档、 attribute 标签
                     * @param _queryType 查询类型 filename 文档、 attribute 标签
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
                     * 获取分类ID, 可以通过调用ListDocCate接口,查看其返回结果获取
                     * @return CateBizId 分类ID, 可以通过调用ListDocCate接口,查看其返回结果获取
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 设置分类ID, 可以通过调用ListDocCate接口,查看其返回结果获取
                     * @param _cateBizId 分类ID, 可以通过调用ListDocCate接口,查看其返回结果获取
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
                     * 获取文件类型分类筛选
                     * @return FileTypes 文件类型分类筛选
                     * 
                     */
                    std::vector<std::string> GetFileTypes() const;

                    /**
                     * 设置文件类型分类筛选
                     * @param _fileTypes 文件类型分类筛选
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
                     * 获取文档列表筛选标识位
                     * @return FilterFlag 文档列表筛选标识位
                     * 
                     */
                    std::vector<DocFilterFlag> GetFilterFlag() const;

                    /**
                     * 设置文档列表筛选标识位
                     * @param _filterFlag 文档列表筛选标识位
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
                     * 获取是否只展示当前分类的数据 0不是，1是
                     * @return ShowCurrCate 是否只展示当前分类的数据 0不是，1是
                     * 
                     */
                    uint64_t GetShowCurrCate() const;

                    /**
                     * 设置是否只展示当前分类的数据 0不是，1是
                     * @param _showCurrCate 是否只展示当前分类的数据 0不是，1是
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
                     * 获取文档生效域；不检索默认为0。检索枚举值如下：
1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效
                     * @return EnableScope 文档生效域；不检索默认为0。检索枚举值如下：
1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效
                     * 
                     */
                    int64_t GetEnableScope() const;

                    /**
                     * 设置文档生效域；不检索默认为0。检索枚举值如下：
1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效
                     * @param _enableScope 文档生效域；不检索默认为0。检索枚举值如下：
1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效
                     * 
                     */
                    void SetEnableScope(const int64_t& _enableScope);

                    /**
                     * 判断参数 EnableScope 是否已赋值
                     * @return EnableScope 是否已赋值
                     * 
                     */
                    bool EnableScopeHasBeenSet() const;

                private:

                    /**
                     * 应用ID, 获取方式参看 [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 页码(必须大于0)
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数量(取值范围1-200)
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 查询内容

输入特定标识 lke:system:untagged  将查询所有未关联标签的文档
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 文档状态： 1-未生成 2-生成中 3-生成成功 4-生成失败 5-删除中 6-删除成功  7-审核中  8-审核失败 9-审核成功  10,12-导入成功  13-学习中  14-学习失败  15-更新中  16-更新失败  17-解析中  18-解析失败  19-导入失败   20-已过期 21-超量失效 22-超量失效恢复
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 查询类型 filename 文档、 attribute 标签
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * 分类ID, 可以通过调用ListDocCate接口,查看其返回结果获取
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * 文件类型分类筛选
                     */
                    std::vector<std::string> m_fileTypes;
                    bool m_fileTypesHasBeenSet;

                    /**
                     * 文档列表筛选标识位
                     */
                    std::vector<DocFilterFlag> m_filterFlag;
                    bool m_filterFlagHasBeenSet;

                    /**
                     * 是否只展示当前分类的数据 0不是，1是
                     */
                    uint64_t m_showCurrCate;
                    bool m_showCurrCateHasBeenSet;

                    /**
                     * 文档生效域；不检索默认为0。检索枚举值如下：
1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效
                     */
                    int64_t m_enableScope;
                    bool m_enableScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTDOCREQUEST_H_
