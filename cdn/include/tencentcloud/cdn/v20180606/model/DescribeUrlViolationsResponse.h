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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEURLVIOLATIONSRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEURLVIOLATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ViolationUrl.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeUrlViolations返回参数结构体
                */
                class DescribeUrlViolationsResponse : public AbstractModel
                {
                public:
                    DescribeUrlViolationsResponse();
                    ~DescribeUrlViolationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取违规 URL 详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UrlRecordList 违规 URL 详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ViolationUrl> GetUrlRecordList() const;

                    /**
                     * 判断参数 UrlRecordList 是否已赋值
                     * @return UrlRecordList 是否已赋值
                     * 
                     */
                    bool UrlRecordListHasBeenSet() const;

                    /**
                     * 获取记录总数，用于分页
                     * @return TotalCount 记录总数，用于分页
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 违规 URL 详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ViolationUrl> m_urlRecordList;
                    bool m_urlRecordListHasBeenSet;

                    /**
                     * 记录总数，用于分页
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEURLVIOLATIONSRESPONSE_H_
