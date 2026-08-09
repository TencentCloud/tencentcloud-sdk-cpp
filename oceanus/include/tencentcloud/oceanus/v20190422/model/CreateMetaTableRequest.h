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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEMETATABLEREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEMETATABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/ResourceRef.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * CreateMetaTable请求参数结构体
                */
                class CreateMetaTableRequest : public AbstractModel
                {
                public:
                    CreateMetaTableRequest();
                    ~CreateMetaTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Catalog Id</p>
                     * @return CatalogId <p>Catalog Id</p>
                     * 
                     */
                    int64_t GetCatalogId() const;

                    /**
                     * 设置<p>Catalog Id</p>
                     * @param _catalogId <p>Catalog Id</p>
                     * 
                     */
                    void SetCatalogId(const int64_t& _catalogId);

                    /**
                     * 判断参数 CatalogId 是否已赋值
                     * @return CatalogId 是否已赋值
                     * 
                     */
                    bool CatalogIdHasBeenSet() const;

                    /**
                     * 获取<p>库Id</p>
                     * @return DatabaseId <p>库Id</p>
                     * 
                     */
                    int64_t GetDatabaseId() const;

                    /**
                     * 设置<p>库Id</p>
                     * @param _databaseId <p>库Id</p>
                     * 
                     */
                    void SetDatabaseId(const int64_t& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     * 
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取<p>建表语句</p><p>参数格式：需要base64加密</p>
                     * @return SqlCode <p>建表语句</p><p>参数格式：需要base64加密</p>
                     * 
                     */
                    std::string GetSqlCode() const;

                    /**
                     * 设置<p>建表语句</p><p>参数格式：需要base64加密</p>
                     * @param _sqlCode <p>建表语句</p><p>参数格式：需要base64加密</p>
                     * 
                     */
                    void SetSqlCode(const std::string& _sqlCode);

                    /**
                     * 判断参数 SqlCode 是否已赋值
                     * @return SqlCode 是否已赋值
                     * 
                     */
                    bool SqlCodeHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Comment <p>备注</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _comment <p>备注</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>集群id</p>
                     * @return ClusterId <p>集群id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _clusterId <p>集群id</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>引用资源</p>
                     * @return ResourceRefs <p>引用资源</p>
                     * 
                     */
                    std::vector<ResourceRef> GetResourceRefs() const;

                    /**
                     * 设置<p>引用资源</p>
                     * @param _resourceRefs <p>引用资源</p>
                     * 
                     */
                    void SetResourceRefs(const std::vector<ResourceRef>& _resourceRefs);

                    /**
                     * 判断参数 ResourceRefs 是否已赋值
                     * @return ResourceRefs 是否已赋值
                     * 
                     */
                    bool ResourceRefsHasBeenSet() const;

                    /**
                     * 获取<p>Flink版本</p>
                     * @return FlinkVersion <p>Flink版本</p>
                     * 
                     */
                    std::string GetFlinkVersion() const;

                    /**
                     * 设置<p>Flink版本</p>
                     * @param _flinkVersion <p>Flink版本</p>
                     * 
                     */
                    void SetFlinkVersion(const std::string& _flinkVersion);

                    /**
                     * 判断参数 FlinkVersion 是否已赋值
                     * @return FlinkVersion 是否已赋值
                     * 
                     */
                    bool FlinkVersionHasBeenSet() const;

                    /**
                     * 获取<p>工作空间 SerialId</p>
                     * @return WorkSpaceId <p>工作空间 SerialId</p>
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置<p>工作空间 SerialId</p>
                     * @param _workSpaceId <p>工作空间 SerialId</p>
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>异步id</p>
                     * @return AsyncTaskId <p>异步id</p>
                     * 
                     */
                    std::string GetAsyncTaskId() const;

                    /**
                     * 设置<p>异步id</p>
                     * @param _asyncTaskId <p>异步id</p>
                     * 
                     */
                    void SetAsyncTaskId(const std::string& _asyncTaskId);

                    /**
                     * 判断参数 AsyncTaskId 是否已赋值
                     * @return AsyncTaskId 是否已赋值
                     * 
                     */
                    bool AsyncTaskIdHasBeenSet() const;

                private:

                    /**
                     * <p>Catalog Id</p>
                     */
                    int64_t m_catalogId;
                    bool m_catalogIdHasBeenSet;

                    /**
                     * <p>库Id</p>
                     */
                    int64_t m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * <p>建表语句</p><p>参数格式：需要base64加密</p>
                     */
                    std::string m_sqlCode;
                    bool m_sqlCodeHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>集群id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>引用资源</p>
                     */
                    std::vector<ResourceRef> m_resourceRefs;
                    bool m_resourceRefsHasBeenSet;

                    /**
                     * <p>Flink版本</p>
                     */
                    std::string m_flinkVersion;
                    bool m_flinkVersionHasBeenSet;

                    /**
                     * <p>工作空间 SerialId</p>
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * <p>异步id</p>
                     */
                    std::string m_asyncTaskId;
                    bool m_asyncTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEMETATABLEREQUEST_H_
