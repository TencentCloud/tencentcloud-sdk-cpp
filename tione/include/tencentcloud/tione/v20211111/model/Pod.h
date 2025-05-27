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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_POD_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_POD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Container.h>
#include <tencentcloud/tione/v20211111/model/CrossTenantENIInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Pod信息展示
                */
                class Pod : public AbstractModel
                {
                public:
                    Pod();
                    ~Pod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取pod名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name pod名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置pod名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name pod名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取pod的唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uid pod的唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置pod的唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uid pod的唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取服务付费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeType 服务付费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置服务付费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeType 服务付费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取pod的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Phase pod的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhase() const;

                    /**
                     * 设置pod的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phase pod的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhase(const std::string& _phase);

                    /**
                     * 判断参数 Phase 是否已赋值
                     * @return Phase 是否已赋值
                     * 
                     */
                    bool PhaseHasBeenSet() const;

                    /**
                     * 获取pod的IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IP pod的IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置pod的IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iP pod的IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取pod的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime pod的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置pod的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime pod的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Containers 容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    Container GetContainers() const;

                    /**
                     * 设置容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containers 容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetContainers(const Container& _containers);

                    /**
                     * 判断参数 Containers 是否已赋值
                     * @return Containers 是否已赋值
                     * @deprecated
                     */
                    bool ContainersHasBeenSet() const;

                    /**
                     * 获取容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerInfos 容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Container> GetContainerInfos() const;

                    /**
                     * 设置容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerInfos 容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContainerInfos(const std::vector<Container>& _containerInfos);

                    /**
                     * 判断参数 ContainerInfos 是否已赋值
                     * @return ContainerInfos 是否已赋值
                     * 
                     */
                    bool ContainerInfosHasBeenSet() const;

                    /**
                     * 获取容器调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrossTenantENIInfo 容器调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CrossTenantENIInfo GetCrossTenantENIInfo() const;

                    /**
                     * 设置容器调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crossTenantENIInfo 容器调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCrossTenantENIInfo(const CrossTenantENIInfo& _crossTenantENIInfo);

                    /**
                     * 判断参数 CrossTenantENIInfo 是否已赋值
                     * @return CrossTenantENIInfo 是否已赋值
                     * 
                     */
                    bool CrossTenantENIInfoHasBeenSet() const;

                    /**
                     * 获取实例的状态信息
                     * @return Status 实例的状态信息
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例的状态信息
                     * @param _status 实例的状态信息
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例的开始调度时间
                     * @return StartScheduleTime 实例的开始调度时间
                     * 
                     */
                    std::string GetStartScheduleTime() const;

                    /**
                     * 设置实例的开始调度时间
                     * @param _startScheduleTime 实例的开始调度时间
                     * 
                     */
                    void SetStartScheduleTime(const std::string& _startScheduleTime);

                    /**
                     * 判断参数 StartScheduleTime 是否已赋值
                     * @return StartScheduleTime 是否已赋值
                     * 
                     */
                    bool StartScheduleTimeHasBeenSet() const;

                    /**
                     * 获取实例状态的补充信息
                     * @return Message 实例状态的补充信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置实例状态的补充信息
                     * @param _message 实例状态的补充信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * pod名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * pod的唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 服务付费模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * pod的状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * pod的IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * pod的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Container m_containers;
                    bool m_containersHasBeenSet;

                    /**
                     * 容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Container> m_containerInfos;
                    bool m_containerInfosHasBeenSet;

                    /**
                     * 容器调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CrossTenantENIInfo m_crossTenantENIInfo;
                    bool m_crossTenantENIInfoHasBeenSet;

                    /**
                     * 实例的状态信息
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例的开始调度时间
                     */
                    std::string m_startScheduleTime;
                    bool m_startScheduleTimeHasBeenSet;

                    /**
                     * 实例状态的补充信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_POD_H_
