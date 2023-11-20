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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBESPECSELLSTATUSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBESPECSELLSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeSpecSellStatus请求参数结构体
                */
                class DescribeSpecSellStatusRequest : public AbstractModel
                {
                public:
                    DescribeSpecSellStatusRequest();
                    ~DescribeSpecSellStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区英文ID，形如ap-guangzhou-3
                     * @return Zone 可用区英文ID，形如ap-guangzhou-3
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区英文ID，形如ap-guangzhou-3
                     * @param _zone 可用区英文ID，形如ap-guangzhou-3
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例规格ID，可通过DescribeProductConfig接口获取。
                     * @return SpecIdSet 实例规格ID，可通过DescribeProductConfig接口获取。
                     * 
                     */
                    std::vector<uint64_t> GetSpecIdSet() const;

                    /**
                     * 设置实例规格ID，可通过DescribeProductConfig接口获取。
                     * @param _specIdSet 实例规格ID，可通过DescribeProductConfig接口获取。
                     * 
                     */
                    void SetSpecIdSet(const std::vector<uint64_t>& _specIdSet);

                    /**
                     * 判断参数 SpecIdSet 是否已赋值
                     * @return SpecIdSet 是否已赋值
                     * 
                     */
                    bool SpecIdSetHasBeenSet() const;

                    /**
                     * 获取数据库版本信息，可通过DescribeProductConfig接口获取。
                     * @return DBVersion 数据库版本信息，可通过DescribeProductConfig接口获取。
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置数据库版本信息，可通过DescribeProductConfig接口获取。
                     * @param _dBVersion 数据库版本信息，可通过DescribeProductConfig接口获取。
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取产品ID，可通过DescribeProductConfig接口获取。
                     * @return Pid 产品ID，可通过DescribeProductConfig接口获取。
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置产品ID，可通过DescribeProductConfig接口获取。
                     * @param _pid 产品ID，可通过DescribeProductConfig接口获取。
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取付费模式，POST-按量计费 PRE-包年包月
                     * @return PayMode 付费模式，POST-按量计费 PRE-包年包月
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付费模式，POST-按量计费 PRE-包年包月
                     * @param _payMode 付费模式，POST-按量计费 PRE-包年包月
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取付费模式，CNY-人民币 USD-美元
                     * @return Currency 付费模式，CNY-人民币 USD-美元
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置付费模式，CNY-人民币 USD-美元
                     * @param _currency 付费模式，CNY-人民币 USD-美元
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                private:

                    /**
                     * 可用区英文ID，形如ap-guangzhou-3
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例规格ID，可通过DescribeProductConfig接口获取。
                     */
                    std::vector<uint64_t> m_specIdSet;
                    bool m_specIdSetHasBeenSet;

                    /**
                     * 数据库版本信息，可通过DescribeProductConfig接口获取。
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * 产品ID，可通过DescribeProductConfig接口获取。
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 付费模式，POST-按量计费 PRE-包年包月
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 付费模式，CNY-人民币 USD-美元
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBESPECSELLSTATUSREQUEST_H_
