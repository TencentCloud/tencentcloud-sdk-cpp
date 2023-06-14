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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_BANKCARDITEM_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_BANKCARDITEM_H_

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
                * 绑卡列表
                */
                class BankCardItem : public AbstractModel
                {
                public:
                    BankCardItem();
                    ~BankCardItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取超级网银行号
                     * @return EiconBankBranchId 超级网银行号
                     * 
                     */
                    std::string GetEiconBankBranchId() const;

                    /**
                     * 设置超级网银行号
                     * @param _eiconBankBranchId 超级网银行号
                     * 
                     */
                    void SetEiconBankBranchId(const std::string& _eiconBankBranchId);

                    /**
                     * 判断参数 EiconBankBranchId 是否已赋值
                     * @return EiconBankBranchId 是否已赋值
                     * 
                     */
                    bool EiconBankBranchIdHasBeenSet() const;

                    /**
                     * 获取大小额行号
                     * @return CnapsBranchId 大小额行号
                     * 
                     */
                    std::string GetCnapsBranchId() const;

                    /**
                     * 设置大小额行号
                     * @param _cnapsBranchId 大小额行号
                     * 
                     */
                    void SetCnapsBranchId(const std::string& _cnapsBranchId);

                    /**
                     * 判断参数 CnapsBranchId 是否已赋值
                     * @return CnapsBranchId 是否已赋值
                     * 
                     */
                    bool CnapsBranchIdHasBeenSet() const;

                    /**
                     * 获取结算账户类型
1 – 本行账户
2 – 他行账户
                     * @return SettleAcctType 结算账户类型
1 – 本行账户
2 – 他行账户
                     * 
                     */
                    int64_t GetSettleAcctType() const;

                    /**
                     * 设置结算账户类型
1 – 本行账户
2 – 他行账户
                     * @param _settleAcctType 结算账户类型
1 – 本行账户
2 – 他行账户
                     * 
                     */
                    void SetSettleAcctType(const int64_t& _settleAcctType);

                    /**
                     * 判断参数 SettleAcctType 是否已赋值
                     * @return SettleAcctType 是否已赋值
                     * 
                     */
                    bool SettleAcctTypeHasBeenSet() const;

                    /**
                     * 获取结算账户户名
<敏感信息>
                     * @return SettleAcctName 结算账户户名
<敏感信息>
                     * 
                     */
                    std::string GetSettleAcctName() const;

                    /**
                     * 设置结算账户户名
<敏感信息>
                     * @param _settleAcctName 结算账户户名
<敏感信息>
                     * 
                     */
                    void SetSettleAcctName(const std::string& _settleAcctName);

                    /**
                     * 判断参数 SettleAcctName 是否已赋值
                     * @return SettleAcctName 是否已赋值
                     * 
                     */
                    bool SettleAcctNameHasBeenSet() const;

                    /**
                     * 获取开户行名称
                     * @return AcctBranchName 开户行名称
                     * 
                     */
                    std::string GetAcctBranchName() const;

                    /**
                     * 设置开户行名称
                     * @param _acctBranchName 开户行名称
                     * 
                     */
                    void SetAcctBranchName(const std::string& _acctBranchName);

                    /**
                     * 判断参数 AcctBranchName 是否已赋值
                     * @return AcctBranchName 是否已赋值
                     * 
                     */
                    bool AcctBranchNameHasBeenSet() const;

                    /**
                     * 获取用于提现
<敏感信息>
                     * @return SettleAcctNo 用于提现
<敏感信息>
                     * 
                     */
                    std::string GetSettleAcctNo() const;

                    /**
                     * 设置用于提现
<敏感信息>
                     * @param _settleAcctNo 用于提现
<敏感信息>
                     * 
                     */
                    void SetSettleAcctNo(const std::string& _settleAcctNo);

                    /**
                     * 判断参数 SettleAcctNo 是否已赋值
                     * @return SettleAcctNo 是否已赋值
                     * 
                     */
                    bool SettleAcctNoHasBeenSet() const;

                    /**
                     * 获取聚鑫计费SubAppId，代表子商户
                     * @return SubAppId 聚鑫计费SubAppId，代表子商户
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置聚鑫计费SubAppId，代表子商户
                     * @param _subAppId 聚鑫计费SubAppId，代表子商户
                     * 
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取验证类型
1 – 小额转账验证
2 – 短信验证
                     * @return BindType 验证类型
1 – 小额转账验证
2 – 短信验证
                     * 
                     */
                    int64_t GetBindType() const;

                    /**
                     * 设置验证类型
1 – 小额转账验证
2 – 短信验证
                     * @param _bindType 验证类型
1 – 小额转账验证
2 – 短信验证
                     * 
                     */
                    void SetBindType(const int64_t& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                    /**
                     * 获取用于短信验证
BindType==2时必填
<敏感信息>
                     * @return Mobile 用于短信验证
BindType==2时必填
<敏感信息>
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置用于短信验证
BindType==2时必填
<敏感信息>
                     * @param _mobile 用于短信验证
BindType==2时必填
<敏感信息>
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取证件类型
                     * @return IdType 证件类型
                     * 
                     */
                    std::string GetIdType() const;

                    /**
                     * 设置证件类型
                     * @param _idType 证件类型
                     * 
                     */
                    void SetIdType(const std::string& _idType);

                    /**
                     * 判断参数 IdType 是否已赋值
                     * @return IdType 是否已赋值
                     * 
                     */
                    bool IdTypeHasBeenSet() const;

                    /**
                     * 获取证件号码
<敏感信息>
                     * @return IdCode 证件号码
<敏感信息>
                     * 
                     */
                    std::string GetIdCode() const;

                    /**
                     * 设置证件号码
<敏感信息>
                     * @param _idCode 证件号码
<敏感信息>
                     * 
                     */
                    void SetIdCode(const std::string& _idCode);

                    /**
                     * 判断参数 IdCode 是否已赋值
                     * @return IdCode 是否已赋值
                     * 
                     */
                    bool IdCodeHasBeenSet() const;

                private:

                    /**
                     * 超级网银行号
                     */
                    std::string m_eiconBankBranchId;
                    bool m_eiconBankBranchIdHasBeenSet;

                    /**
                     * 大小额行号
                     */
                    std::string m_cnapsBranchId;
                    bool m_cnapsBranchIdHasBeenSet;

                    /**
                     * 结算账户类型
1 – 本行账户
2 – 他行账户
                     */
                    int64_t m_settleAcctType;
                    bool m_settleAcctTypeHasBeenSet;

                    /**
                     * 结算账户户名
<敏感信息>
                     */
                    std::string m_settleAcctName;
                    bool m_settleAcctNameHasBeenSet;

                    /**
                     * 开户行名称
                     */
                    std::string m_acctBranchName;
                    bool m_acctBranchNameHasBeenSet;

                    /**
                     * 用于提现
<敏感信息>
                     */
                    std::string m_settleAcctNo;
                    bool m_settleAcctNoHasBeenSet;

                    /**
                     * 聚鑫计费SubAppId，代表子商户
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 验证类型
1 – 小额转账验证
2 – 短信验证
                     */
                    int64_t m_bindType;
                    bool m_bindTypeHasBeenSet;

                    /**
                     * 用于短信验证
BindType==2时必填
<敏感信息>
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 证件类型
                     */
                    std::string m_idType;
                    bool m_idTypeHasBeenSet;

                    /**
                     * 证件号码
<敏感信息>
                     */
                    std::string m_idCode;
                    bool m_idCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_BANKCARDITEM_H_
