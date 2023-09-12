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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_ALARMINFORSP_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_ALARMINFORSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/AttackEvent.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 用户威胁告警信息
                */
                class AlarmInfoRsp : public AbstractModel
                {
                public:
                    AlarmInfoRsp();
                    ~AlarmInfoRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取近7天威胁告警
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackEvent 近7天威胁告警
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AttackEvent> GetAttackEvent() const;

                    /**
                     * 设置近7天威胁告警
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackEvent 近7天威胁告警
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttackEvent(const std::vector<AttackEvent>& _attackEvent);

                    /**
                     * 判断参数 AttackEvent 是否已赋值
                     * @return AttackEvent 是否已赋值
                     * 
                     */
                    bool AttackEventHasBeenSet() const;

                private:

                    /**
                     * 近7天威胁告警
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AttackEvent> m_attackEvent;
                    bool m_attackEventHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_ALARMINFORSP_H_
