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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EKSCIVOLUME_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EKSCIVOLUME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/CbsVolume.h>
#include <tencentcloud/tke/v20180525/model/NfsVolume.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * EKS Instance Volume,  可选包括CbsVolume和NfsVolume
                */
                class EksCiVolume : public AbstractModel
                {
                public:
                    EksCiVolume();
                    ~EksCiVolume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cbs Volume
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CbsVolumes Cbs Volume
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CbsVolume> GetCbsVolumes() const;

                    /**
                     * 设置Cbs Volume
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cbsVolumes Cbs Volume
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCbsVolumes(const std::vector<CbsVolume>& _cbsVolumes);

                    /**
                     * 判断参数 CbsVolumes 是否已赋值
                     * @return CbsVolumes 是否已赋值
                     * 
                     */
                    bool CbsVolumesHasBeenSet() const;

                    /**
                     * 获取Nfs Volume
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NfsVolumes Nfs Volume
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NfsVolume> GetNfsVolumes() const;

                    /**
                     * 设置Nfs Volume
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nfsVolumes Nfs Volume
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNfsVolumes(const std::vector<NfsVolume>& _nfsVolumes);

                    /**
                     * 判断参数 NfsVolumes 是否已赋值
                     * @return NfsVolumes 是否已赋值
                     * 
                     */
                    bool NfsVolumesHasBeenSet() const;

                private:

                    /**
                     * Cbs Volume
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CbsVolume> m_cbsVolumes;
                    bool m_cbsVolumesHasBeenSet;

                    /**
                     * Nfs Volume
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NfsVolume> m_nfsVolumes;
                    bool m_nfsVolumesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EKSCIVOLUME_H_
