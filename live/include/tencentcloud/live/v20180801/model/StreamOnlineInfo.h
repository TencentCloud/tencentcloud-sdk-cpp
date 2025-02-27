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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_STREAMONLINEINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_STREAMONLINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/PublishTime.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 查询当前正在推流的信息
                */
                class StreamOnlineInfo : public AbstractModel
                {
                public:
                    StreamOnlineInfo();
                    ~StreamOnlineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取推流时间列表
                     * @return PublishTimeList 推流时间列表
                     * 
                     */
                    std::vector<PublishTime> GetPublishTimeList() const;

                    /**
                     * 设置推流时间列表
                     * @param _publishTimeList 推流时间列表
                     * 
                     */
                    void SetPublishTimeList(const std::vector<PublishTime>& _publishTimeList);

                    /**
                     * 判断参数 PublishTimeList 是否已赋值
                     * @return PublishTimeList 是否已赋值
                     * 
                     */
                    bool PublishTimeListHasBeenSet() const;

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
                     * 获取推流域名。
                     * @return DomainName 推流域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置推流域名。
                     * @param _domainName 推流域名。
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
                     * 获取流是否推送到延播。
0 - 无延播，
1 - 有延播。
                     * @return PushToDelay 流是否推送到延播。
0 - 无延播，
1 - 有延播。
                     * 
                     */
                    int64_t GetPushToDelay() const;

                    /**
                     * 设置流是否推送到延播。
0 - 无延播，
1 - 有延播。
                     * @param _pushToDelay 流是否推送到延播。
0 - 无延播，
1 - 有延播。
                     * 
                     */
                    void SetPushToDelay(const int64_t& _pushToDelay);

                    /**
                     * 判断参数 PushToDelay 是否已赋值
                     * @return PushToDelay 是否已赋值
                     * 
                     */
                    bool PushToDelayHasBeenSet() const;

                private:

                    /**
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 推流时间列表
                     */
                    std::vector<PublishTime> m_publishTimeList;
                    bool m_publishTimeListHasBeenSet;

                    /**
                     * 应用名称。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 推流域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 流是否推送到延播。
0 - 无延播，
1 - 有延播。
                     */
                    int64_t m_pushToDelay;
                    bool m_pushToDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_STREAMONLINEINFO_H_
