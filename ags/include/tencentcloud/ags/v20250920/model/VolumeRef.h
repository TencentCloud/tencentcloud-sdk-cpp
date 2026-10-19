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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_VOLUMEREF_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_VOLUMEREF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 对 Volume 的引用，其中 Name 或 Id 之一必须不为空
                */
                class VolumeRef : public AbstractModel
                {
                public:
                    VolumeRef();
                    ~VolumeRef() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Volume 名称；服务端在当前认证 AppId 下解析为稳定 VolumeId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeName Volume 名称；服务端在当前认证 AppId 下解析为稳定 VolumeId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVolumeName() const;

                    /**
                     * 设置Volume 名称；服务端在当前认证 AppId 下解析为稳定 VolumeId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeName Volume 名称；服务端在当前认证 AppId 下解析为稳定 VolumeId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVolumeName(const std::string& _volumeName);

                    /**
                     * 判断参数 VolumeName 是否已赋值
                     * @return VolumeName 是否已赋值
                     * 
                     */
                    bool VolumeNameHasBeenSet() const;

                    /**
                     * 获取稳定 Volume ID，格式 vol-xxxxxxxx
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeId 稳定 Volume ID，格式 vol-xxxxxxxx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVolumeId() const;

                    /**
                     * 设置稳定 Volume ID，格式 vol-xxxxxxxx
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeId 稳定 Volume ID，格式 vol-xxxxxxxx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVolumeId(const std::string& _volumeId);

                    /**
                     * 判断参数 VolumeId 是否已赋值
                     * @return VolumeId 是否已赋值
                     * 
                     */
                    bool VolumeIdHasBeenSet() const;

                private:

                    /**
                     * Volume 名称；服务端在当前认证 AppId 下解析为稳定 VolumeId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_volumeName;
                    bool m_volumeNameHasBeenSet;

                    /**
                     * 稳定 Volume ID，格式 vol-xxxxxxxx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_volumeId;
                    bool m_volumeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_VOLUMEREF_H_
