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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYCLUSTERREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * ModifyCluster请求参数结构体
                */
                class ModifyClusterRequest : public AbstractModel
                {
                public:
                    ModifyClusterRequest();
                    ~ModifyClusterRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取集群描述信息
                     * @return ClusterDesc 集群描述信息
                     * 
                     */
                    std::string GetClusterDesc() const;

                    /**
                     * 设置集群描述信息
                     * @param _clusterDesc 集群描述信息
                     * 
                     */
                    void SetClusterDesc(const std::string& _clusterDesc);

                    /**
                     * 判断参数 ClusterDesc 是否已赋值
                     * @return ClusterDesc 是否已赋值
                     * 
                     */
                    bool ClusterDescHasBeenSet() const;

                    /**
                     * 获取备注名
                     * @return ClusterRemarkName 备注名
                     * 
                     */
                    std::string GetClusterRemarkName() const;

                    /**
                     * 设置备注名
                     * @param _clusterRemarkName 备注名
                     * 
                     */
                    void SetClusterRemarkName(const std::string& _clusterRemarkName);

                    /**
                     * 判断参数 ClusterRemarkName 是否已赋值
                     * @return ClusterRemarkName 是否已赋值
                     * 
                     */
                    bool ClusterRemarkNameHasBeenSet() const;

                    /**
                     * 获取是否开启cls日志功能
                     * @return EnableLogCollection 是否开启cls日志功能
                     * 
                     */
                    bool GetEnableLogCollection() const;

                    /**
                     * 设置是否开启cls日志功能
                     * @param _enableLogCollection 是否开启cls日志功能
                     * 
                     */
                    void SetEnableLogCollection(const bool& _enableLogCollection);

                    /**
                     * 判断参数 EnableLogCollection 是否已赋值
                     * @return EnableLogCollection 是否已赋值
                     * 
                     */
                    bool EnableLogCollectionHasBeenSet() const;

                    /**
                     * 获取是否修复cls日志功能
                     * @return RepairLog 是否修复cls日志功能
                     * 
                     */
                    bool GetRepairLog() const;

                    /**
                     * 设置是否修复cls日志功能
                     * @param _repairLog 是否修复cls日志功能
                     * 
                     */
                    void SetRepairLog(const bool& _repairLog);

                    /**
                     * 判断参数 RepairLog 是否已赋值
                     * @return RepairLog 是否已赋值
                     * 
                     */
                    bool RepairLogHasBeenSet() const;

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
                     * 集群描述信息
                     */
                    std::string m_clusterDesc;
                    bool m_clusterDescHasBeenSet;

                    /**
                     * 备注名
                     */
                    std::string m_clusterRemarkName;
                    bool m_clusterRemarkNameHasBeenSet;

                    /**
                     * 是否开启cls日志功能
                     */
                    bool m_enableLogCollection;
                    bool m_enableLogCollectionHasBeenSet;

                    /**
                     * 是否修复cls日志功能
                     */
                    bool m_repairLog;
                    bool m_repairLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYCLUSTERREQUEST_H_
