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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYINSTANCEPARAMREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYINSTANCEPARAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyParamItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyInstanceParam请求参数结构体
                */
                class ModifyInstanceParamRequest : public AbstractModel
                {
                public:
                    ModifyInstanceParamRequest();
                    ~ModifyInstanceParamRequest() = default;
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
                     * 获取实例ID
                     * @return InstanceIds 实例ID
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID
                     * @param _instanceIds 实例ID
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取集群参数列表，例如 [{           "CurrentValue":"2",        "ParamName":"auto_increment_increment"}]
                     * @return ClusterParamList 集群参数列表，例如 [{           "CurrentValue":"2",        "ParamName":"auto_increment_increment"}]
                     * 
                     */
                    std::vector<ModifyParamItem> GetClusterParamList() const;

                    /**
                     * 设置集群参数列表，例如 [{           "CurrentValue":"2",        "ParamName":"auto_increment_increment"}]
                     * @param _clusterParamList 集群参数列表，例如 [{           "CurrentValue":"2",        "ParamName":"auto_increment_increment"}]
                     * 
                     */
                    void SetClusterParamList(const std::vector<ModifyParamItem>& _clusterParamList);

                    /**
                     * 判断参数 ClusterParamList 是否已赋值
                     * @return ClusterParamList 是否已赋值
                     * 
                     */
                    bool ClusterParamListHasBeenSet() const;

                    /**
                     * 获取实例参数列表，例如[{           "CurrentValue":"2",        "ParamName":"innodb_stats_transient_sample_pages"}]
                     * @return InstanceParamList 实例参数列表，例如[{           "CurrentValue":"2",        "ParamName":"innodb_stats_transient_sample_pages"}]
                     * 
                     */
                    std::vector<ModifyParamItem> GetInstanceParamList() const;

                    /**
                     * 设置实例参数列表，例如[{           "CurrentValue":"2",        "ParamName":"innodb_stats_transient_sample_pages"}]
                     * @param _instanceParamList 实例参数列表，例如[{           "CurrentValue":"2",        "ParamName":"innodb_stats_transient_sample_pages"}]
                     * 
                     */
                    void SetInstanceParamList(const std::vector<ModifyParamItem>& _instanceParamList);

                    /**
                     * 判断参数 InstanceParamList 是否已赋值
                     * @return InstanceParamList 是否已赋值
                     * 
                     */
                    bool InstanceParamListHasBeenSet() const;

                    /**
                     * 获取yes：在运维时间窗内修改，no：立即执行（默认值）
                     * @return IsInMaintainPeriod yes：在运维时间窗内修改，no：立即执行（默认值）
                     * 
                     */
                    std::string GetIsInMaintainPeriod() const;

                    /**
                     * 设置yes：在运维时间窗内修改，no：立即执行（默认值）
                     * @param _isInMaintainPeriod yes：在运维时间窗内修改，no：立即执行（默认值）
                     * 
                     */
                    void SetIsInMaintainPeriod(const std::string& _isInMaintainPeriod);

                    /**
                     * 判断参数 IsInMaintainPeriod 是否已赋值
                     * @return IsInMaintainPeriod 是否已赋值
                     * 
                     */
                    bool IsInMaintainPeriodHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 集群参数列表，例如 [{           "CurrentValue":"2",        "ParamName":"auto_increment_increment"}]
                     */
                    std::vector<ModifyParamItem> m_clusterParamList;
                    bool m_clusterParamListHasBeenSet;

                    /**
                     * 实例参数列表，例如[{           "CurrentValue":"2",        "ParamName":"innodb_stats_transient_sample_pages"}]
                     */
                    std::vector<ModifyParamItem> m_instanceParamList;
                    bool m_instanceParamListHasBeenSet;

                    /**
                     * yes：在运维时间窗内修改，no：立即执行（默认值）
                     */
                    std::string m_isInMaintainPeriod;
                    bool m_isInMaintainPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYINSTANCEPARAMREQUEST_H_
