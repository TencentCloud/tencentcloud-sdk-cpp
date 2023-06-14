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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_PHYSICALPOSITION_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_PHYSICALPOSITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 物理位置信息
                */
                class PhysicalPosition : public AbstractModel
                {
                public:
                    PhysicalPosition();
                    ~PhysicalPosition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PosId 机位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPosId() const;

                    /**
                     * 设置机位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _posId 机位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPosId(const std::string& _posId);

                    /**
                     * 判断参数 PosId 是否已赋值
                     * @return PosId 是否已赋值
                     * 
                     */
                    bool PosIdHasBeenSet() const;

                    /**
                     * 获取机架
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RackId 机架
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRackId() const;

                    /**
                     * 设置机架
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rackId 机架
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRackId(const std::string& _rackId);

                    /**
                     * 判断参数 RackId 是否已赋值
                     * @return RackId 是否已赋值
                     * 
                     */
                    bool RackIdHasBeenSet() const;

                    /**
                     * 获取交换机
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SwitchId 交换机
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitchId() const;

                    /**
                     * 设置交换机
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switchId 交换机
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitchId(const std::string& _switchId);

                    /**
                     * 判断参数 SwitchId 是否已赋值
                     * @return SwitchId 是否已赋值
                     * 
                     */
                    bool SwitchIdHasBeenSet() const;

                private:

                    /**
                     * 机位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_posId;
                    bool m_posIdHasBeenSet;

                    /**
                     * 机架
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rackId;
                    bool m_rackIdHasBeenSet;

                    /**
                     * 交换机
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switchId;
                    bool m_switchIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_PHYSICALPOSITION_H_
