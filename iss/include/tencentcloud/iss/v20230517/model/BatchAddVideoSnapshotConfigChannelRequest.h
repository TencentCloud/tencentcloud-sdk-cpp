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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_BATCHADDVIDEOSNAPSHOTCONFIGCHANNELREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_BATCHADDVIDEOSNAPSHOTCONFIGCHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * BatchAddVideoSnapshotConfigChannel请求参数结构体
                */
                class BatchAddVideoSnapshotConfigChannelRequest : public AbstractModel
                {
                public:
                    BatchAddVideoSnapshotConfigChannelRequest();
                    ~BatchAddVideoSnapshotConfigChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>截图配置Id</p>
                     * @return ConfigId <p>截图配置Id</p>
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置<p>截图配置Id</p>
                     * @param _configId <p>截图配置Id</p>
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>通道Id列表</p>
                     * @return Channels <p>通道Id列表</p>
                     * 
                     */
                    std::vector<std::string> GetChannels() const;

                    /**
                     * 设置<p>通道Id列表</p>
                     * @param _channels <p>通道Id列表</p>
                     * 
                     */
                    void SetChannels(const std::vector<std::string>& _channels);

                    /**
                     * 判断参数 Channels 是否已赋值
                     * @return Channels 是否已赋值
                     * 
                     */
                    bool ChannelsHasBeenSet() const;

                private:

                    /**
                     * <p>截图配置Id</p>
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * <p>通道Id列表</p>
                     */
                    std::vector<std::string> m_channels;
                    bool m_channelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_BATCHADDVIDEOSNAPSHOTCONFIGCHANNELREQUEST_H_
