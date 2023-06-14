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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_WHOISCONTACT_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_WHOISCONTACT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/WhoisContactAddress.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * Whois联系信息
                */
                class WhoisContact : public AbstractModel
                {
                public:
                    WhoisContact();
                    ~WhoisContact() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Admin 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WhoisContactAddress GetAdmin() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _admin 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdmin(const WhoisContactAddress& _admin);

                    /**
                     * 判断参数 Admin 是否已赋值
                     * @return Admin 是否已赋值
                     * 
                     */
                    bool AdminHasBeenSet() const;

                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Billing 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WhoisContactAddress GetBilling() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billing 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBilling(const WhoisContactAddress& _billing);

                    /**
                     * 判断参数 Billing 是否已赋值
                     * @return Billing 是否已赋值
                     * 
                     */
                    bool BillingHasBeenSet() const;

                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Registrant 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WhoisContactAddress GetRegistrant() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _registrant 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegistrant(const WhoisContactAddress& _registrant);

                    /**
                     * 判断参数 Registrant 是否已赋值
                     * @return Registrant 是否已赋值
                     * 
                     */
                    bool RegistrantHasBeenSet() const;

                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tech 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WhoisContactAddress GetTech() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tech 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTech(const WhoisContactAddress& _tech);

                    /**
                     * 判断参数 Tech 是否已赋值
                     * @return Tech 是否已赋值
                     * 
                     */
                    bool TechHasBeenSet() const;

                private:

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WhoisContactAddress m_admin;
                    bool m_adminHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WhoisContactAddress m_billing;
                    bool m_billingHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WhoisContactAddress m_registrant;
                    bool m_registrantHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WhoisContactAddress m_tech;
                    bool m_techHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_WHOISCONTACT_H_
