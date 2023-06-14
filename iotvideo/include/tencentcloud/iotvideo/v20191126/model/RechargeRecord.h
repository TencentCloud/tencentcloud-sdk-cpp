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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_RECHARGERECORD_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_RECHARGERECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * 充值记录列表
                */
                class RechargeRecord : public AbstractModel
                {
                public:
                    RechargeRecord();
                    ~RechargeRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流水记录号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaterId 流水记录号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWaterId() const;

                    /**
                     * 设置流水记录号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waterId 流水记录号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWaterId(const int64_t& _waterId);

                    /**
                     * 判断参数 WaterId 是否已赋值
                     * @return WaterId 是否已赋值
                     * 
                     */
                    bool WaterIdHasBeenSet() const;

                    /**
                     * 获取充值前的余额，单位0.01元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BalanceBeforeRecharge 充值前的余额，单位0.01元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBalanceBeforeRecharge() const;

                    /**
                     * 设置充值前的余额，单位0.01元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _balanceBeforeRecharge 充值前的余额，单位0.01元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBalanceBeforeRecharge(const int64_t& _balanceBeforeRecharge);

                    /**
                     * 判断参数 BalanceBeforeRecharge 是否已赋值
                     * @return BalanceBeforeRecharge 是否已赋值
                     * 
                     */
                    bool BalanceBeforeRechargeHasBeenSet() const;

                    /**
                     * 获取充值金额，单位0.01元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Money 充值金额，单位0.01元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMoney() const;

                    /**
                     * 设置充值金额，单位0.01元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _money 充值金额，单位0.01元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMoney(const int64_t& _money);

                    /**
                     * 判断参数 Money 是否已赋值
                     * @return Money 是否已赋值
                     * 
                     */
                    bool MoneyHasBeenSet() const;

                    /**
                     * 获取充值时间, UTC值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperateTime 充值时间, UTC值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOperateTime() const;

                    /**
                     * 设置充值时间, UTC值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operateTime 充值时间, UTC值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperateTime(const int64_t& _operateTime);

                    /**
                     * 判断参数 OperateTime 是否已赋值
                     * @return OperateTime 是否已赋值
                     * 
                     */
                    bool OperateTimeHasBeenSet() const;

                private:

                    /**
                     * 流水记录号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_waterId;
                    bool m_waterIdHasBeenSet;

                    /**
                     * 充值前的余额，单位0.01元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_balanceBeforeRecharge;
                    bool m_balanceBeforeRechargeHasBeenSet;

                    /**
                     * 充值金额，单位0.01元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_money;
                    bool m_moneyHasBeenSet;

                    /**
                     * 充值时间, UTC值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_operateTime;
                    bool m_operateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_RECHARGERECORD_H_
