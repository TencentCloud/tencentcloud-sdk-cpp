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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTPARTITIONING_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTPARTITIONING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/ListPartition.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 列表分区策略
                */
                class ListPartitioning : public AbstractModel
                {
                public:
                    ListPartitioning();
                    ~ListPartitioning() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分区字段
                     * @return FiledNames 分区字段
                     * 
                     */
                    std::vector<std::string> GetFiledNames() const;

                    /**
                     * 设置分区字段
                     * @param _filedNames 分区字段
                     * 
                     */
                    void SetFiledNames(const std::vector<std::string>& _filedNames);

                    /**
                     * 判断参数 FiledNames 是否已赋值
                     * @return FiledNames 是否已赋值
                     * 
                     */
                    bool FiledNamesHasBeenSet() const;

                    /**
                     * 获取分区
                     * @return Assignments 分区
                     * 
                     */
                    std::vector<ListPartition> GetAssignments() const;

                    /**
                     * 设置分区
                     * @param _assignments 分区
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
                     * 分区字段
                     */
                    std::vector<std::string> m_filedNames;
                    bool m_filedNamesHasBeenSet;

                    /**
                     * 分区
                     */
                    std::vector<ListPartition> m_assignments;
                    bool m_assignmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTPARTITIONING_H_
