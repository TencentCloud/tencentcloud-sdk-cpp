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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTAPPSERVICESREQUEST_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTAPPSERVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * DescribeAgentAppServices请求参数结构体
                */
                class DescribeAgentAppServicesRequest : public AbstractModel
                {
                public:
                    DescribeAgentAppServicesRequest();
                    ~DescribeAgentAppServicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceID <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceID <p>实例ID</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>数据量</p>
                     * @return Limit <p>数据量</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>数据量</p>
                     * @param _limit <p>数据量</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>IDs</p>
                     * @return IDs <p>IDs</p>
                     * 
                     */
                    std::vector<std::string> GetIDs() const;

                    /**
                     * 设置<p>IDs</p>
                     * @param _iDs <p>IDs</p>
                     * 
                     */
                    void SetIDs(const std::vector<std::string>& _iDs);

                    /**
                     * 判断参数 IDs 是否已赋值
                     * @return IDs 是否已赋值
                     * 
                     */
                    bool IDsHasBeenSet() const;

                    /**
                     * 获取<p>应用IDs</p>
                     * @return AgentAppIDs <p>应用IDs</p>
                     * 
                     */
                    std::vector<std::string> GetAgentAppIDs() const;

                    /**
                     * 设置<p>应用IDs</p>
                     * @param _agentAppIDs <p>应用IDs</p>
                     * 
                     */
                    void SetAgentAppIDs(const std::vector<std::string>& _agentAppIDs);

                    /**
                     * 判断参数 AgentAppIDs 是否已赋值
                     * @return AgentAppIDs 是否已赋值
                     * 
                     */
                    bool AgentAppIDsHasBeenSet() const;

                    /**
                     * 获取<p>服务IDs</p>
                     * @return ServiceIDs <p>服务IDs</p>
                     * 
                     */
                    std::vector<std::string> GetServiceIDs() const;

                    /**
                     * 设置<p>服务IDs</p>
                     * @param _serviceIDs <p>服务IDs</p>
                     * 
                     */
                    void SetServiceIDs(const std::vector<std::string>& _serviceIDs);

                    /**
                     * 判断参数 ServiceIDs 是否已赋值
                     * @return ServiceIDs 是否已赋值
                     * 
                     */
                    bool ServiceIDsHasBeenSet() const;

                    /**
                     * 获取<p>关键字</p>
                     * @return Keyword <p>关键字</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>关键字</p>
                     * @param _keyword <p>关键字</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>偏移量</p>
                     * @return Offset <p>偏移量</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>是否有凭据</p>
                     * @return AgentCredentialExist <p>是否有凭据</p>
                     * 
                     */
                    bool GetAgentCredentialExist() const;

                    /**
                     * 设置<p>是否有凭据</p>
                     * @param _agentCredentialExist <p>是否有凭据</p>
                     * 
                     */
                    void SetAgentCredentialExist(const bool& _agentCredentialExist);

                    /**
                     * 判断参数 AgentCredentialExist 是否已赋值
                     * @return AgentCredentialExist 是否已赋值
                     * 
                     */
                    bool AgentCredentialExistHasBeenSet() const;

                    /**
                     * 获取<p>凭据ID</p>
                     * @return AgentCredentialIDs <p>凭据ID</p>
                     * 
                     */
                    std::vector<std::string> GetAgentCredentialIDs() const;

                    /**
                     * 设置<p>凭据ID</p>
                     * @param _agentCredentialIDs <p>凭据ID</p>
                     * 
                     */
                    void SetAgentCredentialIDs(const std::vector<std::string>& _agentCredentialIDs);

                    /**
                     * 判断参数 AgentCredentialIDs 是否已赋值
                     * @return AgentCredentialIDs 是否已赋值
                     * 
                     */
                    bool AgentCredentialIDsHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>数据量</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>IDs</p>
                     */
                    std::vector<std::string> m_iDs;
                    bool m_iDsHasBeenSet;

                    /**
                     * <p>应用IDs</p>
                     */
                    std::vector<std::string> m_agentAppIDs;
                    bool m_agentAppIDsHasBeenSet;

                    /**
                     * <p>服务IDs</p>
                     */
                    std::vector<std::string> m_serviceIDs;
                    bool m_serviceIDsHasBeenSet;

                    /**
                     * <p>关键字</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>偏移量</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>是否有凭据</p>
                     */
                    bool m_agentCredentialExist;
                    bool m_agentCredentialExistHasBeenSet;

                    /**
                     * <p>凭据ID</p>
                     */
                    std::vector<std::string> m_agentCredentialIDs;
                    bool m_agentCredentialIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTAPPSERVICESREQUEST_H_
