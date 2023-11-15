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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACEDEVICERELATION_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACEDEVICERELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 设备-空间绑定关系
                */
                class SpaceDeviceRelation : public AbstractModel
                {
                public:
                    SpaceDeviceRelation();
                    ~SpaceDeviceRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceId 设备id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deviceId 设备id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取构件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ElementId 构件id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetElementId() const;

                    /**
                     * 设置构件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _elementId 构件id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetElementId(const std::string& _elementId);

                    /**
                     * 判断参数 ElementId 是否已赋值
                     * @return ElementId 是否已赋值
                     * 
                     */
                    bool ElementIdHasBeenSet() const;

                private:

                    /**
                     * 设备id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 构件id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_elementId;
                    bool m_elementIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACEDEVICERELATION_H_
