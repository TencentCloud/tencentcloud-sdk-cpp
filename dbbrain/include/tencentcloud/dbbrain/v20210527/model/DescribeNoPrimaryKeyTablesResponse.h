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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBENOPRIMARYKEYTABLESRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBENOPRIMARYKEYTABLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/Table.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeNoPrimaryKeyTables返回参数结构体
                */
                class DescribeNoPrimaryKeyTablesResponse : public AbstractModel
                {
                public:
                    DescribeNoPrimaryKeyTablesResponse();
                    ~DescribeNoPrimaryKeyTablesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取无主键表总数。
                     * @return NoPrimaryKeyTableCount 无主键表总数。
                     * 
                     */
                    int64_t GetNoPrimaryKeyTableCount() const;

                    /**
                     * 判断参数 NoPrimaryKeyTableCount 是否已赋值
                     * @return NoPrimaryKeyTableCount 是否已赋值
                     * 
                     */
                    bool NoPrimaryKeyTableCountHasBeenSet() const;

                    /**
                     * 获取与昨日扫描无主键表的差值，正数为增加，负数为减少，0为无变化。
                     * @return NoPrimaryKeyTableCountDiff 与昨日扫描无主键表的差值，正数为增加，负数为减少，0为无变化。
                     * 
                     */
                    int64_t GetNoPrimaryKeyTableCountDiff() const;

                    /**
                     * 判断参数 NoPrimaryKeyTableCountDiff 是否已赋值
                     * @return NoPrimaryKeyTableCountDiff 是否已赋值
                     * 
                     */
                    bool NoPrimaryKeyTableCountDiffHasBeenSet() const;

                    /**
                     * 获取记录的无主键表总数（不超过无主键表总数），可用于分页查询。
                     * @return NoPrimaryKeyTableRecordCount 记录的无主键表总数（不超过无主键表总数），可用于分页查询。
                     * 
                     */
                    int64_t GetNoPrimaryKeyTableRecordCount() const;

                    /**
                     * 判断参数 NoPrimaryKeyTableRecordCount 是否已赋值
                     * @return NoPrimaryKeyTableRecordCount 是否已赋值
                     * 
                     */
                    bool NoPrimaryKeyTableRecordCountHasBeenSet() const;

                    /**
                     * 获取无主键表列表。
                     * @return NoPrimaryKeyTables 无主键表列表。
                     * 
                     */
                    std::vector<Table> GetNoPrimaryKeyTables() const;

                    /**
                     * 判断参数 NoPrimaryKeyTables 是否已赋值
                     * @return NoPrimaryKeyTables 是否已赋值
                     * 
                     */
                    bool NoPrimaryKeyTablesHasBeenSet() const;

                    /**
                     * 获取采集时间戳（秒）。
                     * @return Timestamp 采集时间戳（秒）。
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                private:

                    /**
                     * 无主键表总数。
                     */
                    int64_t m_noPrimaryKeyTableCount;
                    bool m_noPrimaryKeyTableCountHasBeenSet;

                    /**
                     * 与昨日扫描无主键表的差值，正数为增加，负数为减少，0为无变化。
                     */
                    int64_t m_noPrimaryKeyTableCountDiff;
                    bool m_noPrimaryKeyTableCountDiffHasBeenSet;

                    /**
                     * 记录的无主键表总数（不超过无主键表总数），可用于分页查询。
                     */
                    int64_t m_noPrimaryKeyTableRecordCount;
                    bool m_noPrimaryKeyTableRecordCountHasBeenSet;

                    /**
                     * 无主键表列表。
                     */
                    std::vector<Table> m_noPrimaryKeyTables;
                    bool m_noPrimaryKeyTablesHasBeenSet;

                    /**
                     * 采集时间戳（秒）。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBENOPRIMARYKEYTABLESRESPONSE_H_
