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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEERRORSUMMARYRESPONSE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEERRORSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/ErrorSummary.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeErrorSummary返回参数结构体
                */
                class DescribeErrorSummaryResponse : public AbstractModel
                {
                public:
                    DescribeErrorSummaryResponse();
                    ~DescribeErrorSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取错误汇总信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorSummarySet 错误汇总信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ErrorSummary> GetErrorSummarySet() const;

                    /**
                     * 判断参数 ErrorSummarySet 是否已赋值
                     * @return ErrorSummarySet 是否已赋值
                     * 
                     */
                    bool ErrorSummarySetHasBeenSet() const;

                private:

                    /**
                     * 错误汇总信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ErrorSummary> m_errorSummarySet;
                    bool m_errorSummarySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEERRORSUMMARYRESPONSE_H_
