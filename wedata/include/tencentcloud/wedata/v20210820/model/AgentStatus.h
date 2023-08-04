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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_AGENTSTATUS_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_AGENTSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Agent采集器状态统计
                */
                class AgentStatus : public AbstractModel
                {
                public:
                    AgentStatus();
                    ~AgentStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运行中的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Running 运行中的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRunning() const;

                    /**
                     * 设置运行中的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _running 运行中的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunning(const int64_t& _running);

                    /**
                     * 判断参数 Running 是否已赋值
                     * @return Running 是否已赋值
                     * 
                     */
                    bool RunningHasBeenSet() const;

                    /**
                     * 获取异常的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Abnormal 异常的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAbnormal() const;

                    /**
                     * 设置异常的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _abnormal 异常的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAbnormal(const int64_t& _abnormal);

                    /**
                     * 判断参数 Abnormal 是否已赋值
                     * @return Abnormal 是否已赋值
                     * 
                     */
                    bool AbnormalHasBeenSet() const;

                    /**
                     * 获取操作中的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InOperation 操作中的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInOperation() const;

                    /**
                     * 设置操作中的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inOperation 操作中的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInOperation(const int64_t& _inOperation);

                    /**
                     * 判断参数 InOperation 是否已赋值
                     * @return InOperation 是否已赋值
                     * 
                     */
                    bool InOperationHasBeenSet() const;

                private:

                    /**
                     * 运行中的数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_running;
                    bool m_runningHasBeenSet;

                    /**
                     * 异常的数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_abnormal;
                    bool m_abnormalHasBeenSet;

                    /**
                     * 操作中的数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_inOperation;
                    bool m_inOperationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_AGENTSTATUS_H_
