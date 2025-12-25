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

#ifndef TENCENTCLOUD_EVT_V20250217_MODEL_PUTMESSAGEREQUEST_H_
#define TENCENTCLOUD_EVT_V20250217_MODEL_PUTMESSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Evt
    {
        namespace V20250217
        {
            namespace Model
            {
                /**
                * PutMessage请求参数结构体
                */
                class PutMessageRequest : public AbstractModel
                {
                public:
                    PutMessageRequest();
                    ~PutMessageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>事件ID</p>
                     * @return EventId <p>事件ID</p>
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置<p>事件ID</p>
                     * @param _eventId <p>事件ID</p>
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取<p>需要推送的事件数据内容，格式为json，字段定义需要与事件中的定义一致</p>
                     * @return Data <p>需要推送的事件数据内容，格式为json，字段定义需要与事件中的定义一致</p>
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置<p>需要推送的事件数据内容，格式为json，字段定义需要与事件中的定义一致</p>
                     * @param _data <p>需要推送的事件数据内容，格式为json，字段定义需要与事件中的定义一致</p>
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>数据推送来源，会在生成的单据中展示数据来源</p>
                     * @return Source <p>数据推送来源，会在生成的单据中展示数据来源</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>数据推送来源，会在生成的单据中展示数据来源</p>
                     * @param _source <p>数据推送来源，会在生成的单据中展示数据来源</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * <p>事件ID</p>
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * <p>需要推送的事件数据内容，格式为json，字段定义需要与事件中的定义一致</p>
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>数据推送来源，会在生成的单据中展示数据来源</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EVT_V20250217_MODEL_PUTMESSAGEREQUEST_H_
