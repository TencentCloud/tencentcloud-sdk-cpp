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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEKYUUBIQUERYINFORESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEKYUUBIQUERYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/KyuubiQueryInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeKyuubiQueryInfo返回参数结构体
                */
                class DescribeKyuubiQueryInfoResponse : public AbstractModel
                {
                public:
                    DescribeKyuubiQueryInfoResponse();
                    ~DescribeKyuubiQueryInfoResponse() = default;
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
                     * 获取Kyuubi查询信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KyuubiQueryInfoList Kyuubi查询信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KyuubiQueryInfo> GetKyuubiQueryInfoList() const;

                    /**
                     * 判断参数 KyuubiQueryInfoList 是否已赋值
                     * @return KyuubiQueryInfoList 是否已赋值
                     * 
                     */
                    bool KyuubiQueryInfoListHasBeenSet() const;

                private:

                    /**
                     * 总数，分页查询时使用
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Kyuubi查询信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KyuubiQueryInfo> m_kyuubiQueryInfoList;
                    bool m_kyuubiQueryInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEKYUUBIQUERYINFORESPONSE_H_
