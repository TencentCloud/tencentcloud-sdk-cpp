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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_SURGERYSPINALEXTREMITIES_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_SURGERYSPINALEXTREMITIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/KeyValueItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检报告-外科-脊柱
                */
                class SurgerySpinalExtremities : public AbstractModel
                {
                public:
                    SurgerySpinalExtremities();
                    ~SurgerySpinalExtremities() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取脊柱四肢总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 脊柱四肢总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KeyValueItem GetText() const;

                    /**
                     * 设置脊柱四肢总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _text 脊柱四肢总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetText(const KeyValueItem& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取脊柱
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpinalColumn 脊柱
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KeyValueItem GetSpinalColumn() const;

                    /**
                     * 设置脊柱
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spinalColumn 脊柱
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpinalColumn(const KeyValueItem& _spinalColumn);

                    /**
                     * 判断参数 SpinalColumn 是否已赋值
                     * @return SpinalColumn 是否已赋值
                     * 
                     */
                    bool SpinalColumnHasBeenSet() const;

                    /**
                     * 获取四肢和关节
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LimbJoint 四肢和关节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KeyValueItem GetLimbJoint() const;

                    /**
                     * 设置四肢和关节
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limbJoint 四肢和关节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLimbJoint(const KeyValueItem& _limbJoint);

                    /**
                     * 判断参数 LimbJoint 是否已赋值
                     * @return LimbJoint 是否已赋值
                     * 
                     */
                    bool LimbJointHasBeenSet() const;

                    /**
                     * 获取平跛足
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Foot 平跛足
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KeyValueItem GetFoot() const;

                    /**
                     * 设置平跛足
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _foot 平跛足
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFoot(const KeyValueItem& _foot);

                    /**
                     * 判断参数 Foot 是否已赋值
                     * @return Foot 是否已赋值
                     * 
                     */
                    bool FootHasBeenSet() const;

                    /**
                     * 获取骨骼
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bone 骨骼
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KeyValueItem GetBone() const;

                    /**
                     * 设置骨骼
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bone 骨骼
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBone(const KeyValueItem& _bone);

                    /**
                     * 判断参数 Bone 是否已赋值
                     * @return Bone 是否已赋值
                     * 
                     */
                    bool BoneHasBeenSet() const;

                    /**
                     * 获取步态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gait 步态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KeyValueItem GetGait() const;

                    /**
                     * 设置步态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gait 步态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGait(const KeyValueItem& _gait);

                    /**
                     * 判断参数 Gait 是否已赋值
                     * @return Gait 是否已赋值
                     * 
                     */
                    bool GaitHasBeenSet() const;

                    /**
                     * 获取残疾或畸形
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Deformity 残疾或畸形
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KeyValueItem GetDeformity() const;

                    /**
                     * 设置残疾或畸形
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deformity 残疾或畸形
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeformity(const KeyValueItem& _deformity);

                    /**
                     * 判断参数 Deformity 是否已赋值
                     * @return Deformity 是否已赋值
                     * 
                     */
                    bool DeformityHasBeenSet() const;

                private:

                    /**
                     * 脊柱四肢总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KeyValueItem m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 脊柱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KeyValueItem m_spinalColumn;
                    bool m_spinalColumnHasBeenSet;

                    /**
                     * 四肢和关节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KeyValueItem m_limbJoint;
                    bool m_limbJointHasBeenSet;

                    /**
                     * 平跛足
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KeyValueItem m_foot;
                    bool m_footHasBeenSet;

                    /**
                     * 骨骼
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KeyValueItem m_bone;
                    bool m_boneHasBeenSet;

                    /**
                     * 步态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KeyValueItem m_gait;
                    bool m_gaitHasBeenSet;

                    /**
                     * 残疾或畸形
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KeyValueItem m_deformity;
                    bool m_deformityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_SURGERYSPINALEXTREMITIES_H_
