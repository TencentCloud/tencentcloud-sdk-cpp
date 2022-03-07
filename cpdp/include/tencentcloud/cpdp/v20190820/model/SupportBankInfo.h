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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_SUPPORTBANKINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_SUPPORTBANKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 支持的银行信息
                */
                class SupportBankInfo : public AbstractModel
                {
                public:
                    SupportBankInfo();
                    ~SupportBankInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取银行简称。
                     * @return BankCode 银行简称。
                     */
                    std::string GetBankCode() const;

                    /**
                     * 设置银行简称。
                     * @param BankCode 银行简称。
                     */
                    void SetBankCode(const std::string& _bankCode);

                    /**
                     * 判断参数 BankCode 是否已赋值
                     * @return BankCode 是否已赋值
                     */
                    bool BankCodeHasBeenSet() const;

                    /**
                     * 获取银行名称。
                     * @return BankName 银行名称。
                     */
                    std::string GetBankName() const;

                    /**
                     * 设置银行名称。
                     * @param BankName 银行名称。
                     */
                    void SetBankName(const std::string& _bankName);

                    /**
                     * 判断参数 BankName 是否已赋值
                     * @return BankName 是否已赋值
                     */
                    bool BankNameHasBeenSet() const;

                    /**
                     * 获取状态。
__MAINTAINING__: 维护中
__WORKING__: 正常工作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaintainStatus 状态。
__MAINTAINING__: 维护中
__WORKING__: 正常工作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMaintainStatus() const;

                    /**
                     * 设置状态。
__MAINTAINING__: 维护中
__WORKING__: 正常工作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaintainStatus 状态。
__MAINTAINING__: 维护中
__WORKING__: 正常工作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaintainStatus(const std::string& _maintainStatus);

                    /**
                     * 判断参数 MaintainStatus 是否已赋值
                     * @return MaintainStatus 是否已赋值
                     */
                    bool MaintainStatusHasBeenSet() const;

                    /**
                     * 获取银行渠道维护公告。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BankNotice 银行渠道维护公告。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBankNotice() const;

                    /**
                     * 设置银行渠道维护公告。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BankNotice 银行渠道维护公告。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBankNotice(const std::string& _bankNotice);

                    /**
                     * 判断参数 BankNotice 是否已赋值
                     * @return BankNotice 是否已赋值
                     */
                    bool BankNoticeHasBeenSet() const;

                private:

                    /**
                     * 银行简称。
                     */
                    std::string m_bankCode;
                    bool m_bankCodeHasBeenSet;

                    /**
                     * 银行名称。
                     */
                    std::string m_bankName;
                    bool m_bankNameHasBeenSet;

                    /**
                     * 状态。
__MAINTAINING__: 维护中
__WORKING__: 正常工作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maintainStatus;
                    bool m_maintainStatusHasBeenSet;

                    /**
                     * 银行渠道维护公告。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bankNotice;
                    bool m_bankNoticeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_SUPPORTBANKINFO_H_
