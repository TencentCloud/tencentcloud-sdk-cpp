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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYREADONLYGROUPDETAILSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYREADONLYGROUPDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/ReadOnlyInstanceWeightPair.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyReadOnlyGroupDetails请求参数结构体
                */
                class ModifyReadOnlyGroupDetailsRequest : public AbstractModel
                {
                public:
                    ModifyReadOnlyGroupDetailsRequest();
                    ~ModifyReadOnlyGroupDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主实例ID，格式如：mssql-3l3fgqn7
                     * @return InstanceId 主实例ID，格式如：mssql-3l3fgqn7
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置主实例ID，格式如：mssql-3l3fgqn7
                     * @param _instanceId 主实例ID，格式如：mssql-3l3fgqn7
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取只读组ID
                     * @return ReadOnlyGroupId 只读组ID
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置只读组ID
                     * @param _readOnlyGroupId 只读组ID
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取只读组名称，不填此参数，则不修改
                     * @return ReadOnlyGroupName 只读组名称，不填此参数，则不修改
                     * 
                     */
                    std::string GetReadOnlyGroupName() const;

                    /**
                     * 设置只读组名称，不填此参数，则不修改
                     * @param _readOnlyGroupName 只读组名称，不填此参数，则不修改
                     * 
                     */
                    void SetReadOnlyGroupName(const std::string& _readOnlyGroupName);

                    /**
                     * 判断参数 ReadOnlyGroupName 是否已赋值
                     * @return ReadOnlyGroupName 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupNameHasBeenSet() const;

                    /**
                     * 获取是否启动超时剔除功能,0-不开启剔除功能，1-开启剔除功能，不填此参数，则不修改
                     * @return IsOfflineDelay 是否启动超时剔除功能,0-不开启剔除功能，1-开启剔除功能，不填此参数，则不修改
                     * 
                     */
                    int64_t GetIsOfflineDelay() const;

                    /**
                     * 设置是否启动超时剔除功能,0-不开启剔除功能，1-开启剔除功能，不填此参数，则不修改
                     * @param _isOfflineDelay 是否启动超时剔除功能,0-不开启剔除功能，1-开启剔除功能，不填此参数，则不修改
                     * 
                     */
                    void SetIsOfflineDelay(const int64_t& _isOfflineDelay);

                    /**
                     * 判断参数 IsOfflineDelay 是否已赋值
                     * @return IsOfflineDelay 是否已赋值
                     * 
                     */
                    bool IsOfflineDelayHasBeenSet() const;

                    /**
                     * 获取启动超时剔除功能后，使用的超时阈值，不填此参数，则不修改
                     * @return ReadOnlyMaxDelayTime 启动超时剔除功能后，使用的超时阈值，不填此参数，则不修改
                     * 
                     */
                    int64_t GetReadOnlyMaxDelayTime() const;

                    /**
                     * 设置启动超时剔除功能后，使用的超时阈值，不填此参数，则不修改
                     * @param _readOnlyMaxDelayTime 启动超时剔除功能后，使用的超时阈值，不填此参数，则不修改
                     * 
                     */
                    void SetReadOnlyMaxDelayTime(const int64_t& _readOnlyMaxDelayTime);

                    /**
                     * 判断参数 ReadOnlyMaxDelayTime 是否已赋值
                     * @return ReadOnlyMaxDelayTime 是否已赋值
                     * 
                     */
                    bool ReadOnlyMaxDelayTimeHasBeenSet() const;

                    /**
                     * 获取启动超时剔除功能后，只读组至少保留的只读副本数，不填此参数，则不修改
                     * @return MinReadOnlyInGroup 启动超时剔除功能后，只读组至少保留的只读副本数，不填此参数，则不修改
                     * 
                     */
                    int64_t GetMinReadOnlyInGroup() const;

                    /**
                     * 设置启动超时剔除功能后，只读组至少保留的只读副本数，不填此参数，则不修改
                     * @param _minReadOnlyInGroup 启动超时剔除功能后，只读组至少保留的只读副本数，不填此参数，则不修改
                     * 
                     */
                    void SetMinReadOnlyInGroup(const int64_t& _minReadOnlyInGroup);

                    /**
                     * 判断参数 MinReadOnlyInGroup 是否已赋值
                     * @return MinReadOnlyInGroup 是否已赋值
                     * 
                     */
                    bool MinReadOnlyInGroupHasBeenSet() const;

                    /**
                     * 获取只读组实例权重修改集合，不填此参数，则不修改
                     * @return WeightPairs 只读组实例权重修改集合，不填此参数，则不修改
                     * 
                     */
                    std::vector<ReadOnlyInstanceWeightPair> GetWeightPairs() const;

                    /**
                     * 设置只读组实例权重修改集合，不填此参数，则不修改
                     * @param _weightPairs 只读组实例权重修改集合，不填此参数，则不修改
                     * 
                     */
                    void SetWeightPairs(const std::vector<ReadOnlyInstanceWeightPair>& _weightPairs);

                    /**
                     * 判断参数 WeightPairs 是否已赋值
                     * @return WeightPairs 是否已赋值
                     * 
                     */
                    bool WeightPairsHasBeenSet() const;

                    /**
                     * 获取0-用户自定义权重（根据WeightPairs调整）,1-系统自动分配权重(WeightPairs无效)， 默认为0
                     * @return AutoWeight 0-用户自定义权重（根据WeightPairs调整）,1-系统自动分配权重(WeightPairs无效)， 默认为0
                     * 
                     */
                    int64_t GetAutoWeight() const;

                    /**
                     * 设置0-用户自定义权重（根据WeightPairs调整）,1-系统自动分配权重(WeightPairs无效)， 默认为0
                     * @param _autoWeight 0-用户自定义权重（根据WeightPairs调整）,1-系统自动分配权重(WeightPairs无效)， 默认为0
                     * 
                     */
                    void SetAutoWeight(const int64_t& _autoWeight);

                    /**
                     * 判断参数 AutoWeight 是否已赋值
                     * @return AutoWeight 是否已赋值
                     * 
                     */
                    bool AutoWeightHasBeenSet() const;

                    /**
                     * 获取0-不重新均衡负载，1-重新均衡负载，默认为0
                     * @return BalanceWeight 0-不重新均衡负载，1-重新均衡负载，默认为0
                     * 
                     */
                    int64_t GetBalanceWeight() const;

                    /**
                     * 设置0-不重新均衡负载，1-重新均衡负载，默认为0
                     * @param _balanceWeight 0-不重新均衡负载，1-重新均衡负载，默认为0
                     * 
                     */
                    void SetBalanceWeight(const int64_t& _balanceWeight);

                    /**
                     * 判断参数 BalanceWeight 是否已赋值
                     * @return BalanceWeight 是否已赋值
                     * 
                     */
                    bool BalanceWeightHasBeenSet() const;

                private:

                    /**
                     * 主实例ID，格式如：mssql-3l3fgqn7
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 只读组ID
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * 只读组名称，不填此参数，则不修改
                     */
                    std::string m_readOnlyGroupName;
                    bool m_readOnlyGroupNameHasBeenSet;

                    /**
                     * 是否启动超时剔除功能,0-不开启剔除功能，1-开启剔除功能，不填此参数，则不修改
                     */
                    int64_t m_isOfflineDelay;
                    bool m_isOfflineDelayHasBeenSet;

                    /**
                     * 启动超时剔除功能后，使用的超时阈值，不填此参数，则不修改
                     */
                    int64_t m_readOnlyMaxDelayTime;
                    bool m_readOnlyMaxDelayTimeHasBeenSet;

                    /**
                     * 启动超时剔除功能后，只读组至少保留的只读副本数，不填此参数，则不修改
                     */
                    int64_t m_minReadOnlyInGroup;
                    bool m_minReadOnlyInGroupHasBeenSet;

                    /**
                     * 只读组实例权重修改集合，不填此参数，则不修改
                     */
                    std::vector<ReadOnlyInstanceWeightPair> m_weightPairs;
                    bool m_weightPairsHasBeenSet;

                    /**
                     * 0-用户自定义权重（根据WeightPairs调整）,1-系统自动分配权重(WeightPairs无效)， 默认为0
                     */
                    int64_t m_autoWeight;
                    bool m_autoWeightHasBeenSet;

                    /**
                     * 0-不重新均衡负载，1-重新均衡负载，默认为0
                     */
                    int64_t m_balanceWeight;
                    bool m_balanceWeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYREADONLYGROUPDETAILSREQUEST_H_
