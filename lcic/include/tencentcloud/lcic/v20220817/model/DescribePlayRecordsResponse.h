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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEPLAYRECORDSRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEPLAYRECORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/PlayRecord.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribePlayRecords返回参数结构体
                */
                class DescribePlayRecordsResponse : public AbstractModel
                {
                public:
                    DescribePlayRecordsResponse();
                    ~DescribePlayRecordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>总条数。</p>
                     * @return Total <p>总条数。</p>
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>信令录制视频回放观看记录列表。</p>
                     * @return Records <p>信令录制视频回放观看记录列表。</p>
                     * 
                     */
                    std::vector<PlayRecord> GetRecords() const;

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                private:

                    /**
                     * <p>总条数。</p>
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>信令录制视频回放观看记录列表。</p>
                     */
                    std::vector<PlayRecord> m_records;
                    bool m_recordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEPLAYRECORDSRESPONSE_H_
