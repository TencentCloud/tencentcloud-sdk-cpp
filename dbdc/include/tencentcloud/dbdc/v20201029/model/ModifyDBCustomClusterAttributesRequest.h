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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_MODIFYDBCUSTOMCLUSTERATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_MODIFYDBCUSTOMCLUSTERATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * ModifyDBCustomClusterAttributes请求参数结构体
                */
                class ModifyDBCustomClusterAttributesRequest : public AbstractModel
                {
                public:
                    ModifyDBCustomClusterAttributesRequest();
                    ~ModifyDBCustomClusterAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p><p>参数格式：dbcc-hj7gab15</p>
                     * @return ClusterId <p>集群ID</p><p>参数格式：dbcc-hj7gab15</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p><p>参数格式：dbcc-hj7gab15</p>
                     * @param _clusterId <p>集群ID</p><p>参数格式：dbcc-hj7gab15</p>
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
                     * 获取<p>集群 ID 列表</p><p>入参限制：最多支持 100 个</p><p>ClusterId 和 ClusterIds 必须传一个且不能同时传</p>
                     * @return ClusterIds <p>集群 ID 列表</p><p>入参限制：最多支持 100 个</p><p>ClusterId 和 ClusterIds 必须传一个且不能同时传</p>
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置<p>集群 ID 列表</p><p>入参限制：最多支持 100 个</p><p>ClusterId 和 ClusterIds 必须传一个且不能同时传</p>
                     * @param _clusterIds <p>集群 ID 列表</p><p>入参限制：最多支持 100 个</p><p>ClusterId 和 ClusterIds 必须传一个且不能同时传</p>
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取<p>是否启用集群删除保护</p><p>枚举值：</p><ul><li>true： 启用</li><li>false： 不启用</li></ul>
                     * @return DeletionProtection <p>是否启用集群删除保护</p><p>枚举值：</p><ul><li>true： 启用</li><li>false： 不启用</li></ul>
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置<p>是否启用集群删除保护</p><p>枚举值：</p><ul><li>true： 启用</li><li>false： 不启用</li></ul>
                     * @param _deletionProtection <p>是否启用集群删除保护</p><p>枚举值：</p><ul><li>true： 启用</li><li>false： 不启用</li></ul>
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取<p>集群名称</p><p>入参限制：最长128个字符</p>
                     * @return ClusterName <p>集群名称</p><p>入参限制：最长128个字符</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p><p>入参限制：最长128个字符</p>
                     * @param _clusterName <p>集群名称</p><p>入参限制：最长128个字符</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>集群描述</p><p>入参限制：最长200个字符</p>
                     * @return ClusterDescription <p>集群描述</p><p>入参限制：最长200个字符</p>
                     * 
                     */
                    std::string GetClusterDescription() const;

                    /**
                     * 设置<p>集群描述</p><p>入参限制：最长200个字符</p>
                     * @param _clusterDescription <p>集群描述</p><p>入参限制：最长200个字符</p>
                     * 
                     */
                    void SetClusterDescription(const std::string& _clusterDescription);

                    /**
                     * 判断参数 ClusterDescription 是否已赋值
                     * @return ClusterDescription 是否已赋值
                     * 
                     */
                    bool ClusterDescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p><p>参数格式：dbcc-hj7gab15</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群 ID 列表</p><p>入参限制：最多支持 100 个</p><p>ClusterId 和 ClusterIds 必须传一个且不能同时传</p>
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * <p>是否启用集群删除保护</p><p>枚举值：</p><ul><li>true： 启用</li><li>false： 不启用</li></ul>
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * <p>集群名称</p><p>入参限制：最长128个字符</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群描述</p><p>入参限制：最长200个字符</p>
                     */
                    std::string m_clusterDescription;
                    bool m_clusterDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_MODIFYDBCUSTOMCLUSTERATTRIBUTESREQUEST_H_
