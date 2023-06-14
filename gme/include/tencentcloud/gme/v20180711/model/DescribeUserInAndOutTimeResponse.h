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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEUSERINANDOUTTIMERESPONSE_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEUSERINANDOUTTIMERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/InOutTimeInfo.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeUserInAndOutTime返回参数结构体
                */
                class DescribeUserInAndOutTimeResponse : public AbstractModel
                {
                public:
                    DescribeUserInAndOutTimeResponse();
                    ~DescribeUserInAndOutTimeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户在房间得进出时间列表
                     * @return InOutList 用户在房间得进出时间列表
                     * 
                     */
                    std::vector<InOutTimeInfo> GetInOutList() const;

                    /**
                     * 判断参数 InOutList 是否已赋值
                     * @return InOutList 是否已赋值
                     * 
                     */
                    bool InOutListHasBeenSet() const;

                    /**
                     * 获取用户在房间中总时长
                     * @return Duration 用户在房间中总时长
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * 用户在房间得进出时间列表
                     */
                    std::vector<InOutTimeInfo> m_inOutList;
                    bool m_inOutListHasBeenSet;

                    /**
                     * 用户在房间中总时长
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEUSERINANDOUTTIMERESPONSE_H_
