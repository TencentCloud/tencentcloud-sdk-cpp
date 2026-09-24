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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RANGEPARTITIONING_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RANGEPARTITIONING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/RangePartition.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * tcc RangePartitioning定义
                */
                class RangePartitioning : public AbstractModel
                {
                public:
                    RangePartitioning();
                    ~RangePartitioning() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>字段名</p>
                     * @return FieldName <p>字段名</p>
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置<p>字段名</p>
                     * @param _fieldName <p>字段名</p>
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
                     * 获取<p>分区信息</p>
                     * @return Assignments <p>分区信息</p>
                     * 
                     */
                    std::vector<RangePartition> GetAssignments() const;

                    /**
                     * 设置<p>分区信息</p>
                     * @param _assignments <p>分区信息</p>
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
                     * <p>字段名</p>
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * <p>分区信息</p>
                     */
                    std::vector<RangePartition> m_assignments;
                    bool m_assignmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RANGEPARTITIONING_H_
