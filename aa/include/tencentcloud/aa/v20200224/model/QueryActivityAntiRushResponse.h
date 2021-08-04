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

#ifndef TENCENTCLOUD_AA_V20200224_MODEL_QUERYACTIVITYANTIRUSHRESPONSE_H_
#define TENCENTCLOUD_AA_V20200224_MODEL_QUERYACTIVITYANTIRUSHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aa
    {
        namespace V20200224
        {
            namespace Model
            {
                /**
                * QueryActivityAntiRush返回参数结构体
                */
                class QueryActivityAntiRushResponse : public AbstractModel
                {
                public:
                    QueryActivityAntiRushResponse();
                    ~QueryActivityAntiRushResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取操作时间戳，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostTime 操作时间戳，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPostTime() const;

                    /**
                     * 判断参数 PostTime 是否已赋值
                     * @return PostTime 是否已赋值
                     */
                    bool PostTimeHasBeenSet() const;

                    /**
                     * 获取用户操作的真实外网 IP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserIp 用户操作的真实外网 IP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserIp() const;

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取0：表示无恶意。
1 - 4：恶意等级由低到高。
                     * @return Level 0：表示无恶意。
1 - 4：恶意等级由低到高。
                     */
                    int64_t GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取风险类型。

账号风险：

1，账号信用低，账号近期存在因恶意被处罚历史，网络低活跃，被举报等因素；
2，垃圾账号，疑似批量注册小号，近期存在严重违规或大量举报；
3，无效账号，送检账号参数无法成功解析，请检查微信openid是否有误 ，QQopenid是否与appidU对应，手机号是否有误。
4，黑名单，该账号在业务侧有过拉黑记录
5，白名单，该账号在业务侧有过加白名单记录

行为风险：
101，批量操作，存在ip/设备/环境等因素的聚集性异常；
102，自动机，疑似自动机批量请求；
104，微信登录态无效，检查wxToken参数，是否已经失效；

环境风险：
201，环境异常，操作ip/设备/环境存在异常。当前ip为非常用ip或恶意ip段；
205，非公网有效ip，传进来的IP地址为内网ip地址或者ip保留地址；
206，设备异常，该设备存在异常的使用行为
                     * @return RiskType 风险类型。

账号风险：

1，账号信用低，账号近期存在因恶意被处罚历史，网络低活跃，被举报等因素；
2，垃圾账号，疑似批量注册小号，近期存在严重违规或大量举报；
3，无效账号，送检账号参数无法成功解析，请检查微信openid是否有误 ，QQopenid是否与appidU对应，手机号是否有误。
4，黑名单，该账号在业务侧有过拉黑记录
5，白名单，该账号在业务侧有过加白名单记录

行为风险：
101，批量操作，存在ip/设备/环境等因素的聚集性异常；
102，自动机，疑似自动机批量请求；
104，微信登录态无效，检查wxToken参数，是否已经失效；

环境风险：
201，环境异常，操作ip/设备/环境存在异常。当前ip为非常用ip或恶意ip段；
205，非公网有效ip，传进来的IP地址为内网ip地址或者ip保留地址；
206，设备异常，该设备存在异常的使用行为
                     */
                    std::vector<int64_t> GetRiskType() const;

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取accountType是QQ或微信开放账号时，用于标识QQ或微信用户登录后关联业务自身的账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssociateAccount accountType是QQ或微信开放账号时，用于标识QQ或微信用户登录后关联业务自身的账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAssociateAccount() const;

                    /**
                     * 判断参数 AssociateAccount 是否已赋值
                     * @return AssociateAccount 是否已赋值
                     */
                    bool AssociateAccountHasBeenSet() const;

                    /**
                     * 获取用户ID 
accountType不同对应不同的用户ID。如果是QQ或微信用户则填入对应的openId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uid 用户ID 
accountType不同对应不同的用户ID。如果是QQ或微信用户则填入对应的openId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUid() const;

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取用户操作的目的ID 
比如：点赞，该字段就是被点 赞的消息 id，如果是投票，就是被投号码的 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RootId 用户操作的目的ID 
比如：点赞，该字段就是被点 赞的消息 id，如果是投票，就是被投号码的 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRootId() const;

                    /**
                     * 判断参数 RootId 是否已赋值
                     * @return RootId 是否已赋值
                     */
                    bool RootIdHasBeenSet() const;

                    /**
                     * 获取业务侧错误码。成功时返回Success，错误时返回具体业务错误原因。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeDesc 业务侧错误码。成功时返回Success，错误时返回具体业务错误原因。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCodeDesc() const;

                    /**
                     * 判断参数 CodeDesc 是否已赋值
                     * @return CodeDesc 是否已赋值
                     */
                    bool CodeDescHasBeenSet() const;

                private:

                    /**
                     * 操作时间戳，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_postTime;
                    bool m_postTimeHasBeenSet;

                    /**
                     * 用户操作的真实外网 IP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 0：表示无恶意。
1 - 4：恶意等级由低到高。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 风险类型。

账号风险：

1，账号信用低，账号近期存在因恶意被处罚历史，网络低活跃，被举报等因素；
2，垃圾账号，疑似批量注册小号，近期存在严重违规或大量举报；
3，无效账号，送检账号参数无法成功解析，请检查微信openid是否有误 ，QQopenid是否与appidU对应，手机号是否有误。
4，黑名单，该账号在业务侧有过拉黑记录
5，白名单，该账号在业务侧有过加白名单记录

行为风险：
101，批量操作，存在ip/设备/环境等因素的聚集性异常；
102，自动机，疑似自动机批量请求；
104，微信登录态无效，检查wxToken参数，是否已经失效；

环境风险：
201，环境异常，操作ip/设备/环境存在异常。当前ip为非常用ip或恶意ip段；
205，非公网有效ip，传进来的IP地址为内网ip地址或者ip保留地址；
206，设备异常，该设备存在异常的使用行为
                     */
                    std::vector<int64_t> m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * accountType是QQ或微信开放账号时，用于标识QQ或微信用户登录后关联业务自身的账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_associateAccount;
                    bool m_associateAccountHasBeenSet;

                    /**
                     * 用户ID 
accountType不同对应不同的用户ID。如果是QQ或微信用户则填入对应的openId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 用户操作的目的ID 
比如：点赞，该字段就是被点 赞的消息 id，如果是投票，就是被投号码的 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rootId;
                    bool m_rootIdHasBeenSet;

                    /**
                     * 业务侧错误码。成功时返回Success，错误时返回具体业务错误原因。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codeDesc;
                    bool m_codeDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AA_V20200224_MODEL_QUERYACTIVITYANTIRUSHRESPONSE_H_
