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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_WEBATTACKEVENT_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_WEBATTACKEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Web拦截事件
                */
                class WebAttackEvent : public AbstractModel
                {
                public:
                    WebAttackEvent();
                    ~WebAttackEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientIp 客户端ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置客户端ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClientIp 客户端ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取攻击URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackUrl 攻击URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAttackUrl() const;

                    /**
                     * 设置攻击URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AttackUrl 攻击URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAttackUrl(const std::string& _attackUrl);

                    /**
                     * 判断参数 AttackUrl 是否已赋值
                     * @return AttackUrl 是否已赋值
                     */
                    bool AttackUrlHasBeenSet() const;

                    /**
                     * 获取攻击时间 单位为s
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackTime 攻击时间 单位为s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAttackTime() const;

                    /**
                     * 设置攻击时间 单位为s
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AttackTime 攻击时间 单位为s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAttackTime(const int64_t& _attackTime);

                    /**
                     * 判断参数 AttackTime 是否已赋值
                     * @return AttackTime 是否已赋值
                     */
                    bool AttackTimeHasBeenSet() const;

                private:

                    /**
                     * 客户端ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 攻击URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackUrl;
                    bool m_attackUrlHasBeenSet;

                    /**
                     * 攻击时间 单位为s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_attackTime;
                    bool m_attackTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_WEBATTACKEVENT_H_
