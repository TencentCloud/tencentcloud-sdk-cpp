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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEACCOUNTBALANCERESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEACCOUNTBALANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAccountBalance返回参数结构体
                */
                class DescribeAccountBalanceResponse : public AbstractModel
                {
                public:
                    DescribeAccountBalanceResponse();
                    ~DescribeAccountBalanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取账户类型 1=设备接入;2=云存。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountType 账户类型 1=设备接入;2=云存。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取余额, 单位 : 分(人民币)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Balance 余额, 单位 : 分(人民币)。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBalance() const;

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     * 
                     */
                    bool BalanceHasBeenSet() const;

                    /**
                     * 获取账户状态，1=正常；8=冻结；9=销户。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State 账户状态，1=正常；8=冻结；9=销户。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取最后修改时间，UTC值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdateTime 最后修改时间，UTC值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastUpdateTime() const;

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 账户类型 1=设备接入;2=云存。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 余额, 单位 : 分(人民币)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_balance;
                    bool m_balanceHasBeenSet;

                    /**
                     * 账户状态，1=正常；8=冻结；9=销户。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 最后修改时间，UTC值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEACCOUNTBALANCERESPONSE_H_
