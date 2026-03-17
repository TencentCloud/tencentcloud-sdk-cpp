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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNENVSREQUEST_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNENVSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * DescribeCloudRunEnvs请求参数结构体
                */
                class DescribeCloudRunEnvsRequest : public AbstractModel
                {
                public:
                    DescribeCloudRunEnvsRequest();
                    ~DescribeCloudRunEnvsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境ID，如果传了这个参数则只返回该环境的相关信息</p>
                     * @return EnvId <p>环境ID，如果传了这个参数则只返回该环境的相关信息</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境ID，如果传了这个参数则只返回该环境的相关信息</p>
                     * @param _envId <p>环境ID，如果传了这个参数则只返回该环境的相关信息</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>指定Channels字段为可见渠道列表或不可见渠道列表<br>如只想获取渠道A的环境 就填写IsVisible= true,Channels = [&quot;A&quot;], 过滤渠道A拉取其他渠道环境时填写IsVisible= false,Channels = [&quot;A&quot;]</p>
                     * @return IsVisible <p>指定Channels字段为可见渠道列表或不可见渠道列表<br>如只想获取渠道A的环境 就填写IsVisible= true,Channels = [&quot;A&quot;], 过滤渠道A拉取其他渠道环境时填写IsVisible= false,Channels = [&quot;A&quot;]</p>
                     * 
                     */
                    bool GetIsVisible() const;

                    /**
                     * 设置<p>指定Channels字段为可见渠道列表或不可见渠道列表<br>如只想获取渠道A的环境 就填写IsVisible= true,Channels = [&quot;A&quot;], 过滤渠道A拉取其他渠道环境时填写IsVisible= false,Channels = [&quot;A&quot;]</p>
                     * @param _isVisible <p>指定Channels字段为可见渠道列表或不可见渠道列表<br>如只想获取渠道A的环境 就填写IsVisible= true,Channels = [&quot;A&quot;], 过滤渠道A拉取其他渠道环境时填写IsVisible= false,Channels = [&quot;A&quot;]</p>
                     * 
                     */
                    void SetIsVisible(const bool& _isVisible);

                    /**
                     * 判断参数 IsVisible 是否已赋值
                     * @return IsVisible 是否已赋值
                     * 
                     */
                    bool IsVisibleHasBeenSet() const;

                    /**
                     * 获取<p>渠道列表，代表可见或不可见渠道由IsVisible参数指定</p>
                     * @return Channels <p>渠道列表，代表可见或不可见渠道由IsVisible参数指定</p>
                     * 
                     */
                    std::vector<std::string> GetChannels() const;

                    /**
                     * 设置<p>渠道列表，代表可见或不可见渠道由IsVisible参数指定</p>
                     * @param _channels <p>渠道列表，代表可见或不可见渠道由IsVisible参数指定</p>
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
                     * <p>环境ID，如果传了这个参数则只返回该环境的相关信息</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>指定Channels字段为可见渠道列表或不可见渠道列表<br>如只想获取渠道A的环境 就填写IsVisible= true,Channels = [&quot;A&quot;], 过滤渠道A拉取其他渠道环境时填写IsVisible= false,Channels = [&quot;A&quot;]</p>
                     */
                    bool m_isVisible;
                    bool m_isVisibleHasBeenSet;

                    /**
                     * <p>渠道列表，代表可见或不可见渠道由IsVisible参数指定</p>
                     */
                    std::vector<std::string> m_channels;
                    bool m_channelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNENVSREQUEST_H_
