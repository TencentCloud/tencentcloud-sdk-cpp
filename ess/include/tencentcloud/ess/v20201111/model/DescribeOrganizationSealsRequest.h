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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEORGANIZATIONSEALSREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEORGANIZATIONSEALSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeOrganizationSeals请求参数结构体
                */
                class DescribeOrganizationSealsRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationSealsRequest();
                    ~DescribeOrganizationSealsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方用户信息，userId 必填
                     * @return Operator 调用方用户信息，userId 必填
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置调用方用户信息，userId 必填
                     * @param _operator 调用方用户信息，userId 必填
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取返回最大数量，最大为100
                     * @return Limit 返回最大数量，最大为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回最大数量，最大为100
                     * @param _limit 返回最大数量，最大为100
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
                     * 获取偏移量，默认为0，最大为20000
                     * @return Offset 偏移量，默认为0，最大为20000
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0，最大为20000
                     * @param _offset 偏移量，默认为0，最大为20000
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
                     * 获取查询信息类型，为0时不返回授权用户，为1时返回
                     * @return InfoType 查询信息类型，为0时不返回授权用户，为1时返回
                     * 
                     */
                    int64_t GetInfoType() const;

                    /**
                     * 设置查询信息类型，为0时不返回授权用户，为1时返回
                     * @param _infoType 查询信息类型，为0时不返回授权用户，为1时返回
                     * 
                     */
                    void SetInfoType(const int64_t& _infoType);

                    /**
                     * 判断参数 InfoType 是否已赋值
                     * @return InfoType 是否已赋值
                     * 
                     */
                    bool InfoTypeHasBeenSet() const;

                    /**
                     * 获取印章id（没有输入返回所有）
                     * @return SealId 印章id（没有输入返回所有）
                     * 
                     */
                    std::string GetSealId() const;

                    /**
                     * 设置印章id（没有输入返回所有）
                     * @param _sealId 印章id（没有输入返回所有）
                     * 
                     */
                    void SetSealId(const std::string& _sealId);

                    /**
                     * 判断参数 SealId 是否已赋值
                     * @return SealId 是否已赋值
                     * 
                     */
                    bool SealIdHasBeenSet() const;

                    /**
                     * 获取印章类型列表（都是组织机构印章）。
为空时查询所有类型的印章。
目前支持以下类型：
OFFICIAL：企业公章；
CONTRACT：合同专用章；
ORGANIZATION_SEAL：企业印章(图片上传创建)；
LEGAL_PERSON_SEAL：法定代表人章
                     * @return SealTypes 印章类型列表（都是组织机构印章）。
为空时查询所有类型的印章。
目前支持以下类型：
OFFICIAL：企业公章；
CONTRACT：合同专用章；
ORGANIZATION_SEAL：企业印章(图片上传创建)；
LEGAL_PERSON_SEAL：法定代表人章
                     * 
                     */
                    std::vector<std::string> GetSealTypes() const;

                    /**
                     * 设置印章类型列表（都是组织机构印章）。
为空时查询所有类型的印章。
目前支持以下类型：
OFFICIAL：企业公章；
CONTRACT：合同专用章；
ORGANIZATION_SEAL：企业印章(图片上传创建)；
LEGAL_PERSON_SEAL：法定代表人章
                     * @param _sealTypes 印章类型列表（都是组织机构印章）。
为空时查询所有类型的印章。
目前支持以下类型：
OFFICIAL：企业公章；
CONTRACT：合同专用章；
ORGANIZATION_SEAL：企业印章(图片上传创建)；
LEGAL_PERSON_SEAL：法定代表人章
                     * 
                     */
                    void SetSealTypes(const std::vector<std::string>& _sealTypes);

                    /**
                     * 判断参数 SealTypes 是否已赋值
                     * @return SealTypes 是否已赋值
                     * 
                     */
                    bool SealTypesHasBeenSet() const;

                    /**
                     * 获取代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @return Agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @param _agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                private:

                    /**
                     * 调用方用户信息，userId 必填
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

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
                     * 查询信息类型，为0时不返回授权用户，为1时返回
                     */
                    int64_t m_infoType;
                    bool m_infoTypeHasBeenSet;

                    /**
                     * 印章id（没有输入返回所有）
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                    /**
                     * 印章类型列表（都是组织机构印章）。
为空时查询所有类型的印章。
目前支持以下类型：
OFFICIAL：企业公章；
CONTRACT：合同专用章；
ORGANIZATION_SEAL：企业印章(图片上传创建)；
LEGAL_PERSON_SEAL：法定代表人章
                     */
                    std::vector<std::string> m_sealTypes;
                    bool m_sealTypesHasBeenSet;

                    /**
                     * 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEORGANIZATIONSEALSREQUEST_H_
