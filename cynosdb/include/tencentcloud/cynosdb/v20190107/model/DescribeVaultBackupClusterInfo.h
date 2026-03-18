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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEVAULTBACKUPCLUSTERINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEVAULTBACKUPCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 集群信息
                */
                class DescribeVaultBackupClusterInfo : public AbstractModel
                {
                public:
                    DescribeVaultBackupClusterInfo();
                    ~DescribeVaultBackupClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
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
                     * 获取集群状态
                     * @return ClusterStatus 集群状态
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置集群状态
                     * @param _clusterStatus 集群状态
                     * 
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取集群所在地域
                     * @return ClusterRegion 集群所在地域
                     * 
                     */
                    std::string GetClusterRegion() const;

                    /**
                     * 设置集群所在地域
                     * @param _clusterRegion 集群所在地域
                     * 
                     */
                    void SetClusterRegion(const std::string& _clusterRegion);

                    /**
                     * 判断参数 ClusterRegion 是否已赋值
                     * @return ClusterRegion 是否已赋值
                     * 
                     */
                    bool ClusterRegionHasBeenSet() const;

                    /**
                     * 获取集群所在可用区
                     * @return ClusterZone 集群所在可用区
                     * 
                     */
                    std::string GetClusterZone() const;

                    /**
                     * 设置集群所在可用区
                     * @param _clusterZone 集群所在可用区
                     * 
                     */
                    void SetClusterZone(const std::string& _clusterZone);

                    /**
                     * 判断参数 ClusterZone 是否已赋值
                     * @return ClusterZone 是否已赋值
                     * 
                     */
                    bool ClusterZoneHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群状态
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * 集群所在地域
                     */
                    std::string m_clusterRegion;
                    bool m_clusterRegionHasBeenSet;

                    /**
                     * 集群所在可用区
                     */
                    std::string m_clusterZone;
                    bool m_clusterZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEVAULTBACKUPCLUSTERINFO_H_
