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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGELISTRESPONSE_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/MQTTMessageItem.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * DescribeMessageList返回参数结构体
                */
                class DescribeMessageListResponse : public AbstractModel
                {
                public:
                    DescribeMessageListResponse();
                    ~DescribeMessageListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询总数
                     * @return TotalCount 查询总数
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
                     * 获取消息记录列表
                     * @return Data 消息记录列表
                     * 
                     */
                    std::vector<MQTTMessageItem> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取请求任务id
                     * @return TaskRequestId 请求任务id
                     * 
                     */
                    std::string GetTaskRequestId() const;

                    /**
                     * 判断参数 TaskRequestId 是否已赋值
                     * @return TaskRequestId 是否已赋值
                     * 
                     */
                    bool TaskRequestIdHasBeenSet() const;

                private:

                    /**
                     * 查询总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 消息记录列表
                     */
                    std::vector<MQTTMessageItem> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 请求任务id
                     */
                    std::string m_taskRequestId;
                    bool m_taskRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGELISTRESPONSE_H_
