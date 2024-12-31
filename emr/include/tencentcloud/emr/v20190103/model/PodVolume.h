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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PODVOLUME_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PODVOLUME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PersistentVolumeContext.h>
#include <tencentcloud/emr/v20190103/model/HostVolumeContext.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Pod的存储设备描述信息。
                */
                class PodVolume : public AbstractModel
                {
                public:
                    PodVolume();
                    ~PodVolume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储类型，可为"pvc"，"hostpath"。
                     * @return VolumeType 存储类型，可为"pvc"，"hostpath"。
                     * 
                     */
                    std::string GetVolumeType() const;

                    /**
                     * 设置存储类型，可为"pvc"，"hostpath"。
                     * @param _volumeType 存储类型，可为"pvc"，"hostpath"。
                     * 
                     */
                    void SetVolumeType(const std::string& _volumeType);

                    /**
                     * 判断参数 VolumeType 是否已赋值
                     * @return VolumeType 是否已赋值
                     * 
                     */
                    bool VolumeTypeHasBeenSet() const;

                    /**
                     * 获取当VolumeType为"pvc"时，该字段生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PVCVolume 当VolumeType为"pvc"时，该字段生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PersistentVolumeContext GetPVCVolume() const;

                    /**
                     * 设置当VolumeType为"pvc"时，该字段生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pVCVolume 当VolumeType为"pvc"时，该字段生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPVCVolume(const PersistentVolumeContext& _pVCVolume);

                    /**
                     * 判断参数 PVCVolume 是否已赋值
                     * @return PVCVolume 是否已赋值
                     * 
                     */
                    bool PVCVolumeHasBeenSet() const;

                    /**
                     * 获取当VolumeType为"hostpath"时，该字段生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostVolume 当VolumeType为"hostpath"时，该字段生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HostVolumeContext GetHostVolume() const;

                    /**
                     * 设置当VolumeType为"hostpath"时，该字段生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostVolume 当VolumeType为"hostpath"时，该字段生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostVolume(const HostVolumeContext& _hostVolume);

                    /**
                     * 判断参数 HostVolume 是否已赋值
                     * @return HostVolume 是否已赋值
                     * 
                     */
                    bool HostVolumeHasBeenSet() const;

                private:

                    /**
                     * 存储类型，可为"pvc"，"hostpath"。
                     */
                    std::string m_volumeType;
                    bool m_volumeTypeHasBeenSet;

                    /**
                     * 当VolumeType为"pvc"时，该字段生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PersistentVolumeContext m_pVCVolume;
                    bool m_pVCVolumeHasBeenSet;

                    /**
                     * 当VolumeType为"hostpath"时，该字段生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HostVolumeContext m_hostVolume;
                    bool m_hostVolumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PODVOLUME_H_
