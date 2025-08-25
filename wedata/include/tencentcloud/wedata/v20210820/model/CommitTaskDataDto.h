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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITTASKDATADTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITTASKDATADTO_H_

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
                * 提交任务数据结构
                */
                class CommitTaskDataDto : public AbstractModel
                {
                public:
                    CommitTaskDataDto();
                    ~CommitTaskDataDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务审批ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskApproveId 任务审批ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskApproveId() const;

                    /**
                     * 设置任务审批ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskApproveId 任务审批ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskApproveId(const std::string& _taskApproveId);

                    /**
                     * 判断参数 TaskApproveId 是否已赋值
                     * @return TaskApproveId 是否已赋值
                     * 
                     */
                    bool TaskApproveIdHasBeenSet() const;

                private:

                    /**
                     * 任务审批ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskApproveId;
                    bool m_taskApproveIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITTASKDATADTO_H_
