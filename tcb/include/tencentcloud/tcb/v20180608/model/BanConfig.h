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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_BANCONFIG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_BANCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 封禁配置
                */
                class BanConfig : public AbstractModel
                {
                public:
                    BanConfig();
                    ~BanConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ip白名单，支持ipv4、ipv6，支持CIDR
                     * @return IpWhiteList ip白名单，支持ipv4、ipv6，支持CIDR
                     * 
                     */
                    std::vector<std::string> GetIpWhiteList() const;

                    /**
                     * 设置ip白名单，支持ipv4、ipv6，支持CIDR
                     * @param _ipWhiteList ip白名单，支持ipv4、ipv6，支持CIDR
                     * 
                     */
                    void SetIpWhiteList(const std::vector<std::string>& _ipWhiteList);

                    /**
                     * 判断参数 IpWhiteList 是否已赋值
                     * @return IpWhiteList 是否已赋值
                     * 
                     */
                    bool IpWhiteListHasBeenSet() const;

                    /**
                     * 获取ip黑名单，支持ipv4、ipv6，支持CIDR
                     * @return IpBlackList ip黑名单，支持ipv4、ipv6，支持CIDR
                     * 
                     */
                    std::vector<std::string> GetIpBlackList() const;

                    /**
                     * 设置ip黑名单，支持ipv4、ipv6，支持CIDR
                     * @param _ipBlackList ip黑名单，支持ipv4、ipv6，支持CIDR
                     * 
                     */
                    void SetIpBlackList(const std::vector<std::string>& _ipBlackList);

                    /**
                     * 判断参数 IpBlackList 是否已赋值
                     * @return IpBlackList 是否已赋值
                     * 
                     */
                    bool IpBlackListHasBeenSet() const;

                    /**
                     * 获取地域白名单（国家英文名）
                     * @return CountryWhiteList 地域白名单（国家英文名）
                     * 
                     */
                    std::vector<std::string> GetCountryWhiteList() const;

                    /**
                     * 设置地域白名单（国家英文名）
                     * @param _countryWhiteList 地域白名单（国家英文名）
                     * 
                     */
                    void SetCountryWhiteList(const std::vector<std::string>& _countryWhiteList);

                    /**
                     * 判断参数 CountryWhiteList 是否已赋值
                     * @return CountryWhiteList 是否已赋值
                     * 
                     */
                    bool CountryWhiteListHasBeenSet() const;

                    /**
                     * 获取地域黑名单（国家英文名）
                     * @return CountryBlackList 地域黑名单（国家英文名）
                     * 
                     */
                    std::vector<std::string> GetCountryBlackList() const;

                    /**
                     * 设置地域黑名单（国家英文名）
                     * @param _countryBlackList 地域黑名单（国家英文名）
                     * 
                     */
                    void SetCountryBlackList(const std::vector<std::string>& _countryBlackList);

                    /**
                     * 判断参数 CountryBlackList 是否已赋值
                     * @return CountryBlackList 是否已赋值
                     * 
                     */
                    bool CountryBlackListHasBeenSet() const;

                private:

                    /**
                     * ip白名单，支持ipv4、ipv6，支持CIDR
                     */
                    std::vector<std::string> m_ipWhiteList;
                    bool m_ipWhiteListHasBeenSet;

                    /**
                     * ip黑名单，支持ipv4、ipv6，支持CIDR
                     */
                    std::vector<std::string> m_ipBlackList;
                    bool m_ipBlackListHasBeenSet;

                    /**
                     * 地域白名单（国家英文名）
                     */
                    std::vector<std::string> m_countryWhiteList;
                    bool m_countryWhiteListHasBeenSet;

                    /**
                     * 地域黑名单（国家英文名）
                     */
                    std::vector<std::string> m_countryBlackList;
                    bool m_countryBlackListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_BANCONFIG_H_
