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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DELETELIVECHANNELREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DELETELIVECHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DeleteLiveChannel请求参数结构体
                */
                class DeleteLiveChannelRequest : public AbstractModel
                {
                public:
                    DeleteLiveChannelRequest();
                    ~DeleteLiveChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取直播频道ID
                     * @return LiveChannelId 直播频道ID
                     * 
                     */
                    std::string GetLiveChannelId() const;

                    /**
                     * 设置直播频道ID
                     * @param _liveChannelId 直播频道ID
                     * 
                     */
                    void SetLiveChannelId(const std::string& _liveChannelId);

                    /**
                     * 判断参数 LiveChannelId 是否已赋值
                     * @return LiveChannelId 是否已赋值
                     * 
                     */
                    bool LiveChannelIdHasBeenSet() const;

                private:

                    /**
                     * 直播频道ID
                     */
                    std::string m_liveChannelId;
                    bool m_liveChannelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DELETELIVECHANNELREQUEST_H_
