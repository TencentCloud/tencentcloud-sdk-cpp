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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HIGHBASELINERISKITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HIGHBASELINERISKITEM_H_

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
                * 高危基线风险内容
                */
                class HighBaseLineRiskItem : public AbstractModel
                {
                public:
                    HighBaseLineRiskItem();
                    ~HighBaseLineRiskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云账号ID
                     * @return CloudAccountID 云账号ID
                     * 
                     */
                    std::string GetCloudAccountID() const;

                    /**
                     * 设置云账号ID
                     * @param _cloudAccountID 云账号ID
                     * 
                     */
                    void SetCloudAccountID(const std::string& _cloudAccountID);

                    /**
                     * 判断参数 CloudAccountID 是否已赋值
                     * @return CloudAccountID 是否已赋值
                     * 
                     */
                    bool CloudAccountIDHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return AssetID 实例ID
                     * 
                     */
                    std::string GetAssetID() const;

                    /**
                     * 设置实例ID
                     * @param _assetID 实例ID
                     * 
                     */
                    void SetAssetID(const std::string& _assetID);

                    /**
                     * 判断参数 AssetID 是否已赋值
                     * @return AssetID 是否已赋值
                     * 
                     */
                    bool AssetIDHasBeenSet() const;

                    /**
                     * 获取实例状态
                     * @return InstanceStatus 实例状态
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置实例状态
                     * @param _instanceStatus 实例状态
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

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
                     * 获取风险名称
                     * @return RiskName 风险名称
                     * 
                     */
                    std::string GetRiskName() const;

                    /**
                     * 设置风险名称
                     * @param _riskName 风险名称
                     * 
                     */
                    void SetRiskName(const std::string& _riskName);

                    /**
                     * 判断参数 RiskName 是否已赋值
                     * @return RiskName 是否已赋值
                     * 
                     */
                    bool RiskNameHasBeenSet() const;

                    /**
                     * 获取风险分类
                     * @return RiskCategory 风险分类
                     * 
                     */
                    std::string GetRiskCategory() const;

                    /**
                     * 设置风险分类
                     * @param _riskCategory 风险分类
                     * 
                     */
                    void SetRiskCategory(const std::string& _riskCategory);

                    /**
                     * 判断参数 RiskCategory 是否已赋值
                     * @return RiskCategory 是否已赋值
                     * 
                     */
                    bool RiskCategoryHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return RiskLevel 风险等级
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置风险等级
                     * @param _riskLevel 风险等级
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取风险描述
                     * @return RiskDesc 风险描述
                     * 
                     */
                    std::string GetRiskDesc() const;

                    /**
                     * 设置风险描述
                     * @param _riskDesc 风险描述
                     * 
                     */
                    void SetRiskDesc(const std::string& _riskDesc);

                    /**
                     * 判断参数 RiskDesc 是否已赋值
                     * @return RiskDesc 是否已赋值
                     * 
                     */
                    bool RiskDescHasBeenSet() const;

                    /**
                     * 获取风险结果
                     * @return RiskResult 风险结果
                     * 
                     */
                    std::string GetRiskResult() const;

                    /**
                     * 设置风险结果
                     * @param _riskResult 风险结果
                     * 
                     */
                    void SetRiskResult(const std::string& _riskResult);

                    /**
                     * 判断参数 RiskResult 是否已赋值
                     * @return RiskResult 是否已赋值
                     * 
                     */
                    bool RiskResultHasBeenSet() const;

                    /**
                     * 获取修复建议
                     * @return FixAdvice 修复建议
                     * 
                     */
                    std::string GetFixAdvice() const;

                    /**
                     * 设置修复建议
                     * @param _fixAdvice 修复建议
                     * 
                     */
                    void SetFixAdvice(const std::string& _fixAdvice);

                    /**
                     * 判断参数 FixAdvice 是否已赋值
                     * @return FixAdvice 是否已赋值
                     * 
                     */
                    bool FixAdviceHasBeenSet() const;

                    /**
                     * 获取Linux漏洞
                     * @return RiskCategoryName Linux漏洞
                     * 
                     */
                    std::string GetRiskCategoryName() const;

                    /**
                     * 设置Linux漏洞
                     * @param _riskCategoryName Linux漏洞
                     * 
                     */
                    void SetRiskCategoryName(const std::string& _riskCategoryName);

                    /**
                     * 判断参数 RiskCategoryName 是否已赋值
                     * @return RiskCategoryName 是否已赋值
                     * 
                     */
                    bool RiskCategoryNameHasBeenSet() const;

                    /**
                     * 获取风险等级名称
                     * @return RiskLevelName 风险等级名称
                     * 
                     */
                    std::string GetRiskLevelName() const;

                    /**
                     * 设置风险等级名称
                     * @param _riskLevelName 风险等级名称
                     * 
                     */
                    void SetRiskLevelName(const std::string& _riskLevelName);

                    /**
                     * 判断参数 RiskLevelName 是否已赋值
                     * @return RiskLevelName 是否已赋值
                     * 
                     */
                    bool RiskLevelNameHasBeenSet() const;

                    /**
                     * 获取实例状态
                     * @return InstanceStatusName 实例状态
                     * 
                     */
                    std::string GetInstanceStatusName() const;

                    /**
                     * 设置实例状态
                     * @param _instanceStatusName 实例状态
                     * 
                     */
                    void SetInstanceStatusName(const std::string& _instanceStatusName);

                    /**
                     * 判断参数 InstanceStatusName 是否已赋值
                     * @return InstanceStatusName 是否已赋值
                     * 
                     */
                    bool InstanceStatusNameHasBeenSet() const;

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
                     * 获取最近发现时间
                     * @return UpdateTime 最近发现时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最近发现时间
                     * @param _updateTime 最近发现时间
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
                     * 获取租户ID
                     * @return AppID 租户ID
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置租户ID
                     * @param _appID 租户ID
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
                     * 云账号ID
                     */
                    std::string m_cloudAccountID;
                    bool m_cloudAccountIDHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_assetID;
                    bool m_assetIDHasBeenSet;

                    /**
                     * 实例状态
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 风险名称
                     */
                    std::string m_riskName;
                    bool m_riskNameHasBeenSet;

                    /**
                     * 风险分类
                     */
                    std::string m_riskCategory;
                    bool m_riskCategoryHasBeenSet;

                    /**
                     * 风险等级
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 风险描述
                     */
                    std::string m_riskDesc;
                    bool m_riskDescHasBeenSet;

                    /**
                     * 风险结果
                     */
                    std::string m_riskResult;
                    bool m_riskResultHasBeenSet;

                    /**
                     * 修复建议
                     */
                    std::string m_fixAdvice;
                    bool m_fixAdviceHasBeenSet;

                    /**
                     * Linux漏洞
                     */
                    std::string m_riskCategoryName;
                    bool m_riskCategoryNameHasBeenSet;

                    /**
                     * 风险等级名称
                     */
                    std::string m_riskLevelName;
                    bool m_riskLevelNameHasBeenSet;

                    /**
                     * 实例状态
                     */
                    std::string m_instanceStatusName;
                    bool m_instanceStatusNameHasBeenSet;

                    /**
                     * 首次发现时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近发现时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 租户ID
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HIGHBASELINERISKITEM_H_
