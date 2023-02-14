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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_AGENT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_AGENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 主企业代子企业操作 或 渠道子客应用相关信息
                */
                class Agent : public AbstractModel
                {
                public:
                    Agent();
                    ~Agent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用编号,32位字符串
                     * @return AppId 应用编号,32位字符串
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置应用编号,32位字符串
                     * @param AppId 应用编号,32位字符串
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取主组织的应用号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyAppId 主组织的应用号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProxyAppId() const;

                    /**
                     * 设置主组织的应用号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProxyAppId 主组织的应用号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProxyAppId(const std::string& _proxyAppId);

                    /**
                     * 判断参数 ProxyAppId 是否已赋值
                     * @return ProxyAppId 是否已赋值
                     */
                    bool ProxyAppIdHasBeenSet() const;

                    /**
                     * 获取主组织在平台的机构编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyOrganizationId 主组织在平台的机构编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProxyOrganizationId() const;

                    /**
                     * 设置主组织在平台的机构编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProxyOrganizationId 主组织在平台的机构编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProxyOrganizationId(const std::string& _proxyOrganizationId);

                    /**
                     * 判断参数 ProxyOrganizationId 是否已赋值
                     * @return ProxyOrganizationId 是否已赋值
                     */
                    bool ProxyOrganizationIdHasBeenSet() const;

                    /**
                     * 获取主组织的操作人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyOperator 主组织的操作人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProxyOperator() const;

                    /**
                     * 设置主组织的操作人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProxyOperator 主组织的操作人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProxyOperator(const std::string& _proxyOperator);

                    /**
                     * 判断参数 ProxyOperator 是否已赋值
                     * @return ProxyOperator 是否已赋值
                     */
                    bool ProxyOperatorHasBeenSet() const;

                private:

                    /**
                     * 应用编号,32位字符串
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 主组织的应用号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyAppId;
                    bool m_proxyAppIdHasBeenSet;

                    /**
                     * 主组织在平台的机构编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyOrganizationId;
                    bool m_proxyOrganizationIdHasBeenSet;

                    /**
                     * 主组织的操作人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyOperator;
                    bool m_proxyOperatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_AGENT_H_
