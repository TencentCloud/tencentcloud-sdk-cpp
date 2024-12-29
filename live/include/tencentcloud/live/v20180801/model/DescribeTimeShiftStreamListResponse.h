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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETIMESHIFTSTREAMLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETIMESHIFTSTREAMLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/TimeShiftStreamInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeTimeShiftStreamList返回参数结构体
                */
                class DescribeTimeShiftStreamListResponse : public AbstractModel
                {
                public:
                    DescribeTimeShiftStreamListResponse();
                    ~DescribeTimeShiftStreamListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取时间段内所有的数据量。
                     * @return TotalSize 时间段内所有的数据量。
                     * 
                     */
                    int64_t GetTotalSize() const;

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     * 
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取流列表。
                     * @return StreamList 流列表。
                     * 
                     */
                    std::vector<TimeShiftStreamInfo> GetStreamList() const;

                    /**
                     * 判断参数 StreamList 是否已赋值
                     * @return StreamList 是否已赋值
                     * 
                     */
                    bool StreamListHasBeenSet() const;

                private:

                    /**
                     * 时间段内所有的数据量。
                     */
                    int64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * 流列表。
                     */
                    std::vector<TimeShiftStreamInfo> m_streamList;
                    bool m_streamListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETIMESHIFTSTREAMLISTRESPONSE_H_
