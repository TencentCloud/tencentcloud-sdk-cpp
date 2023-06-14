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

#ifndef TENCENTCLOUD_MVJ_V20190926_MODEL_MARKETINGVALUEJUDGEMENTREQUEST_H_
#define TENCENTCLOUD_MVJ_V20190926_MODEL_MARKETINGVALUEJUDGEMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mvj
    {
        namespace V20190926
        {
            namespace Model
            {
                /**
                * MarketingValueJudgement请求参数结构体
                */
                class MarketingValueJudgementRequest : public AbstractModel
                {
                public:
                    MarketingValueJudgementRequest();
                    ~MarketingValueJudgementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取手机账号类型填写4
                     * @return AccountType 手机账号类型填写4
                     * 
                     */
                    uint64_t GetAccountType() const;

                    /**
                     * 设置手机账号类型填写4
                     * @param _accountType 手机账号类型填写4
                     * 
                     */
                    void SetAccountType(const uint64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取填写手机号码，如15317537488
                     * @return Uid 填写手机号码，如15317537488
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置填写手机号码，如15317537488
                     * @param _uid 填写手机号码，如15317537488
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取用户请求时的客户端外网IP
                     * @return UserIp 用户请求时的客户端外网IP
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置用户请求时的客户端外网IP
                     * @param _userIp 用户请求时的客户端外网IP
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
                     * 获取用户操作时间戳，单位秒（格林威治时间精确到秒，如1501590972）
                     * @return PostTime 用户操作时间戳，单位秒（格林威治时间精确到秒，如1501590972）
                     * 
                     */
                    uint64_t GetPostTime() const;

                    /**
                     * 设置用户操作时间戳，单位秒（格林威治时间精确到秒，如1501590972）
                     * @param _postTime 用户操作时间戳，单位秒（格林威治时间精确到秒，如1501590972）
                     * 
                     */
                    void SetPostTime(const uint64_t& _postTime);

                    /**
                     * 判断参数 PostTime 是否已赋值
                     * @return PostTime 是否已赋值
                     * 
                     */
                    bool PostTimeHasBeenSet() const;

                    /**
                     * 获取用户设备号imei/idfa(建议填写)
                     * @return Imei 用户设备号imei/idfa(建议填写)
                     * 
                     */
                    std::string GetImei() const;

                    /**
                     * 设置用户设备号imei/idfa(建议填写)
                     * @param _imei 用户设备号imei/idfa(建议填写)
                     * 
                     */
                    void SetImei(const std::string& _imei);

                    /**
                     * 判断参数 Imei 是否已赋值
                     * @return Imei 是否已赋值
                     * 
                     */
                    bool ImeiHasBeenSet() const;

                    /**
                     * 获取活动链接(建议填写)
                     * @return Referer 活动链接(建议填写)
                     * 
                     */
                    std::string GetReferer() const;

                    /**
                     * 设置活动链接(建议填写)
                     * @param _referer 活动链接(建议填写)
                     * 
                     */
                    void SetReferer(const std::string& _referer);

                    /**
                     * 判断参数 Referer 是否已赋值
                     * @return Referer 是否已赋值
                     * 
                     */
                    bool RefererHasBeenSet() const;

                private:

                    /**
                     * 手机账号类型填写4
                     */
                    uint64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 填写手机号码，如15317537488
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 用户请求时的客户端外网IP
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 用户操作时间戳，单位秒（格林威治时间精确到秒，如1501590972）
                     */
                    uint64_t m_postTime;
                    bool m_postTimeHasBeenSet;

                    /**
                     * 用户设备号imei/idfa(建议填写)
                     */
                    std::string m_imei;
                    bool m_imeiHasBeenSet;

                    /**
                     * 活动链接(建议填写)
                     */
                    std::string m_referer;
                    bool m_refererHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MVJ_V20190926_MODEL_MARKETINGVALUEJUDGEMENTREQUEST_H_
