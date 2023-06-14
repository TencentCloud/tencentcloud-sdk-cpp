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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MANAGEREPLICATIONREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MANAGEREPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/ReplicationRule.h>
#include <tencentcloud/tcr/v20190924/model/PeerReplicationOption.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ManageReplication请求参数结构体
                */
                class ManageReplicationRequest : public AbstractModel
                {
                public:
                    ManageReplicationRequest();
                    ~ManageReplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取复制源实例ID
                     * @return SourceRegistryId 复制源实例ID
                     * 
                     */
                    std::string GetSourceRegistryId() const;

                    /**
                     * 设置复制源实例ID
                     * @param _sourceRegistryId 复制源实例ID
                     * 
                     */
                    void SetSourceRegistryId(const std::string& _sourceRegistryId);

                    /**
                     * 判断参数 SourceRegistryId 是否已赋值
                     * @return SourceRegistryId 是否已赋值
                     * 
                     */
                    bool SourceRegistryIdHasBeenSet() const;

                    /**
                     * 获取复制目标实例ID
                     * @return DestinationRegistryId 复制目标实例ID
                     * 
                     */
                    std::string GetDestinationRegistryId() const;

                    /**
                     * 设置复制目标实例ID
                     * @param _destinationRegistryId 复制目标实例ID
                     * 
                     */
                    void SetDestinationRegistryId(const std::string& _destinationRegistryId);

                    /**
                     * 判断参数 DestinationRegistryId 是否已赋值
                     * @return DestinationRegistryId 是否已赋值
                     * 
                     */
                    bool DestinationRegistryIdHasBeenSet() const;

                    /**
                     * 获取同步规则
                     * @return Rule 同步规则
                     * 
                     */
                    ReplicationRule GetRule() const;

                    /**
                     * 设置同步规则
                     * @param _rule 同步规则
                     * 
                     */
                    void SetRule(const ReplicationRule& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取规则描述
                     * @return Description 规则描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
                     * @param _description 规则描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取目标实例的地域ID，如广州是1
                     * @return DestinationRegionId 目标实例的地域ID，如广州是1
                     * 
                     */
                    uint64_t GetDestinationRegionId() const;

                    /**
                     * 设置目标实例的地域ID，如广州是1
                     * @param _destinationRegionId 目标实例的地域ID，如广州是1
                     * 
                     */
                    void SetDestinationRegionId(const uint64_t& _destinationRegionId);

                    /**
                     * 判断参数 DestinationRegionId 是否已赋值
                     * @return DestinationRegionId 是否已赋值
                     * 
                     */
                    bool DestinationRegionIdHasBeenSet() const;

                    /**
                     * 获取开启跨主账号实例同步配置项
                     * @return PeerReplicationOption 开启跨主账号实例同步配置项
                     * 
                     */
                    PeerReplicationOption GetPeerReplicationOption() const;

                    /**
                     * 设置开启跨主账号实例同步配置项
                     * @param _peerReplicationOption 开启跨主账号实例同步配置项
                     * 
                     */
                    void SetPeerReplicationOption(const PeerReplicationOption& _peerReplicationOption);

                    /**
                     * 判断参数 PeerReplicationOption 是否已赋值
                     * @return PeerReplicationOption 是否已赋值
                     * 
                     */
                    bool PeerReplicationOptionHasBeenSet() const;

                private:

                    /**
                     * 复制源实例ID
                     */
                    std::string m_sourceRegistryId;
                    bool m_sourceRegistryIdHasBeenSet;

                    /**
                     * 复制目标实例ID
                     */
                    std::string m_destinationRegistryId;
                    bool m_destinationRegistryIdHasBeenSet;

                    /**
                     * 同步规则
                     */
                    ReplicationRule m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 目标实例的地域ID，如广州是1
                     */
                    uint64_t m_destinationRegionId;
                    bool m_destinationRegionIdHasBeenSet;

                    /**
                     * 开启跨主账号实例同步配置项
                     */
                    PeerReplicationOption m_peerReplicationOption;
                    bool m_peerReplicationOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MANAGEREPLICATIONREQUEST_H_
