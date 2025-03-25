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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESPECREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeSpec请求参数结构体
                */
                class DescribeSpecRequest : public AbstractModel
                {
                public:
                    DescribeSpecRequest();
                    ~DescribeSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取地域信息，例如"ap-guangzhou-1"
                     * @return Zone 地域信息，例如"ap-guangzhou-1"
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置地域信息，例如"ap-guangzhou-1"
                     * @param _zone 地域信息，例如"ap-guangzhou-1"
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
                     * 获取计费类型，PREPAID 包年包月，POSTPAID_BY_HOUR 按量计费
                     * @return PayMode 计费类型，PREPAID 包年包月，POSTPAID_BY_HOUR 按量计费
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置计费类型，PREPAID 包年包月，POSTPAID_BY_HOUR 按量计费
                     * @param _payMode 计费类型，PREPAID 包年包月，POSTPAID_BY_HOUR 按量计费
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
                     * 获取多可用区
                     * @return Zones 多可用区
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置多可用区
                     * @param _zones 多可用区
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取机型名称
                     * @return SpecName 机型名称
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置机型名称
                     * @param _specName 机型名称
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取是否存算分离
                     * @return IsSSC 是否存算分离
                     * 
                     */
                    bool GetIsSSC() const;

                    /**
                     * 设置是否存算分离
                     * @param _isSSC 是否存算分离
                     * 
                     */
                    void SetIsSSC(const bool& _isSSC);

                    /**
                     * 判断参数 IsSSC 是否已赋值
                     * @return IsSSC 是否已赋值
                     * 
                     */
                    bool IsSSCHasBeenSet() const;

                private:

                    /**
                     * 地域信息，例如"ap-guangzhou-1"
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 计费类型，PREPAID 包年包月，POSTPAID_BY_HOUR 按量计费
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 多可用区
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 机型名称
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 是否存算分离
                     */
                    bool m_isSSC;
                    bool m_isSSCHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESPECREQUEST_H_
