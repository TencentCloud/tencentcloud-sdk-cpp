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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICYPORTLIMIT_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICYPORTLIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DDoS高级策略的禁用端口
                */
                class DDoSPolicyPortLimit : public AbstractModel
                {
                public:
                    DDoSPolicyPortLimit();
                    ~DDoSPolicyPortLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协议，取值范围[tcp,udp,all]
                     * @return Protocol 协议，取值范围[tcp,udp,all]
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议，取值范围[tcp,udp,all]
                     * @param _protocol 协议，取值范围[tcp,udp,all]
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取开始目的端口，取值范围[0,65535]
                     * @return DPortStart 开始目的端口，取值范围[0,65535]
                     * 
                     */
                    uint64_t GetDPortStart() const;

                    /**
                     * 设置开始目的端口，取值范围[0,65535]
                     * @param _dPortStart 开始目的端口，取值范围[0,65535]
                     * 
                     */
                    void SetDPortStart(const uint64_t& _dPortStart);

                    /**
                     * 判断参数 DPortStart 是否已赋值
                     * @return DPortStart 是否已赋值
                     * 
                     */
                    bool DPortStartHasBeenSet() const;

                    /**
                     * 获取结束目的端口，取值范围[0,65535]，要求大于等于开始目的端口
                     * @return DPortEnd 结束目的端口，取值范围[0,65535]，要求大于等于开始目的端口
                     * 
                     */
                    uint64_t GetDPortEnd() const;

                    /**
                     * 设置结束目的端口，取值范围[0,65535]，要求大于等于开始目的端口
                     * @param _dPortEnd 结束目的端口，取值范围[0,65535]，要求大于等于开始目的端口
                     * 
                     */
                    void SetDPortEnd(const uint64_t& _dPortEnd);

                    /**
                     * 判断参数 DPortEnd 是否已赋值
                     * @return DPortEnd 是否已赋值
                     * 
                     */
                    bool DPortEndHasBeenSet() const;

                    /**
                     * 获取开始源端口，取值范围[0,65535]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SPortStart 开始源端口，取值范围[0,65535]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSPortStart() const;

                    /**
                     * 设置开始源端口，取值范围[0,65535]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sPortStart 开始源端口，取值范围[0,65535]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSPortStart(const uint64_t& _sPortStart);

                    /**
                     * 判断参数 SPortStart 是否已赋值
                     * @return SPortStart 是否已赋值
                     * 
                     */
                    bool SPortStartHasBeenSet() const;

                    /**
                     * 获取结束源端口，取值范围[0,65535]，要求大于等于开始源端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SPortEnd 结束源端口，取值范围[0,65535]，要求大于等于开始源端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSPortEnd() const;

                    /**
                     * 设置结束源端口，取值范围[0,65535]，要求大于等于开始源端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sPortEnd 结束源端口，取值范围[0,65535]，要求大于等于开始源端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSPortEnd(const uint64_t& _sPortEnd);

                    /**
                     * 判断参数 SPortEnd 是否已赋值
                     * @return SPortEnd 是否已赋值
                     * 
                     */
                    bool SPortEndHasBeenSet() const;

                    /**
                     * 获取执行动作，取值[drop(丢弃) ，transmit(转发)]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action 执行动作，取值[drop(丢弃) ，transmit(转发)]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置执行动作，取值[drop(丢弃) ，transmit(转发)]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _action 执行动作，取值[drop(丢弃) ，transmit(转发)]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取禁用端口类型，取值[0（目的端口范围禁用）， 1（源端口范围禁用）， 2（目的和源端口范围同时禁用）]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Kind 禁用端口类型，取值[0（目的端口范围禁用）， 1（源端口范围禁用）， 2（目的和源端口范围同时禁用）]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetKind() const;

                    /**
                     * 设置禁用端口类型，取值[0（目的端口范围禁用）， 1（源端口范围禁用）， 2（目的和源端口范围同时禁用）]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kind 禁用端口类型，取值[0（目的端口范围禁用）， 1（源端口范围禁用）， 2（目的和源端口范围同时禁用）]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKind(const uint64_t& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                private:

                    /**
                     * 协议，取值范围[tcp,udp,all]
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 开始目的端口，取值范围[0,65535]
                     */
                    uint64_t m_dPortStart;
                    bool m_dPortStartHasBeenSet;

                    /**
                     * 结束目的端口，取值范围[0,65535]，要求大于等于开始目的端口
                     */
                    uint64_t m_dPortEnd;
                    bool m_dPortEndHasBeenSet;

                    /**
                     * 开始源端口，取值范围[0,65535]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_sPortStart;
                    bool m_sPortStartHasBeenSet;

                    /**
                     * 结束源端口，取值范围[0,65535]，要求大于等于开始源端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_sPortEnd;
                    bool m_sPortEndHasBeenSet;

                    /**
                     * 执行动作，取值[drop(丢弃) ，transmit(转发)]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 禁用端口类型，取值[0（目的端口范围禁用）， 1（源端口范围禁用）， 2（目的和源端口范围同时禁用）]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_kind;
                    bool m_kindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICYPORTLIMIT_H_
