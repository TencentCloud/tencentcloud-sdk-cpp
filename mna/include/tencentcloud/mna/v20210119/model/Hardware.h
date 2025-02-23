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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_HARDWARE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_HARDWARE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 新建Hardware入参
                */
                class Hardware : public AbstractModel
                {
                public:
                    Hardware();
                    ~Hardware() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取硬件序列号
                     * @return SN 硬件序列号
                     * 
                     */
                    std::string GetSN() const;

                    /**
                     * 设置硬件序列号
                     * @param _sN 硬件序列号
                     * 
                     */
                    void SetSN(const std::string& _sN);

                    /**
                     * 判断参数 SN 是否已赋值
                     * @return SN 是否已赋值
                     * 
                     */
                    bool SNHasBeenSet() const;

                    /**
                     * 获取license计费模式：
1，租户付费
2，厂商月付费
3，厂商永久授权
                     * @return LicenseChargingMode license计费模式：
1，租户付费
2，厂商月付费
3，厂商永久授权
                     * 
                     */
                    int64_t GetLicenseChargingMode() const;

                    /**
                     * 设置license计费模式：
1，租户付费
2，厂商月付费
3，厂商永久授权
                     * @param _licenseChargingMode license计费模式：
1，租户付费
2，厂商月付费
3，厂商永久授权
                     * 
                     */
                    void SetLicenseChargingMode(const int64_t& _licenseChargingMode);

                    /**
                     * 判断参数 LicenseChargingMode 是否已赋值
                     * @return LicenseChargingMode 是否已赋值
                     * 
                     */
                    bool LicenseChargingModeHasBeenSet() const;

                    /**
                     * 获取设备描述
                     * @return Description 设备描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置设备描述
                     * @param _description 设备描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取硬件ID，入参无需传递
                     * @return HardwareId 硬件ID，入参无需传递
                     * 
                     */
                    std::string GetHardwareId() const;

                    /**
                     * 设置硬件ID，入参无需传递
                     * @param _hardwareId 硬件ID，入参无需传递
                     * 
                     */
                    void SetHardwareId(const std::string& _hardwareId);

                    /**
                     * 判断参数 HardwareId 是否已赋值
                     * @return HardwareId 是否已赋值
                     * 
                     */
                    bool HardwareIdHasBeenSet() const;

                private:

                    /**
                     * 硬件序列号
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                    /**
                     * license计费模式：
1，租户付费
2，厂商月付费
3，厂商永久授权
                     */
                    int64_t m_licenseChargingMode;
                    bool m_licenseChargingModeHasBeenSet;

                    /**
                     * 设备描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 硬件ID，入参无需传递
                     */
                    std::string m_hardwareId;
                    bool m_hardwareIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_HARDWARE_H_
