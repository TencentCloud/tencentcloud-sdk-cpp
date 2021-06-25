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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTCLIENTELEM_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTCLIENTELEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * 描述待审核代客信息
                */
                class AgentClientElem : public AbstractModel
                {
                public:
                    AgentClientElem();
                    ~AgentClientElem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代理商账号ID
                     * @return Uin 代理商账号ID
                     */
                    std::string GetUin() const;

                    /**
                     * 设置代理商账号ID
                     * @param Uin 代理商账号ID
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取代客账号ID
                     * @return ClientUin 代客账号ID
                     */
                    std::string GetClientUin() const;

                    /**
                     * 设置代客账号ID
                     * @param ClientUin 代客账号ID
                     */
                    void SetClientUin(const std::string& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取代客申请时间戳
                     * @return ApplyTime 代客申请时间戳
                     */
                    uint64_t GetApplyTime() const;

                    /**
                     * 设置代客申请时间戳
                     * @param ApplyTime 代客申请时间戳
                     */
                    void SetApplyTime(const uint64_t& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取代客类型，可能值为a/b/c
                     * @return ClientFlag 代客类型，可能值为a/b/c
                     */
                    std::string GetClientFlag() const;

                    /**
                     * 设置代客类型，可能值为a/b/c
                     * @param ClientFlag 代客类型，可能值为a/b/c
                     */
                    void SetClientFlag(const std::string& _clientFlag);

                    /**
                     * 判断参数 ClientFlag 是否已赋值
                     * @return ClientFlag 是否已赋值
                     */
                    bool ClientFlagHasBeenSet() const;

                    /**
                     * 获取代客邮箱，打码显示
                     * @return Mail 代客邮箱，打码显示
                     */
                    std::string GetMail() const;

                    /**
                     * 设置代客邮箱，打码显示
                     * @param Mail 代客邮箱，打码显示
                     */
                    void SetMail(const std::string& _mail);

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取代客手机，打码显示
                     * @return Phone 代客手机，打码显示
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置代客手机，打码显示
                     * @param Phone 代客手机，打码显示
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取0表示不欠费，1表示欠费
                     * @return HasOverdueBill 0表示不欠费，1表示欠费
                     */
                    uint64_t GetHasOverdueBill() const;

                    /**
                     * 设置0表示不欠费，1表示欠费
                     * @param HasOverdueBill 0表示不欠费，1表示欠费
                     */
                    void SetHasOverdueBill(const uint64_t& _hasOverdueBill);

                    /**
                     * 判断参数 HasOverdueBill 是否已赋值
                     * @return HasOverdueBill 是否已赋值
                     */
                    bool HasOverdueBillHasBeenSet() const;

                    /**
                     * 获取1:待代理商审核;2:待腾讯云审核4:待腾讯云渠道审批
                     * @return Status 1:待代理商审核;2:待腾讯云审核4:待腾讯云渠道审批
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置1:待代理商审核;2:待腾讯云审核4:待腾讯云渠道审批
                     * @param Status 1:待代理商审核;2:待腾讯云审核4:待腾讯云渠道审批
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取业务员ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SalesUin 业务员ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSalesUin() const;

                    /**
                     * 设置业务员ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SalesUin 业务员ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSalesUin(const std::string& _salesUin);

                    /**
                     * 判断参数 SalesUin 是否已赋值
                     * @return SalesUin 是否已赋值
                     */
                    bool SalesUinHasBeenSet() const;

                    /**
                     * 获取业务员姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SalesName 业务员姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSalesName() const;

                    /**
                     * 设置业务员姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SalesName 业务员姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSalesName(const std::string& _salesName);

                    /**
                     * 判断参数 SalesName 是否已赋值
                     * @return SalesName 是否已赋值
                     */
                    bool SalesNameHasBeenSet() const;

                    /**
                     * 获取客户名称，此字段和控制台返回一致。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientName 客户名称，此字段和控制台返回一致。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClientName() const;

                    /**
                     * 设置客户名称，此字段和控制台返回一致。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClientName 客户名称，此字段和控制台返回一致。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClientName(const std::string& _clientName);

                    /**
                     * 判断参数 ClientName 是否已赋值
                     * @return ClientName 是否已赋值
                     */
                    bool ClientNameHasBeenSet() const;

                private:

                    /**
                     * 代理商账号ID
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 代客账号ID
                     */
                    std::string m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * 代客申请时间戳
                     */
                    uint64_t m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * 代客类型，可能值为a/b/c
                     */
                    std::string m_clientFlag;
                    bool m_clientFlagHasBeenSet;

                    /**
                     * 代客邮箱，打码显示
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * 代客手机，打码显示
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 0表示不欠费，1表示欠费
                     */
                    uint64_t m_hasOverdueBill;
                    bool m_hasOverdueBillHasBeenSet;

                    /**
                     * 1:待代理商审核;2:待腾讯云审核4:待腾讯云渠道审批
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 业务员ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_salesUin;
                    bool m_salesUinHasBeenSet;

                    /**
                     * 业务员姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_salesName;
                    bool m_salesNameHasBeenSet;

                    /**
                     * 客户名称，此字段和控制台返回一致。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientName;
                    bool m_clientNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTCLIENTELEM_H_
