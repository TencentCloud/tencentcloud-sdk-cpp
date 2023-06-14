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

#ifndef TENCENTCLOUD_BIZLIVE_V20190313_MODEL_FORBIDLIVESTREAMREQUEST_H_
#define TENCENTCLOUD_BIZLIVE_V20190313_MODEL_FORBIDLIVESTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bizlive
    {
        namespace V20190313
        {
            namespace Model
            {
                /**
                * ForbidLiveStream请求参数结构体
                */
                class ForbidLiveStreamRequest : public AbstractModel
                {
                public:
                    ForbidLiveStreamRequest();
                    ~ForbidLiveStreamRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取您的推流域名。
                     * @return DomainName 您的推流域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置您的推流域名。
                     * @param _domainName 您的推流域名。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

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
                     * 获取恢复流的时间。UTC 格式，例如：2018-11-29T19:00:00Z。
注意：默认禁播90天，且最长支持禁播90天。
                     * @return ResumeTime 恢复流的时间。UTC 格式，例如：2018-11-29T19:00:00Z。
注意：默认禁播90天，且最长支持禁播90天。
                     * 
                     */
                    std::string GetResumeTime() const;

                    /**
                     * 设置恢复流的时间。UTC 格式，例如：2018-11-29T19:00:00Z。
注意：默认禁播90天，且最长支持禁播90天。
                     * @param _resumeTime 恢复流的时间。UTC 格式，例如：2018-11-29T19:00:00Z。
注意：默认禁播90天，且最长支持禁播90天。
                     * 
                     */
                    void SetResumeTime(const std::string& _resumeTime);

                    /**
                     * 判断参数 ResumeTime 是否已赋值
                     * @return ResumeTime 是否已赋值
                     * 
                     */
                    bool ResumeTimeHasBeenSet() const;

                private:

                    /**
                     * 应用名称。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 您的推流域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 恢复流的时间。UTC 格式，例如：2018-11-29T19:00:00Z。
注意：默认禁播90天，且最长支持禁播90天。
                     */
                    std::string m_resumeTime;
                    bool m_resumeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BIZLIVE_V20190313_MODEL_FORBIDLIVESTREAMREQUEST_H_
