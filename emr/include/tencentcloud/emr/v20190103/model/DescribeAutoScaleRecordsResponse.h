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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALERECORDSRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALERECORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/AutoScaleRecord.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeAutoScaleRecords返回参数结构体
                */
                class DescribeAutoScaleRecordsResponse : public AbstractModel
                {
                public:
                    DescribeAutoScaleRecordsResponse();
                    ~DescribeAutoScaleRecordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总扩缩容记录数。
                     * @return TotalCount 总扩缩容记录数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取记录列表。
                     * @return RecordList 记录列表。
                     * 
                     */
                    std::vector<AutoScaleRecord> GetRecordList() const;

                    /**
                     * 判断参数 RecordList 是否已赋值
                     * @return RecordList 是否已赋值
                     * 
                     */
                    bool RecordListHasBeenSet() const;

                private:

                    /**
                     * 总扩缩容记录数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 记录列表。
                     */
                    std::vector<AutoScaleRecord> m_recordList;
                    bool m_recordListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALERECORDSRESPONSE_H_
