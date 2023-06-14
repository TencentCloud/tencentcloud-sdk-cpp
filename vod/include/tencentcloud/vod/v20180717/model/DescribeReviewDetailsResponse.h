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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEREVIEWDETAILSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEREVIEWDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/StatDataItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeReviewDetails返回参数结构体
                */
                class DescribeReviewDetailsResponse : public AbstractModel
                {
                public:
                    DescribeReviewDetailsResponse();
                    ~DescribeReviewDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取发起内容智能识别次数。
                     * @return TotalCount 发起内容智能识别次数。
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
                     * 获取内容智能识别总时长。
                     * @return TotalDuration 内容智能识别总时长。
                     * 
                     */
                    int64_t GetTotalDuration() const;

                    /**
                     * 判断参数 TotalDuration 是否已赋值
                     * @return TotalDuration 是否已赋值
                     * 
                     */
                    bool TotalDurationHasBeenSet() const;

                    /**
                     * 获取内容智能识别时长统计数据，每天一个数据。
                     * @return Data 内容智能识别时长统计数据，每天一个数据。
                     * 
                     */
                    std::vector<StatDataItem> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 发起内容智能识别次数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 内容智能识别总时长。
                     */
                    int64_t m_totalDuration;
                    bool m_totalDurationHasBeenSet;

                    /**
                     * 内容智能识别时长统计数据，每天一个数据。
                     */
                    std::vector<StatDataItem> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEREVIEWDETAILSRESPONSE_H_
