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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETHARDWAREINFORESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETHARDWAREINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetHardwareInfo返回参数结构体
                */
                class GetHardwareInfoResponse : public AbstractModel
                {
                public:
                    GetHardwareInfoResponse();
                    ~GetHardwareInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取license授权有效期 
0：月度授权 
1：永久授权 
-1：未知
                     * @return LicensePayMode license授权有效期 
0：月度授权 
1：永久授权 
-1：未知
                     * 
                     */
                    int64_t GetLicensePayMode() const;

                    /**
                     * 判断参数 LicensePayMode 是否已赋值
                     * @return LicensePayMode 是否已赋值
                     * 
                     */
                    bool LicensePayModeHasBeenSet() const;

                    /**
                     * 获取付费方 0：客户付费 1：厂商付费
                     * @return Payer 付费方 0：客户付费 1：厂商付费
                     * 
                     */
                    int64_t GetPayer() const;

                    /**
                     * 判断参数 Payer 是否已赋值
                     * @return Payer 是否已赋值
                     * 
                     */
                    bool PayerHasBeenSet() const;

                    /**
                     * 获取硬件序列号
                     * @return SN 硬件序列号
                     * 
                     */
                    std::string GetSN() const;

                    /**
                     * 判断参数 SN 是否已赋值
                     * @return SN 是否已赋值
                     * 
                     */
                    bool SNHasBeenSet() const;

                    /**
                     * 获取厂商名称
                     * @return Vendor 厂商名称
                     * 
                     */
                    std::string GetVendor() const;

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                private:

                    /**
                     * license授权有效期 
0：月度授权 
1：永久授权 
-1：未知
                     */
                    int64_t m_licensePayMode;
                    bool m_licensePayModeHasBeenSet;

                    /**
                     * 付费方 0：客户付费 1：厂商付费
                     */
                    int64_t m_payer;
                    bool m_payerHasBeenSet;

                    /**
                     * 硬件序列号
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                    /**
                     * 厂商名称
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETHARDWAREINFORESPONSE_H_
