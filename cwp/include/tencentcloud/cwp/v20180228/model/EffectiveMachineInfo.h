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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EFFECTIVEMACHINEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EFFECTIVEMACHINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineTag.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 批量导入机器信息.
                */
                class EffectiveMachineInfo : public AbstractModel
                {
                public:
                    EffectiveMachineInfo();
                    ~EffectiveMachineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineName 机器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置机器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MachineName 机器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取机器公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachinePublicIp 机器公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMachinePublicIp() const;

                    /**
                     * 设置机器公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MachinePublicIp 机器公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMachinePublicIp(const std::string& _machinePublicIp);

                    /**
                     * 判断参数 MachinePublicIp 是否已赋值
                     * @return MachinePublicIp 是否已赋值
                     */
                    bool MachinePublicIpHasBeenSet() const;

                    /**
                     * 获取机器内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachinePrivateIp 机器内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMachinePrivateIp() const;

                    /**
                     * 设置机器内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MachinePrivateIp 机器内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMachinePrivateIp(const std::string& _machinePrivateIp);

                    /**
                     * 判断参数 MachinePrivateIp 是否已赋值
                     * @return MachinePrivateIp 是否已赋值
                     */
                    bool MachinePrivateIpHasBeenSet() const;

                    /**
                     * 获取机器标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineTag 机器标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MachineTag> GetMachineTag() const;

                    /**
                     * 设置机器标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MachineTag 机器标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMachineTag(const std::vector<MachineTag>& _machineTag);

                    /**
                     * 判断参数 MachineTag 是否已赋值
                     * @return MachineTag 是否已赋值
                     */
                    bool MachineTagHasBeenSet() const;

                    /**
                     * 获取机器Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quuid 机器Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置机器Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Quuid 机器Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * 机器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 机器公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_machinePublicIp;
                    bool m_machinePublicIpHasBeenSet;

                    /**
                     * 机器内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_machinePrivateIp;
                    bool m_machinePrivateIpHasBeenSet;

                    /**
                     * 机器标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MachineTag> m_machineTag;
                    bool m_machineTagHasBeenSet;

                    /**
                     * 机器Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EFFECTIVEMACHINEINFO_H_
