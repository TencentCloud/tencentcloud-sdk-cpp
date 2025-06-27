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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYDOMAIN_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/DisplayToolCommon.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 主域名详情
                */
                class DisplayDomain : public AbstractModel
                {
                public:
                    DisplayDomain();
                    ~DisplayDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键ID
                     * @return Id 主键ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置主键ID
                     * @param _id 主键ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取主域名
                     * @return Domain 主域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置主域名
                     * @param _domain 主域名
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
                     * 获取ICP
                     * @return ICP ICP
                     * 
                     */
                    std::string GetICP() const;

                    /**
                     * 设置ICP
                     * @param _iCP ICP
                     * 
                     */
                    void SetICP(const std::string& _iCP);

                    /**
                     * 判断参数 ICP 是否已赋值
                     * @return ICP 是否已赋值
                     * 
                     */
                    bool ICPHasBeenSet() const;

                    /**
                     * 获取注册时间
                     * @return RegisteredTime 注册时间
                     * 
                     */
                    std::string GetRegisteredTime() const;

                    /**
                     * 设置注册时间
                     * @param _registeredTime 注册时间
                     * 
                     */
                    void SetRegisteredTime(const std::string& _registeredTime);

                    /**
                     * 判断参数 RegisteredTime 是否已赋值
                     * @return RegisteredTime 是否已赋值
                     * 
                     */
                    bool RegisteredTimeHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpiredTime 过期时间
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置过期时间
                     * @param _expiredTime 过期时间
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取公司
                     * @return Company 公司
                     * 
                     */
                    std::string GetCompany() const;

                    /**
                     * 设置公司
                     * @param _company 公司
                     * 
                     */
                    void SetCompany(const std::string& _company);

                    /**
                     * 判断参数 Company 是否已赋值
                     * @return Company 是否已赋值
                     * 
                     */
                    bool CompanyHasBeenSet() const;

                    /**
                     * 获取公共字段
                     * @return DisplayToolCommon 公共字段
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置公共字段
                     * @param _displayToolCommon 公共字段
                     * 
                     */
                    void SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon);

                    /**
                     * 判断参数 DisplayToolCommon 是否已赋值
                     * @return DisplayToolCommon 是否已赋值
                     * 
                     */
                    bool DisplayToolCommonHasBeenSet() const;

                private:

                    /**
                     * 主键ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * ICP
                     */
                    std::string m_iCP;
                    bool m_iCPHasBeenSet;

                    /**
                     * 注册时间
                     */
                    std::string m_registeredTime;
                    bool m_registeredTimeHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 公司
                     */
                    std::string m_company;
                    bool m_companyHasBeenSet;

                    /**
                     * 公共字段
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYDOMAIN_H_
