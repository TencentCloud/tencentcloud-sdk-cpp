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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RANGEPARTITIONING_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RANGEPARTITIONING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/RangePartition.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 范围分区策略
                */
                class RangePartitioning : public AbstractModel
                {
                public:
                    RangePartitioning();
                    ~RangePartitioning() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分区字段
                     * @return FieldName 分区字段
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置分区字段
                     * @param _fieldName 分区字段
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取分区
                     * @return Assignments 分区
                     * 
                     */
                    std::vector<RangePartition> GetAssignments() const;

                    /**
                     * 设置分区
                     * @param _assignments 分区
                     * 
                     */
                    void SetAssignments(const std::vector<RangePartition>& _assignments);

                    /**
                     * 判断参数 Assignments 是否已赋值
                     * @return Assignments 是否已赋值
                     * 
                     */
                    bool AssignmentsHasBeenSet() const;

                private:

                    /**
                     * 分区字段
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * 分区
                     */
                    std::vector<RangePartition> m_assignments;
                    bool m_assignmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RANGEPARTITIONING_H_
