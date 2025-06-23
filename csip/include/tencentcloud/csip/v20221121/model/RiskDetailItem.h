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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RISKDETAILITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RISKDETAILITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 风险详情
                */
                class RiskDetailItem : public AbstractModel
                {
                public:
                    RiskDetailItem();
                    ~RiskDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取首次发现时间
                     * @return CreateTime 首次发现时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置首次发现时间
                     * @param _createTime 首次发现时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取风险状态
                     * @return RiskStatus 风险状态
                     * 
                     */
                    int64_t GetRiskStatus() const;

                    /**
                     * 设置风险状态
                     * @param _riskStatus 风险状态
                     * 
                     */
                    void SetRiskStatus(const int64_t& _riskStatus);

                    /**
                     * 判断参数 RiskStatus 是否已赋值
                     * @return RiskStatus 是否已赋值
                     * 
                     */
                    bool RiskStatusHasBeenSet() const;

                    /**
                     * 获取风险内容
                     * @return RiskContent 风险内容
                     * 
                     */
                    std::string GetRiskContent() const;

                    /**
                     * 设置风险内容
                     * @param _riskContent 风险内容
                     * 
                     */
                    void SetRiskContent(const std::string& _riskContent);

                    /**
                     * 判断参数 RiskContent 是否已赋值
                     * @return RiskContent 是否已赋值
                     * 
                     */
                    bool RiskContentHasBeenSet() const;

                    /**
                     * 获取云厂商
                     * @return Provider 云厂商
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置云厂商
                     * @param _provider 云厂商
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取云厂商名称
                     * @return ProviderName 云厂商名称
                     * 
                     */
                    std::string GetProviderName() const;

                    /**
                     * 设置云厂商名称
                     * @param _providerName 云厂商名称
                     * 
                     */
                    void SetProviderName(const std::string& _providerName);

                    /**
                     * 判断参数 ProviderName 是否已赋值
                     * @return ProviderName 是否已赋值
                     * 
                     */
                    bool ProviderNameHasBeenSet() const;

                    /**
                     * 获取云账号
                     * @return CloudAccountId 云账号
                     * 
                     */
                    std::string GetCloudAccountId() const;

                    /**
                     * 设置云账号
                     * @param _cloudAccountId 云账号
                     * 
                     */
                    void SetCloudAccountId(const std::string& _cloudAccountId);

                    /**
                     * 判断参数 CloudAccountId 是否已赋值
                     * @return CloudAccountId 是否已赋值
                     * 
                     */
                    bool CloudAccountIdHasBeenSet() const;

                    /**
                     * 获取云账号名称
                     * @return CloudAccountName 云账号名称
                     * 
                     */
                    std::string GetCloudAccountName() const;

                    /**
                     * 设置云账号名称
                     * @param _cloudAccountName 云账号名称
                     * 
                     */
                    void SetCloudAccountName(const std::string& _cloudAccountName);

                    /**
                     * 判断参数 CloudAccountName 是否已赋值
                     * @return CloudAccountName 是否已赋值
                     * 
                     */
                    bool CloudAccountNameHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取风险ID
                     * @return RiskId 风险ID
                     * 
                     */
                    uint64_t GetRiskId() const;

                    /**
                     * 设置风险ID
                     * @param _riskId 风险ID
                     * 
                     */
                    void SetRiskId(const uint64_t& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取风险规则ID
                     * @return RiskRuleId 风险规则ID
                     * 
                     */
                    std::string GetRiskRuleId() const;

                    /**
                     * 设置风险规则ID
                     * @param _riskRuleId 风险规则ID
                     * 
                     */
                    void SetRiskRuleId(const std::string& _riskRuleId);

                    /**
                     * 判断参数 RiskRuleId 是否已赋值
                     * @return RiskRuleId 是否已赋值
                     * 
                     */
                    bool RiskRuleIdHasBeenSet() const;

                    /**
                     * 获取风险验证状态
                     * @return CheckStatus 风险验证状态
                     * 
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 设置风险验证状态
                     * @param _checkStatus 风险验证状态
                     * 
                     */
                    void SetCheckStatus(const std::string& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                private:

                    /**
                     * 首次发现时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 风险状态
                     */
                    int64_t m_riskStatus;
                    bool m_riskStatusHasBeenSet;

                    /**
                     * 风险内容
                     */
                    std::string m_riskContent;
                    bool m_riskContentHasBeenSet;

                    /**
                     * 云厂商
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * 云厂商名称
                     */
                    std::string m_providerName;
                    bool m_providerNameHasBeenSet;

                    /**
                     * 云账号
                     */
                    std::string m_cloudAccountId;
                    bool m_cloudAccountIdHasBeenSet;

                    /**
                     * 云账号名称
                     */
                    std::string m_cloudAccountName;
                    bool m_cloudAccountNameHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 风险ID
                     */
                    uint64_t m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * 风险规则ID
                     */
                    std::string m_riskRuleId;
                    bool m_riskRuleIdHasBeenSet;

                    /**
                     * 风险验证状态
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RISKDETAILITEM_H_
