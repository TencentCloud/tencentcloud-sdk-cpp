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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBOTSTATUSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBOTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyBotStatus请求参数结构体
                */
                class ModifyBotStatusRequest : public AbstractModel
                {
                public:
                    ModifyBotStatusRequest();
                    ~ModifyBotStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取类别
                     * @return Category 类别
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置类别
                     * @param _category 类别
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取实例id
                     * @return InstanceID 实例id
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例id
                     * @param _instanceID 实例id
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取是否是bot4.0版本
                     * @return IsVersionFour 是否是bot4.0版本
                     * 
                     */
                    bool GetIsVersionFour() const;

                    /**
                     * 设置是否是bot4.0版本
                     * @param _isVersionFour 是否是bot4.0版本
                     * 
                     */
                    void SetIsVersionFour(const bool& _isVersionFour);

                    /**
                     * 判断参数 IsVersionFour 是否已赋值
                     * @return IsVersionFour 是否已赋值
                     * 
                     */
                    bool IsVersionFourHasBeenSet() const;

                    /**
                     * 获取传入Bot版本号，场景化版本为"4.1.0"
                     * @return BotVersion 传入Bot版本号，场景化版本为"4.1.0"
                     * 
                     */
                    std::string GetBotVersion() const;

                    /**
                     * 设置传入Bot版本号，场景化版本为"4.1.0"
                     * @param _botVersion 传入Bot版本号，场景化版本为"4.1.0"
                     * 
                     */
                    void SetBotVersion(const std::string& _botVersion);

                    /**
                     * 判断参数 BotVersion 是否已赋值
                     * @return BotVersion 是否已赋值
                     * 
                     */
                    bool BotVersionHasBeenSet() const;

                    /**
                     * 获取批量开启BOT开关的域名列表
                     * @return DomainList 批量开启BOT开关的域名列表
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置批量开启BOT开关的域名列表
                     * @param _domainList 批量开启BOT开关的域名列表
                     * 
                     */
                    void SetDomainList(const std::vector<std::string>& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                private:

                    /**
                     * 类别
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 是否是bot4.0版本
                     */
                    bool m_isVersionFour;
                    bool m_isVersionFourHasBeenSet;

                    /**
                     * 传入Bot版本号，场景化版本为"4.1.0"
                     */
                    std::string m_botVersion;
                    bool m_botVersionHasBeenSet;

                    /**
                     * 批量开启BOT开关的域名列表
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBOTSTATUSREQUEST_H_
