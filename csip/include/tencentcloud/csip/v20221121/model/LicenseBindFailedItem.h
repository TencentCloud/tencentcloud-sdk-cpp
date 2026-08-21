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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LICENSEBINDFAILEDITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LICENSEBINDFAILEDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 绑定失败明细
                */
                class LicenseBindFailedItem : public AbstractModel
                {
                public:
                    LicenseBindFailedItem();
                    ~LicenseBindFailedItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExceptionMessage 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExceptionMessage() const;

                    /**
                     * 设置失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exceptionMessage 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExceptionMessage(const std::string& _exceptionMessage);

                    /**
                     * 判断参数 ExceptionMessage 是否已赋值
                     * @return ExceptionMessage 是否已赋值
                     * 
                     */
                    bool ExceptionMessageHasBeenSet() const;

                    /**
                     * 获取修复建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FixMessage 修复建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFixMessage() const;

                    /**
                     * 设置修复建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fixMessage 修复建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFixMessage(const std::string& _fixMessage);

                    /**
                     * 判断参数 FixMessage 是否已赋值
                     * @return FixMessage 是否已赋值
                     * 
                     */
                    bool FixMessageHasBeenSet() const;

                    /**
                     * 获取机器额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineExtraInfo 机器额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置机器额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _machineExtraInfo 机器额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                private:

                    /**
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_exceptionMessage;
                    bool m_exceptionMessageHasBeenSet;

                    /**
                     * 修复建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fixMessage;
                    bool m_fixMessageHasBeenSet;

                    /**
                     * 机器额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LICENSEBINDFAILEDITEM_H_
