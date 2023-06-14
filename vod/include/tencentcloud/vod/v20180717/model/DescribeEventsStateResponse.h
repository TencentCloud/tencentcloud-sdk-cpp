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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEEVENTSSTATERESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEEVENTSSTATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeEventsState返回参数结构体
                */
                class DescribeEventsStateResponse : public AbstractModel
                {
                public:
                    DescribeEventsStateResponse();
                    ~DescribeEventsStateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取待进行拉取的事件通知数，为近似值，约5秒延迟。
                     * @return CountOfEventsToPull 待进行拉取的事件通知数，为近似值，约5秒延迟。
                     * 
                     */
                    uint64_t GetCountOfEventsToPull() const;

                    /**
                     * 判断参数 CountOfEventsToPull 是否已赋值
                     * @return CountOfEventsToPull 是否已赋值
                     * 
                     */
                    bool CountOfEventsToPullHasBeenSet() const;

                private:

                    /**
                     * 待进行拉取的事件通知数，为近似值，约5秒延迟。
                     */
                    uint64_t m_countOfEventsToPull;
                    bool m_countOfEventsToPullHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEEVENTSSTATERESPONSE_H_
