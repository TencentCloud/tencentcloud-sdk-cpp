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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MAILCONFIGURATION_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MAILCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 邮件发送配置
                */
                class MailConfiguration : public AbstractModel
                {
                public:
                    MailConfiguration();
                    ~MailConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启邮件发送: 0, 否; 1, 是。
                     * @return SendMail 是否开启邮件发送: 0, 否; 1, 是。
                     * 
                     */
                    int64_t GetSendMail() const;

                    /**
                     * 设置是否开启邮件发送: 0, 否; 1, 是。
                     * @param _sendMail 是否开启邮件发送: 0, 否; 1, 是。
                     * 
                     */
                    void SetSendMail(const int64_t& _sendMail);

                    /**
                     * 判断参数 SendMail 是否已赋值
                     * @return SendMail 是否已赋值
                     * 
                     */
                    bool SendMailHasBeenSet() const;

                    /**
                     * 获取地域配置, 如["ap-guangzhou", "ap-shanghai"]。巡检的邮件发送模板，配置需要发送巡检邮件的地域；订阅的邮件发送模板，配置当前订阅实例的所属地域。
                     * @return Region 地域配置, 如["ap-guangzhou", "ap-shanghai"]。巡检的邮件发送模板，配置需要发送巡检邮件的地域；订阅的邮件发送模板，配置当前订阅实例的所属地域。
                     * 
                     */
                    std::vector<std::string> GetRegion() const;

                    /**
                     * 设置地域配置, 如["ap-guangzhou", "ap-shanghai"]。巡检的邮件发送模板，配置需要发送巡检邮件的地域；订阅的邮件发送模板，配置当前订阅实例的所属地域。
                     * @param _region 地域配置, 如["ap-guangzhou", "ap-shanghai"]。巡检的邮件发送模板，配置需要发送巡检邮件的地域；订阅的邮件发送模板，配置当前订阅实例的所属地域。
                     * 
                     */
                    void SetRegion(const std::vector<std::string>& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取发送指定的健康等级的报告, 如["HEALTH", "SUB_HEALTH", "RISK", "HIGH_RISK"]。
                     * @return HealthStatus 发送指定的健康等级的报告, 如["HEALTH", "SUB_HEALTH", "RISK", "HIGH_RISK"]。
                     * 
                     */
                    std::vector<std::string> GetHealthStatus() const;

                    /**
                     * 设置发送指定的健康等级的报告, 如["HEALTH", "SUB_HEALTH", "RISK", "HIGH_RISK"]。
                     * @param _healthStatus 发送指定的健康等级的报告, 如["HEALTH", "SUB_HEALTH", "RISK", "HIGH_RISK"]。
                     * 
                     */
                    void SetHealthStatus(const std::vector<std::string>& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取联系人id, 联系人/联系组不能都为空。
                     * @return ContactPerson 联系人id, 联系人/联系组不能都为空。
                     * 
                     */
                    std::vector<int64_t> GetContactPerson() const;

                    /**
                     * 设置联系人id, 联系人/联系组不能都为空。
                     * @param _contactPerson 联系人id, 联系人/联系组不能都为空。
                     * 
                     */
                    void SetContactPerson(const std::vector<int64_t>& _contactPerson);

                    /**
                     * 判断参数 ContactPerson 是否已赋值
                     * @return ContactPerson 是否已赋值
                     * 
                     */
                    bool ContactPersonHasBeenSet() const;

                    /**
                     * 获取联系组id, 联系人/联系组不能都为空。
                     * @return ContactGroup 联系组id, 联系人/联系组不能都为空。
                     * 
                     */
                    std::vector<int64_t> GetContactGroup() const;

                    /**
                     * 设置联系组id, 联系人/联系组不能都为空。
                     * @param _contactGroup 联系组id, 联系人/联系组不能都为空。
                     * 
                     */
                    void SetContactGroup(const std::vector<int64_t>& _contactGroup);

                    /**
                     * 判断参数 ContactGroup 是否已赋值
                     * @return ContactGroup 是否已赋值
                     * 
                     */
                    bool ContactGroupHasBeenSet() const;

                private:

                    /**
                     * 是否开启邮件发送: 0, 否; 1, 是。
                     */
                    int64_t m_sendMail;
                    bool m_sendMailHasBeenSet;

                    /**
                     * 地域配置, 如["ap-guangzhou", "ap-shanghai"]。巡检的邮件发送模板，配置需要发送巡检邮件的地域；订阅的邮件发送模板，配置当前订阅实例的所属地域。
                     */
                    std::vector<std::string> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 发送指定的健康等级的报告, 如["HEALTH", "SUB_HEALTH", "RISK", "HIGH_RISK"]。
                     */
                    std::vector<std::string> m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * 联系人id, 联系人/联系组不能都为空。
                     */
                    std::vector<int64_t> m_contactPerson;
                    bool m_contactPersonHasBeenSet;

                    /**
                     * 联系组id, 联系人/联系组不能都为空。
                     */
                    std::vector<int64_t> m_contactGroup;
                    bool m_contactGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MAILCONFIGURATION_H_
