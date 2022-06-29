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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LISTTASKJOBLOGDETAILRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LISTTASKJOBLOGDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/JobLogResult.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ListTaskJobLogDetail返回参数结构体
                */
                class ListTaskJobLogDetailResponse : public AbstractModel
                {
                public:
                    ListTaskJobLogDetailResponse();
                    ~ListTaskJobLogDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取下一次分页参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Context 下一次分页参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取是否获取完结
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ListOver 是否获取完结
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetListOver() const;

                    /**
                     * 判断参数 ListOver 是否已赋值
                     * @return ListOver 是否已赋值
                     */
                    bool ListOverHasBeenSet() const;

                    /**
                     * 获取日志详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Results 日志详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<JobLogResult> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * 下一次分页参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 是否获取完结
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * 日志详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<JobLogResult> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LISTTASKJOBLOGDETAILRESPONSE_H_
