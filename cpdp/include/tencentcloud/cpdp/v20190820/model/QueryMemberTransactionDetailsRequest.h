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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMEMBERTRANSACTIONDETAILSREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMEMBERTRANSACTIONDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * QueryMemberTransactionDetails请求参数结构体
                */
                class QueryMemberTransactionDetailsRequest : public AbstractModel
                {
                public:
                    QueryMemberTransactionDetailsRequest();
                    ~QueryMemberTransactionDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询的交易发生时间类型。
__1__：当日
__2__：历史
                     * @return QueryDateType 查询的交易发生时间类型。
__1__：当日
__2__：历史
                     * 
                     */
                    std::string GetQueryDateType() const;

                    /**
                     * 设置查询的交易发生时间类型。
__1__：当日
__2__：历史
                     * @param _queryDateType 查询的交易发生时间类型。
__1__：当日
__2__：历史
                     * 
                     */
                    void SetQueryDateType(const std::string& _queryDateType);

                    /**
                     * 判断参数 QueryDateType 是否已赋值
                     * @return QueryDateType 是否已赋值
                     * 
                     */
                    bool QueryDateTypeHasBeenSet() const;

                    /**
                     * 获取查询的交易类型。
__1__：全部
__2__：转出
__3__：转入
                     * @return QueryTranType 查询的交易类型。
__1__：全部
__2__：转出
__3__：转入
                     * 
                     */
                    std::string GetQueryTranType() const;

                    /**
                     * 设置查询的交易类型。
__1__：全部
__2__：转出
__3__：转入
                     * @param _queryTranType 查询的交易类型。
__1__：全部
__2__：转出
__3__：转入
                     * 
                     */
                    void SetQueryTranType(const std::string& _queryTranType);

                    /**
                     * 判断参数 QueryTranType 是否已赋值
                     * @return QueryTranType 是否已赋值
                     * 
                     */
                    bool QueryTranTypeHasBeenSet() const;

                    /**
                     * 获取父账户账号。
_平安渠道为资金汇总账号_
                     * @return BankAccountNumber 父账户账号。
_平安渠道为资金汇总账号_
                     * 
                     */
                    std::string GetBankAccountNumber() const;

                    /**
                     * 设置父账户账号。
_平安渠道为资金汇总账号_
                     * @param _bankAccountNumber 父账户账号。
_平安渠道为资金汇总账号_
                     * 
                     */
                    void SetBankAccountNumber(const std::string& _bankAccountNumber);

                    /**
                     * 判断参数 BankAccountNumber 是否已赋值
                     * @return BankAccountNumber 是否已赋值
                     * 
                     */
                    bool BankAccountNumberHasBeenSet() const;

                    /**
                     * 获取子账户账号。
_平安渠道为见证子账户的账号_
                     * @return SubAccountNumber 子账户账号。
_平安渠道为见证子账户的账号_
                     * 
                     */
                    std::string GetSubAccountNumber() const;

                    /**
                     * 设置子账户账号。
_平安渠道为见证子账户的账号_
                     * @param _subAccountNumber 子账户账号。
_平安渠道为见证子账户的账号_
                     * 
                     */
                    void SetSubAccountNumber(const std::string& _subAccountNumber);

                    /**
                     * 判断参数 SubAccountNumber 是否已赋值
                     * @return SubAccountNumber 是否已赋值
                     * 
                     */
                    bool SubAccountNumberHasBeenSet() const;

                    /**
                     * 获取分页号, 起始值为1。
                     * @return PageOffSet 分页号, 起始值为1。
                     * 
                     */
                    std::string GetPageOffSet() const;

                    /**
                     * 设置分页号, 起始值为1。
                     * @param _pageOffSet 分页号, 起始值为1。
                     * 
                     */
                    void SetPageOffSet(const std::string& _pageOffSet);

                    /**
                     * 判断参数 PageOffSet 是否已赋值
                     * @return PageOffSet 是否已赋值
                     * 
                     */
                    bool PageOffSetHasBeenSet() const;

                    /**
                     * 获取查询开始日期，格式：yyyyMMdd。
__若是历史查询，则必输，当日查询时，不起作用；开始日期不能超过当前日期__
                     * @return QueryStartDate 查询开始日期，格式：yyyyMMdd。
__若是历史查询，则必输，当日查询时，不起作用；开始日期不能超过当前日期__
                     * 
                     */
                    std::string GetQueryStartDate() const;

                    /**
                     * 设置查询开始日期，格式：yyyyMMdd。
__若是历史查询，则必输，当日查询时，不起作用；开始日期不能超过当前日期__
                     * @param _queryStartDate 查询开始日期，格式：yyyyMMdd。
__若是历史查询，则必输，当日查询时，不起作用；开始日期不能超过当前日期__
                     * 
                     */
                    void SetQueryStartDate(const std::string& _queryStartDate);

                    /**
                     * 判断参数 QueryStartDate 是否已赋值
                     * @return QueryStartDate 是否已赋值
                     * 
                     */
                    bool QueryStartDateHasBeenSet() const;

                    /**
                     * 获取查询终止日期，格式：yyyyMMdd。
__若是历史查询，则必输，当日查询时，不起作用；终止日期不能超过当前日期__
                     * @return QueryEndDate 查询终止日期，格式：yyyyMMdd。
__若是历史查询，则必输，当日查询时，不起作用；终止日期不能超过当前日期__
                     * 
                     */
                    std::string GetQueryEndDate() const;

                    /**
                     * 设置查询终止日期，格式：yyyyMMdd。
__若是历史查询，则必输，当日查询时，不起作用；终止日期不能超过当前日期__
                     * @param _queryEndDate 查询终止日期，格式：yyyyMMdd。
__若是历史查询，则必输，当日查询时，不起作用；终止日期不能超过当前日期__
                     * 
                     */
                    void SetQueryEndDate(const std::string& _queryEndDate);

                    /**
                     * 判断参数 QueryEndDate 是否已赋值
                     * @return QueryEndDate 是否已赋值
                     * 
                     */
                    bool QueryEndDateHasBeenSet() const;

                    /**
                     * 获取环境名。
__release__: 现网环境
__sandbox__: 沙箱环境
__development__: 开发环境
_缺省: release_
                     * @return MidasEnvironment 环境名。
__release__: 现网环境
__sandbox__: 沙箱环境
__development__: 开发环境
_缺省: release_
                     * 
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置环境名。
__release__: 现网环境
__sandbox__: 沙箱环境
__development__: 开发环境
_缺省: release_
                     * @param _midasEnvironment 环境名。
__release__: 现网环境
__sandbox__: 沙箱环境
__development__: 开发环境
_缺省: release_
                     * 
                     */
                    void SetMidasEnvironment(const std::string& _midasEnvironment);

                    /**
                     * 判断参数 MidasEnvironment 是否已赋值
                     * @return MidasEnvironment 是否已赋值
                     * 
                     */
                    bool MidasEnvironmentHasBeenSet() const;

                private:

                    /**
                     * 查询的交易发生时间类型。
__1__：当日
__2__：历史
                     */
                    std::string m_queryDateType;
                    bool m_queryDateTypeHasBeenSet;

                    /**
                     * 查询的交易类型。
__1__：全部
__2__：转出
__3__：转入
                     */
                    std::string m_queryTranType;
                    bool m_queryTranTypeHasBeenSet;

                    /**
                     * 父账户账号。
_平安渠道为资金汇总账号_
                     */
                    std::string m_bankAccountNumber;
                    bool m_bankAccountNumberHasBeenSet;

                    /**
                     * 子账户账号。
_平安渠道为见证子账户的账号_
                     */
                    std::string m_subAccountNumber;
                    bool m_subAccountNumberHasBeenSet;

                    /**
                     * 分页号, 起始值为1。
                     */
                    std::string m_pageOffSet;
                    bool m_pageOffSetHasBeenSet;

                    /**
                     * 查询开始日期，格式：yyyyMMdd。
__若是历史查询，则必输，当日查询时，不起作用；开始日期不能超过当前日期__
                     */
                    std::string m_queryStartDate;
                    bool m_queryStartDateHasBeenSet;

                    /**
                     * 查询终止日期，格式：yyyyMMdd。
__若是历史查询，则必输，当日查询时，不起作用；终止日期不能超过当前日期__
                     */
                    std::string m_queryEndDate;
                    bool m_queryEndDateHasBeenSet;

                    /**
                     * 环境名。
__release__: 现网环境
__sandbox__: 沙箱环境
__development__: 开发环境
_缺省: release_
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMEMBERTRANSACTIONDETAILSREQUEST_H_
