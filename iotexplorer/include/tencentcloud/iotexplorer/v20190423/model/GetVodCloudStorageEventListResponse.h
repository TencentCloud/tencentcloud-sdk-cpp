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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETVODCLOUDSTORAGEEVENTLISTRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETVODCLOUDSTORAGEEVENTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/VodCloudStorageEvent.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * GetVodCloudStorageEventList返回参数结构体
                */
                class GetVodCloudStorageEventListResponse : public AbstractModel
                {
                public:
                    GetVodCloudStorageEventListResponse();
                    ~GetVodCloudStorageEventListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>事件列表</p>
                     * @return Events <p>事件列表</p>
                     * 
                     */
                    std::vector<VodCloudStorageEvent> GetEvents() const;

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取<p>数据是否已完整</p>
                     * @return Listover <p>数据是否已完整</p>
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
                     * 获取<p>下一页游标</p>
                     * @return Context <p>下一页游标</p>
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
                     * 获取<p>总数</p>
                     * @return Total <p>总数</p>
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
                     * 获取<p>加密播放器使用的 VOD 子应用 ID</p>
                     * @return VodAppId <p>加密播放器使用的 VOD 子应用 ID</p>
                     * 
                     */
                    std::string GetVodAppId() const;

                    /**
                     * 判断参数 VodAppId 是否已赋值
                     * @return VodAppId 是否已赋值
                     * 
                     */
                    bool VodAppIdHasBeenSet() const;

                private:

                    /**
                     * <p>事件列表</p>
                     */
                    std::vector<VodCloudStorageEvent> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * <p>数据是否已完整</p>
                     */
                    bool m_listover;
                    bool m_listoverHasBeenSet;

                    /**
                     * <p>下一页游标</p>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * <p>总数</p>
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>加密播放器使用的 VOD 子应用 ID</p>
                     */
                    std::string m_vodAppId;
                    bool m_vodAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETVODCLOUDSTORAGEEVENTLISTRESPONSE_H_
