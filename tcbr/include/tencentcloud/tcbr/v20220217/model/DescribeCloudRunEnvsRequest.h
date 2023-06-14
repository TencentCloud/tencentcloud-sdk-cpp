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
                     * 获取环境ID，如果传了这个参数则只返回该环境的相关信息
                     * @return EnvId 环境ID，如果传了这个参数则只返回该环境的相关信息
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID，如果传了这个参数则只返回该环境的相关信息
                     * @param _envId 环境ID，如果传了这个参数则只返回该环境的相关信息
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
                     * 获取指定Channels字段为可见渠道列表或不可见渠道列表
如只想获取渠道A的环境 就填写IsVisible= true,Channels = ["A"], 过滤渠道A拉取其他渠道环境时填写IsVisible= false,Channels = ["A"]
                     * @return IsVisible 指定Channels字段为可见渠道列表或不可见渠道列表
如只想获取渠道A的环境 就填写IsVisible= true,Channels = ["A"], 过滤渠道A拉取其他渠道环境时填写IsVisible= false,Channels = ["A"]
                     * 
                     */
                    bool GetIsVisible() const;

                    /**
                     * 设置指定Channels字段为可见渠道列表或不可见渠道列表
如只想获取渠道A的环境 就填写IsVisible= true,Channels = ["A"], 过滤渠道A拉取其他渠道环境时填写IsVisible= false,Channels = ["A"]
                     * @param _isVisible 指定Channels字段为可见渠道列表或不可见渠道列表
如只想获取渠道A的环境 就填写IsVisible= true,Channels = ["A"], 过滤渠道A拉取其他渠道环境时填写IsVisible= false,Channels = ["A"]
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
                     * 获取渠道列表，代表可见或不可见渠道由IsVisible参数指定
                     * @return Channels 渠道列表，代表可见或不可见渠道由IsVisible参数指定
                     * 
                     */
                    std::vector<std::string> GetChannels() const;

                    /**
                     * 设置渠道列表，代表可见或不可见渠道由IsVisible参数指定
                     * @param _channels 渠道列表，代表可见或不可见渠道由IsVisible参数指定
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
                     * 环境ID，如果传了这个参数则只返回该环境的相关信息
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 指定Channels字段为可见渠道列表或不可见渠道列表
如只想获取渠道A的环境 就填写IsVisible= true,Channels = ["A"], 过滤渠道A拉取其他渠道环境时填写IsVisible= false,Channels = ["A"]
                     */
                    bool m_isVisible;
                    bool m_isVisibleHasBeenSet;

                    /**
                     * 渠道列表，代表可见或不可见渠道由IsVisible参数指定
                     */
                    std::vector<std::string> m_channels;
                    bool m_channelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNENVSREQUEST_H_
