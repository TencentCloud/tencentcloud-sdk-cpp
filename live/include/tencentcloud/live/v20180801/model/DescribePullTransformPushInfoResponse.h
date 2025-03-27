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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPULLTRANSFORMPUSHINFORESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPULLTRANSFORMPUSHINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/TaskDurationInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribePullTransformPushInfo返回参数结构体
                */
                class DescribePullTransformPushInfoResponse : public AbstractModel
                {
                public:
                    DescribePullTransformPushInfoResponse();
                    ~DescribePullTransformPushInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取时长统计数据列表
                     * @return DataInfoList 时长统计数据列表
                     * 
                     */
                    std::vector<TaskDurationInfo> GetDataInfoList() const;

                    /**
                     * 判断参数 DataInfoList 是否已赋值
                     * @return DataInfoList 是否已赋值
                     * 
                     */
                    bool DataInfoListHasBeenSet() const;

                    /**
                     * 获取拉流转推得总时长
                     * @return TotalDuration 拉流转推得总时长
                     * 
                     */
                    uint64_t GetTotalDuration() const;

                    /**
                     * 判断参数 TotalDuration 是否已赋值
                     * @return TotalDuration 是否已赋值
                     * 
                     */
                    bool TotalDurationHasBeenSet() const;

                    /**
                     * 获取拉流转推得总时长（秒）
                     * @return TotalDurationSecond 拉流转推得总时长（秒）
                     * 
                     */
                    uint64_t GetTotalDurationSecond() const;

                    /**
                     * 判断参数 TotalDurationSecond 是否已赋值
                     * @return TotalDurationSecond 是否已赋值
                     * 
                     */
                    bool TotalDurationSecondHasBeenSet() const;

                private:

                    /**
                     * 时长统计数据列表
                     */
                    std::vector<TaskDurationInfo> m_dataInfoList;
                    bool m_dataInfoListHasBeenSet;

                    /**
                     * 拉流转推得总时长
                     */
                    uint64_t m_totalDuration;
                    bool m_totalDurationHasBeenSet;

                    /**
                     * 拉流转推得总时长（秒）
                     */
                    uint64_t m_totalDurationSecond;
                    bool m_totalDurationSecondHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPULLTRANSFORMPUSHINFORESPONSE_H_
