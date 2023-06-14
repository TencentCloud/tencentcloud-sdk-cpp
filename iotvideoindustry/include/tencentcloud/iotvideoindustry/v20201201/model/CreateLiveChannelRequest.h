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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATELIVECHANNELREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATELIVECHANNELREQUEST_H_

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
                * CreateLiveChannel请求参数结构体
                */
                class CreateLiveChannelRequest : public AbstractModel
                {
                public:
                    CreateLiveChannelRequest();
                    ~CreateLiveChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取直播频道名称
                     * @return LiveChannelName 直播频道名称
                     * 
                     */
                    std::string GetLiveChannelName() const;

                    /**
                     * 设置直播频道名称
                     * @param _liveChannelName 直播频道名称
                     * 
                     */
                    void SetLiveChannelName(const std::string& _liveChannelName);

                    /**
                     * 判断参数 LiveChannelName 是否已赋值
                     * @return LiveChannelName 是否已赋值
                     * 
                     */
                    bool LiveChannelNameHasBeenSet() const;

                    /**
                     * 获取直播频道类型 1：固定直播；2：移动直播
                     * @return LiveChannelType 直播频道类型 1：固定直播；2：移动直播
                     * 
                     */
                    int64_t GetLiveChannelType() const;

                    /**
                     * 设置直播频道类型 1：固定直播；2：移动直播
                     * @param _liveChannelType 直播频道类型 1：固定直播；2：移动直播
                     * 
                     */
                    void SetLiveChannelType(const int64_t& _liveChannelType);

                    /**
                     * 判断参数 LiveChannelType 是否已赋值
                     * @return LiveChannelType 是否已赋值
                     * 
                     */
                    bool LiveChannelTypeHasBeenSet() const;

                private:

                    /**
                     * 直播频道名称
                     */
                    std::string m_liveChannelName;
                    bool m_liveChannelNameHasBeenSet;

                    /**
                     * 直播频道类型 1：固定直播；2：移动直播
                     */
                    int64_t m_liveChannelType;
                    bool m_liveChannelTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATELIVECHANNELREQUEST_H_
