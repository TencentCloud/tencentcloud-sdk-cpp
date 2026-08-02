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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_ACTIVATIONLICENSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_ACTIVATIONLICENSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 激活码统计信息。
                */
                class ActivationLicense : public AbstractModel
                {
                public:
                    ActivationLicense();
                    ~ActivationLicense() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>激活码类型</p>
                     * @return ServiceType <p>激活码类型</p>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>激活码类型</p>
                     * @param _serviceType <p>激活码类型</p>
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>支付模式</p>
                     * @return TotalLicenseNum <p>支付模式</p>
                     * 
                     */
                    int64_t GetTotalLicenseNum() const;

                    /**
                     * 设置<p>支付模式</p>
                     * @param _totalLicenseNum <p>支付模式</p>
                     * 
                     */
                    void SetTotalLicenseNum(const int64_t& _totalLicenseNum);

                    /**
                     * 判断参数 TotalLicenseNum 是否已赋值
                     * @return TotalLicenseNum 是否已赋值
                     * 
                     */
                    bool TotalLicenseNumHasBeenSet() const;

                    /**
                     * 获取<p>计费标签项</p>
                     * @return UsedLicenseNum <p>计费标签项</p>
                     * 
                     */
                    int64_t GetUsedLicenseNum() const;

                    /**
                     * 设置<p>计费标签项</p>
                     * @param _usedLicenseNum <p>计费标签项</p>
                     * 
                     */
                    void SetUsedLicenseNum(const int64_t& _usedLicenseNum);

                    /**
                     * 判断参数 UsedLicenseNum 是否已赋值
                     * @return UsedLicenseNum 是否已赋值
                     * 
                     */
                    bool UsedLicenseNumHasBeenSet() const;

                    /**
                     * 获取<p>计费标识</p>
                     * @return Period <p>计费标识</p>
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置<p>计费标识</p>
                     * @param _period <p>计费标识</p>
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * <p>激活码类型</p>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>支付模式</p>
                     */
                    int64_t m_totalLicenseNum;
                    bool m_totalLicenseNumHasBeenSet;

                    /**
                     * <p>计费标签项</p>
                     */
                    int64_t m_usedLicenseNum;
                    bool m_usedLicenseNumHasBeenSet;

                    /**
                     * <p>计费标识</p>
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_ACTIVATIONLICENSE_H_
