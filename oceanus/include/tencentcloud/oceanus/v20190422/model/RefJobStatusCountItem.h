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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_REFJOBSTATUSCOUNTITEM_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_REFJOBSTATUSCOUNTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 依赖作业分状态计数信息
                */
                class RefJobStatusCountItem : public AbstractModel
                {
                public:
                    RefJobStatusCountItem();
                    ~RefJobStatusCountItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取作业状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobStatus 作业状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJobStatus() const;

                    /**
                     * 设置作业状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobStatus 作业状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobStatus(const int64_t& _jobStatus);

                    /**
                     * 判断参数 JobStatus 是否已赋值
                     * @return JobStatus 是否已赋值
                     * 
                     */
                    bool JobStatusHasBeenSet() const;

                    /**
                     * 获取作业数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count 作业数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置作业数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _count 作业数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 作业状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_jobStatus;
                    bool m_jobStatusHasBeenSet;

                    /**
                     * 作业数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_REFJOBSTATUSCOUNTITEM_H_
