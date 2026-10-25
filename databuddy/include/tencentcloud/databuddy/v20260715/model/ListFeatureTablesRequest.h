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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTFEATURETABLESREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTFEATURETABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/OrderBy.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * ListFeatureTables请求参数结构体
                */
                class ListFeatureTablesRequest : public AbstractModel
                {
                public:
                    ListFeatureTablesRequest();
                    ~ListFeatureTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间ID</p>
                     * @return WorkspaceId <p>工作空间ID</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间ID</p>
                     * @param _workspaceId <p>工作空间ID</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>关键字</p>
                     * @return Keyword <p>关键字</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>关键字</p>
                     * @param _keyword <p>关键字</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>Catalog目录列表</p>
                     * @return CatalogNames <p>Catalog目录列表</p>
                     * 
                     */
                    std::vector<std::string> GetCatalogNames() const;

                    /**
                     * 设置<p>Catalog目录列表</p>
                     * @param _catalogNames <p>Catalog目录列表</p>
                     * 
                     */
                    void SetCatalogNames(const std::vector<std::string>& _catalogNames);

                    /**
                     * 判断参数 CatalogNames 是否已赋值
                     * @return CatalogNames 是否已赋值
                     * 
                     */
                    bool CatalogNamesHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>我负责的</p>
                     * @return OwnerMe <p>我负责的</p>
                     * 
                     */
                    bool GetOwnerMe() const;

                    /**
                     * 设置<p>我负责的</p>
                     * @param _ownerMe <p>我负责的</p>
                     * 
                     */
                    void SetOwnerMe(const bool& _ownerMe);

                    /**
                     * 判断参数 OwnerMe 是否已赋值
                     * @return OwnerMe 是否已赋值
                     * 
                     */
                    bool OwnerMeHasBeenSet() const;

                    /**
                     * 获取<p>最大结果条数，可选，取值1～50</p>
                     * @return MaxResults <p>最大结果条数，可选，取值1～50</p>
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置<p>最大结果条数，可选，取值1～50</p>
                     * @param _maxResults <p>最大结果条数，可选，取值1～50</p>
                     * 
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取<p>分页token信息(base64编码)，可选</p>
                     * @return PageToken <p>分页token信息(base64编码)，可选</p>
                     * 
                     */
                    std::string GetPageToken() const;

                    /**
                     * 设置<p>分页token信息(base64编码)，可选</p>
                     * @param _pageToken <p>分页token信息(base64编码)，可选</p>
                     * 
                     */
                    void SetPageToken(const std::string& _pageToken);

                    /**
                     * 判断参数 PageToken 是否已赋值
                     * @return PageToken 是否已赋值
                     * 
                     */
                    bool PageTokenHasBeenSet() const;

                    /**
                     * 获取<p>排序，Name(CreateTime/ModifiedTime), Direction(Desc/Asc)</p>
                     * @return OrderBys <p>排序，Name(CreateTime/ModifiedTime), Direction(Desc/Asc)</p>
                     * 
                     */
                    std::vector<OrderBy> GetOrderBys() const;

                    /**
                     * 设置<p>排序，Name(CreateTime/ModifiedTime), Direction(Desc/Asc)</p>
                     * @param _orderBys <p>排序，Name(CreateTime/ModifiedTime), Direction(Desc/Asc)</p>
                     * 
                     */
                    void SetOrderBys(const std::vector<OrderBy>& _orderBys);

                    /**
                     * 判断参数 OrderBys 是否已赋值
                     * @return OrderBys 是否已赋值
                     * 
                     */
                    bool OrderBysHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间ID</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>关键字</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>Catalog目录列表</p>
                     */
                    std::vector<std::string> m_catalogNames;
                    bool m_catalogNamesHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>我负责的</p>
                     */
                    bool m_ownerMe;
                    bool m_ownerMeHasBeenSet;

                    /**
                     * <p>最大结果条数，可选，取值1～50</p>
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>分页token信息(base64编码)，可选</p>
                     */
                    std::string m_pageToken;
                    bool m_pageTokenHasBeenSet;

                    /**
                     * <p>排序，Name(CreateTime/ModifiedTime), Direction(Desc/Asc)</p>
                     */
                    std::vector<OrderBy> m_orderBys;
                    bool m_orderBysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTFEATURETABLESREQUEST_H_
