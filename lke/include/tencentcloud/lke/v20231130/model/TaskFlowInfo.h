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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_TASKFLOWINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_TASKFLOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 任务流程信息
                */
                class TaskFlowInfo : public AbstractModel
                {
                public:
                    TaskFlowInfo();
                    ~TaskFlowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务流程ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskFlowId 任务流程ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskFlowId() const;

                    /**
                     * 设置任务流程ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskFlowId 任务流程ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskFlowId(const std::string& _taskFlowId);

                    /**
                     * 判断参数 TaskFlowId 是否已赋值
                     * @return TaskFlowId 是否已赋值
                     * 
                     */
                    bool TaskFlowIdHasBeenSet() const;

                    /**
                     * 获取任务流程名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskFlowName 任务流程名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskFlowName() const;

                    /**
                     * 设置任务流程名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskFlowName 任务流程名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskFlowName(const std::string& _taskFlowName);

                    /**
                     * 判断参数 TaskFlowName 是否已赋值
                     * @return TaskFlowName 是否已赋值
                     * 
                     */
                    bool TaskFlowNameHasBeenSet() const;

                    /**
                     * 获取Query 重写结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryRewrite Query 重写结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueryRewrite() const;

                    /**
                     * 设置Query 重写结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryRewrite Query 重写结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueryRewrite(const std::string& _queryRewrite);

                    /**
                     * 判断参数 QueryRewrite 是否已赋值
                     * @return QueryRewrite 是否已赋值
                     * 
                     */
                    bool QueryRewriteHasBeenSet() const;

                    /**
                     * 获取命中意图
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HitIntent 命中意图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHitIntent() const;

                    /**
                     * 设置命中意图
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hitIntent 命中意图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHitIntent(const std::string& _hitIntent);

                    /**
                     * 判断参数 HitIntent 是否已赋值
                     * @return HitIntent 是否已赋值
                     * 
                     */
                    bool HitIntentHasBeenSet() const;

                    /**
                     * 获取任务流程回复类型
0: 任务流回复
1: 任务流静默
2: 任务流拉回话术
3: 任务流自定义回复
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 任务流程回复类型
0: 任务流回复
1: 任务流静默
2: 任务流拉回话术
3: 任务流自定义回复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置任务流程回复类型
0: 任务流回复
1: 任务流静默
2: 任务流拉回话术
3: 任务流自定义回复
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 任务流程回复类型
0: 任务流回复
1: 任务流静默
2: 任务流拉回话术
3: 任务流自定义回复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 任务流程ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskFlowId;
                    bool m_taskFlowIdHasBeenSet;

                    /**
                     * 任务流程名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskFlowName;
                    bool m_taskFlowNameHasBeenSet;

                    /**
                     * Query 重写结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queryRewrite;
                    bool m_queryRewriteHasBeenSet;

                    /**
                     * 命中意图
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hitIntent;
                    bool m_hitIntentHasBeenSet;

                    /**
                     * 任务流程回复类型
0: 任务流回复
1: 任务流静默
2: 任务流拉回话术
3: 任务流自定义回复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_TASKFLOWINFO_H_
