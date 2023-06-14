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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DEVICEINFO_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DEVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudhsm/v20191112/model/HsmInfo.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 设备厂商信息
                */
                class DeviceInfo : public AbstractModel
                {
                public:
                    DeviceInfo();
                    ~DeviceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取厂商名称
                     * @return Manufacturer 厂商名称
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置厂商名称
                     * @param _manufacturer 厂商名称
                     * 
                     */
                    void SetManufacturer(const std::string& _manufacturer);

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     * 
                     */
                    bool ManufacturerHasBeenSet() const;

                    /**
                     * 获取此厂商旗下的设备信息列表
                     * @return HsmTypes 此厂商旗下的设备信息列表
                     * 
                     */
                    std::vector<HsmInfo> GetHsmTypes() const;

                    /**
                     * 设置此厂商旗下的设备信息列表
                     * @param _hsmTypes 此厂商旗下的设备信息列表
                     * 
                     */
                    void SetHsmTypes(const std::vector<HsmInfo>& _hsmTypes);

                    /**
                     * 判断参数 HsmTypes 是否已赋值
                     * @return HsmTypes 是否已赋值
                     * 
                     */
                    bool HsmTypesHasBeenSet() const;

                private:

                    /**
                     * 厂商名称
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * 此厂商旗下的设备信息列表
                     */
                    std::vector<HsmInfo> m_hsmTypes;
                    bool m_hsmTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DEVICEINFO_H_
