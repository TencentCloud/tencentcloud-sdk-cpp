/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERBASICSETTINGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERBASICSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 描述集群的基本配置信息
                */
                class ClusterBasicSettings : public AbstractModel
                {
                public:
                    ClusterBasicSettings();
                    ~ClusterBasicSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群系统。centos7.2x86_64 或者 ubuntu16.04.1 LTSx86_64，默认取值为ubuntu16.04.1 LTSx86_64
                     * @return ClusterOs 集群系统。centos7.2x86_64 或者 ubuntu16.04.1 LTSx86_64，默认取值为ubuntu16.04.1 LTSx86_64
                     */
                    std::string GetClusterOs() const;

                    /**
                     * 设置集群系统。centos7.2x86_64 或者 ubuntu16.04.1 LTSx86_64，默认取值为ubuntu16.04.1 LTSx86_64
                     * @param ClusterOs 集群系统。centos7.2x86_64 或者 ubuntu16.04.1 LTSx86_64，默认取值为ubuntu16.04.1 LTSx86_64
                     */
                    void SetClusterOs(const std::string& _clusterOs);

                    /**
                     * 判断参数 ClusterOs 是否已赋值
                     * @return ClusterOs 是否已赋值
                     */
                    bool ClusterOsHasBeenSet() const;

                    /**
                     * 获取集群版本,默认值为1.10.5
                     * @return ClusterVersion 集群版本,默认值为1.10.5
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置集群版本,默认值为1.10.5
                     * @param ClusterVersion 集群版本,默认值为1.10.5
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param ClusterName 集群名称
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群描述
                     * @return ClusterDescription 集群描述
                     */
                    std::string GetClusterDescription() const;

                    /**
                     * 设置集群描述
                     * @param ClusterDescription 集群描述
                     */
                    void SetClusterDescription(const std::string& _clusterDescription);

                    /**
                     * 判断参数 ClusterDescription 是否已赋值
                     * @return ClusterDescription 是否已赋值
                     */
                    bool ClusterDescriptionHasBeenSet() const;

                    /**
                     * 获取私有网络ID，形如vpc-xxx。创建托管空集群时必传。
                     * @return VpcId 私有网络ID，形如vpc-xxx。创建托管空集群时必传。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，形如vpc-xxx。创建托管空集群时必传。
                     * @param VpcId 私有网络ID，形如vpc-xxx。创建托管空集群时必传。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取集群内新增资源所属项目ID。
                     * @return ProjectId 集群内新增资源所属项目ID。
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置集群内新增资源所属项目ID。
                     * @param ProjectId 集群内新增资源所属项目ID。
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 集群系统。centos7.2x86_64 或者 ubuntu16.04.1 LTSx86_64，默认取值为ubuntu16.04.1 LTSx86_64
                     */
                    std::string m_clusterOs;
                    bool m_clusterOsHasBeenSet;

                    /**
                     * 集群版本,默认值为1.10.5
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群描述
                     */
                    std::string m_clusterDescription;
                    bool m_clusterDescriptionHasBeenSet;

                    /**
                     * 私有网络ID，形如vpc-xxx。创建托管空集群时必传。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 集群内新增资源所属项目ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERBASICSETTINGS_H_
