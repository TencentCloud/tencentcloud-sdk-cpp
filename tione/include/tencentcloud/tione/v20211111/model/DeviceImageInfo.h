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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DEVICEIMAGEINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DEVICEIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 设备对应的镜像信息
                */
                class DeviceImageInfo : public AbstractModel
                {
                public:
                    DeviceImageInfo();
                    ~DeviceImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备类型, 支持GPU等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceType 设备类型, 支持GPU等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型, 支持GPU等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deviceType 设备类型, 支持GPU等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageInfo 镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageInfo 镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageInfo(const ImageInfo& _imageInfo);

                    /**
                     * 判断参数 ImageInfo 是否已赋值
                     * @return ImageInfo 是否已赋值
                     * 
                     */
                    bool ImageInfoHasBeenSet() const;

                private:

                    /**
                     * 设备类型, 支持GPU等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DEVICEIMAGEINFO_H_
