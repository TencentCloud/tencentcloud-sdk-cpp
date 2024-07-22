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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_DATAAUTHORIZATIONINFO_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_DATAAUTHORIZATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 数据授权信息
                */
                class DataAuthorizationInfo : public AbstractModel
                {
                public:
                    DataAuthorizationInfo();
                    ~DataAuthorizationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户主体名称。

示例值：某某有限公司。
                     * @return DataProviderName 客户主体名称。

示例值：某某有限公司。
                     * 
                     */
                    std::string GetDataProviderName() const;

                    /**
                     * 设置客户主体名称。

示例值：某某有限公司。
                     * @param _dataProviderName 客户主体名称。

示例值：某某有限公司。
                     * 
                     */
                    void SetDataProviderName(const std::string& _dataProviderName);

                    /**
                     * 判断参数 DataProviderName 是否已赋值
                     * @return DataProviderName 是否已赋值
                     * 
                     */
                    bool DataProviderNameHasBeenSet() const;

                    /**
                     * 获取接收方主体名称。

固定填：腾讯云计算（北京）有限责任公司

示例值：腾讯云计算（北京）有限责任公司
                     * @return DataRecipientName 接收方主体名称。

固定填：腾讯云计算（北京）有限责任公司

示例值：腾讯云计算（北京）有限责任公司
                     * 
                     */
                    std::string GetDataRecipientName() const;

                    /**
                     * 设置接收方主体名称。

固定填：腾讯云计算（北京）有限责任公司

示例值：腾讯云计算（北京）有限责任公司
                     * @param _dataRecipientName 接收方主体名称。

固定填：腾讯云计算（北京）有限责任公司

示例值：腾讯云计算（北京）有限责任公司
                     * 
                     */
                    void SetDataRecipientName(const std::string& _dataRecipientName);

                    /**
                     * 判断参数 DataRecipientName 是否已赋值
                     * @return DataRecipientName 是否已赋值
                     * 
                     */
                    bool DataRecipientNameHasBeenSet() const;

                    /**
                     * 获取客户请求RCE所涉及的用户敏感数据类型，支持多选。实际以接口请求传参为准。

1-手机号；

2-微信开放账号；

3-QQ开放账号；

4-IP地址；

5-设备指纹；

999-其它；

示例值：[1, 4]
                     * @return UserDataType 客户请求RCE所涉及的用户敏感数据类型，支持多选。实际以接口请求传参为准。

1-手机号；

2-微信开放账号；

3-QQ开放账号；

4-IP地址；

5-设备指纹；

999-其它；

示例值：[1, 4]
                     * 
                     */
                    std::vector<uint64_t> GetUserDataType() const;

                    /**
                     * 设置客户请求RCE所涉及的用户敏感数据类型，支持多选。实际以接口请求传参为准。

1-手机号；

2-微信开放账号；

3-QQ开放账号；

4-IP地址；

5-设备指纹；

999-其它；

示例值：[1, 4]
                     * @param _userDataType 客户请求RCE所涉及的用户敏感数据类型，支持多选。实际以接口请求传参为准。

1-手机号；

2-微信开放账号；

3-QQ开放账号；

4-IP地址；

5-设备指纹；

999-其它；

示例值：[1, 4]
                     * 
                     */
                    void SetUserDataType(const std::vector<uint64_t>& _userDataType);

                    /**
                     * 判断参数 UserDataType 是否已赋值
                     * @return UserDataType 是否已赋值
                     * 
                     */
                    bool UserDataTypeHasBeenSet() const;

                    /**
                     * 获取客户是否已经获取用户授权。

1-已授权；其它值为未授权。

示例值：1
                     * @return IsAuthorize 客户是否已经获取用户授权。

1-已授权；其它值为未授权。

示例值：1
                     * 
                     */
                    uint64_t GetIsAuthorize() const;

                    /**
                     * 设置客户是否已经获取用户授权。

1-已授权；其它值为未授权。

示例值：1
                     * @param _isAuthorize 客户是否已经获取用户授权。

1-已授权；其它值为未授权。

示例值：1
                     * 
                     */
                    void SetIsAuthorize(const uint64_t& _isAuthorize);

                    /**
                     * 判断参数 IsAuthorize 是否已赋值
                     * @return IsAuthorize 是否已赋值
                     * 
                     */
                    bool IsAuthorizeHasBeenSet() const;

                    /**
                     * 获取是否是用户个人敏感数据。

固定填：1。

示例值：1
                     * @return IsPersonalData 是否是用户个人敏感数据。

固定填：1。

示例值：1
                     * 
                     */
                    uint64_t GetIsPersonalData() const;

                    /**
                     * 设置是否是用户个人敏感数据。

固定填：1。

示例值：1
                     * @param _isPersonalData 是否是用户个人敏感数据。

固定填：1。

示例值：1
                     * 
                     */
                    void SetIsPersonalData(const uint64_t& _isPersonalData);

                    /**
                     * 判断参数 IsPersonalData 是否已赋值
                     * @return IsPersonalData 是否已赋值
                     * 
                     */
                    bool IsPersonalDataHasBeenSet() const;

                    /**
                     * 获取客户获得的用户授权期限时间戳（单位秒）。

不填默认无固定期限。

示例值：1719805604
                     * @return AuthorizationTerm 客户获得的用户授权期限时间戳（单位秒）。

不填默认无固定期限。

示例值：1719805604
                     * 
                     */
                    uint64_t GetAuthorizationTerm() const;

                    /**
                     * 设置客户获得的用户授权期限时间戳（单位秒）。

不填默认无固定期限。

示例值：1719805604
                     * @param _authorizationTerm 客户获得的用户授权期限时间戳（单位秒）。

不填默认无固定期限。

示例值：1719805604
                     * 
                     */
                    void SetAuthorizationTerm(const uint64_t& _authorizationTerm);

                    /**
                     * 判断参数 AuthorizationTerm 是否已赋值
                     * @return AuthorizationTerm 是否已赋值
                     * 
                     */
                    bool AuthorizationTermHasBeenSet() const;

                    /**
                     * 获取客户获得用户授权所依赖的协议地址。

示例值：https://www.*****.com/*****
                     * @return PrivacyPolicyLink 客户获得用户授权所依赖的协议地址。

示例值：https://www.*****.com/*****
                     * 
                     */
                    std::string GetPrivacyPolicyLink() const;

                    /**
                     * 设置客户获得用户授权所依赖的协议地址。

示例值：https://www.*****.com/*****
                     * @param _privacyPolicyLink 客户获得用户授权所依赖的协议地址。

示例值：https://www.*****.com/*****
                     * 
                     */
                    void SetPrivacyPolicyLink(const std::string& _privacyPolicyLink);

                    /**
                     * 判断参数 PrivacyPolicyLink 是否已赋值
                     * @return PrivacyPolicyLink 是否已赋值
                     * 
                     */
                    bool PrivacyPolicyLinkHasBeenSet() const;

                private:

                    /**
                     * 客户主体名称。

示例值：某某有限公司。
                     */
                    std::string m_dataProviderName;
                    bool m_dataProviderNameHasBeenSet;

                    /**
                     * 接收方主体名称。

固定填：腾讯云计算（北京）有限责任公司

示例值：腾讯云计算（北京）有限责任公司
                     */
                    std::string m_dataRecipientName;
                    bool m_dataRecipientNameHasBeenSet;

                    /**
                     * 客户请求RCE所涉及的用户敏感数据类型，支持多选。实际以接口请求传参为准。

1-手机号；

2-微信开放账号；

3-QQ开放账号；

4-IP地址；

5-设备指纹；

999-其它；

示例值：[1, 4]
                     */
                    std::vector<uint64_t> m_userDataType;
                    bool m_userDataTypeHasBeenSet;

                    /**
                     * 客户是否已经获取用户授权。

1-已授权；其它值为未授权。

示例值：1
                     */
                    uint64_t m_isAuthorize;
                    bool m_isAuthorizeHasBeenSet;

                    /**
                     * 是否是用户个人敏感数据。

固定填：1。

示例值：1
                     */
                    uint64_t m_isPersonalData;
                    bool m_isPersonalDataHasBeenSet;

                    /**
                     * 客户获得的用户授权期限时间戳（单位秒）。

不填默认无固定期限。

示例值：1719805604
                     */
                    uint64_t m_authorizationTerm;
                    bool m_authorizationTermHasBeenSet;

                    /**
                     * 客户获得用户授权所依赖的协议地址。

示例值：https://www.*****.com/*****
                     */
                    std::string m_privacyPolicyLink;
                    bool m_privacyPolicyLinkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_DATAAUTHORIZATIONINFO_H_
