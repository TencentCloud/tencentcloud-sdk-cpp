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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEPRIVATEZONERECORDLISTRESPONSE_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEPRIVATEZONERECORDLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/PrivateZoneRecord.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribePrivateZoneRecordList返回参数结构体
                */
                class DescribePrivateZoneRecordListResponse : public AbstractModel
                {
                public:
                    DescribePrivateZoneRecordListResponse();
                    ~DescribePrivateZoneRecordListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取解析记录数量
                     * @return TotalCount 解析记录数量
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
                     * 获取解析记录列表
                     * @return RecordSet 解析记录列表
                     * 
                     */
                    std::vector<PrivateZoneRecord> GetRecordSet() const;

                    /**
                     * 判断参数 RecordSet 是否已赋值
                     * @return RecordSet 是否已赋值
                     * 
                     */
                    bool RecordSetHasBeenSet() const;

                private:

                    /**
                     * 解析记录数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 解析记录列表
                     */
                    std::vector<PrivateZoneRecord> m_recordSet;
                    bool m_recordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEPRIVATEZONERECORDLISTRESPONSE_H_
