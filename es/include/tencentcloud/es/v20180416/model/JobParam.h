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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_JOBPARAM_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_JOBPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 智能运维诊断参数
                */
                class JobParam : public AbstractModel
                {
                public:
                    JobParam();
                    ~JobParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取诊断项列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Jobs 诊断项列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetJobs() const;

                    /**
                     * 设置诊断项列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobs 诊断项列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobs(const std::vector<std::string>& _jobs);

                    /**
                     * 判断参数 Jobs 是否已赋值
                     * @return Jobs 是否已赋值
                     * 
                     */
                    bool JobsHasBeenSet() const;

                    /**
                     * 获取诊断索引
                     * @return Indices 诊断索引
                     * 
                     */
                    std::string GetIndices() const;

                    /**
                     * 设置诊断索引
                     * @param _indices 诊断索引
                     * 
                     */
                    void SetIndices(const std::string& _indices);

                    /**
                     * 判断参数 Indices 是否已赋值
                     * @return Indices 是否已赋值
                     * 
                     */
                    bool IndicesHasBeenSet() const;

                    /**
                     * 获取历史诊断时间
                     * @return Interval 历史诊断时间
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置历史诊断时间
                     * @param _interval 历史诊断时间
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * 诊断项列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_jobs;
                    bool m_jobsHasBeenSet;

                    /**
                     * 诊断索引
                     */
                    std::string m_indices;
                    bool m_indicesHasBeenSet;

                    /**
                     * 历史诊断时间
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_JOBPARAM_H_
