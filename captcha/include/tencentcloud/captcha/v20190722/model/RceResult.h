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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_RCERESULT_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_RCERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 验证码拼装Rce结果，Rce结果部分
                */
                class RceResult : public AbstractModel
                {
                public:
                    RceResult();
                    ~RceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户ID
                     * @return UserId 用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取操作时间戳
                     * @return PostTime 操作时间戳
                     * 
                     */
                    int64_t GetPostTime() const;

                    /**
                     * 设置操作时间戳
                     * @param _postTime 操作时间戳
                     * 
                     */
                    void SetPostTime(const int64_t& _postTime);

                    /**
                     * 判断参数 PostTime 是否已赋值
                     * @return PostTime 是否已赋值
                     * 
                     */
                    bool PostTimeHasBeenSet() const;

                    /**
                     * 获取业务参数
                     * @return AssociateAccount 业务参数
                     * 
                     */
                    std::string GetAssociateAccount() const;

                    /**
                     * 设置业务参数
                     * @param _associateAccount 业务参数
                     * 
                     */
                    void SetAssociateAccount(const std::string& _associateAccount);

                    /**
                     * 判断参数 AssociateAccount 是否已赋值
                     * @return AssociateAccount 是否已赋值
                     * 
                     */
                    bool AssociateAccountHasBeenSet() const;

                    /**
                     * 获取用户Ip
                     * @return UserIp 用户Ip
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置用户Ip
                     * @param _userIp 用户Ip
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return RiskLevel 风险等级
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置风险等级
                     * @param _riskLevel 风险等级
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取风险类型
                     * @return RiskType 风险类型
                     * 
                     */
                    std::vector<int64_t> GetRiskType() const;

                    /**
                     * 设置风险类型
                     * @param _riskType 风险类型
                     * 
                     */
                    void SetRiskType(const std::vector<int64_t>& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取设备唯一ID
                     * @return ConstId 设备唯一ID
                     * 
                     */
                    std::string GetConstId() const;

                    /**
                     * 设置设备唯一ID
                     * @param _constId 设备唯一ID
                     * 
                     */
                    void SetConstId(const std::string& _constId);

                    /**
                     * 判断参数 ConstId 是否已赋值
                     * @return ConstId 是否已赋值
                     * 
                     */
                    bool ConstIdHasBeenSet() const;

                    /**
                     * 获取风险扩展参数
                     * @return RiskInformation 风险扩展参数
                     * 
                     */
                    std::string GetRiskInformation() const;

                    /**
                     * 设置风险扩展参数
                     * @param _riskInformation 风险扩展参数
                     * 
                     */
                    void SetRiskInformation(const std::string& _riskInformation);

                    /**
                     * 判断参数 RiskInformation 是否已赋值
                     * @return RiskInformation 是否已赋值
                     * 
                     */
                    bool RiskInformationHasBeenSet() const;

                private:

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 操作时间戳
                     */
                    int64_t m_postTime;
                    bool m_postTimeHasBeenSet;

                    /**
                     * 业务参数
                     */
                    std::string m_associateAccount;
                    bool m_associateAccountHasBeenSet;

                    /**
                     * 用户Ip
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 风险等级
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 风险类型
                     */
                    std::vector<int64_t> m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * 设备唯一ID
                     */
                    std::string m_constId;
                    bool m_constIdHasBeenSet;

                    /**
                     * 风险扩展参数
                     */
                    std::string m_riskInformation;
                    bool m_riskInformationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_RCERESULT_H_
