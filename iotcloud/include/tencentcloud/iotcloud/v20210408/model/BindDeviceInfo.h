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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_BINDDEVICEINFO_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_BINDDEVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20210408/model/DeviceTag.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 子设备信息
                */
                class BindDeviceInfo : public AbstractModel
                {
                public:
                    BindDeviceInfo();
                    ~BindDeviceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取设备名
                     * @return DeviceName 设备名
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名
                     * @param _deviceName 设备名
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
                     * 获取设备Tag
                     * @return Tags 设备Tag
                     * 
                     */
                    std::vector<DeviceTag> GetTags() const;

                    /**
                     * 设置设备Tag
                     * @param _tags 设备Tag
                     * 
                     */
                    void SetTags(const std::vector<DeviceTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取子设备绑定时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindTime 子设备绑定时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBindTime() const;

                    /**
                     * 设置子设备绑定时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindTime 子设备绑定时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindTime(const uint64_t& _bindTime);

                    /**
                     * 判断参数 BindTime 是否已赋值
                     * @return BindTime 是否已赋值
                     * 
                     */
                    bool BindTimeHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备Tag
                     */
                    std::vector<DeviceTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 子设备绑定时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_bindTime;
                    bool m_bindTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_BINDDEVICEINFO_H_
