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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTAPPSREQUEST_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTAPPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/DescribeAgentAppsSortDTO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * DescribeAgentApps请求参数结构体
                */
                class DescribeAgentAppsRequest : public AbstractModel
                {
                public:
                    DescribeAgentAppsRequest();
                    ~DescribeAgentAppsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页大小
                     * @return Limit 分页大小
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页大小
                     * @param _limit 分页大小
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页偏移量
                     * @return Offset 分页偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
                     * @param _offset 分页偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取服务ID数组
                     * @return IDs 服务ID数组
                     * 
                     */
                    std::vector<std::string> GetIDs() const;

                    /**
                     * 设置服务ID数组
                     * @param _iDs 服务ID数组
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
                     * 获取实例ID
                     * @return InstanceID 实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例ID
                     * @param _instanceID 实例ID
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
                     * 获取notID列表
                     * @return NotIDs notID列表
                     * 
                     */
                    std::vector<std::string> GetNotIDs() const;

                    /**
                     * 设置notID列表
                     * @param _notIDs notID列表
                     * 
                     */
                    void SetNotIDs(const std::vector<std::string>& _notIDs);

                    /**
                     * 判断参数 NotIDs 是否已赋值
                     * @return NotIDs 是否已赋值
                     * 
                     */
                    bool NotIDsHasBeenSet() const;

                    /**
                     * 获取状态：normal正常状态，disabled下线状态
                     * @return Status 状态：normal正常状态，disabled下线状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态：normal正常状态，disabled下线状态
                     * @param _status 状态：normal正常状态，disabled下线状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取关键词
                     * @return Keyword 关键词
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键词
                     * @param _keyword 关键词
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
                     * 获取认证类型：apiKey，secretKey
                     * @return AuthType 认证类型：apiKey，secretKey
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置认证类型：apiKey，secretKey
                     * @param _authType 认证类型：apiKey，secretKey
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取排序
                     * @return Sort 排序
                     * 
                     */
                    DescribeAgentAppsSortDTO GetSort() const;

                    /**
                     * 设置排序
                     * @param _sort 排序
                     * 
                     */
                    void SetSort(const DescribeAgentAppsSortDTO& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取凭据ID
                     * @return AgentCredentialID 凭据ID
                     * 
                     */
                    std::string GetAgentCredentialID() const;

                    /**
                     * 设置凭据ID
                     * @param _agentCredentialID 凭据ID
                     * 
                     */
                    void SetAgentCredentialID(const std::string& _agentCredentialID);

                    /**
                     * 判断参数 AgentCredentialID 是否已赋值
                     * @return AgentCredentialID 是否已赋值
                     * 
                     */
                    bool AgentCredentialIDHasBeenSet() const;

                private:

                    /**
                     * 分页大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 服务ID数组
                     */
                    std::vector<std::string> m_iDs;
                    bool m_iDsHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * notID列表
                     */
                    std::vector<std::string> m_notIDs;
                    bool m_notIDsHasBeenSet;

                    /**
                     * 状态：normal正常状态，disabled下线状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 关键词
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 认证类型：apiKey，secretKey
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 排序
                     */
                    DescribeAgentAppsSortDTO m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 凭据ID
                     */
                    std::string m_agentCredentialID;
                    bool m_agentCredentialIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTAPPSREQUEST_H_
