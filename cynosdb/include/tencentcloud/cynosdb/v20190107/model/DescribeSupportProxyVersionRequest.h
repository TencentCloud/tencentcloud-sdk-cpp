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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESUPPORTPROXYVERSIONREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESUPPORTPROXYVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeSupportProxyVersion请求参数结构体
                */
                class DescribeSupportProxyVersionRequest : public AbstractModel
                {
                public:
                    DescribeSupportProxyVersionRequest();
                    ~DescribeSupportProxyVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID。与Zone/DbVersion/CynosVersion二选一：查询存量集群支持的代理版本时必填；不传时表示创建集群前查询场景，需同时传入Zone、DbVersion、CynosVersion</p>
                     * @return ClusterId <p>集群ID。与Zone/DbVersion/CynosVersion二选一：查询存量集群支持的代理版本时必填；不传时表示创建集群前查询场景，需同时传入Zone、DbVersion、CynosVersion</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID。与Zone/DbVersion/CynosVersion二选一：查询存量集群支持的代理版本时必填；不传时表示创建集群前查询场景，需同时传入Zone、DbVersion、CynosVersion</p>
                     * @param _clusterId <p>集群ID。与Zone/DbVersion/CynosVersion二选一：查询存量集群支持的代理版本时必填；不传时表示创建集群前查询场景，需同时传入Zone、DbVersion、CynosVersion</p>
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
                     * 获取<p>数据库代理组ID。仅在传入ClusterId时有效，传入时返回当前代理版本号</p>
                     * @return ProxyGroupId <p>数据库代理组ID。仅在传入ClusterId时有效，传入时返回当前代理版本号</p>
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置<p>数据库代理组ID。仅在传入ClusterId时有效，传入时返回当前代理版本号</p>
                     * @param _proxyGroupId <p>数据库代理组ID。仅在传入ClusterId时有效，传入时返回当前代理版本号</p>
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>可用区，如ap-guangzhou-3。创建集群前查询场景（不传ClusterId时）必填</p>
                     * @return Zone <p>可用区，如ap-guangzhou-3。创建集群前查询场景（不传ClusterId时）必填</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区，如ap-guangzhou-3。创建集群前查询场景（不传ClusterId时）必填</p>
                     * @param _zone <p>可用区，如ap-guangzhou-3。创建集群前查询场景（不传ClusterId时）必填</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>数据库引擎版本，如5.7、8.0。创建集群前查询场景（不传ClusterId时）必填</p>
                     * @return DbVersion <p>数据库引擎版本，如5.7、8.0。创建集群前查询场景（不传ClusterId时）必填</p>
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置<p>数据库引擎版本，如5.7、8.0。创建集群前查询场景（不传ClusterId时）必填</p>
                     * @param _dbVersion <p>数据库引擎版本，如5.7、8.0。创建集群前查询场景（不传ClusterId时）必填</p>
                     * 
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     * 
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取<p>目标内核版本，如3.1.20.001。创建集群前查询场景（不传ClusterId时）必填</p>
                     * @return CynosVersion <p>目标内核版本，如3.1.20.001。创建集群前查询场景（不传ClusterId时）必填</p>
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置<p>目标内核版本，如3.1.20.001。创建集群前查询场景（不传ClusterId时）必填</p>
                     * @param _cynosVersion <p>目标内核版本，如3.1.20.001。创建集群前查询场景（不传ClusterId时）必填</p>
                     * 
                     */
                    void SetCynosVersion(const std::string& _cynosVersion);

                    /**
                     * 判断参数 CynosVersion 是否已赋值
                     * @return CynosVersion 是否已赋值
                     * 
                     */
                    bool CynosVersionHasBeenSet() const;

                    /**
                     * 获取<p>存储版本，枚举值：1.0、2.0。可选，仅创建集群前查询场景有效</p>
                     * @return StorageVersion <p>存储版本，枚举值：1.0、2.0。可选，仅创建集群前查询场景有效</p>
                     * 
                     */
                    std::string GetStorageVersion() const;

                    /**
                     * 设置<p>存储版本，枚举值：1.0、2.0。可选，仅创建集群前查询场景有效</p>
                     * @param _storageVersion <p>存储版本，枚举值：1.0、2.0。可选，仅创建集群前查询场景有效</p>
                     * 
                     */
                    void SetStorageVersion(const std::string& _storageVersion);

                    /**
                     * 判断参数 StorageVersion 是否已赋值
                     * @return StorageVersion 是否已赋值
                     * 
                     */
                    bool StorageVersionHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID。与Zone/DbVersion/CynosVersion二选一：查询存量集群支持的代理版本时必填；不传时表示创建集群前查询场景，需同时传入Zone、DbVersion、CynosVersion</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>数据库代理组ID。仅在传入ClusterId时有效，传入时返回当前代理版本号</p>
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * <p>可用区，如ap-guangzhou-3。创建集群前查询场景（不传ClusterId时）必填</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>数据库引擎版本，如5.7、8.0。创建集群前查询场景（不传ClusterId时）必填</p>
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * <p>目标内核版本，如3.1.20.001。创建集群前查询场景（不传ClusterId时）必填</p>
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * <p>存储版本，枚举值：1.0、2.0。可选，仅创建集群前查询场景有效</p>
                     */
                    std::string m_storageVersion;
                    bool m_storageVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESUPPORTPROXYVERSIONREQUEST_H_
