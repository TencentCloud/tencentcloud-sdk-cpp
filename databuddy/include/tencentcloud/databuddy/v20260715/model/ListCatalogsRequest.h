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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCATALOGSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCATALOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FetchOption.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * ListCatalogs请求参数结构体
                */
                class ListCatalogsRequest : public AbstractModel
                {
                public:
                    ListCatalogsRequest();
                    ~ListCatalogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间唯一id</p>
                     * @return WorkspaceId <p>工作空间唯一id</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间唯一id</p>
                     * @param _workspaceId <p>工作空间唯一id</p>
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
                     * 获取<p>最大结果条数</p>
                     * @return MaxResults <p>最大结果条数</p>
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置<p>最大结果条数</p>
                     * @param _maxResults <p>最大结果条数</p>
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
                     * 获取<p>分页token</p>
                     * @return PageToken <p>分页token</p>
                     * 
                     */
                    std::string GetPageToken() const;

                    /**
                     * 设置<p>分页token</p>
                     * @param _pageToken <p>分页token</p>
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
                     * 获取<p>catalog类型，可填：TABLE、MODEL、VOLUME</p>
                     * @return Types <p>catalog类型，可填：TABLE、MODEL、VOLUME</p>
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置<p>catalog类型，可填：TABLE、MODEL、VOLUME</p>
                     * @param _types <p>catalog类型，可填：TABLE、MODEL、VOLUME</p>
                     * 
                     */
                    void SetTypes(const std::vector<std::string>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                    /**
                     * 获取<p>是否只返回当前工作空间有权限的，false时会额外返回当前用户有权限管理的catalog</p>
                     * @return CurrentWorkspaceOnly <p>是否只返回当前工作空间有权限的，false时会额外返回当前用户有权限管理的catalog</p>
                     * 
                     */
                    bool GetCurrentWorkspaceOnly() const;

                    /**
                     * 设置<p>是否只返回当前工作空间有权限的，false时会额外返回当前用户有权限管理的catalog</p>
                     * @param _currentWorkspaceOnly <p>是否只返回当前工作空间有权限的，false时会额外返回当前用户有权限管理的catalog</p>
                     * 
                     */
                    void SetCurrentWorkspaceOnly(const bool& _currentWorkspaceOnly);

                    /**
                     * 判断参数 CurrentWorkspaceOnly 是否已赋值
                     * @return CurrentWorkspaceOnly 是否已赋值
                     * 
                     */
                    bool CurrentWorkspaceOnlyHasBeenSet() const;

                    /**
                     * 获取<p>数据获取选项，可选，控制是否返回权限信息及按权限过滤</p>
                     * @return FetchOption <p>数据获取选项，可选，控制是否返回权限信息及按权限过滤</p>
                     * 
                     */
                    FetchOption GetFetchOption() const;

                    /**
                     * 设置<p>数据获取选项，可选，控制是否返回权限信息及按权限过滤</p>
                     * @param _fetchOption <p>数据获取选项，可选，控制是否返回权限信息及按权限过滤</p>
                     * 
                     */
                    void SetFetchOption(const FetchOption& _fetchOption);

                    /**
                     * 判断参数 FetchOption 是否已赋值
                     * @return FetchOption 是否已赋值
                     * 
                     */
                    bool FetchOptionHasBeenSet() const;

                    /**
                     * 获取数据目录来源筛选（融合版新增字段），取值参考 CatalogSourceEnum。空数组或不传→只查tclake；["METALAKE"]→只查tclake；["CONNECTION"]→只查分析版ana_catalog；["METALAKE","CONNECTION"]→合并返回
                     * @return CatalogSources 数据目录来源筛选（融合版新增字段），取值参考 CatalogSourceEnum。空数组或不传→只查tclake；["METALAKE"]→只查tclake；["CONNECTION"]→只查分析版ana_catalog；["METALAKE","CONNECTION"]→合并返回
                     * 
                     */
                    std::vector<std::string> GetCatalogSources() const;

                    /**
                     * 设置数据目录来源筛选（融合版新增字段），取值参考 CatalogSourceEnum。空数组或不传→只查tclake；["METALAKE"]→只查tclake；["CONNECTION"]→只查分析版ana_catalog；["METALAKE","CONNECTION"]→合并返回
                     * @param _catalogSources 数据目录来源筛选（融合版新增字段），取值参考 CatalogSourceEnum。空数组或不传→只查tclake；["METALAKE"]→只查tclake；["CONNECTION"]→只查分析版ana_catalog；["METALAKE","CONNECTION"]→合并返回
                     * 
                     */
                    void SetCatalogSources(const std::vector<std::string>& _catalogSources);

                    /**
                     * 判断参数 CatalogSources 是否已赋值
                     * @return CatalogSources 是否已赋值
                     * 
                     */
                    bool CatalogSourcesHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间唯一id</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>最大结果条数</p>
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>分页token</p>
                     */
                    std::string m_pageToken;
                    bool m_pageTokenHasBeenSet;

                    /**
                     * <p>catalog类型，可填：TABLE、MODEL、VOLUME</p>
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * <p>是否只返回当前工作空间有权限的，false时会额外返回当前用户有权限管理的catalog</p>
                     */
                    bool m_currentWorkspaceOnly;
                    bool m_currentWorkspaceOnlyHasBeenSet;

                    /**
                     * <p>数据获取选项，可选，控制是否返回权限信息及按权限过滤</p>
                     */
                    FetchOption m_fetchOption;
                    bool m_fetchOptionHasBeenSet;

                    /**
                     * 数据目录来源筛选（融合版新增字段），取值参考 CatalogSourceEnum。空数组或不传→只查tclake；["METALAKE"]→只查tclake；["CONNECTION"]→只查分析版ana_catalog；["METALAKE","CONNECTION"]→合并返回
                     */
                    std::vector<std::string> m_catalogSources;
                    bool m_catalogSourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCATALOGSREQUEST_H_
