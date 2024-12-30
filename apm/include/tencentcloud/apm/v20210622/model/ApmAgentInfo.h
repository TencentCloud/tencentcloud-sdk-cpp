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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMAGENTINFO_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMAGENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * APM Agent 信息
                */
                class ApmAgentInfo : public AbstractModel
                {
                public:
                    ApmAgentInfo();
                    ~ApmAgentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Agent 下载地址
                     * @return AgentDownloadURL Agent 下载地址
                     * 
                     */
                    std::string GetAgentDownloadURL() const;

                    /**
                     * 设置Agent 下载地址
                     * @param _agentDownloadURL Agent 下载地址
                     * 
                     */
                    void SetAgentDownloadURL(const std::string& _agentDownloadURL);

                    /**
                     * 判断参数 AgentDownloadURL 是否已赋值
                     * @return AgentDownloadURL 是否已赋值
                     * 
                     */
                    bool AgentDownloadURLHasBeenSet() const;

                    /**
                     * 获取Collector 上报地址
                     * @return CollectorURL Collector 上报地址
                     * 
                     */
                    std::string GetCollectorURL() const;

                    /**
                     * 设置Collector 上报地址
                     * @param _collectorURL Collector 上报地址
                     * 
                     */
                    void SetCollectorURL(const std::string& _collectorURL);

                    /**
                     * 判断参数 CollectorURL 是否已赋值
                     * @return CollectorURL 是否已赋值
                     * 
                     */
                    bool CollectorURLHasBeenSet() const;

                    /**
                     * 获取Token 信息
                     * @return Token Token 信息
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置Token 信息
                     * @param _token Token 信息
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取外网上报地址
                     * @return PublicCollectorURL 外网上报地址
                     * 
                     */
                    std::string GetPublicCollectorURL() const;

                    /**
                     * 设置外网上报地址
                     * @param _publicCollectorURL 外网上报地址
                     * 
                     */
                    void SetPublicCollectorURL(const std::string& _publicCollectorURL);

                    /**
                     * 判断参数 PublicCollectorURL 是否已赋值
                     * @return PublicCollectorURL 是否已赋值
                     * 
                     */
                    bool PublicCollectorURLHasBeenSet() const;

                    /**
                     * 获取自研 VPC 上报地址
                     * @return InnerCollectorURL 自研 VPC 上报地址
                     * 
                     */
                    std::string GetInnerCollectorURL() const;

                    /**
                     * 设置自研 VPC 上报地址
                     * @param _innerCollectorURL 自研 VPC 上报地址
                     * 
                     */
                    void SetInnerCollectorURL(const std::string& _innerCollectorURL);

                    /**
                     * 判断参数 InnerCollectorURL 是否已赋值
                     * @return InnerCollectorURL 是否已赋值
                     * 
                     */
                    bool InnerCollectorURLHasBeenSet() const;

                    /**
                     * 获取内网上报地址( Private Link 上报地址)
                     * @return PrivateLinkCollectorURL 内网上报地址( Private Link 上报地址)
                     * 
                     */
                    std::string GetPrivateLinkCollectorURL() const;

                    /**
                     * 设置内网上报地址( Private Link 上报地址)
                     * @param _privateLinkCollectorURL 内网上报地址( Private Link 上报地址)
                     * 
                     */
                    void SetPrivateLinkCollectorURL(const std::string& _privateLinkCollectorURL);

                    /**
                     * 判断参数 PrivateLinkCollectorURL 是否已赋值
                     * @return PrivateLinkCollectorURL 是否已赋值
                     * 
                     */
                    bool PrivateLinkCollectorURLHasBeenSet() const;

                private:

                    /**
                     * Agent 下载地址
                     */
                    std::string m_agentDownloadURL;
                    bool m_agentDownloadURLHasBeenSet;

                    /**
                     * Collector 上报地址
                     */
                    std::string m_collectorURL;
                    bool m_collectorURLHasBeenSet;

                    /**
                     * Token 信息
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 外网上报地址
                     */
                    std::string m_publicCollectorURL;
                    bool m_publicCollectorURLHasBeenSet;

                    /**
                     * 自研 VPC 上报地址
                     */
                    std::string m_innerCollectorURL;
                    bool m_innerCollectorURLHasBeenSet;

                    /**
                     * 内网上报地址( Private Link 上报地址)
                     */
                    std::string m_privateLinkCollectorURL;
                    bool m_privateLinkCollectorURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMAGENTINFO_H_
