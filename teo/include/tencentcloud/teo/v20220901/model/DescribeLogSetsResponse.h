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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGSETSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/LogSetInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeLogSets返回参数结构体
                */
                class DescribeLogSetsResponse : public AbstractModel
                {
                public:
                    DescribeLogSetsResponse();
                    ~DescribeLogSetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志集列表数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogSetList 日志集列表数据。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LogSetInfo> GetLogSetList() const;

                    /**
                     * 判断参数 LogSetList 是否已赋值
                     * @return LogSetList 是否已赋值
                     */
                    bool LogSetListHasBeenSet() const;

                    /**
                     * 获取查询结果的总条数。
                     * @return TotalCount 查询结果的总条数。
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 日志集列表数据。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LogSetInfo> m_logSetList;
                    bool m_logSetListHasBeenSet;

                    /**
                     * 查询结果的总条数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGSETSRESPONSE_H_
