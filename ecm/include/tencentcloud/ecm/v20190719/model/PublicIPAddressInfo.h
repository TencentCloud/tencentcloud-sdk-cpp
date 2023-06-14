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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_PUBLICIPADDRESSINFO_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_PUBLICIPADDRESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ISP.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 实例的公网ip相关信息。
                */
                class PublicIPAddressInfo : public AbstractModel
                {
                public:
                    PublicIPAddressInfo();
                    ~PublicIPAddressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计费模式。
                     * @return ChargeMode 计费模式。
                     * 
                     */
                    std::string GetChargeMode() const;

                    /**
                     * 设置计费模式。
                     * @param _chargeMode 计费模式。
                     * 
                     */
                    void SetChargeMode(const std::string& _chargeMode);

                    /**
                     * 判断参数 ChargeMode 是否已赋值
                     * @return ChargeMode 是否已赋值
                     * 
                     */
                    bool ChargeModeHasBeenSet() const;

                    /**
                     * 获取实例的公网ip。
                     * @return PublicIPAddress 实例的公网ip。
                     * 
                     */
                    std::string GetPublicIPAddress() const;

                    /**
                     * 设置实例的公网ip。
                     * @param _publicIPAddress 实例的公网ip。
                     * 
                     */
                    void SetPublicIPAddress(const std::string& _publicIPAddress);

                    /**
                     * 判断参数 PublicIPAddress 是否已赋值
                     * @return PublicIPAddress 是否已赋值
                     * 
                     */
                    bool PublicIPAddressHasBeenSet() const;

                    /**
                     * 获取实例的公网ip所属的运营商。
                     * @return ISP 实例的公网ip所属的运营商。
                     * 
                     */
                    ISP GetISP() const;

                    /**
                     * 设置实例的公网ip所属的运营商。
                     * @param _iSP 实例的公网ip所属的运营商。
                     * 
                     */
                    void SetISP(const ISP& _iSP);

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                    /**
                     * 获取实例的最大出带宽上限，单位为Mbps。
                     * @return MaxBandwidthOut 实例的最大出带宽上限，单位为Mbps。
                     * 
                     */
                    int64_t GetMaxBandwidthOut() const;

                    /**
                     * 设置实例的最大出带宽上限，单位为Mbps。
                     * @param _maxBandwidthOut 实例的最大出带宽上限，单位为Mbps。
                     * 
                     */
                    void SetMaxBandwidthOut(const int64_t& _maxBandwidthOut);

                    /**
                     * 判断参数 MaxBandwidthOut 是否已赋值
                     * @return MaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool MaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取实例的最大入带宽上限，单位为Mbps。
                     * @return MaxBandwidthIn 实例的最大入带宽上限，单位为Mbps。
                     * 
                     */
                    int64_t GetMaxBandwidthIn() const;

                    /**
                     * 设置实例的最大入带宽上限，单位为Mbps。
                     * @param _maxBandwidthIn 实例的最大入带宽上限，单位为Mbps。
                     * 
                     */
                    void SetMaxBandwidthIn(const int64_t& _maxBandwidthIn);

                    /**
                     * 判断参数 MaxBandwidthIn 是否已赋值
                     * @return MaxBandwidthIn 是否已赋值
                     * 
                     */
                    bool MaxBandwidthInHasBeenSet() const;

                private:

                    /**
                     * 计费模式。
                     */
                    std::string m_chargeMode;
                    bool m_chargeModeHasBeenSet;

                    /**
                     * 实例的公网ip。
                     */
                    std::string m_publicIPAddress;
                    bool m_publicIPAddressHasBeenSet;

                    /**
                     * 实例的公网ip所属的运营商。
                     */
                    ISP m_iSP;
                    bool m_iSPHasBeenSet;

                    /**
                     * 实例的最大出带宽上限，单位为Mbps。
                     */
                    int64_t m_maxBandwidthOut;
                    bool m_maxBandwidthOutHasBeenSet;

                    /**
                     * 实例的最大入带宽上限，单位为Mbps。
                     */
                    int64_t m_maxBandwidthIn;
                    bool m_maxBandwidthInHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_PUBLICIPADDRESSINFO_H_
