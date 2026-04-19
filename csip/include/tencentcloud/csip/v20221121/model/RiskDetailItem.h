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
                     * 获取<p>首次发现时间</p>
                     * @return CreateTime <p>首次发现时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>首次发现时间</p>
                     * @param _createTime <p>首次发现时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
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
                     * 获取<p>风险状态</p>
                     * @return RiskStatus <p>风险状态</p>
                     * 
                     */
                    int64_t GetRiskStatus() const;

                    /**
                     * 设置<p>风险状态</p>
                     * @param _riskStatus <p>风险状态</p>
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
                     * 获取<p>风险内容</p>
                     * @return RiskContent <p>风险内容</p>
                     * 
                     */
                    std::string GetRiskContent() const;

                    /**
                     * 设置<p>风险内容</p>
                     * @param _riskContent <p>风险内容</p>
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
                     * 获取<p>云厂商</p>
                     * @return Provider <p>云厂商</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>云厂商</p>
                     * @param _provider <p>云厂商</p>
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
                     * 获取<p>云厂商名称</p>
                     * @return ProviderName <p>云厂商名称</p>
                     * 
                     */
                    std::string GetProviderName() const;

                    /**
                     * 设置<p>云厂商名称</p>
                     * @param _providerName <p>云厂商名称</p>
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
                     * 获取<p>云账号</p>
                     * @return CloudAccountId <p>云账号</p>
                     * 
                     */
                    std::string GetCloudAccountId() const;

                    /**
                     * 设置<p>云账号</p>
                     * @param _cloudAccountId <p>云账号</p>
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
                     * 获取<p>云账号名称</p>
                     * @return CloudAccountName <p>云账号名称</p>
                     * 
                     */
                    std::string GetCloudAccountName() const;

                    /**
                     * 设置<p>云账号名称</p>
                     * @param _cloudAccountName <p>云账号名称</p>
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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>风险ID</p>
                     * @return RiskId <p>风险ID</p>
                     * 
                     */
                    uint64_t GetRiskId() const;

                    /**
                     * 设置<p>风险ID</p>
                     * @param _riskId <p>风险ID</p>
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
                     * 获取<p>风险规则ID</p>
                     * @return RiskRuleId <p>风险规则ID</p>
                     * 
                     */
                    std::string GetRiskRuleId() const;

                    /**
                     * 设置<p>风险规则ID</p>
                     * @param _riskRuleId <p>风险规则ID</p>
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
                     * 获取<p>风险验证状态</p>
                     * @return CheckStatus <p>风险验证状态</p>
                     * 
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 设置<p>风险验证状态</p>
                     * @param _checkStatus <p>风险验证状态</p>
                     * 
                     */
                    void SetCheckStatus(const std::string& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                    /**
                     * 获取<p>用户AppID</p>
                     * @return AppID <p>用户AppID</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>用户AppID</p>
                     * @param _appID <p>用户AppID</p>
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                private:

                    /**
                     * <p>首次发现时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>风险状态</p>
                     */
                    int64_t m_riskStatus;
                    bool m_riskStatusHasBeenSet;

                    /**
                     * <p>风险内容</p>
                     */
                    std::string m_riskContent;
                    bool m_riskContentHasBeenSet;

                    /**
                     * <p>云厂商</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>云厂商名称</p>
                     */
                    std::string m_providerName;
                    bool m_providerNameHasBeenSet;

                    /**
                     * <p>云账号</p>
                     */
                    std::string m_cloudAccountId;
                    bool m_cloudAccountIdHasBeenSet;

                    /**
                     * <p>云账号名称</p>
                     */
                    std::string m_cloudAccountName;
                    bool m_cloudAccountNameHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>风险ID</p>
                     */
                    uint64_t m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * <p>风险规则ID</p>
                     */
                    std::string m_riskRuleId;
                    bool m_riskRuleIdHasBeenSet;

                    /**
                     * <p>风险验证状态</p>
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * <p>用户AppID</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RISKDETAILITEM_H_
