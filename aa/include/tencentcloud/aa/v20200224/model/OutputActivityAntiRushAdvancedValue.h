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

#ifndef TENCENTCLOUD_AA_V20200224_MODEL_OUTPUTACTIVITYANTIRUSHADVANCEDVALUE_H_
#define TENCENTCLOUD_AA_V20200224_MODEL_OUTPUTACTIVITYANTIRUSHADVANCEDVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 活动防刷高级版业务出参。
                */
                class OutputActivityAntiRushAdvancedValue : public AbstractModel
                {
                public:
                    OutputActivityAntiRushAdvancedValue();
                    ~OutputActivityAntiRushAdvancedValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号ID。对应输入参数：
AccountType是1时，对应QQ的OpenID。
AccountType是2时，对应微信的OpenID/UnionID。
AccountType是4时，对应手机号。
AccountType是8时，对应imei、idfa、imeiMD5或者idfaMD5。
AccountType是0时，对应账号信息。
AccountType是10004时，对应手机号的MD5。
                     * @return UserId 账号ID。对应输入参数：
AccountType是1时，对应QQ的OpenID。
AccountType是2时，对应微信的OpenID/UnionID。
AccountType是4时，对应手机号。
AccountType是8时，对应imei、idfa、imeiMD5或者idfaMD5。
AccountType是0时，对应账号信息。
AccountType是10004时，对应手机号的MD5。
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置账号ID。对应输入参数：
AccountType是1时，对应QQ的OpenID。
AccountType是2时，对应微信的OpenID/UnionID。
AccountType是4时，对应手机号。
AccountType是8时，对应imei、idfa、imeiMD5或者idfaMD5。
AccountType是0时，对应账号信息。
AccountType是10004时，对应手机号的MD5。
                     * @param UserId 账号ID。对应输入参数：
AccountType是1时，对应QQ的OpenID。
AccountType是2时，对应微信的OpenID/UnionID。
AccountType是4时，对应手机号。
AccountType是8时，对应imei、idfa、imeiMD5或者idfaMD5。
AccountType是0时，对应账号信息。
AccountType是10004时，对应手机号的MD5。
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取操作时间戳，单位秒（对应输入参数）。
                     * @return PostTime 操作时间戳，单位秒（对应输入参数）。
                     */
                    uint64_t GetPostTime() const;

                    /**
                     * 设置操作时间戳，单位秒（对应输入参数）。
                     * @param PostTime 操作时间戳，单位秒（对应输入参数）。
                     */
                    void SetPostTime(const uint64_t& _postTime);

                    /**
                     * 判断参数 PostTime 是否已赋值
                     * @return PostTime 是否已赋值
                     */
                    bool PostTimeHasBeenSet() const;

                    /**
                     * 获取AccountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号ID（对应输入参数）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssociateAccount AccountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号ID（对应输入参数）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAssociateAccount() const;

                    /**
                     * 设置AccountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号ID（对应输入参数）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AssociateAccount AccountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号ID（对应输入参数）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAssociateAccount(const std::string& _associateAccount);

                    /**
                     * 判断参数 AssociateAccount 是否已赋值
                     * @return AssociateAccount 是否已赋值
                     */
                    bool AssociateAccountHasBeenSet() const;

                    /**
                     * 获取操作来源的外网IP（对应输入参数）。
                     * @return UserIp 操作来源的外网IP（对应输入参数）。
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置操作来源的外网IP（对应输入参数）。
                     * @param UserIp 操作来源的外网IP（对应输入参数）。
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取风险值：
0：表示无恶意。
1～4：恶意等级由低到高。
                     * @return Level 风险值：
0：表示无恶意。
1～4：恶意等级由低到高。
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置风险值：
0：表示无恶意。
1～4：恶意等级由低到高。
                     * @param Level 风险值：
0：表示无恶意。
1～4：恶意等级由低到高。
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取风险类型，详情请参见下文RiskType详细说明。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskType 风险类型，详情请参见下文RiskType详细说明。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetRiskType() const;

                    /**
                     * 设置风险类型，详情请参见下文RiskType详细说明。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RiskType 风险类型，详情请参见下文RiskType详细说明。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRiskType(const std::vector<int64_t>& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     */
                    bool RiskTypeHasBeenSet() const;

                private:

                    /**
                     * 账号ID。对应输入参数：
AccountType是1时，对应QQ的OpenID。
AccountType是2时，对应微信的OpenID/UnionID。
AccountType是4时，对应手机号。
AccountType是8时，对应imei、idfa、imeiMD5或者idfaMD5。
AccountType是0时，对应账号信息。
AccountType是10004时，对应手机号的MD5。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 操作时间戳，单位秒（对应输入参数）。
                     */
                    uint64_t m_postTime;
                    bool m_postTimeHasBeenSet;

                    /**
                     * AccountType 是 QQ 或微信开放账号时，用于标识 QQ 或微信用户登录后关联业务自身的账号ID（对应输入参数）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_associateAccount;
                    bool m_associateAccountHasBeenSet;

                    /**
                     * 操作来源的外网IP（对应输入参数）。
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 风险值：
0：表示无恶意。
1～4：恶意等级由低到高。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 风险类型，详情请参见下文RiskType详细说明。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_riskType;
                    bool m_riskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AA_V20200224_MODEL_OUTPUTACTIVITYANTIRUSHADVANCEDVALUE_H_
