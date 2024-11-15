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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTAUDITEDCLIENT_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTAUDITEDCLIENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * 已审核代客信息
                */
                class AgentAuditedClient : public AbstractModel
                {
                public:
                    AgentAuditedClient();
                    ~AgentAuditedClient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代理商账号ID
                     * @return Uin 代理商账号ID
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置代理商账号ID
                     * @param _uin 代理商账号ID
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取代客账号ID
                     * @return ClientUin 代客账号ID
                     * 
                     */
                    std::string GetClientUin() const;

                    /**
                     * 设置代客账号ID
                     * @param _clientUin 代客账号ID
                     * 
                     */
                    void SetClientUin(const std::string& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取代客审核通过时间戳
                     * @return AgentTime 代客审核通过时间戳
                     * 
                     */
                    std::string GetAgentTime() const;

                    /**
                     * 设置代客审核通过时间戳
                     * @param _agentTime 代客审核通过时间戳
                     * 
                     */
                    void SetAgentTime(const std::string& _agentTime);

                    /**
                     * 判断参数 AgentTime 是否已赋值
                     * @return AgentTime 是否已赋值
                     * 
                     */
                    bool AgentTimeHasBeenSet() const;

                    /**
                     * 获取代客类型，可能值为a/b/c
                     * @return ClientFlag 代客类型，可能值为a/b/c
                     * 
                     */
                    std::string GetClientFlag() const;

                    /**
                     * 设置代客类型，可能值为a/b/c
                     * @param _clientFlag 代客类型，可能值为a/b/c
                     * 
                     */
                    void SetClientFlag(const std::string& _clientFlag);

                    /**
                     * 判断参数 ClientFlag 是否已赋值
                     * @return ClientFlag 是否已赋值
                     * 
                     */
                    bool ClientFlagHasBeenSet() const;

                    /**
                     * 获取代客备注
                     * @return ClientRemark 代客备注
                     * 
                     */
                    std::string GetClientRemark() const;

                    /**
                     * 设置代客备注
                     * @param _clientRemark 代客备注
                     * 
                     */
                    void SetClientRemark(const std::string& _clientRemark);

                    /**
                     * 判断参数 ClientRemark 是否已赋值
                     * @return ClientRemark 是否已赋值
                     * 
                     */
                    bool ClientRemarkHasBeenSet() const;

                    /**
                     * 获取代客名称（首选实名认证名称）
                     * @return ClientName 代客名称（首选实名认证名称）
                     * 
                     */
                    std::string GetClientName() const;

                    /**
                     * 设置代客名称（首选实名认证名称）
                     * @param _clientName 代客名称（首选实名认证名称）
                     * 
                     */
                    void SetClientName(const std::string& _clientName);

                    /**
                     * 判断参数 ClientName 是否已赋值
                     * @return ClientName 是否已赋值
                     * 
                     */
                    bool ClientNameHasBeenSet() const;

                    /**
                     * 获取认证类型, 0：个人，1：企业；其他：未认证或无效值
                     * @return AuthType 认证类型, 0：个人，1：企业；其他：未认证或无效值
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置认证类型, 0：个人，1：企业；其他：未认证或无效值
                     * @param _authType 认证类型, 0：个人，1：企业；其他：未认证或无效值
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
                     * 获取代客APPID
                     * @return AppId 代客APPID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置代客APPID
                     * @param _appId 代客APPID
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取上月消费金额
                     * @return LastMonthAmt 上月消费金额
                     * 
                     */
                    int64_t GetLastMonthAmt() const;

                    /**
                     * 设置上月消费金额
                     * @param _lastMonthAmt 上月消费金额
                     * 
                     */
                    void SetLastMonthAmt(const int64_t& _lastMonthAmt);

                    /**
                     * 判断参数 LastMonthAmt 是否已赋值
                     * @return LastMonthAmt 是否已赋值
                     * 
                     */
                    bool LastMonthAmtHasBeenSet() const;

                    /**
                     * 获取本月消费金额
                     * @return ThisMonthAmt 本月消费金额
                     * 
                     */
                    int64_t GetThisMonthAmt() const;

                    /**
                     * 设置本月消费金额
                     * @param _thisMonthAmt 本月消费金额
                     * 
                     */
                    void SetThisMonthAmt(const int64_t& _thisMonthAmt);

                    /**
                     * 判断参数 ThisMonthAmt 是否已赋值
                     * @return ThisMonthAmt 是否已赋值
                     * 
                     */
                    bool ThisMonthAmtHasBeenSet() const;

                    /**
                     * 获取是否欠费,0：不欠费；1：欠费
                     * @return HasOverdueBill 是否欠费,0：不欠费；1：欠费
                     * 
                     */
                    uint64_t GetHasOverdueBill() const;

                    /**
                     * 设置是否欠费,0：不欠费；1：欠费
                     * @param _hasOverdueBill 是否欠费,0：不欠费；1：欠费
                     * 
                     */
                    void SetHasOverdueBill(const uint64_t& _hasOverdueBill);

                    /**
                     * 判断参数 HasOverdueBill 是否已赋值
                     * @return HasOverdueBill 是否已赋值
                     * 
                     */
                    bool HasOverdueBillHasBeenSet() const;

                    /**
                     * 获取客户类型：可以为new(自拓)/assign(指派)/old(官网)/direct(直销)/direct_newopp(直销(新商机))/空
                     * @return ClientType 客户类型：可以为new(自拓)/assign(指派)/old(官网)/direct(直销)/direct_newopp(直销(新商机))/空
                     * 
                     */
                    std::string GetClientType() const;

                    /**
                     * 设置客户类型：可以为new(自拓)/assign(指派)/old(官网)/direct(直销)/direct_newopp(直销(新商机))/空
                     * @param _clientType 客户类型：可以为new(自拓)/assign(指派)/old(官网)/direct(直销)/direct_newopp(直销(新商机))/空
                     * 
                     */
                    void SetClientType(const std::string& _clientType);

                    /**
                     * 判断参数 ClientType 是否已赋值
                     * @return ClientType 是否已赋值
                     * 
                     */
                    bool ClientTypeHasBeenSet() const;

                    /**
                     * 获取项目类型：可以为self(自拓项目)/platform(合作项目)/repeat(复算项目  )/空
                     * @return ProjectType 项目类型：可以为self(自拓项目)/platform(合作项目)/repeat(复算项目  )/空
                     * 
                     */
                    std::string GetProjectType() const;

                    /**
                     * 设置项目类型：可以为self(自拓项目)/platform(合作项目)/repeat(复算项目  )/空
                     * @param _projectType 项目类型：可以为self(自拓项目)/platform(合作项目)/repeat(复算项目  )/空
                     * 
                     */
                    void SetProjectType(const std::string& _projectType);

                    /**
                     * 判断参数 ProjectType 是否已赋值
                     * @return ProjectType 是否已赋值
                     * 
                     */
                    bool ProjectTypeHasBeenSet() const;

                    /**
                     * 获取业务员ID
                     * @return SalesUin 业务员ID
                     * 
                     */
                    std::string GetSalesUin() const;

                    /**
                     * 设置业务员ID
                     * @param _salesUin 业务员ID
                     * 
                     */
                    void SetSalesUin(const std::string& _salesUin);

                    /**
                     * 判断参数 SalesUin 是否已赋值
                     * @return SalesUin 是否已赋值
                     * 
                     */
                    bool SalesUinHasBeenSet() const;

                    /**
                     * 获取业务员姓名
                     * @return SalesName 业务员姓名
                     * 
                     */
                    std::string GetSalesName() const;

                    /**
                     * 设置业务员姓名
                     * @param _salesName 业务员姓名
                     * 
                     */
                    void SetSalesName(const std::string& _salesName);

                    /**
                     * 判断参数 SalesName 是否已赋值
                     * @return SalesName 是否已赋值
                     * 
                     */
                    bool SalesNameHasBeenSet() const;

                    /**
                     * 获取代客邮箱
                     * @return Mail 代客邮箱
                     * 
                     */
                    std::string GetMail() const;

                    /**
                     * 设置代客邮箱
                     * @param _mail 代客邮箱
                     * 
                     */
                    void SetMail(const std::string& _mail);

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     * 
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取交易类型:交易类型 1-原类型 2-代理型  3-代采型
                     * @return TransactionType 交易类型:交易类型 1-原类型 2-代理型  3-代采型
                     * 
                     */
                    std::string GetTransactionType() const;

                    /**
                     * 设置交易类型:交易类型 1-原类型 2-代理型  3-代采型
                     * @param _transactionType 交易类型:交易类型 1-原类型 2-代理型  3-代采型
                     * 
                     */
                    void SetTransactionType(const std::string& _transactionType);

                    /**
                     * 判断参数 TransactionType 是否已赋值
                     * @return TransactionType 是否已赋值
                     * 
                     */
                    bool TransactionTypeHasBeenSet() const;

                private:

                    /**
                     * 代理商账号ID
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 代客账号ID
                     */
                    std::string m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * 代客审核通过时间戳
                     */
                    std::string m_agentTime;
                    bool m_agentTimeHasBeenSet;

                    /**
                     * 代客类型，可能值为a/b/c
                     */
                    std::string m_clientFlag;
                    bool m_clientFlagHasBeenSet;

                    /**
                     * 代客备注
                     */
                    std::string m_clientRemark;
                    bool m_clientRemarkHasBeenSet;

                    /**
                     * 代客名称（首选实名认证名称）
                     */
                    std::string m_clientName;
                    bool m_clientNameHasBeenSet;

                    /**
                     * 认证类型, 0：个人，1：企业；其他：未认证或无效值
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 代客APPID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 上月消费金额
                     */
                    int64_t m_lastMonthAmt;
                    bool m_lastMonthAmtHasBeenSet;

                    /**
                     * 本月消费金额
                     */
                    int64_t m_thisMonthAmt;
                    bool m_thisMonthAmtHasBeenSet;

                    /**
                     * 是否欠费,0：不欠费；1：欠费
                     */
                    uint64_t m_hasOverdueBill;
                    bool m_hasOverdueBillHasBeenSet;

                    /**
                     * 客户类型：可以为new(自拓)/assign(指派)/old(官网)/direct(直销)/direct_newopp(直销(新商机))/空
                     */
                    std::string m_clientType;
                    bool m_clientTypeHasBeenSet;

                    /**
                     * 项目类型：可以为self(自拓项目)/platform(合作项目)/repeat(复算项目  )/空
                     */
                    std::string m_projectType;
                    bool m_projectTypeHasBeenSet;

                    /**
                     * 业务员ID
                     */
                    std::string m_salesUin;
                    bool m_salesUinHasBeenSet;

                    /**
                     * 业务员姓名
                     */
                    std::string m_salesName;
                    bool m_salesNameHasBeenSet;

                    /**
                     * 代客邮箱
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * 交易类型:交易类型 1-原类型 2-代理型  3-代采型
                     */
                    std::string m_transactionType;
                    bool m_transactionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTAUDITEDCLIENT_H_
