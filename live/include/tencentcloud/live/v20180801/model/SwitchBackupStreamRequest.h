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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_SWITCHBACKUPSTREAMREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_SWITCHBACKUPSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * SwitchBackupStream请求参数结构体
                */
                class SwitchBackupStreamRequest : public AbstractModel
                {
                public:
                    SwitchBackupStreamRequest();
                    ~SwitchBackupStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取推流域名。
                     * @return PushDomainName 推流域名。
                     * 
                     */
                    std::string GetPushDomainName() const;

                    /**
                     * 设置推流域名。
                     * @param _pushDomainName 推流域名。
                     * 
                     */
                    void SetPushDomainName(const std::string& _pushDomainName);

                    /**
                     * 判断参数 PushDomainName 是否已赋值
                     * @return PushDomainName 是否已赋值
                     * 
                     */
                    bool PushDomainNameHasBeenSet() const;

                    /**
                     * 获取应用名称。
                     * @return AppName 应用名称。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称。
                     * @param _appName 应用名称。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取流名称。
                     * @return StreamName 流名称。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称。
                     * @param _streamName 流名称。
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取查询接口获取到该流所有在推的上行 Sequence。指定要切到的目标上行 Sequence。
                     * @return UpstreamSequence 查询接口获取到该流所有在推的上行 Sequence。指定要切到的目标上行 Sequence。
                     * 
                     */
                    std::string GetUpstreamSequence() const;

                    /**
                     * 设置查询接口获取到该流所有在推的上行 Sequence。指定要切到的目标上行 Sequence。
                     * @param _upstreamSequence 查询接口获取到该流所有在推的上行 Sequence。指定要切到的目标上行 Sequence。
                     * 
                     */
                    void SetUpstreamSequence(const std::string& _upstreamSequence);

                    /**
                     * 判断参数 UpstreamSequence 是否已赋值
                     * @return UpstreamSequence 是否已赋值
                     * 
                     */
                    bool UpstreamSequenceHasBeenSet() const;

                private:

                    /**
                     * 推流域名。
                     */
                    std::string m_pushDomainName;
                    bool m_pushDomainNameHasBeenSet;

                    /**
                     * 应用名称。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 查询接口获取到该流所有在推的上行 Sequence。指定要切到的目标上行 Sequence。
                     */
                    std::string m_upstreamSequence;
                    bool m_upstreamSequenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_SWITCHBACKUPSTREAMREQUEST_H_
