/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_RENEWINSTANCEREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_RENEWINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * RenewInstance请求参数结构体
                */
                class RenewInstanceRequest : public AbstractModel
                {
                public:
                    RenewInstanceRequest();
                    ~RenewInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ClientToken是一个由客户端生成的唯一的、区分大小写、不超过64个ASCII字符的字符串。例如，ClientToken=123e4567-e89b-12d3-a456-42665544****。
                     * @return ClientToken ClientToken是一个由客户端生成的唯一的、区分大小写、不超过64个ASCII字符的字符串。例如，ClientToken=123e4567-e89b-12d3-a456-42665544****。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置ClientToken是一个由客户端生成的唯一的、区分大小写、不超过64个ASCII字符的字符串。例如，ClientToken=123e4567-e89b-12d3-a456-42665544****。
                     * @param _clientToken ClientToken是一个由客户端生成的唯一的、区分大小写、不超过64个ASCII字符的字符串。例如，ClientToken=123e4567-e89b-12d3-a456-42665544****。
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取产品一层code
                     * @return ProductCode 产品一层code
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置产品一层code
                     * @param _productCode 产品一层code
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取产品二层code
                     * @return SubProductCode 产品二层code
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置产品二层code
                     * @param _subProductCode 产品二层code
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取地域code
                     * @return RegionCode 地域code
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置地域code
                     * @param _regionCode 地域code
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取手动续费时长，取值上限：36，默认取值1
                     * @return Period 手动续费时长，取值上限：36，默认取值1
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置手动续费时长，取值上限：36，默认取值1
                     * @param _period 手动续费时长，取值上限：36，默认取值1
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取手动续费时长单位，取值：m：按月续费，y：按年续费，默认取值m
                     * @return PeriodUnit 手动续费时长单位，取值：m：按月续费，y：按年续费，默认取值m
                     * 
                     */
                    std::string GetPeriodUnit() const;

                    /**
                     * 设置手动续费时长单位，取值：m：按月续费，y：按年续费，默认取值m
                     * @param _periodUnit 手动续费时长单位，取值：m：按月续费，y：按年续费，默认取值m
                     * 
                     */
                    void SetPeriodUnit(const std::string& _periodUnit);

                    /**
                     * 判断参数 PeriodUnit 是否已赋值
                     * @return PeriodUnit 是否已赋值
                     * 
                     */
                    bool PeriodUnitHasBeenSet() const;

                private:

                    /**
                     * ClientToken是一个由客户端生成的唯一的、区分大小写、不超过64个ASCII字符的字符串。例如，ClientToken=123e4567-e89b-12d3-a456-42665544****。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 产品一层code
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 产品二层code
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * 地域code
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 手动续费时长，取值上限：36，默认取值1
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 手动续费时长单位，取值：m：按月续费，y：按年续费，默认取值m
                     */
                    std::string m_periodUnit;
                    bool m_periodUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_RENEWINSTANCEREQUEST_H_
