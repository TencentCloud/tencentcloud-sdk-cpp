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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKAUDITRECORD_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKAUDITRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 网络集群资产审计返回结构体
                */
                class NetworkAuditRecord : public AbstractModel
                {
                public:
                    NetworkAuditRecord();
                    ~NetworkAuditRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
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
                     * 获取集群名字
                     * @return ClusterName 集群名字
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名字
                     * @param _clusterName 集群名字
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
                     * 获取集群区域
                     * @return Region 集群区域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置集群区域
                     * @param _region 集群区域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取动作
                     * @return Action 动作
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置动作
                     * @param _action 动作
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取操作人
                     * @return Operation 操作人
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作人
                     * @param _operation 操作人
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取策略名
                     * @return NetworkPolicyName 策略名
                     * 
                     */
                    std::string GetNetworkPolicyName() const;

                    /**
                     * 设置策略名
                     * @param _networkPolicyName 策略名
                     * 
                     */
                    void SetNetworkPolicyName(const std::string& _networkPolicyName);

                    /**
                     * 判断参数 NetworkPolicyName 是否已赋值
                     * @return NetworkPolicyName 是否已赋值
                     * 
                     */
                    bool NetworkPolicyNameHasBeenSet() const;

                    /**
                     * 获取操作时间
                     * @return OperationTime 操作时间
                     * 
                     */
                    std::string GetOperationTime() const;

                    /**
                     * 设置操作时间
                     * @param _operationTime 操作时间
                     * 
                     */
                    void SetOperationTime(const std::string& _operationTime);

                    /**
                     * 判断参数 OperationTime 是否已赋值
                     * @return OperationTime 是否已赋值
                     * 
                     */
                    bool OperationTimeHasBeenSet() const;

                    /**
                     * 获取操作人appid
                     * @return AppId 操作人appid
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置操作人appid
                     * @param _appId 操作人appid
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取操作人uin
                     * @return Uin 操作人uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置操作人uin
                     * @param _uin 操作人uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取策略id
                     * @return PolicyId 策略id
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置策略id
                     * @param _policyId 策略id
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名字
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 动作
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 操作人
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 策略名
                     */
                    std::string m_networkPolicyName;
                    bool m_networkPolicyNameHasBeenSet;

                    /**
                     * 操作时间
                     */
                    std::string m_operationTime;
                    bool m_operationTimeHasBeenSet;

                    /**
                     * 操作人appid
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 操作人uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 策略id
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKAUDITRECORD_H_
