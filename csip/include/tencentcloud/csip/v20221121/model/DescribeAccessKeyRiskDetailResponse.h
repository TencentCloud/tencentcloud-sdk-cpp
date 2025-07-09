/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEACCESSKEYRISKDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEACCESSKEYRISKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AccessKeyRisk.h>
#include <tencentcloud/csip/v20221121/model/AccessKeyAlarmCount.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAccessKeyRiskDetail返回参数结构体
                */
                class DescribeAccessKeyRiskDetailResponse : public AbstractModel
                {
                public:
                    DescribeAccessKeyRiskDetailResponse();
                    ~DescribeAccessKeyRiskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取风险列表
                     * @return RiskInfo 风险列表
                     * 
                     */
                    AccessKeyRisk GetRiskInfo() const;

                    /**
                     * 判断参数 RiskInfo 是否已赋值
                     * @return RiskInfo 是否已赋值
                     * 
                     */
                    bool RiskInfoHasBeenSet() const;

                    /**
                     * 获取CAM策略总数
                     * @return CamCount CAM策略总数
                     * 
                     */
                    int64_t GetCamCount() const;

                    /**
                     * 判断参数 CamCount 是否已赋值
                     * @return CamCount 是否已赋值
                     * 
                     */
                    bool CamCountHasBeenSet() const;

                    /**
                     * 获取账号关联告警数量
                     * @return AlarmCount 账号关联告警数量
                     * 
                     */
                    int64_t GetAlarmCount() const;

                    /**
                     * 判断参数 AlarmCount 是否已赋值
                     * @return AlarmCount 是否已赋值
                     * 
                     */
                    bool AlarmCountHasBeenSet() const;

                    /**
                     * 获取访问方式 0 API 1 控制台与API
                     * @return AccessType 访问方式 0 API 1 控制台与API
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取访问密钥告警数量列表
                     * @return AccessKeyAlarmCount 访问密钥告警数量列表
                     * 
                     */
                    std::vector<AccessKeyAlarmCount> GetAccessKeyAlarmCount() const;

                    /**
                     * 判断参数 AccessKeyAlarmCount 是否已赋值
                     * @return AccessKeyAlarmCount 是否已赋值
                     * 
                     */
                    bool AccessKeyAlarmCountHasBeenSet() const;

                    /**
                     * 获取操作保护是否开启 0 未开启 1 已开启
                     * @return ActionFlag 操作保护是否开启 0 未开启 1 已开启
                     * 
                     */
                    int64_t GetActionFlag() const;

                    /**
                     * 判断参数 ActionFlag 是否已赋值
                     * @return ActionFlag 是否已赋值
                     * 
                     */
                    bool ActionFlagHasBeenSet() const;

                    /**
                     * 获取登录保护是否开启 0 未开启 1 已开启
                     * @return LoginFlag 登录保护是否开启 0 未开启 1 已开启
                     * 
                     */
                    int64_t GetLoginFlag() const;

                    /**
                     * 判断参数 LoginFlag 是否已赋值
                     * @return LoginFlag 是否已赋值
                     * 
                     */
                    bool LoginFlagHasBeenSet() const;

                private:

                    /**
                     * 风险列表
                     */
                    AccessKeyRisk m_riskInfo;
                    bool m_riskInfoHasBeenSet;

                    /**
                     * CAM策略总数
                     */
                    int64_t m_camCount;
                    bool m_camCountHasBeenSet;

                    /**
                     * 账号关联告警数量
                     */
                    int64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                    /**
                     * 访问方式 0 API 1 控制台与API
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 访问密钥告警数量列表
                     */
                    std::vector<AccessKeyAlarmCount> m_accessKeyAlarmCount;
                    bool m_accessKeyAlarmCountHasBeenSet;

                    /**
                     * 操作保护是否开启 0 未开启 1 已开启
                     */
                    int64_t m_actionFlag;
                    bool m_actionFlagHasBeenSet;

                    /**
                     * 登录保护是否开启 0 未开启 1 已开启
                     */
                    int64_t m_loginFlag;
                    bool m_loginFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEACCESSKEYRISKDETAILRESPONSE_H_
