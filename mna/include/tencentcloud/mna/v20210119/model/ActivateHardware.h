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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ACTIVATEHARDWARE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ACTIVATEHARDWARE_H_

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
                * 激活设备
                */
                class ActivateHardware : public AbstractModel
                {
                public:
                    ActivateHardware();
                    ~ActivateHardware() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取厂商名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vendor 厂商名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVendor() const;

                    /**
                     * 设置厂商名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vendor 厂商名称
注意：此字段可能返回 null，表示取不到有效值。
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

                    /**
                     * 获取设备名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceName 设备名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deviceName 设备名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 备注
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取设备密钥
                     * @return DataKey 设备密钥
                     * 
                     */
                    std::string GetDataKey() const;

                    /**
                     * 设置设备密钥
                     * @param _dataKey 设备密钥
                     * 
                     */
                    void SetDataKey(const std::string& _dataKey);

                    /**
                     * 判断参数 DataKey 是否已赋值
                     * @return DataKey 是否已赋值
                     * 
                     */
                    bool DataKeyHasBeenSet() const;

                private:

                    /**
                     * 厂商名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * 设备SN序列号
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                    /**
                     * 设备名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 设备密钥
                     */
                    std::string m_dataKey;
                    bool m_dataKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ACTIVATEHARDWARE_H_
