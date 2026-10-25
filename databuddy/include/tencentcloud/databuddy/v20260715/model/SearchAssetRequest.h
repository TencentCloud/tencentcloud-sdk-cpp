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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SEARCHASSETREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SEARCHASSETREQUEST_H_

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
                * SearchAsset请求参数结构体
                */
                class SearchAssetRequest : public AbstractModel
                {
                public:
                    SearchAssetRequest();
                    ~SearchAssetRequest() = default;
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
                     * 获取<p>最大结果条数，默认30，可选30～50</p>
                     * @return MaxResults <p>最大结果条数，默认30，可选30～50</p>
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置<p>最大结果条数，默认30，可选30～50</p>
                     * @param _maxResults <p>最大结果条数，默认30，可选30～50</p>
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
                     * 获取<p>资产类型列表，类型参见ListEntityTypeMetas的返回</p>
                     * @return AssetTypes <p>资产类型列表，类型参见ListEntityTypeMetas的返回</p>
                     * 
                     */
                    std::vector<std::string> GetAssetTypes() const;

                    /**
                     * 设置<p>资产类型列表，类型参见ListEntityTypeMetas的返回</p>
                     * @param _assetTypes <p>资产类型列表，类型参见ListEntityTypeMetas的返回</p>
                     * 
                     */
                    void SetAssetTypes(const std::vector<std::string>& _assetTypes);

                    /**
                     * 判断参数 AssetTypes 是否已赋值
                     * @return AssetTypes 是否已赋值
                     * 
                     */
                    bool AssetTypesHasBeenSet() const;

                    /**
                     * 获取<p>分页token信息，取上一页返回NextPageToken</p>
                     * @return PageToken <p>分页token信息，取上一页返回NextPageToken</p>
                     * 
                     */
                    std::string GetPageToken() const;

                    /**
                     * 设置<p>分页token信息，取上一页返回NextPageToken</p>
                     * @param _pageToken <p>分页token信息，取上一页返回NextPageToken</p>
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
                     * 获取<p>按资产负责人检索</p><ul><li>my 我负责的(包含my时其他uin不生效)</li><li>uin 指定用户uin</li></ul>
                     * @return Owner <p>按资产负责人检索</p><ul><li>my 我负责的(包含my时其他uin不生效)</li><li>uin 指定用户uin</li></ul>
                     * 
                     */
                    std::vector<std::string> GetOwner() const;

                    /**
                     * 设置<p>按资产负责人检索</p><ul><li>my 我负责的(包含my时其他uin不生效)</li><li>uin 指定用户uin</li></ul>
                     * @param _owner <p>按资产负责人检索</p><ul><li>my 我负责的(包含my时其他uin不生效)</li><li>uin 指定用户uin</li></ul>
                     * 
                     */
                    void SetOwner(const std::vector<std::string>& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取<p>标签IDs，可通过 ListTags 获取</p>
                     * @return TagIds <p>标签IDs，可通过 ListTags 获取</p>
                     * 
                     */
                    std::vector<int64_t> GetTagIds() const;

                    /**
                     * 设置<p>标签IDs，可通过 ListTags 获取</p>
                     * @param _tagIds <p>标签IDs，可通过 ListTags 获取</p>
                     * 
                     */
                    void SetTagIds(const std::vector<int64_t>& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                    /**
                     * 获取<p>标签值IDs，可通过 ListTags 获取</p>
                     * @return TagValueIds <p>标签值IDs，可通过 ListTags 获取</p>
                     * 
                     */
                    std::vector<int64_t> GetTagValueIds() const;

                    /**
                     * 设置<p>标签值IDs，可通过 ListTags 获取</p>
                     * @param _tagValueIds <p>标签值IDs，可通过 ListTags 获取</p>
                     * 
                     */
                    void SetTagValueIds(const std::vector<int64_t>& _tagValueIds);

                    /**
                     * 判断参数 TagValueIds 是否已赋值
                     * @return TagValueIds 是否已赋值
                     * 
                     */
                    bool TagValueIdsHasBeenSet() const;

                    /**
                     * 获取<p>更新时间，13位时间戳</p>
                     * @return ModifiedTime <p>更新时间，13位时间戳</p>
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置<p>更新时间，13位时间戳</p>
                     * @param _modifiedTime <p>更新时间，13位时间戳</p>
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取<p>数据目录列表</p>
                     * @return CatalogNames <p>数据目录列表</p>
                     * 
                     */
                    std::vector<std::string> GetCatalogNames() const;

                    /**
                     * 设置<p>数据目录列表</p>
                     * @param _catalogNames <p>数据目录列表</p>
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
                     * 获取<p>工作空间路径筛选(非catalog类资产)</p>
                     * @return WorkspacePaths <p>工作空间路径筛选(非catalog类资产)</p>
                     * 
                     */
                    std::vector<std::string> GetWorkspacePaths() const;

                    /**
                     * 设置<p>工作空间路径筛选(非catalog类资产)</p>
                     * @param _workspacePaths <p>工作空间路径筛选(非catalog类资产)</p>
                     * 
                     */
                    void SetWorkspacePaths(const std::vector<std::string>& _workspacePaths);

                    /**
                     * 判断参数 WorkspacePaths 是否已赋值
                     * @return WorkspacePaths 是否已赋值
                     * 
                     */
                    bool WorkspacePathsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启混合搜索</p>
                     * @return EnableHybridSearch <p>是否开启混合搜索</p>
                     * 
                     */
                    bool GetEnableHybridSearch() const;

                    /**
                     * 设置<p>是否开启混合搜索</p>
                     * @param _enableHybridSearch <p>是否开启混合搜索</p>
                     * 
                     */
                    void SetEnableHybridSearch(const bool& _enableHybridSearch);

                    /**
                     * 判断参数 EnableHybridSearch 是否已赋值
                     * @return EnableHybridSearch 是否已赋值
                     * 
                     */
                    bool EnableHybridSearchHasBeenSet() const;

                    /**
                     * 获取<p>字段标签ID列表（可选）。使用场景：根据字段上打的标签检索资产（表），返回包含该字段标签的资产。与 TagIds 的区别：TagIds 是表级标签过滤，FieldTagIds 是字段级标签过滤。规格要求：int64 数组，最多支持 20 个标签 ID 同时过滤。可通过 ListTags 获取</p>
                     * @return FieldTagIds <p>字段标签ID列表（可选）。使用场景：根据字段上打的标签检索资产（表），返回包含该字段标签的资产。与 TagIds 的区别：TagIds 是表级标签过滤，FieldTagIds 是字段级标签过滤。规格要求：int64 数组，最多支持 20 个标签 ID 同时过滤。可通过 ListTags 获取</p>
                     * 
                     */
                    std::vector<int64_t> GetFieldTagIds() const;

                    /**
                     * 设置<p>字段标签ID列表（可选）。使用场景：根据字段上打的标签检索资产（表），返回包含该字段标签的资产。与 TagIds 的区别：TagIds 是表级标签过滤，FieldTagIds 是字段级标签过滤。规格要求：int64 数组，最多支持 20 个标签 ID 同时过滤。可通过 ListTags 获取</p>
                     * @param _fieldTagIds <p>字段标签ID列表（可选）。使用场景：根据字段上打的标签检索资产（表），返回包含该字段标签的资产。与 TagIds 的区别：TagIds 是表级标签过滤，FieldTagIds 是字段级标签过滤。规格要求：int64 数组，最多支持 20 个标签 ID 同时过滤。可通过 ListTags 获取</p>
                     * 
                     */
                    void SetFieldTagIds(const std::vector<int64_t>& _fieldTagIds);

                    /**
                     * 判断参数 FieldTagIds 是否已赋值
                     * @return FieldTagIds 是否已赋值
                     * 
                     */
                    bool FieldTagIdsHasBeenSet() const;

                    /**
                     * 获取<p>排序，为空时默认按相关度倒排序</p><p>Name:<br>PopularityQuantity 热度</p><p>Direction:<br>Desc 降序<br>Asc 升序</p>
                     * @return OrderBys <p>排序，为空时默认按相关度倒排序</p><p>Name:<br>PopularityQuantity 热度</p><p>Direction:<br>Desc 降序<br>Asc 升序</p>
                     * 
                     */
                    std::vector<OrderBy> GetOrderBys() const;

                    /**
                     * 设置<p>排序，为空时默认按相关度倒排序</p><p>Name:<br>PopularityQuantity 热度</p><p>Direction:<br>Desc 降序<br>Asc 升序</p>
                     * @param _orderBys <p>排序，为空时默认按相关度倒排序</p><p>Name:<br>PopularityQuantity 热度</p><p>Direction:<br>Desc 降序<br>Asc 升序</p>
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
                     * <p>最大结果条数，默认30，可选30～50</p>
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>关键字</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>资产类型列表，类型参见ListEntityTypeMetas的返回</p>
                     */
                    std::vector<std::string> m_assetTypes;
                    bool m_assetTypesHasBeenSet;

                    /**
                     * <p>分页token信息，取上一页返回NextPageToken</p>
                     */
                    std::string m_pageToken;
                    bool m_pageTokenHasBeenSet;

                    /**
                     * <p>按资产负责人检索</p><ul><li>my 我负责的(包含my时其他uin不生效)</li><li>uin 指定用户uin</li></ul>
                     */
                    std::vector<std::string> m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * <p>标签IDs，可通过 ListTags 获取</p>
                     */
                    std::vector<int64_t> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                    /**
                     * <p>标签值IDs，可通过 ListTags 获取</p>
                     */
                    std::vector<int64_t> m_tagValueIds;
                    bool m_tagValueIdsHasBeenSet;

                    /**
                     * <p>更新时间，13位时间戳</p>
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * <p>数据目录列表</p>
                     */
                    std::vector<std::string> m_catalogNames;
                    bool m_catalogNamesHasBeenSet;

                    /**
                     * <p>工作空间路径筛选(非catalog类资产)</p>
                     */
                    std::vector<std::string> m_workspacePaths;
                    bool m_workspacePathsHasBeenSet;

                    /**
                     * <p>是否开启混合搜索</p>
                     */
                    bool m_enableHybridSearch;
                    bool m_enableHybridSearchHasBeenSet;

                    /**
                     * <p>字段标签ID列表（可选）。使用场景：根据字段上打的标签检索资产（表），返回包含该字段标签的资产。与 TagIds 的区别：TagIds 是表级标签过滤，FieldTagIds 是字段级标签过滤。规格要求：int64 数组，最多支持 20 个标签 ID 同时过滤。可通过 ListTags 获取</p>
                     */
                    std::vector<int64_t> m_fieldTagIds;
                    bool m_fieldTagIdsHasBeenSet;

                    /**
                     * <p>排序，为空时默认按相关度倒排序</p><p>Name:<br>PopularityQuantity 热度</p><p>Direction:<br>Desc 降序<br>Asc 升序</p>
                     */
                    std::vector<OrderBy> m_orderBys;
                    bool m_orderBysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SEARCHASSETREQUEST_H_
