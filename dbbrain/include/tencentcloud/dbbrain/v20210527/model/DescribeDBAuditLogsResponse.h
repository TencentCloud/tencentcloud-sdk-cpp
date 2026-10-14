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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBAUDITLOGSRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBAUDITLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/AuditProxyLogItem.h>
#include <tencentcloud/dbbrain/v20210527/model/AuditDBLogItem.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeDBAuditLogs返回参数结构体
                */
                class DescribeDBAuditLogsResponse : public AbstractModel
                {
                public:
                    DescribeDBAuditLogsResponse();
                    ~DescribeDBAuditLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>满足条件的总条数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount <p>满足条件的总条数。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>过滤后记录数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilteredRecords <p>过滤后记录数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFilteredRecords() const;

                    /**
                     * 判断参数 FilteredRecords 是否已赋值
                     * @return FilteredRecords 是否已赋值
                     * 
                     */
                    bool FilteredRecordsHasBeenSet() const;

                    /**
                     * 获取<p>Proxy 层审计日志列表。LogType=Proxy 或 All 时返回，字段结构参见 AuditProxyLogItem。</p>
                     * @return ProxyLogs <p>Proxy 层审计日志列表。LogType=Proxy 或 All 时返回，字段结构参见 AuditProxyLogItem。</p>
                     * 
                     */
                    std::vector<AuditProxyLogItem> GetProxyLogs() const;

                    /**
                     * 判断参数 ProxyLogs 是否已赋值
                     * @return ProxyLogs 是否已赋值
                     * 
                     */
                    bool ProxyLogsHasBeenSet() const;

                    /**
                     * 获取<p>DB 层审计日志列表。LogType=DB 或 All 时返回，字段结构参见 AuditDBLogItem。</p>
                     * @return DBLogs <p>DB 层审计日志列表。LogType=DB 或 All 时返回，字段结构参见 AuditDBLogItem。</p>
                     * 
                     */
                    std::vector<AuditDBLogItem> GetDBLogs() const;

                    /**
                     * 判断参数 DBLogs 是否已赋值
                     * @return DBLogs 是否已赋值
                     * 
                     */
                    bool DBLogsHasBeenSet() const;

                private:

                    /**
                     * <p>满足条件的总条数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>过滤后记录数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_filteredRecords;
                    bool m_filteredRecordsHasBeenSet;

                    /**
                     * <p>Proxy 层审计日志列表。LogType=Proxy 或 All 时返回，字段结构参见 AuditProxyLogItem。</p>
                     */
                    std::vector<AuditProxyLogItem> m_proxyLogs;
                    bool m_proxyLogsHasBeenSet;

                    /**
                     * <p>DB 层审计日志列表。LogType=DB 或 All 时返回，字段结构参见 AuditDBLogItem。</p>
                     */
                    std::vector<AuditDBLogItem> m_dBLogs;
                    bool m_dBLogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBAUDITLOGSRESPONSE_H_
