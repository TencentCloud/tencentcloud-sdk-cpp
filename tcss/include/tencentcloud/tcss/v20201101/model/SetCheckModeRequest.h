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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SETCHECKMODEREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SETCHECKMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * SetCheckMode请求参数结构体
                */
                class SetCheckModeRequest : public AbstractModel
                {
                public:
                    SetCheckModeRequest();
                    ~SetCheckModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要设置的集群ID列表
                     * @return ClusterIds 要设置的集群ID列表
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置要设置的集群ID列表
                     * @param _clusterIds 要设置的集群ID列表
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
                     * 获取集群检查模式(正常模式"Cluster_Normal"、主动模式"Cluster_Actived"、不设置"Cluster_Unset")
                     * @return ClusterCheckMode 集群检查模式(正常模式"Cluster_Normal"、主动模式"Cluster_Actived"、不设置"Cluster_Unset")
                     * 
                     */
                    std::string GetClusterCheckMode() const;

                    /**
                     * 设置集群检查模式(正常模式"Cluster_Normal"、主动模式"Cluster_Actived"、不设置"Cluster_Unset")
                     * @param _clusterCheckMode 集群检查模式(正常模式"Cluster_Normal"、主动模式"Cluster_Actived"、不设置"Cluster_Unset")
                     * 
                     */
                    void SetClusterCheckMode(const std::string& _clusterCheckMode);

                    /**
                     * 判断参数 ClusterCheckMode 是否已赋值
                     * @return ClusterCheckMode 是否已赋值
                     * 
                     */
                    bool ClusterCheckModeHasBeenSet() const;

                    /**
                     * 获取0不设置 1打开 2关闭
                     * @return ClusterAutoCheck 0不设置 1打开 2关闭
                     * 
                     */
                    uint64_t GetClusterAutoCheck() const;

                    /**
                     * 设置0不设置 1打开 2关闭
                     * @param _clusterAutoCheck 0不设置 1打开 2关闭
                     * 
                     */
                    void SetClusterAutoCheck(const uint64_t& _clusterAutoCheck);

                    /**
                     * 判断参数 ClusterAutoCheck 是否已赋值
                     * @return ClusterAutoCheck 是否已赋值
                     * 
                     */
                    bool ClusterAutoCheckHasBeenSet() const;

                private:

                    /**
                     * 要设置的集群ID列表
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * 集群检查模式(正常模式"Cluster_Normal"、主动模式"Cluster_Actived"、不设置"Cluster_Unset")
                     */
                    std::string m_clusterCheckMode;
                    bool m_clusterCheckModeHasBeenSet;

                    /**
                     * 0不设置 1打开 2关闭
                     */
                    uint64_t m_clusterAutoCheck;
                    bool m_clusterAutoCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SETCHECKMODEREQUEST_H_
