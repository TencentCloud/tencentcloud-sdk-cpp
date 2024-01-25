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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_KILLTASKSTESTRUNRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_KILLTASKSTESTRUNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/KillTestRunTasksResponseResult.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * KillTasksTestRun返回参数结构体
                */
                class KillTasksTestRunResponse : public AbstractModel
                {
                public:
                    KillTasksTestRunResponse();
                    ~KillTasksTestRunResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取JobId 作业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id JobId 作业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取执行结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Results 执行结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KillTestRunTasksResponseResult> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * JobId 作业ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 执行结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KillTestRunTasksResponseResult> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_KILLTASKSTESTRUNRESPONSE_H_
