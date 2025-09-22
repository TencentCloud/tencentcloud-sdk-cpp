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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETOPERATIONLOGENTITY_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETOPERATIONLOGENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BudgetInfoDiffEntity.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 预算修改记录信息
                */
                class BudgetOperationLogEntity : public AbstractModel
                {
                public:
                    BudgetOperationLogEntity();
                    ~BudgetOperationLogEntity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Uin
                     * @return PayerUin Uin
                     * 
                     */
                    uint64_t GetPayerUin() const;

                    /**
                     * 设置Uin
                     * @param _payerUin Uin
                     * 
                     */
                    void SetPayerUin(const uint64_t& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     * 
                     */
                    bool PayerUinHasBeenSet() const;

                    /**
                     * 获取主用户Uin

                     * @return OwnerUin 主用户Uin

                     * 
                     */
                    uint64_t GetOwnerUin() const;

                    /**
                     * 设置主用户Uin

                     * @param _ownerUin 主用户Uin

                     * 
                     */
                    void SetOwnerUin(const uint64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取操作用户Uin
                     * @return OperateUin 操作用户Uin
                     * 
                     */
                    uint64_t GetOperateUin() const;

                    /**
                     * 设置操作用户Uin
                     * @param _operateUin 操作用户Uin
                     * 
                     */
                    void SetOperateUin(const uint64_t& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     * 
                     */
                    bool OperateUinHasBeenSet() const;

                    /**
                     * 获取日期
                     * @return BillDay 日期
                     * 
                     */
                    uint64_t GetBillDay() const;

                    /**
                     * 设置日期
                     * @param _billDay 日期
                     * 
                     */
                    void SetBillDay(const uint64_t& _billDay);

                    /**
                     * 判断参数 BillDay 是否已赋值
                     * @return BillDay 是否已赋值
                     * 
                     */
                    bool BillDayHasBeenSet() const;

                    /**
                     * 获取月份
                     * @return BillMonth 月份
                     * 
                     */
                    std::string GetBillMonth() const;

                    /**
                     * 设置月份
                     * @param _billMonth 月份
                     * 
                     */
                    void SetBillMonth(const std::string& _billMonth);

                    /**
                     * 判断参数 BillMonth 是否已赋值
                     * @return BillMonth 是否已赋值
                     * 
                     */
                    bool BillMonthHasBeenSet() const;

                    /**
                     * 获取修改类型：ADD(新增)、UPDATE(更新)
                     * @return Action 修改类型：ADD(新增)、UPDATE(更新)
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置修改类型：ADD(新增)、UPDATE(更新)
                     * @param _action 修改类型：ADD(新增)、UPDATE(更新)
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
                     * 获取变更信息
                     * @return DiffValue 变更信息
                     * 
                     */
                    std::vector<BudgetInfoDiffEntity> GetDiffValue() const;

                    /**
                     * 设置变更信息
                     * @param _diffValue 变更信息
                     * 
                     */
                    void SetDiffValue(const std::vector<BudgetInfoDiffEntity>& _diffValue);

                    /**
                     * 判断参数 DiffValue 是否已赋值
                     * @return DiffValue 是否已赋值
                     * 
                     */
                    bool DiffValueHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取修改时间
                     * @return UpdateTime 修改时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置修改时间
                     * @param _updateTime 修改时间
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
                     * 获取修改渠道：官网修改/API修改
                     * @return OperationChannel 修改渠道：官网修改/API修改
                     * 
                     */
                    std::string GetOperationChannel() const;

                    /**
                     * 设置修改渠道：官网修改/API修改
                     * @param _operationChannel 修改渠道：官网修改/API修改
                     * 
                     */
                    void SetOperationChannel(const std::string& _operationChannel);

                    /**
                     * 判断参数 OperationChannel 是否已赋值
                     * @return OperationChannel 是否已赋值
                     * 
                     */
                    bool OperationChannelHasBeenSet() const;

                    /**
                     * 获取预算项目id
                     * @return BudgetId 预算项目id
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置预算项目id
                     * @param _budgetId 预算项目id
                     * 
                     */
                    void SetBudgetId(const std::string& _budgetId);

                    /**
                     * 判断参数 BudgetId 是否已赋值
                     * @return BudgetId 是否已赋值
                     * 
                     */
                    bool BudgetIdHasBeenSet() const;

                private:

                    /**
                     * Uin
                     */
                    uint64_t m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * 主用户Uin

                     */
                    uint64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 操作用户Uin
                     */
                    uint64_t m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * 日期
                     */
                    uint64_t m_billDay;
                    bool m_billDayHasBeenSet;

                    /**
                     * 月份
                     */
                    std::string m_billMonth;
                    bool m_billMonthHasBeenSet;

                    /**
                     * 修改类型：ADD(新增)、UPDATE(更新)
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 变更信息
                     */
                    std::vector<BudgetInfoDiffEntity> m_diffValue;
                    bool m_diffValueHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 修改渠道：官网修改/API修改
                     */
                    std::string m_operationChannel;
                    bool m_operationChannelHasBeenSet;

                    /**
                     * 预算项目id
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETOPERATIONLOGENTITY_H_
