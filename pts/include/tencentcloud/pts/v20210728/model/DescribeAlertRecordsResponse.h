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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEALERTRECORDSRESPONSE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEALERTRECORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/AlertRecord.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeAlertRecords返回参数结构体
                */
                class DescribeAlertRecordsResponse : public AbstractModel
                {
                public:
                    DescribeAlertRecordsResponse();
                    ~DescribeAlertRecordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警历史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertRecordSet 告警历史
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlertRecord> GetAlertRecordSet() const;

                    /**
                     * 判断参数 AlertRecordSet 是否已赋值
                     * @return AlertRecordSet 是否已赋值
                     * 
                     */
                    bool AlertRecordSetHasBeenSet() const;

                    /**
                     * 获取告警历史记录的总数
                     * @return Total 告警历史记录的总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 告警历史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlertRecord> m_alertRecordSet;
                    bool m_alertRecordSetHasBeenSet;

                    /**
                     * 告警历史记录的总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEALERTRECORDSRESPONSE_H_
