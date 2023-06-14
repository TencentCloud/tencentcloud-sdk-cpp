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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_REBATEINFOELEMNEW_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_REBATEINFOELEMNEW_H_

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
                * 返佣信息定义
                */
                class RebateInfoElemNew : public AbstractModel
                {
                public:
                    RebateInfoElemNew();
                    ~RebateInfoElemNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代理商账号ID
                     * @return Uin 代理商账号ID
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置代理商账号ID
                     * @param _uin 代理商账号ID
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取返佣月份，如2018-02
                     * @return RebateMonth 返佣月份，如2018-02
                     * 
                     */
                    std::string GetRebateMonth() const;

                    /**
                     * 设置返佣月份，如2018-02
                     * @param _rebateMonth 返佣月份，如2018-02
                     * 
                     */
                    void SetRebateMonth(const std::string& _rebateMonth);

                    /**
                     * 判断参数 RebateMonth 是否已赋值
                     * @return RebateMonth 是否已赋值
                     * 
                     */
                    bool RebateMonthHasBeenSet() const;

                    /**
                     * 获取返佣金额，单位分
                     * @return Amt 返佣金额，单位分
                     * 
                     */
                    int64_t GetAmt() const;

                    /**
                     * 设置返佣金额，单位分
                     * @param _amt 返佣金额，单位分
                     * 
                     */
                    void SetAmt(const int64_t& _amt);

                    /**
                     * 判断参数 Amt 是否已赋值
                     * @return Amt 是否已赋值
                     * 
                     */
                    bool AmtHasBeenSet() const;

                    /**
                     * 获取月度业绩，单位分
                     * @return MonthSales 月度业绩，单位分
                     * 
                     */
                    int64_t GetMonthSales() const;

                    /**
                     * 设置月度业绩，单位分
                     * @param _monthSales 月度业绩，单位分
                     * 
                     */
                    void SetMonthSales(const int64_t& _monthSales);

                    /**
                     * 判断参数 MonthSales 是否已赋值
                     * @return MonthSales 是否已赋值
                     * 
                     */
                    bool MonthSalesHasBeenSet() const;

                    /**
                     * 获取季度业绩，单位分
                     * @return QuarterSales 季度业绩，单位分
                     * 
                     */
                    int64_t GetQuarterSales() const;

                    /**
                     * 设置季度业绩，单位分
                     * @param _quarterSales 季度业绩，单位分
                     * 
                     */
                    void SetQuarterSales(const int64_t& _quarterSales);

                    /**
                     * 判断参数 QuarterSales 是否已赋值
                     * @return QuarterSales 是否已赋值
                     * 
                     */
                    bool QuarterSalesHasBeenSet() const;

                    /**
                     * 获取NORMAL(正常)/HAS_OVERDUE_BILL(欠费)/NO_CONTRACT(缺合同)
                     * @return ExceptionFlag NORMAL(正常)/HAS_OVERDUE_BILL(欠费)/NO_CONTRACT(缺合同)
                     * 
                     */
                    std::string GetExceptionFlag() const;

                    /**
                     * 设置NORMAL(正常)/HAS_OVERDUE_BILL(欠费)/NO_CONTRACT(缺合同)
                     * @param _exceptionFlag NORMAL(正常)/HAS_OVERDUE_BILL(欠费)/NO_CONTRACT(缺合同)
                     * 
                     */
                    void SetExceptionFlag(const std::string& _exceptionFlag);

                    /**
                     * 判断参数 ExceptionFlag 是否已赋值
                     * @return ExceptionFlag 是否已赋值
                     * 
                     */
                    bool ExceptionFlagHasBeenSet() const;

                private:

                    /**
                     * 代理商账号ID
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 返佣月份，如2018-02
                     */
                    std::string m_rebateMonth;
                    bool m_rebateMonthHasBeenSet;

                    /**
                     * 返佣金额，单位分
                     */
                    int64_t m_amt;
                    bool m_amtHasBeenSet;

                    /**
                     * 月度业绩，单位分
                     */
                    int64_t m_monthSales;
                    bool m_monthSalesHasBeenSet;

                    /**
                     * 季度业绩，单位分
                     */
                    int64_t m_quarterSales;
                    bool m_quarterSalesHasBeenSet;

                    /**
                     * NORMAL(正常)/HAS_OVERDUE_BILL(欠费)/NO_CONTRACT(缺合同)
                     */
                    std::string m_exceptionFlag;
                    bool m_exceptionFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_REBATEINFOELEMNEW_H_
