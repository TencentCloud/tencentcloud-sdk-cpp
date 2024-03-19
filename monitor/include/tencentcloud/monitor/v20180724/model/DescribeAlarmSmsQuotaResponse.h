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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMSMSQUOTARESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMSMSQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmSmsQuotaQuota.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAlarmSmsQuota返回参数结构体
                */
                class DescribeAlarmSmsQuotaResponse : public AbstractModel
                {
                public:
                    DescribeAlarmSmsQuotaResponse();
                    ~DescribeAlarmSmsQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取配额总数
                     * @return Total 配额总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取总使用量
                     * @return Used 总使用量
                     * 
                     */
                    int64_t GetUsed() const;

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                    /**
                     * 获取短信配额信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuotaList 短信配额信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribeAlarmSmsQuotaQuota> GetQuotaList() const;

                    /**
                     * 判断参数 QuotaList 是否已赋值
                     * @return QuotaList 是否已赋值
                     * 
                     */
                    bool QuotaListHasBeenSet() const;

                private:

                    /**
                     * 配额总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 总使用量
                     */
                    int64_t m_used;
                    bool m_usedHasBeenSet;

                    /**
                     * 短信配额信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeAlarmSmsQuotaQuota> m_quotaList;
                    bool m_quotaListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMSMSQUOTARESPONSE_H_
