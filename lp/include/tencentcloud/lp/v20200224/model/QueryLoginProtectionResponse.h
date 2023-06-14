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

#ifndef TENCENTCLOUD_LP_V20200224_MODEL_QUERYLOGINPROTECTIONRESPONSE_H_
#define TENCENTCLOUD_LP_V20200224_MODEL_QUERYLOGINPROTECTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lp
    {
        namespace V20200224
        {
            namespace Model
            {
                /**
                * QueryLoginProtection返回参数结构体
                */
                class QueryLoginProtectionResponse : public AbstractModel
                {
                public:
                    QueryLoginProtectionResponse();
                    ~QueryLoginProtectionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取AssociateAccount

accountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号 ID。
LoginTime

操作时间。
Uid

用户 ID 不同的 accountType 对应不同的用户 ID。如果是 QQ，则填入对应的 openid，微信用户则填入对应的 openid/unionid，手机号则填入对应真实用户手机号（如13123456789）。
LoginIp

登录 IP。
Level

0：表示无恶意。
1 - 4：恶意等级由低到高。
RiskType

风险类型。
出参不用填"Req业务侧错误码。成功时返回 Success，错误时返回具体业务错误原因。uestId"等公共出参， 详细解释>>>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeDesc AssociateAccount

accountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号 ID。
LoginTime

操作时间。
Uid

用户 ID 不同的 accountType 对应不同的用户 ID。如果是 QQ，则填入对应的 openid，微信用户则填入对应的 openid/unionid，手机号则填入对应真实用户手机号（如13123456789）。
LoginIp

登录 IP。
Level

0：表示无恶意。
1 - 4：恶意等级由低到高。
RiskType

风险类型。
出参不用填"Req业务侧错误码。成功时返回 Success，错误时返回具体业务错误原因。uestId"等公共出参， 详细解释>>>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodeDesc() const;

                    /**
                     * 判断参数 CodeDesc 是否已赋值
                     * @return CodeDesc 是否已赋值
                     * 
                     */
                    bool CodeDescHasBeenSet() const;

                    /**
                     * 获取accountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssociateAccount accountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssociateAccount() const;

                    /**
                     * 判断参数 AssociateAccount 是否已赋值
                     * @return AssociateAccount 是否已赋值
                     * 
                     */
                    bool AssociateAccountHasBeenSet() const;

                    /**
                     * 获取操作时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoginTime 操作时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLoginTime() const;

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     * 
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取用户 ID 不同的 accountType 对应不同的用户 ID。如果是 QQ，则填入对应的 openid，微信用户则填入对应的 openid/unionid，手机号则填入对应真实用户手机号（如13123456789）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uid 用户 ID 不同的 accountType 对应不同的用户 ID。如果是 QQ，则填入对应的 openid，微信用户则填入对应的 openid/unionid，手机号则填入对应真实用户手机号（如13123456789）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取登录 IP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoginIp 登录 IP。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLoginIp() const;

                    /**
                     * 判断参数 LoginIp 是否已赋值
                     * @return LoginIp 是否已赋值
                     * 
                     */
                    bool LoginIpHasBeenSet() const;

                    /**
                     * 获取0：表示无恶意。
1 - 4：恶意等级由低到高。
                     * @return Level 0：表示无恶意。
1 - 4：恶意等级由低到高。
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取风险类型。
                     * @return RiskType 风险类型。
                     * 
                     */
                    std::vector<int64_t> GetRiskType() const;

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取accountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RootId accountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRootId() const;

                    /**
                     * 判断参数 RootId 是否已赋值
                     * @return RootId 是否已赋值
                     * 
                     */
                    bool RootIdHasBeenSet() const;

                private:

                    /**
                     * AssociateAccount

accountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号 ID。
LoginTime

操作时间。
Uid

用户 ID 不同的 accountType 对应不同的用户 ID。如果是 QQ，则填入对应的 openid，微信用户则填入对应的 openid/unionid，手机号则填入对应真实用户手机号（如13123456789）。
LoginIp

登录 IP。
Level

0：表示无恶意。
1 - 4：恶意等级由低到高。
RiskType

风险类型。
出参不用填"Req业务侧错误码。成功时返回 Success，错误时返回具体业务错误原因。uestId"等公共出参， 详细解释>>>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codeDesc;
                    bool m_codeDescHasBeenSet;

                    /**
                     * accountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_associateAccount;
                    bool m_associateAccountHasBeenSet;

                    /**
                     * 操作时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * 用户 ID 不同的 accountType 对应不同的用户 ID。如果是 QQ，则填入对应的 openid，微信用户则填入对应的 openid/unionid，手机号则填入对应真实用户手机号（如13123456789）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 登录 IP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loginIp;
                    bool m_loginIpHasBeenSet;

                    /**
                     * 0：表示无恶意。
1 - 4：恶意等级由低到高。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 风险类型。
                     */
                    std::vector<int64_t> m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * accountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rootId;
                    bool m_rootIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LP_V20200224_MODEL_QUERYLOGINPROTECTIONRESPONSE_H_
