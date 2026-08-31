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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESENDRECORDLISTRESPONSE_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESENDRECORDLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sms/v20210111/model/SendRecord.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * DescribeSendRecordList返回参数结构体
                */
                class DescribeSendRecordListResponse : public AbstractModel
                {
                public:
                    DescribeSendRecordListResponse();
                    ~DescribeSendRecordListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>短信下发记录集合。</p>
                     * @return SendRecordSet <p>短信下发记录集合。</p>
                     * 
                     */
                    std::vector<SendRecord> GetSendRecordSet() const;

                    /**
                     * 判断参数 SendRecordSet 是否已赋值
                     * @return SendRecordSet 是否已赋值
                     * 
                     */
                    bool SendRecordSetHasBeenSet() const;

                    /**
                     * 获取<p>查询时间范围内的下发记录总数，注：最大支持查询单个下发手机号码 72 小时内的 1000 条记录。</p>
                     * @return TotalCount <p>查询时间范围内的下发记录总数，注：最大支持查询单个下发手机号码 72 小时内的 1000 条记录。</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>短信下发记录集合。</p>
                     */
                    std::vector<SendRecord> m_sendRecordSet;
                    bool m_sendRecordSetHasBeenSet;

                    /**
                     * <p>查询时间范围内的下发记录总数，注：最大支持查询单个下发手机号码 72 小时内的 1000 条记录。</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESENDRECORDLISTRESPONSE_H_
