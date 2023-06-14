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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBECLOUDSTORAGEEVENTSRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBECLOUDSTORAGEEVENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideo/v20211125/model/CloudStorageEvent.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * DescribeCloudStorageEvents返回参数结构体
                */
                class DescribeCloudStorageEventsResponse : public AbstractModel
                {
                public:
                    DescribeCloudStorageEventsResponse();
                    ~DescribeCloudStorageEventsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云存事件列表
                     * @return Events 云存事件列表
                     * 
                     */
                    std::vector<CloudStorageEvent> GetEvents() const;

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取请求上下文, 用作查询游标
                     * @return Context 请求上下文, 用作查询游标
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取拉取结果是否已经结束
                     * @return Listover 拉取结果是否已经结束
                     * 
                     */
                    bool GetListover() const;

                    /**
                     * 判断参数 Listover 是否已赋值
                     * @return Listover 是否已赋值
                     * 
                     */
                    bool ListoverHasBeenSet() const;

                    /**
                     * 获取内部结果数量，并不等同于事件总数。
                     * @return Total 内部结果数量，并不等同于事件总数。
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取视频播放URL
                     * @return VideoURL 视频播放URL
                     * 
                     */
                    std::string GetVideoURL() const;

                    /**
                     * 判断参数 VideoURL 是否已赋值
                     * @return VideoURL 是否已赋值
                     * 
                     */
                    bool VideoURLHasBeenSet() const;

                private:

                    /**
                     * 云存事件列表
                     */
                    std::vector<CloudStorageEvent> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * 请求上下文, 用作查询游标
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 拉取结果是否已经结束
                     */
                    bool m_listover;
                    bool m_listoverHasBeenSet;

                    /**
                     * 内部结果数量，并不等同于事件总数。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 视频播放URL
                     */
                    std::string m_videoURL;
                    bool m_videoURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBECLOUDSTORAGEEVENTSRESPONSE_H_
