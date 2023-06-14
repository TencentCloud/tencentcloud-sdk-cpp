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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_EVENTLOGSTATSDATA_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_EVENTLOGSTATSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 事件日志统计数据结果
                */
                class EventLogStatsData : public AbstractModel
                {
                public:
                    EventLogStatsData();
                    ~EventLogStatsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间
                     * @return Datetime 时间
                     * 
                     */
                    std::string GetDatetime() const;

                    /**
                     * 设置时间
                     * @param _datetime 时间
                     * 
                     */
                    void SetDatetime(const std::string& _datetime);

                    /**
                     * 判断参数 Datetime 是否已赋值
                     * @return Datetime 是否已赋值
                     * 
                     */
                    bool DatetimeHasBeenSet() const;

                    /**
                     * 获取请求数
                     * @return Request 请求数
                     * 
                     */
                    uint64_t GetRequest() const;

                    /**
                     * 设置请求数
                     * @param _request 请求数
                     * 
                     */
                    void SetRequest(const uint64_t& _request);

                    /**
                     * 判断参数 Request 是否已赋值
                     * @return Request 是否已赋值
                     * 
                     */
                    bool RequestHasBeenSet() const;

                private:

                    /**
                     * 时间
                     */
                    std::string m_datetime;
                    bool m_datetimeHasBeenSet;

                    /**
                     * 请求数
                     */
                    uint64_t m_request;
                    bool m_requestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_EVENTLOGSTATSDATA_H_
