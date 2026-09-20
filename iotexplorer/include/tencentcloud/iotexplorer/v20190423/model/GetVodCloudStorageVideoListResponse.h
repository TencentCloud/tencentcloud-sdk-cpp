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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETVODCLOUDSTORAGEVIDEOLISTRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETVODCLOUDSTORAGEVIDEOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/VideoList.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * GetVodCloudStorageVideoList返回参数结构体
                */
                class GetVodCloudStorageVideoListResponse : public AbstractModel
                {
                public:
                    GetVodCloudStorageVideoListResponse();
                    ~GetVodCloudStorageVideoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>播放器使用的 VOD 子应用 ID</p>
                     * @return VodAppId <p>播放器使用的 VOD 子应用 ID</p>
                     * 
                     */
                    std::string GetVodAppId() const;

                    /**
                     * 判断参数 VodAppId 是否已赋值
                     * @return VodAppId 是否已赋值
                     * 
                     */
                    bool VodAppIdHasBeenSet() const;

                    /**
                     * 获取<p>视频列表</p>
                     * @return VideoList <p>视频列表</p>
                     * 
                     */
                    std::vector<VideoList> GetVideoList() const;

                    /**
                     * 判断参数 VideoList 是否已赋值
                     * @return VideoList 是否已赋值
                     * 
                     */
                    bool VideoListHasBeenSet() const;

                    /**
                     * 获取<p>是否已拉完</p>
                     * @return Listover <p>是否已拉完</p>
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

                private:

                    /**
                     * <p>播放器使用的 VOD 子应用 ID</p>
                     */
                    std::string m_vodAppId;
                    bool m_vodAppIdHasBeenSet;

                    /**
                     * <p>视频列表</p>
                     */
                    std::vector<VideoList> m_videoList;
                    bool m_videoListHasBeenSet;

                    /**
                     * <p>是否已拉完</p>
                     */
                    bool m_listover;
                    bool m_listoverHasBeenSet;

                    /**
                     * <p>下一页游标</p>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETVODCLOUDSTORAGEVIDEOLISTRESPONSE_H_
