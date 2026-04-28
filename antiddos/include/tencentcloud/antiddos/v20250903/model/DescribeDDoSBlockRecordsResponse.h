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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DESCRIBEDDOSBLOCKRECORDSRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DESCRIBEDDOSBLOCKRECORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20250903/model/DDoSBlockRecord.h>
#include <tencentcloud/antiddos/v20250903/model/DDoSUnblockQuota.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * DescribeDDoSBlockRecords返回参数结构体
                */
                class DescribeDDoSBlockRecordsResponse : public AbstractModel
                {
                public:
                    DescribeDDoSBlockRecordsResponse();
                    ~DescribeDDoSBlockRecordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>封堵解封记录总数。</p>
                     * @return TotalCount <p>封堵解封记录总数。</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>封堵解封记录。</p>
                     * @return BlockRecords <p>封堵解封记录。</p>
                     * 
                     */
                    std::vector<DDoSBlockRecord> GetBlockRecords() const;

                    /**
                     * 判断参数 BlockRecords 是否已赋值
                     * @return BlockRecords 是否已赋值
                     * 
                     */
                    bool BlockRecordsHasBeenSet() const;

                    /**
                     * 获取<p>解封次数配额信息。</p>
                     * @return UnblockQuotaInfo <p>解封次数配额信息。</p>
                     * 
                     */
                    DDoSUnblockQuota GetUnblockQuotaInfo() const;

                    /**
                     * 判断参数 UnblockQuotaInfo 是否已赋值
                     * @return UnblockQuotaInfo 是否已赋值
                     * 
                     */
                    bool UnblockQuotaInfoHasBeenSet() const;

                private:

                    /**
                     * <p>封堵解封记录总数。</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>封堵解封记录。</p>
                     */
                    std::vector<DDoSBlockRecord> m_blockRecords;
                    bool m_blockRecordsHasBeenSet;

                    /**
                     * <p>解封次数配额信息。</p>
                     */
                    DDoSUnblockQuota m_unblockQuotaInfo;
                    bool m_unblockQuotaInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DESCRIBEDDOSBLOCKRECORDSRESPONSE_H_
