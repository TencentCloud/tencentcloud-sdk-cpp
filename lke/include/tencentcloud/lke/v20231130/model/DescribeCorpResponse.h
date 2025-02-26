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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBECORPRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBECORPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeCorp返回参数结构体
                */
                class DescribeCorpResponse : public AbstractModel
                {
                public:
                    DescribeCorpResponse();
                    ~DescribeCorpResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取企业ID

                     * @return CorpBizId 企业ID

                     * 
                     */
                    std::string GetCorpBizId() const;

                    /**
                     * 判断参数 CorpBizId 是否已赋值
                     * @return CorpBizId 是否已赋值
                     * 
                     */
                    bool CorpBizIdHasBeenSet() const;

                    /**
                     * 获取应用配额
                     * @return RobotQuota 应用配额
                     * 
                     */
                    uint64_t GetRobotQuota() const;

                    /**
                     * 判断参数 RobotQuota 是否已赋值
                     * @return RobotQuota 是否已赋值
                     * 
                     */
                    bool RobotQuotaHasBeenSet() const;

                    /**
                     * 获取企业全称

                     * @return FullName 企业全称

                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     * 
                     */
                    bool FullNameHasBeenSet() const;

                    /**
                     * 获取是否试用
                     * @return IsTrial 是否试用
                     * 
                     */
                    bool GetIsTrial() const;

                    /**
                     * 判断参数 IsTrial 是否已赋值
                     * @return IsTrial 是否已赋值
                     * 
                     */
                    bool IsTrialHasBeenSet() const;

                    /**
                     * 获取是否试用过期
                     * @return IsTrialExpired 是否试用过期
                     * 
                     */
                    bool GetIsTrialExpired() const;

                    /**
                     * 判断参数 IsTrialExpired 是否已赋值
                     * @return IsTrialExpired 是否已赋值
                     * 
                     */
                    bool IsTrialExpiredHasBeenSet() const;

                    /**
                     * 获取可用应用数量
                     * @return AvailableAppQuota 可用应用数量
                     * 
                     */
                    uint64_t GetAvailableAppQuota() const;

                    /**
                     * 判断参数 AvailableAppQuota 是否已赋值
                     * @return AvailableAppQuota 是否已赋值
                     * 
                     */
                    bool AvailableAppQuotaHasBeenSet() const;

                    /**
                     * 获取是否支持自定义模型配置
                     * @return IsSupportCustomModel 是否支持自定义模型配置
                     * 
                     */
                    bool GetIsSupportCustomModel() const;

                    /**
                     * 判断参数 IsSupportCustomModel 是否已赋值
                     * @return IsSupportCustomModel 是否已赋值
                     * 
                     */
                    bool IsSupportCustomModelHasBeenSet() const;

                private:

                    /**
                     * 企业ID

                     */
                    std::string m_corpBizId;
                    bool m_corpBizIdHasBeenSet;

                    /**
                     * 应用配额
                     */
                    uint64_t m_robotQuota;
                    bool m_robotQuotaHasBeenSet;

                    /**
                     * 企业全称

                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * 是否试用
                     */
                    bool m_isTrial;
                    bool m_isTrialHasBeenSet;

                    /**
                     * 是否试用过期
                     */
                    bool m_isTrialExpired;
                    bool m_isTrialExpiredHasBeenSet;

                    /**
                     * 可用应用数量
                     */
                    uint64_t m_availableAppQuota;
                    bool m_availableAppQuotaHasBeenSet;

                    /**
                     * 是否支持自定义模型配置
                     */
                    bool m_isSupportCustomModel;
                    bool m_isSupportCustomModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBECORPRESPONSE_H_
