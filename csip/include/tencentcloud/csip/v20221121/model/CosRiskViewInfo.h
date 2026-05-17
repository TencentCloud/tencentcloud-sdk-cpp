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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKVIEWINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKVIEWINFO_H_

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
                * 风险视角风险列表
                */
                class CosRiskViewInfo : public AbstractModel
                {
                public:
                    CosRiskViewInfo();
                    ~CosRiskViewInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取appid
                     * @return AppId appid
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置appid
                     * @param _appId appid
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
                     * 获取策略名称
                     * @return PolicyName 策略名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称
                     * @param _policyName 策略名称
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取策略id
                     * @return PolicyId 策略id
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置策略id
                     * @param _policyId 策略id
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略分类
                     * @return PolicyType 策略分类
                     * 
                     */
                    int64_t GetPolicyType() const;

                    /**
                     * 设置策略分类
                     * @param _policyType 策略分类
                     * 
                     */
                    void SetPolicyType(const int64_t& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取策略风险等级
                     * @return PolicyRiskLevel 策略风险等级
                     * 
                     */
                    int64_t GetPolicyRiskLevel() const;

                    /**
                     * 设置策略风险等级
                     * @param _policyRiskLevel 策略风险等级
                     * 
                     */
                    void SetPolicyRiskLevel(const int64_t& _policyRiskLevel);

                    /**
                     * 判断参数 PolicyRiskLevel 是否已赋值
                     * @return PolicyRiskLevel 是否已赋值
                     * 
                     */
                    bool PolicyRiskLevelHasBeenSet() const;

                    /**
                     * 获取策略描述
                     * @return PolicyDescription 策略描述
                     * 
                     */
                    std::string GetPolicyDescription() const;

                    /**
                     * 设置策略描述
                     * @param _policyDescription 策略描述
                     * 
                     */
                    void SetPolicyDescription(const std::string& _policyDescription);

                    /**
                     * 判断参数 PolicyDescription 是否已赋值
                     * @return PolicyDescription 是否已赋值
                     * 
                     */
                    bool PolicyDescriptionHasBeenSet() const;

                    /**
                     * 获取待处理的桶数
                     * @return HandleBucketCount 待处理的桶数
                     * 
                     */
                    int64_t GetHandleBucketCount() const;

                    /**
                     * 设置待处理的桶数
                     * @param _handleBucketCount 待处理的桶数
                     * 
                     */
                    void SetHandleBucketCount(const int64_t& _handleBucketCount);

                    /**
                     * 判断参数 HandleBucketCount 是否已赋值
                     * @return HandleBucketCount 是否已赋值
                     * 
                     */
                    bool HandleBucketCountHasBeenSet() const;

                    /**
                     * 获取最近风险检出时间Unix时间单位毫秒
                     * @return LastScanTimestamp 最近风险检出时间Unix时间单位毫秒
                     * 
                     */
                    int64_t GetLastScanTimestamp() const;

                    /**
                     * 设置最近风险检出时间Unix时间单位毫秒
                     * @param _lastScanTimestamp 最近风险检出时间Unix时间单位毫秒
                     * 
                     */
                    void SetLastScanTimestamp(const int64_t& _lastScanTimestamp);

                    /**
                     * 判断参数 LastScanTimestamp 是否已赋值
                     * @return LastScanTimestamp 是否已赋值
                     * 
                     */
                    bool LastScanTimestampHasBeenSet() const;

                private:

                    /**
                     * appid
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略id
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略分类
                     */
                    int64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 策略风险等级
                     */
                    int64_t m_policyRiskLevel;
                    bool m_policyRiskLevelHasBeenSet;

                    /**
                     * 策略描述
                     */
                    std::string m_policyDescription;
                    bool m_policyDescriptionHasBeenSet;

                    /**
                     * 待处理的桶数
                     */
                    int64_t m_handleBucketCount;
                    bool m_handleBucketCountHasBeenSet;

                    /**
                     * 最近风险检出时间Unix时间单位毫秒
                     */
                    int64_t m_lastScanTimestamp;
                    bool m_lastScanTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKVIEWINFO_H_
