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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCATALOGNAMESREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCATALOGNAMESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * ListCatalogNames请求参数结构体
                */
                class ListCatalogNamesRequest : public AbstractModel
                {
                public:
                    ListCatalogNamesRequest();
                    ~ListCatalogNamesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>workspace唯一id，必填</p>
                     * @return WorkspaceId <p>workspace唯一id，必填</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>workspace唯一id，必填</p>
                     * @param _workspaceId <p>workspace唯一id，必填</p>
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
                     * 获取<p>最大结果条数，可选，默认10</p>
                     * @return MaxResults <p>最大结果条数，可选，默认10</p>
                     * 
                     */
                    std::string GetMaxResults() const;

                    /**
                     * 设置<p>最大结果条数，可选，默认10</p>
                     * @param _maxResults <p>最大结果条数，可选，默认10</p>
                     * 
                     */
                    void SetMaxResults(const std::string& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取<p>分页token信息(base64编码，包含offset、snapshotId等)</p>
                     * @return PageToken <p>分页token信息(base64编码，包含offset、snapshotId等)</p>
                     * 
                     */
                    std::string GetPageToken() const;

                    /**
                     * 设置<p>分页token信息(base64编码，包含offset、snapshotId等)</p>
                     * @param _pageToken <p>分页token信息(base64编码，包含offset、snapshotId等)</p>
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
                     * 获取<p>catalog类型，参考CatalogType(当前支持：TABLE、MODEL、VOLUME)，可选，不填默认查询所有类型</p>
                     * @return Types <p>catalog类型，参考CatalogType(当前支持：TABLE、MODEL、VOLUME)，可选，不填默认查询所有类型</p>
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置<p>catalog类型，参考CatalogType(当前支持：TABLE、MODEL、VOLUME)，可选，不填默认查询所有类型</p>
                     * @param _types <p>catalog类型，参考CatalogType(当前支持：TABLE、MODEL、VOLUME)，可选，不填默认查询所有类型</p>
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
                     * 获取<p>数据目录来源筛选，取值参考CatalogSourceEnum(METALAKE/CONNECTION/SETATS)</p>
                     * @return CatalogSources <p>数据目录来源筛选，取值参考CatalogSourceEnum(METALAKE/CONNECTION/SETATS)</p>
                     * 
                     */
                    std::vector<std::string> GetCatalogSources() const;

                    /**
                     * 设置<p>数据目录来源筛选，取值参考CatalogSourceEnum(METALAKE/CONNECTION/SETATS)</p>
                     * @param _catalogSources <p>数据目录来源筛选，取值参考CatalogSourceEnum(METALAKE/CONNECTION/SETATS)</p>
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
                     * <p>workspace唯一id，必填</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>最大结果条数，可选，默认10</p>
                     */
                    std::string m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>分页token信息(base64编码，包含offset、snapshotId等)</p>
                     */
                    std::string m_pageToken;
                    bool m_pageTokenHasBeenSet;

                    /**
                     * <p>catalog类型，参考CatalogType(当前支持：TABLE、MODEL、VOLUME)，可选，不填默认查询所有类型</p>
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * <p>数据目录来源筛选，取值参考CatalogSourceEnum(METALAKE/CONNECTION/SETATS)</p>
                     */
                    std::vector<std::string> m_catalogSources;
                    bool m_catalogSourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCATALOGNAMESREQUEST_H_
