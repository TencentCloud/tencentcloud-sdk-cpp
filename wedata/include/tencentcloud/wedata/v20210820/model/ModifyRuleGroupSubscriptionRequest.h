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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYRULEGROUPSUBSCRIPTIONREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYRULEGROUPSUBSCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SubscribeReceiver.h>
#include <tencentcloud/wedata/v20210820/model/SubscribeWebHook.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyRuleGroupSubscription请求参数结构体
                */
                class ModifyRuleGroupSubscriptionRequest : public AbstractModel
                {
                public:
                    ModifyRuleGroupSubscriptionRequest();
                    ~ModifyRuleGroupSubscriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则组ID
                     * @return RuleGroupId 规则组ID
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置规则组ID
                     * @param _ruleGroupId 规则组ID
                     * 
                     */
                    void SetRuleGroupId(const uint64_t& _ruleGroupId);

                    /**
                     * 判断参数 RuleGroupId 是否已赋值
                     * @return RuleGroupId 是否已赋值
                     * 
                     */
                    bool RuleGroupIdHasBeenSet() const;

                    /**
                     * 获取订阅人信息
                     * @return Receivers 订阅人信息
                     * 
                     */
                    std::vector<SubscribeReceiver> GetReceivers() const;

                    /**
                     * 设置订阅人信息
                     * @param _receivers 订阅人信息
                     * 
                     */
                    void SetReceivers(const std::vector<SubscribeReceiver>& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     * 
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取订阅类型
                     * @return SubscribeType 订阅类型
                     * 
                     */
                    std::vector<uint64_t> GetSubscribeType() const;

                    /**
                     * 设置订阅类型
                     * @param _subscribeType 订阅类型
                     * 
                     */
                    void SetSubscribeType(const std::vector<uint64_t>& _subscribeType);

                    /**
                     * 判断参数 SubscribeType 是否已赋值
                     * @return SubscribeType 是否已赋值
                     * 
                     */
                    bool SubscribeTypeHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取数据库Id
                     * @return DatabaseId 数据库Id
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置数据库Id
                     * @param _databaseId 数据库Id
                     * 
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     * 
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取数据源Id
                     * @return DatasourceId 数据源Id
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源Id
                     * @param _datasourceId 数据源Id
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取数据表Id
                     * @return TableId 数据表Id
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置数据表Id
                     * @param _tableId 数据表Id
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取群机器人webhook信息
                     * @return WebHooks 群机器人webhook信息
                     * 
                     */
                    std::vector<SubscribeWebHook> GetWebHooks() const;

                    /**
                     * 设置群机器人webhook信息
                     * @param _webHooks 群机器人webhook信息
                     * 
                     */
                    void SetWebHooks(const std::vector<SubscribeWebHook>& _webHooks);

                    /**
                     * 判断参数 WebHooks 是否已赋值
                     * @return WebHooks 是否已赋值
                     * 
                     */
                    bool WebHooksHasBeenSet() const;

                private:

                    /**
                     * 规则组ID
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * 订阅人信息
                     */
                    std::vector<SubscribeReceiver> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * 订阅类型
                     */
                    std::vector<uint64_t> m_subscribeType;
                    bool m_subscribeTypeHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据库Id
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 数据源Id
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据表Id
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 群机器人webhook信息
                     */
                    std::vector<SubscribeWebHook> m_webHooks;
                    bool m_webHooksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYRULEGROUPSUBSCRIPTIONREQUEST_H_
