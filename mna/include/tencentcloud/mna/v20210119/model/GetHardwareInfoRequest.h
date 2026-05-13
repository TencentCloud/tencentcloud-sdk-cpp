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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETHARDWAREINFOREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETHARDWAREINFOREQUEST_H_

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
                * GetHardwareInfo请求参数结构体
                */
                class GetHardwareInfoRequest : public AbstractModel
                {
                public:
                    GetHardwareInfoRequest();
                    ~GetHardwareInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取厂商名称
                     * @return Vendor 厂商名称
                     * 
                     */
                    std::string GetVendor() const;

                    /**
                     * 设置厂商名称
                     * @param _vendor 厂商名称
                     * 
                     */
                    void SetVendor(const std::string& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                    /**
                     * 获取设备SN序列号
                     * @return SN 设备SN序列号
                     * 
                     */
                    std::string GetSN() const;

                    /**
                     * 设置设备SN序列号
                     * @param _sN 设备SN序列号
                     * 
                     */
                    void SetSN(const std::string& _sN);

                    /**
                     * 判断参数 SN 是否已赋值
                     * @return SN 是否已赋值
                     * 
                     */
                    bool SNHasBeenSet() const;

                private:

                    /**
                     * 厂商名称
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * 设备SN序列号
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETHARDWAREINFOREQUEST_H_
