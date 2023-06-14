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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_MANAGECLSTOPICDOMAINSREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_MANAGECLSTOPICDOMAINSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/DomainAreaConfig.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * ManageClsTopicDomains请求参数结构体
                */
                class ManageClsTopicDomainsRequest : public AbstractModel
                {
                public:
                    ManageClsTopicDomainsRequest();
                    ~ManageClsTopicDomainsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志集ID
                     * @return LogsetId 日志集ID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集ID
                     * @param _logsetId 日志集ID
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取日志主题ID
                     * @return TopicId 日志主题ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID
                     * @param _topicId 日志主题ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取接入渠道，cdn或者ecdn，默认值为cdn
                     * @return Channel 接入渠道，cdn或者ecdn，默认值为cdn
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置接入渠道，cdn或者ecdn，默认值为cdn
                     * @param _channel 接入渠道，cdn或者ecdn，默认值为cdn
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取域名区域配置，注意：如果此字段为空，则表示解绑对应主题下的所有域名
                     * @return DomainAreaConfigs 域名区域配置，注意：如果此字段为空，则表示解绑对应主题下的所有域名
                     * 
                     */
                    std::vector<DomainAreaConfig> GetDomainAreaConfigs() const;

                    /**
                     * 设置域名区域配置，注意：如果此字段为空，则表示解绑对应主题下的所有域名
                     * @param _domainAreaConfigs 域名区域配置，注意：如果此字段为空，则表示解绑对应主题下的所有域名
                     * 
                     */
                    void SetDomainAreaConfigs(const std::vector<DomainAreaConfig>& _domainAreaConfigs);

                    /**
                     * 判断参数 DomainAreaConfigs 是否已赋值
                     * @return DomainAreaConfigs 是否已赋值
                     * 
                     */
                    bool DomainAreaConfigsHasBeenSet() const;

                private:

                    /**
                     * 日志集ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 接入渠道，cdn或者ecdn，默认值为cdn
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 域名区域配置，注意：如果此字段为空，则表示解绑对应主题下的所有域名
                     */
                    std::vector<DomainAreaConfig> m_domainAreaConfigs;
                    bool m_domainAreaConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_MANAGECLSTOPICDOMAINSREQUEST_H_
