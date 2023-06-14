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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_TRANSFERDETAILREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_TRANSFERDETAILREQUEST_H_

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
                * 批量转账明细实体
                */
                class TransferDetailRequest : public AbstractModel
                {
                public:
                    TransferDetailRequest();
                    ~TransferDetailRequest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商家明细单号。
商户系统内部区分转账批次单下不同转账明细单的唯一标识，要求此参数只能由数字、大小写字母组成。
示例值：x23zy545Bd5436
                     * @return MerchantDetailNo 商家明细单号。
商户系统内部区分转账批次单下不同转账明细单的唯一标识，要求此参数只能由数字、大小写字母组成。
示例值：x23zy545Bd5436
                     * 
                     */
                    std::string GetMerchantDetailNo() const;

                    /**
                     * 设置商家明细单号。
商户系统内部区分转账批次单下不同转账明细单的唯一标识，要求此参数只能由数字、大小写字母组成。
示例值：x23zy545Bd5436
                     * @param _merchantDetailNo 商家明细单号。
商户系统内部区分转账批次单下不同转账明细单的唯一标识，要求此参数只能由数字、大小写字母组成。
示例值：x23zy545Bd5436
                     * 
                     */
                    void SetMerchantDetailNo(const std::string& _merchantDetailNo);

                    /**
                     * 判断参数 MerchantDetailNo 是否已赋值
                     * @return MerchantDetailNo 是否已赋值
                     * 
                     */
                    bool MerchantDetailNoHasBeenSet() const;

                    /**
                     * 获取转账金额。
转账金额单位为分。
示例值：200000
                     * @return TransferAmount 转账金额。
转账金额单位为分。
示例值：200000
                     * 
                     */
                    uint64_t GetTransferAmount() const;

                    /**
                     * 设置转账金额。
转账金额单位为分。
示例值：200000
                     * @param _transferAmount 转账金额。
转账金额单位为分。
示例值：200000
                     * 
                     */
                    void SetTransferAmount(const uint64_t& _transferAmount);

                    /**
                     * 判断参数 TransferAmount 是否已赋值
                     * @return TransferAmount 是否已赋值
                     * 
                     */
                    bool TransferAmountHasBeenSet() const;

                    /**
                     * 获取转账备注。
单条转账备注（微信用户会收到该备注）。UTF8编码，最多32字符。
示例值：2020年4月报销
                     * @return TransferRemark 转账备注。
单条转账备注（微信用户会收到该备注）。UTF8编码，最多32字符。
示例值：2020年4月报销
                     * 
                     */
                    std::string GetTransferRemark() const;

                    /**
                     * 设置转账备注。
单条转账备注（微信用户会收到该备注）。UTF8编码，最多32字符。
示例值：2020年4月报销
                     * @param _transferRemark 转账备注。
单条转账备注（微信用户会收到该备注）。UTF8编码，最多32字符。
示例值：2020年4月报销
                     * 
                     */
                    void SetTransferRemark(const std::string& _transferRemark);

                    /**
                     * 判断参数 TransferRemark 是否已赋值
                     * @return TransferRemark 是否已赋值
                     * 
                     */
                    bool TransferRemarkHasBeenSet() const;

                    /**
                     * 获取用户在直连商户下的唯一标识。
示例值：o-MYE42l80oelYMDE34nYD456Xoy
                     * @return OpenId 用户在直连商户下的唯一标识。
示例值：o-MYE42l80oelYMDE34nYD456Xoy
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置用户在直连商户下的唯一标识。
示例值：o-MYE42l80oelYMDE34nYD456Xoy
                     * @param _openId 用户在直连商户下的唯一标识。
示例值：o-MYE42l80oelYMDE34nYD456Xoy
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取收款用户姓名。
收款方姓名。
示例值：张三
                     * @return UserName 收款用户姓名。
收款方姓名。
示例值：张三
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置收款用户姓名。
收款方姓名。
示例值：张三
                     * @param _userName 收款用户姓名。
收款方姓名。
示例值：张三
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                private:

                    /**
                     * 商家明细单号。
商户系统内部区分转账批次单下不同转账明细单的唯一标识，要求此参数只能由数字、大小写字母组成。
示例值：x23zy545Bd5436
                     */
                    std::string m_merchantDetailNo;
                    bool m_merchantDetailNoHasBeenSet;

                    /**
                     * 转账金额。
转账金额单位为分。
示例值：200000
                     */
                    uint64_t m_transferAmount;
                    bool m_transferAmountHasBeenSet;

                    /**
                     * 转账备注。
单条转账备注（微信用户会收到该备注）。UTF8编码，最多32字符。
示例值：2020年4月报销
                     */
                    std::string m_transferRemark;
                    bool m_transferRemarkHasBeenSet;

                    /**
                     * 用户在直连商户下的唯一标识。
示例值：o-MYE42l80oelYMDE34nYD456Xoy
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 收款用户姓名。
收款方姓名。
示例值：张三
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_TRANSFERDETAILREQUEST_H_
