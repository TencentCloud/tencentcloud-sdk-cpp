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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBECHECKSUMMARYRESPONSE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBECHECKSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/CheckSummary.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeCheckSummary返回参数结构体
                */
                class DescribeCheckSummaryResponse : public AbstractModel
                {
                public:
                    DescribeCheckSummaryResponse();
                    ~DescribeCheckSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检查点汇总信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckSummarySet 检查点汇总信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CheckSummary> GetCheckSummarySet() const;

                    /**
                     * 判断参数 CheckSummarySet 是否已赋值
                     * @return CheckSummarySet 是否已赋值
                     * 
                     */
                    bool CheckSummarySetHasBeenSet() const;

                private:

                    /**
                     * 检查点汇总信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CheckSummary> m_checkSummarySet;
                    bool m_checkSummarySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBECHECKSUMMARYRESPONSE_H_
