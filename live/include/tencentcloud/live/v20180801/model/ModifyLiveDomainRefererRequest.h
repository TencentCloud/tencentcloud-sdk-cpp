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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEDOMAINREFERERREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEDOMAINREFERERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * ModifyLiveDomainReferer请求参数结构体
                */
                class ModifyLiveDomainRefererRequest : public AbstractModel
                {
                public:
                    ModifyLiveDomainRefererRequest();
                    ~ModifyLiveDomainRefererRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取播放域名。
                     * @return DomainName 播放域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置播放域名。
                     * @param _domainName 播放域名。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取是否开启当前域名的 Referer 黑白名单鉴权。
                     * @return Enable 是否开启当前域名的 Referer 黑白名单鉴权。
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置是否开启当前域名的 Referer 黑白名单鉴权。
                     * @param _enable 是否开启当前域名的 Referer 黑白名单鉴权。
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取名单类型，0：黑名单，1：白名单。
                     * @return Type 名单类型，0：黑名单，1：白名单。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置名单类型，0：黑名单，1：白名单。
                     * @param _type 名单类型，0：黑名单，1：白名单。
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取是否允许空 Referer，0：不允许，1：允许。
                     * @return AllowEmpty 是否允许空 Referer，0：不允许，1：允许。
                     * 
                     */
                    int64_t GetAllowEmpty() const;

                    /**
                     * 设置是否允许空 Referer，0：不允许，1：允许。
                     * @param _allowEmpty 是否允许空 Referer，0：不允许，1：允许。
                     * 
                     */
                    void SetAllowEmpty(const int64_t& _allowEmpty);

                    /**
                     * 判断参数 AllowEmpty 是否已赋值
                     * @return AllowEmpty 是否已赋值
                     * 
                     */
                    bool AllowEmptyHasBeenSet() const;

                    /**
                     * 获取Referer 名单列表，以;分隔。
                     * @return Rules Referer 名单列表，以;分隔。
                     * 
                     */
                    std::string GetRules() const;

                    /**
                     * 设置Referer 名单列表，以;分隔。
                     * @param _rules Referer 名单列表，以;分隔。
                     * 
                     */
                    void SetRules(const std::string& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * 播放域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 是否开启当前域名的 Referer 黑白名单鉴权。
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 名单类型，0：黑名单，1：白名单。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否允许空 Referer，0：不允许，1：允许。
                     */
                    int64_t m_allowEmpty;
                    bool m_allowEmptyHasBeenSet;

                    /**
                     * Referer 名单列表，以;分隔。
                     */
                    std::string m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEDOMAINREFERERREQUEST_H_
