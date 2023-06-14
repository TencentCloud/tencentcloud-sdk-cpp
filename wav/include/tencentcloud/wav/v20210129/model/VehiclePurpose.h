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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_VEHICLEPURPOSE_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_VEHICLEPURPOSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 购车用途详细信息
                */
                class VehiclePurpose : public AbstractModel
                {
                public:
                    VehiclePurpose();
                    ~VehiclePurpose() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取购车用途code
                     * @return VehiclePurposeCode 购车用途code
                     * 
                     */
                    std::string GetVehiclePurposeCode() const;

                    /**
                     * 设置购车用途code
                     * @param _vehiclePurposeCode 购车用途code
                     * 
                     */
                    void SetVehiclePurposeCode(const std::string& _vehiclePurposeCode);

                    /**
                     * 判断参数 VehiclePurposeCode 是否已赋值
                     * @return VehiclePurposeCode 是否已赋值
                     * 
                     */
                    bool VehiclePurposeCodeHasBeenSet() const;

                    /**
                     * 获取购车用途名称
                     * @return VehiclePurposeName 购车用途名称
                     * 
                     */
                    std::string GetVehiclePurposeName() const;

                    /**
                     * 设置购车用途名称
                     * @param _vehiclePurposeName 购车用途名称
                     * 
                     */
                    void SetVehiclePurposeName(const std::string& _vehiclePurposeName);

                    /**
                     * 判断参数 VehiclePurposeName 是否已赋值
                     * @return VehiclePurposeName 是否已赋值
                     * 
                     */
                    bool VehiclePurposeNameHasBeenSet() const;

                private:

                    /**
                     * 购车用途code
                     */
                    std::string m_vehiclePurposeCode;
                    bool m_vehiclePurposeCodeHasBeenSet;

                    /**
                     * 购车用途名称
                     */
                    std::string m_vehiclePurposeName;
                    bool m_vehiclePurposeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_VEHICLEPURPOSE_H_
