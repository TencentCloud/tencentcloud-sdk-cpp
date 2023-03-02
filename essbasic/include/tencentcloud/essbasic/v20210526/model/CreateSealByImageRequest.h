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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESEALBYIMAGEREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESEALBYIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreateSealByImage请求参数结构体
                */
                class CreateSealByImageRequest : public AbstractModel
                {
                public:
                    CreateSealByImageRequest();
                    ~CreateSealByImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @return Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @param Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取印章名称，最大长度不超过50字符
                     * @return SealName 印章名称，最大长度不超过50字符
                     */
                    std::string GetSealName() const;

                    /**
                     * 设置印章名称，最大长度不超过50字符
                     * @param SealName 印章名称，最大长度不超过50字符
                     */
                    void SetSealName(const std::string& _sealName);

                    /**
                     * 判断参数 SealName 是否已赋值
                     * @return SealName 是否已赋值
                     */
                    bool SealNameHasBeenSet() const;

                    /**
                     * 获取印章图片base64，大小不超过10M（原始图片不超过7.6M）
                     * @return SealImage 印章图片base64，大小不超过10M（原始图片不超过7.6M）
                     */
                    std::string GetSealImage() const;

                    /**
                     * 设置印章图片base64，大小不超过10M（原始图片不超过7.6M）
                     * @param SealImage 印章图片base64，大小不超过10M（原始图片不超过7.6M）
                     */
                    void SetSealImage(const std::string& _sealImage);

                    /**
                     * 判断参数 SealImage 是否已赋值
                     * @return SealImage 是否已赋值
                     */
                    bool SealImageHasBeenSet() const;

                    /**
                     * 获取操作者的信息
                     * @return Operator 操作者的信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作者的信息
                     * @param Operator 操作者的信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 印章名称，最大长度不超过50字符
                     */
                    std::string m_sealName;
                    bool m_sealNameHasBeenSet;

                    /**
                     * 印章图片base64，大小不超过10M（原始图片不超过7.6M）
                     */
                    std::string m_sealImage;
                    bool m_sealImageHasBeenSet;

                    /**
                     * 操作者的信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESEALBYIMAGEREQUEST_H_
