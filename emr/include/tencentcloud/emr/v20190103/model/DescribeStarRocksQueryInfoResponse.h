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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESTARROCKSQUERYINFORESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESTARROCKSQUERYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/StarRocksQueryInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeStarRocksQueryInfo返回参数结构体
                */
                class DescribeStarRocksQueryInfoResponse : public AbstractModel
                {
                public:
                    DescribeStarRocksQueryInfoResponse();
                    ~DescribeStarRocksQueryInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数，分页查询时使用
                     * @return TotalCount 总数，分页查询时使用
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
                     * 获取Starrocks 查询信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StarRocksQueryInfoList Starrocks 查询信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StarRocksQueryInfo> GetStarRocksQueryInfoList() const;

                    /**
                     * 判断参数 StarRocksQueryInfoList 是否已赋值
                     * @return StarRocksQueryInfoList 是否已赋值
                     * 
                     */
                    bool StarRocksQueryInfoListHasBeenSet() const;

                private:

                    /**
                     * 总数，分页查询时使用
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Starrocks 查询信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StarRocksQueryInfo> m_starRocksQueryInfoList;
                    bool m_starRocksQueryInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESTARROCKSQUERYINFORESPONSE_H_
