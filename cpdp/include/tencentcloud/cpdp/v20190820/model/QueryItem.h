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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYITEM_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYITEM_H_

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
                * 聚鑫商户余额查询输出项
                */
                class QueryItem : public AbstractModel
                {
                public:
                    QueryItem();
                    ~QueryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子商户账户
                     * @return SubAcctNo 子商户账户
                     * 
                     */
                    std::string GetSubAcctNo() const;

                    /**
                     * 设置子商户账户
                     * @param _subAcctNo 子商户账户
                     * 
                     */
                    void SetSubAcctNo(const std::string& _subAcctNo);

                    /**
                     * 判断参数 SubAcctNo 是否已赋值
                     * @return SubAcctNo 是否已赋值
                     * 
                     */
                    bool SubAcctNoHasBeenSet() const;

                    /**
                     * 获取子账户属性 
1：普通会员子账号 
2：挂账子账号 
3：手续费子账号 
4：利息子账号
5：平台担保子账号
                     * @return SubAcctProperty 子账户属性 
1：普通会员子账号 
2：挂账子账号 
3：手续费子账号 
4：利息子账号
5：平台担保子账号
                     * 
                     */
                    std::string GetSubAcctProperty() const;

                    /**
                     * 设置子账户属性 
1：普通会员子账号 
2：挂账子账号 
3：手续费子账号 
4：利息子账号
5：平台担保子账号
                     * @param _subAcctProperty 子账户属性 
1：普通会员子账号 
2：挂账子账号 
3：手续费子账号 
4：利息子账号
5：平台担保子账号
                     * 
                     */
                    void SetSubAcctProperty(const std::string& _subAcctProperty);

                    /**
                     * 判断参数 SubAcctProperty 是否已赋值
                     * @return SubAcctProperty 是否已赋值
                     * 
                     */
                    bool SubAcctPropertyHasBeenSet() const;

                    /**
                     * 获取业务平台的子商户Id，唯一
                     * @return SubMchId 业务平台的子商户Id，唯一
                     * 
                     */
                    std::string GetSubMchId() const;

                    /**
                     * 设置业务平台的子商户Id，唯一
                     * @param _subMchId 业务平台的子商户Id，唯一
                     * 
                     */
                    void SetSubMchId(const std::string& _subMchId);

                    /**
                     * 判断参数 SubMchId 是否已赋值
                     * @return SubMchId 是否已赋值
                     * 
                     */
                    bool SubMchIdHasBeenSet() const;

                    /**
                     * 获取子账户名称
                     * @return SubAcctName 子账户名称
                     * 
                     */
                    std::string GetSubAcctName() const;

                    /**
                     * 设置子账户名称
                     * @param _subAcctName 子账户名称
                     * 
                     */
                    void SetSubAcctName(const std::string& _subAcctName);

                    /**
                     * 判断参数 SubAcctName 是否已赋值
                     * @return SubAcctName 是否已赋值
                     * 
                     */
                    bool SubAcctNameHasBeenSet() const;

                    /**
                     * 获取账户可用余额
                     * @return AcctAvailBal 账户可用余额
                     * 
                     */
                    std::string GetAcctAvailBal() const;

                    /**
                     * 设置账户可用余额
                     * @param _acctAvailBal 账户可用余额
                     * 
                     */
                    void SetAcctAvailBal(const std::string& _acctAvailBal);

                    /**
                     * 判断参数 AcctAvailBal 是否已赋值
                     * @return AcctAvailBal 是否已赋值
                     * 
                     */
                    bool AcctAvailBalHasBeenSet() const;

                    /**
                     * 获取可提现金额
                     * @return CashAmt 可提现金额
                     * 
                     */
                    std::string GetCashAmt() const;

                    /**
                     * 设置可提现金额
                     * @param _cashAmt 可提现金额
                     * 
                     */
                    void SetCashAmt(const std::string& _cashAmt);

                    /**
                     * 判断参数 CashAmt 是否已赋值
                     * @return CashAmt 是否已赋值
                     * 
                     */
                    bool CashAmtHasBeenSet() const;

                    /**
                     * 获取维护日期 开户日期或修改日期
                     * @return MaintenanceDate 维护日期 开户日期或修改日期
                     * 
                     */
                    std::string GetMaintenanceDate() const;

                    /**
                     * 设置维护日期 开户日期或修改日期
                     * @param _maintenanceDate 维护日期 开户日期或修改日期
                     * 
                     */
                    void SetMaintenanceDate(const std::string& _maintenanceDate);

                    /**
                     * 判断参数 MaintenanceDate 是否已赋值
                     * @return MaintenanceDate 是否已赋值
                     * 
                     */
                    bool MaintenanceDateHasBeenSet() const;

                private:

                    /**
                     * 子商户账户
                     */
                    std::string m_subAcctNo;
                    bool m_subAcctNoHasBeenSet;

                    /**
                     * 子账户属性 
1：普通会员子账号 
2：挂账子账号 
3：手续费子账号 
4：利息子账号
5：平台担保子账号
                     */
                    std::string m_subAcctProperty;
                    bool m_subAcctPropertyHasBeenSet;

                    /**
                     * 业务平台的子商户Id，唯一
                     */
                    std::string m_subMchId;
                    bool m_subMchIdHasBeenSet;

                    /**
                     * 子账户名称
                     */
                    std::string m_subAcctName;
                    bool m_subAcctNameHasBeenSet;

                    /**
                     * 账户可用余额
                     */
                    std::string m_acctAvailBal;
                    bool m_acctAvailBalHasBeenSet;

                    /**
                     * 可提现金额
                     */
                    std::string m_cashAmt;
                    bool m_cashAmtHasBeenSet;

                    /**
                     * 维护日期 开户日期或修改日期
                     */
                    std::string m_maintenanceDate;
                    bool m_maintenanceDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYITEM_H_
