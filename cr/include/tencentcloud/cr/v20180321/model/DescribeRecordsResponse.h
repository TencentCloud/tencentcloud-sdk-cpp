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

#ifndef TENCENTCLOUD_CR_V20180321_MODEL_DESCRIBERECORDSRESPONSE_H_
#define TENCENTCLOUD_CR_V20180321_MODEL_DESCRIBERECORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cr/v20180321/model/SingleRecord.h>


namespace TencentCloud
{
    namespace Cr
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeRecords返回参数结构体
                */
                class DescribeRecordsResponse : public AbstractModel
                {
                public:
                    DescribeRecordsResponse();
                    ~DescribeRecordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取录音列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordList 录音列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SingleRecord> GetRecordList() const;

                    /**
                     * 判断参数 RecordList 是否已赋值
                     * @return RecordList 是否已赋值
                     */
                    bool RecordListHasBeenSet() const;

                    /**
                     * 获取录音总量。
                     * @return TotalCount 录音总量。
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 录音列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SingleRecord> m_recordList;
                    bool m_recordListHasBeenSet;

                    /**
                     * 录音总量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CR_V20180321_MODEL_DESCRIBERECORDSRESPONSE_H_
