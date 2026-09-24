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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LISTPARTITIONING_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LISTPARTITIONING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ListPartition.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * tcc ListPartitioning分区定义
                */
                class ListPartitioning : public AbstractModel
                {
                public:
                    ListPartitioning();
                    ~ListPartitioning() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>分区字段</p>
                     * @return FieldNames <p>分区字段</p>
                     * 
                     */
                    std::vector<std::string> GetFieldNames() const;

                    /**
                     * 设置<p>分区字段</p>
                     * @param _fieldNames <p>分区字段</p>
                     * 
                     */
                    void SetFieldNames(const std::vector<std::string>& _fieldNames);

                    /**
                     * 判断参数 FieldNames 是否已赋值
                     * @return FieldNames 是否已赋值
                     * 
                     */
                    bool FieldNamesHasBeenSet() const;

                    /**
                     * 获取<p>分区列表信息</p>
                     * @return Assignments <p>分区列表信息</p>
                     * 
                     */
                    std::vector<ListPartition> GetAssignments() const;

                    /**
                     * 设置<p>分区列表信息</p>
                     * @param _assignments <p>分区列表信息</p>
                     * 
                     */
                    void SetAssignments(const std::vector<ListPartition>& _assignments);

                    /**
                     * 判断参数 Assignments 是否已赋值
                     * @return Assignments 是否已赋值
                     * 
                     */
                    bool AssignmentsHasBeenSet() const;

                private:

                    /**
                     * <p>分区字段</p>
                     */
                    std::vector<std::string> m_fieldNames;
                    bool m_fieldNamesHasBeenSet;

                    /**
                     * <p>分区列表信息</p>
                     */
                    std::vector<ListPartition> m_assignments;
                    bool m_assignmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LISTPARTITIONING_H_
