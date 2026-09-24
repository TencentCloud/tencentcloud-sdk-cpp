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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEEVENTSBYTWESEEPERSONRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEEVENTSBYTWESEEPERSONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/CloudStorageEventWithAITasks.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeCloudStorageEventsByTWeSeePerson返回参数结构体
                */
                class DescribeCloudStorageEventsByTWeSeePersonResponse : public AbstractModel
                {
                public:
                    DescribeCloudStorageEventsByTWeSeePersonResponse();
                    ~DescribeCloudStorageEventsByTWeSeePersonResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>人员关联的云存事件列表</p>
                     * @return Events <p>人员关联的云存事件列表</p>
                     * 
                     */
                    std::vector<CloudStorageEventWithAITasks> GetEvents() const;

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取<p>人员关联的云存事件总数</p>
                     * @return Total <p>人员关联的云存事件总数</p>
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
                     * 获取<p>视频播放URL</p>
                     * @return VideoURL <p>视频播放URL</p>
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
                     * <p>人员关联的云存事件列表</p>
                     */
                    std::vector<CloudStorageEventWithAITasks> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * <p>人员关联的云存事件总数</p>
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>视频播放URL</p>
                     */
                    std::string m_videoURL;
                    bool m_videoURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEEVENTSBYTWESEEPERSONRESPONSE_H_
