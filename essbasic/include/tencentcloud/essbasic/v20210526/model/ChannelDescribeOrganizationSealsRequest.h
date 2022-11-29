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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEORGANIZATIONSEALSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEORGANIZATIONSEALSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelDescribeOrganizationSeals请求参数结构体
                */
                class ChannelDescribeOrganizationSealsRequest : public AbstractModel
                {
                public:
                    ChannelDescribeOrganizationSealsRequest();
                    ~ChannelDescribeOrganizationSealsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @return Agent 渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @param Agent 渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取返回最大数量，最大为100
                     * @return Limit 返回最大数量，最大为100
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回最大数量，最大为100
                     * @param Limit 返回最大数量，最大为100
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0，最大为20000
                     * @return Offset 偏移量，默认为0，最大为20000
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0，最大为20000
                     * @param Offset 偏移量，默认为0，最大为20000
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询信息类型，为1时返回授权用户，为其他值时不返回
                     * @return InfoType 查询信息类型，为1时返回授权用户，为其他值时不返回
                     */
                    int64_t GetInfoType() const;

                    /**
                     * 设置查询信息类型，为1时返回授权用户，为其他值时不返回
                     * @param InfoType 查询信息类型，为1时返回授权用户，为其他值时不返回
                     */
                    void SetInfoType(const int64_t& _infoType);

                    /**
                     * 判断参数 InfoType 是否已赋值
                     * @return InfoType 是否已赋值
                     */
                    bool InfoTypeHasBeenSet() const;

                    /**
                     * 获取印章id（没有输入返回所有）
                     * @return SealId 印章id（没有输入返回所有）
                     */
                    std::string GetSealId() const;

                    /**
                     * 设置印章id（没有输入返回所有）
                     * @param SealId 印章id（没有输入返回所有）
                     */
                    void SetSealId(const std::string& _sealId);

                    /**
                     * 判断参数 SealId 是否已赋值
                     * @return SealId 是否已赋值
                     */
                    bool SealIdHasBeenSet() const;

                private:

                    /**
                     * 渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 返回最大数量，最大为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0，最大为20000
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询信息类型，为1时返回授权用户，为其他值时不返回
                     */
                    int64_t m_infoType;
                    bool m_infoTypeHasBeenSet;

                    /**
                     * 印章id（没有输入返回所有）
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEORGANIZATIONSEALSREQUEST_H_
