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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKPROCESSINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKPROCESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ExchangeInstanceInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/ExchangeRoGroupInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 回档进度详情
                */
                class RollbackProcessInfo : public AbstractModel
                {
                public:
                    RollbackProcessInfo();
                    ~RollbackProcessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否可以交换vip
                     * @return IsVipSwitchable 是否可以交换vip
                     * 
                     */
                    bool GetIsVipSwitchable() const;

                    /**
                     * 设置是否可以交换vip
                     * @param _isVipSwitchable 是否可以交换vip
                     * 
                     */
                    void SetIsVipSwitchable(const bool& _isVipSwitchable);

                    /**
                     * 判断参数 IsVipSwitchable 是否已赋值
                     * @return IsVipSwitchable 是否已赋值
                     * 
                     */
                    bool IsVipSwitchableHasBeenSet() const;

                    /**
                     * 获取vip可交换时间
                     * @return VipSwitchableTime vip可交换时间
                     * 
                     */
                    std::string GetVipSwitchableTime() const;

                    /**
                     * 设置vip可交换时间
                     * @param _vipSwitchableTime vip可交换时间
                     * 
                     */
                    void SetVipSwitchableTime(const std::string& _vipSwitchableTime);

                    /**
                     * 判断参数 VipSwitchableTime 是否已赋值
                     * @return VipSwitchableTime 是否已赋值
                     * 
                     */
                    bool VipSwitchableTimeHasBeenSet() const;

                    /**
                     * 获取交换实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExchangeInstanceInfoList 交换实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExchangeInstanceInfo> GetExchangeInstanceInfoList() const;

                    /**
                     * 设置交换实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exchangeInstanceInfoList 交换实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExchangeInstanceInfoList(const std::vector<ExchangeInstanceInfo>& _exchangeInstanceInfoList);

                    /**
                     * 判断参数 ExchangeInstanceInfoList 是否已赋值
                     * @return ExchangeInstanceInfoList 是否已赋值
                     * 
                     */
                    bool ExchangeInstanceInfoListHasBeenSet() const;

                    /**
                     * 获取交换RO组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExchangeRoGroupInfoList 交换RO组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExchangeRoGroupInfo> GetExchangeRoGroupInfoList() const;

                    /**
                     * 设置交换RO组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exchangeRoGroupInfoList 交换RO组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExchangeRoGroupInfoList(const std::vector<ExchangeRoGroupInfo>& _exchangeRoGroupInfoList);

                    /**
                     * 判断参数 ExchangeRoGroupInfoList 是否已赋值
                     * @return ExchangeRoGroupInfoList 是否已赋值
                     * 
                     */
                    bool ExchangeRoGroupInfoListHasBeenSet() const;

                    /**
                     * 获取当前步骤
                     * @return CurrentStep 当前步骤
                     * 
                     */
                    std::string GetCurrentStep() const;

                    /**
                     * 设置当前步骤
                     * @param _currentStep 当前步骤
                     * 
                     */
                    void SetCurrentStep(const std::string& _currentStep);

                    /**
                     * 判断参数 CurrentStep 是否已赋值
                     * @return CurrentStep 是否已赋值
                     * 
                     */
                    bool CurrentStepHasBeenSet() const;

                    /**
                     * 获取当前步骤进度
                     * @return CurrentStepProgress 当前步骤进度
                     * 
                     */
                    int64_t GetCurrentStepProgress() const;

                    /**
                     * 设置当前步骤进度
                     * @param _currentStepProgress 当前步骤进度
                     * 
                     */
                    void SetCurrentStepProgress(const int64_t& _currentStepProgress);

                    /**
                     * 判断参数 CurrentStepProgress 是否已赋值
                     * @return CurrentStepProgress 是否已赋值
                     * 
                     */
                    bool CurrentStepProgressHasBeenSet() const;

                    /**
                     * 获取当前步骤剩余时间
                     * @return CurrentStepRemainingTime 当前步骤剩余时间
                     * 
                     */
                    std::string GetCurrentStepRemainingTime() const;

                    /**
                     * 设置当前步骤剩余时间
                     * @param _currentStepRemainingTime 当前步骤剩余时间
                     * 
                     */
                    void SetCurrentStepRemainingTime(const std::string& _currentStepRemainingTime);

                    /**
                     * 判断参数 CurrentStepRemainingTime 是否已赋值
                     * @return CurrentStepRemainingTime 是否已赋值
                     * 
                     */
                    bool CurrentStepRemainingTimeHasBeenSet() const;

                private:

                    /**
                     * 是否可以交换vip
                     */
                    bool m_isVipSwitchable;
                    bool m_isVipSwitchableHasBeenSet;

                    /**
                     * vip可交换时间
                     */
                    std::string m_vipSwitchableTime;
                    bool m_vipSwitchableTimeHasBeenSet;

                    /**
                     * 交换实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExchangeInstanceInfo> m_exchangeInstanceInfoList;
                    bool m_exchangeInstanceInfoListHasBeenSet;

                    /**
                     * 交换RO组列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExchangeRoGroupInfo> m_exchangeRoGroupInfoList;
                    bool m_exchangeRoGroupInfoListHasBeenSet;

                    /**
                     * 当前步骤
                     */
                    std::string m_currentStep;
                    bool m_currentStepHasBeenSet;

                    /**
                     * 当前步骤进度
                     */
                    int64_t m_currentStepProgress;
                    bool m_currentStepProgressHasBeenSet;

                    /**
                     * 当前步骤剩余时间
                     */
                    std::string m_currentStepRemainingTime;
                    bool m_currentStepRemainingTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKPROCESSINFO_H_
