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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEEVENTDATADETAILRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEEVENTDATADETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/EventDataDetail.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeEventDataDetail返回参数结构体
                */
                class DescribeEventDataDetailResponse : public AbstractModel
                {
                public:
                    DescribeEventDataDetailResponse();
                    ~DescribeEventDataDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取异常事件详情
                     * @return EventDataDetail 异常事件详情
                     * 
                     */
                    EventDataDetail GetEventDataDetail() const;

                    /**
                     * 判断参数 EventDataDetail 是否已赋值
                     * @return EventDataDetail 是否已赋值
                     * 
                     */
                    bool EventDataDetailHasBeenSet() const;

                private:

                    /**
                     * 异常事件详情
                     */
                    EventDataDetail m_eventDataDetail;
                    bool m_eventDataDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEEVENTDATADETAILRESPONSE_H_
