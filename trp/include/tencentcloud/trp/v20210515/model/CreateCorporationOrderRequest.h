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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_CREATECORPORATIONORDERREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_CREATECORPORATIONORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * CreateCorporationOrder请求参数结构体
                */
                class CreateCorporationOrderRequest : public AbstractModel
                {
                public:
                    CreateCorporationOrderRequest();
                    ~CreateCorporationOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业名称
                     * @return CorpName 企业名称
                     * 
                     */
                    std::string GetCorpName() const;

                    /**
                     * 设置企业名称
                     * @param _corpName 企业名称
                     * 
                     */
                    void SetCorpName(const std::string& _corpName);

                    /**
                     * 判断参数 CorpName 是否已赋值
                     * @return CorpName 是否已赋值
                     * 
                     */
                    bool CorpNameHasBeenSet() const;

                    /**
                     * 获取所有者ID
                     * @return Owner 所有者ID
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置所有者ID
                     * @param _owner 所有者ID
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取溯源码额度
                     * @return CodeQuota 溯源码额度
                     * 
                     */
                    uint64_t GetCodeQuota() const;

                    /**
                     * 设置溯源码额度
                     * @param _codeQuota 溯源码额度
                     * 
                     */
                    void SetCodeQuota(const uint64_t& _codeQuota);

                    /**
                     * 判断参数 CodeQuota 是否已赋值
                     * @return CodeQuota 是否已赋值
                     * 
                     */
                    bool CodeQuotaHasBeenSet() const;

                    /**
                     * 获取额度过期时间
                     * @return ExpireTime 额度过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置额度过期时间
                     * @param _expireTime 额度过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取金额
                     * @return Amount 金额
                     * 
                     */
                    int64_t GetAmount() const;

                    /**
                     * 设置金额
                     * @param _amount 金额
                     * 
                     */
                    void SetAmount(const int64_t& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取企业ID
                     * @return CorpId 企业ID
                     * 
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param _corpId 企业ID
                     * 
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取联系人
                     * @return ContactPerson 联系人
                     * 
                     */
                    std::string GetContactPerson() const;

                    /**
                     * 设置联系人
                     * @param _contactPerson 联系人
                     * 
                     */
                    void SetContactPerson(const std::string& _contactPerson);

                    /**
                     * 判断参数 ContactPerson 是否已赋值
                     * @return ContactPerson 是否已赋值
                     * 
                     */
                    bool ContactPersonHasBeenSet() const;

                    /**
                     * 获取联系电话
                     * @return ContactNumber 联系电话
                     * 
                     */
                    std::string GetContactNumber() const;

                    /**
                     * 设置联系电话
                     * @param _contactNumber 联系电话
                     * 
                     */
                    void SetContactNumber(const std::string& _contactNumber);

                    /**
                     * 判断参数 ContactNumber 是否已赋值
                     * @return ContactNumber 是否已赋值
                     * 
                     */
                    bool ContactNumberHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 企业名称
                     */
                    std::string m_corpName;
                    bool m_corpNameHasBeenSet;

                    /**
                     * 所有者ID
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 溯源码额度
                     */
                    uint64_t m_codeQuota;
                    bool m_codeQuotaHasBeenSet;

                    /**
                     * 额度过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 金额
                     */
                    int64_t m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 联系人
                     */
                    std::string m_contactPerson;
                    bool m_contactPersonHasBeenSet;

                    /**
                     * 联系电话
                     */
                    std::string m_contactNumber;
                    bool m_contactNumberHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_CREATECORPORATIONORDERREQUEST_H_
