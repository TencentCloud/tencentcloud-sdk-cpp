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

#ifndef TENCENTCLOUD_SVP_V20240125_MODEL_SAVINGPLANOVERVIEWDETAIL_H_
#define TENCENTCLOUD_SVP_V20240125_MODEL_SAVINGPLANOVERVIEWDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Svp
    {
        namespace V20240125
        {
            namespace Model
            {
                /**
                * 节省计划总览明细数据
                */
                class SavingPlanOverviewDetail : public AbstractModel
                {
                public:
                    SavingPlanOverviewDetail();
                    ~SavingPlanOverviewDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节省计划类型
                     * @return SpType 节省计划类型
                     * 
                     */
                    std::string GetSpType() const;

                    /**
                     * 设置节省计划类型
                     * @param _spType 节省计划类型
                     * 
                     */
                    void SetSpType(const std::string& _spType);

                    /**
                     * 判断参数 SpType 是否已赋值
                     * @return SpType 是否已赋值
                     * 
                     */
                    bool SpTypeHasBeenSet() const;

                    /**
                     * 获取支付金额（单位：元）
                     * @return PayAmount 支付金额（单位：元）
                     * 
                     */
                    std::string GetPayAmount() const;

                    /**
                     * 设置支付金额（单位：元）
                     * @param _payAmount 支付金额（单位：元）
                     * 
                     */
                    void SetPayAmount(const std::string& _payAmount);

                    /**
                     * 判断参数 PayAmount 是否已赋值
                     * @return PayAmount 是否已赋值
                     * 
                     */
                    bool PayAmountHasBeenSet() const;

                    /**
                     * 获取开始时间 yyyy-mm-dd HH:mm:ss格式
                     * @return StartTime 开始时间 yyyy-mm-dd HH:mm:ss格式
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间 yyyy-mm-dd HH:mm:ss格式
                     * @param _startTime 开始时间 yyyy-mm-dd HH:mm:ss格式
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间 yyyy-mm-dd HH:mm:ss格式
                     * @return EndTime 结束时间 yyyy-mm-dd HH:mm:ss格式
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间 yyyy-mm-dd HH:mm:ss格式
                     * @param _endTime 结束时间 yyyy-mm-dd HH:mm:ss格式
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取累计节省金额（单位：元）
                     * @return SavingAmount 累计节省金额（单位：元）
                     * 
                     */
                    std::string GetSavingAmount() const;

                    /**
                     * 设置累计节省金额（单位：元）
                     * @param _savingAmount 累计节省金额（单位：元）
                     * 
                     */
                    void SetSavingAmount(const std::string& _savingAmount);

                    /**
                     * 判断参数 SavingAmount 是否已赋值
                     * @return SavingAmount 是否已赋值
                     * 
                     */
                    bool SavingAmountHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::vector<std::string> GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::vector<std::string>& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取支付类型
                     * @return PayType 支付类型
                     * 
                     */
                    uint64_t GetPayType() const;

                    /**
                     * 设置支付类型
                     * @param _payType 支付类型
                     * 
                     */
                    void SetPayType(const uint64_t& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取购买时间 yyyy-mm-dd HH:mm:ss格式
                     * @return BuyTime 购买时间 yyyy-mm-dd HH:mm:ss格式
                     * 
                     */
                    std::string GetBuyTime() const;

                    /**
                     * 设置购买时间 yyyy-mm-dd HH:mm:ss格式
                     * @param _buyTime 购买时间 yyyy-mm-dd HH:mm:ss格式
                     * 
                     */
                    void SetBuyTime(const std::string& _buyTime);

                    /**
                     * 判断参数 BuyTime 是否已赋值
                     * @return BuyTime 是否已赋值
                     * 
                     */
                    bool BuyTimeHasBeenSet() const;

                private:

                    /**
                     * 节省计划类型
                     */
                    std::string m_spType;
                    bool m_spTypeHasBeenSet;

                    /**
                     * 支付金额（单位：元）
                     */
                    std::string m_payAmount;
                    bool m_payAmountHasBeenSet;

                    /**
                     * 开始时间 yyyy-mm-dd HH:mm:ss格式
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间 yyyy-mm-dd HH:mm:ss格式
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 累计节省金额（单位：元）
                     */
                    std::string m_savingAmount;
                    bool m_savingAmountHasBeenSet;

                    /**
                     * 地域
                     */
                    std::vector<std::string> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 支付类型
                     */
                    uint64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 购买时间 yyyy-mm-dd HH:mm:ss格式
                     */
                    std::string m_buyTime;
                    bool m_buyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SVP_V20240125_MODEL_SAVINGPLANOVERVIEWDETAIL_H_
