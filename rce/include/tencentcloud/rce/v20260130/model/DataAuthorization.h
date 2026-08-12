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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_DATAAUTHORIZATION_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_DATAAUTHORIZATION_H_

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
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 数据授权信息
                */
                class DataAuthorization : public AbstractModel
                {
                public:
                    DataAuthorization();
                    ~DataAuthorization() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据委托方，客户主体名称</p>
                     * @return DataProviderName <p>数据委托方，客户主体名称</p>
                     * 
                     */
                    std::string GetDataProviderName() const;

                    /**
                     * 设置<p>数据委托方，客户主体名称</p>
                     * @param _dataProviderName <p>数据委托方，客户主体名称</p>
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
                     * 获取<p>数据受托方，腾讯云主体名称，固定填：腾讯云计算（北京）有限责任公司</p>
                     * @return DataRecipientName <p>数据受托方，腾讯云主体名称，固定填：腾讯云计算（北京）有限责任公司</p>
                     * 
                     */
                    std::string GetDataRecipientName() const;

                    /**
                     * 设置<p>数据受托方，腾讯云主体名称，固定填：腾讯云计算（北京）有限责任公司</p>
                     * @param _dataRecipientName <p>数据受托方，腾讯云主体名称，固定填：腾讯云计算（北京）有限责任公司</p>
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
                     * 获取<p>客户请求RCE所提供的用户数据类型，支持多选</p><p>枚举值：</p><ul><li>1： 手机号</li><li>2： 微信开放账号</li><li>3： QQ开放账号</li><li>4： IP地址</li><li>5： URL网址</li><li>999： 其他</li></ul>
                     * @return UserDataType <p>客户请求RCE所提供的用户数据类型，支持多选</p><p>枚举值：</p><ul><li>1： 手机号</li><li>2： 微信开放账号</li><li>3： QQ开放账号</li><li>4： IP地址</li><li>5： URL网址</li><li>999： 其他</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetUserDataType() const;

                    /**
                     * 设置<p>客户请求RCE所提供的用户数据类型，支持多选</p><p>枚举值：</p><ul><li>1： 手机号</li><li>2： 微信开放账号</li><li>3： QQ开放账号</li><li>4： IP地址</li><li>5： URL网址</li><li>999： 其他</li></ul>
                     * @param _userDataType <p>客户请求RCE所提供的用户数据类型，支持多选</p><p>枚举值：</p><ul><li>1： 手机号</li><li>2： 微信开放账号</li><li>3： QQ开放账号</li><li>4： IP地址</li><li>5： URL网址</li><li>999： 其他</li></ul>
                     * 
                     */
                    void SetUserDataType(const std::vector<int64_t>& _userDataType);

                    /**
                     * 判断参数 UserDataType 是否已赋值
                     * @return UserDataType 是否已赋值
                     * 
                     */
                    bool UserDataTypeHasBeenSet() const;

                    /**
                     * 获取<p>客户是否已按合规指南要求获取用户授权，同意客户委托腾讯云处理入参信息</p><p>枚举值：</p><ul><li>true： 已授权</li><li>false： 未授权</li></ul>
                     * @return IsAuthorized <p>客户是否已按合规指南要求获取用户授权，同意客户委托腾讯云处理入参信息</p><p>枚举值：</p><ul><li>true： 已授权</li><li>false： 未授权</li></ul>
                     * 
                     */
                    bool GetIsAuthorized() const;

                    /**
                     * 设置<p>客户是否已按合规指南要求获取用户授权，同意客户委托腾讯云处理入参信息</p><p>枚举值：</p><ul><li>true： 已授权</li><li>false： 未授权</li></ul>
                     * @param _isAuthorized <p>客户是否已按合规指南要求获取用户授权，同意客户委托腾讯云处理入参信息</p><p>枚举值：</p><ul><li>true： 已授权</li><li>false： 未授权</li></ul>
                     * 
                     */
                    void SetIsAuthorized(const bool& _isAuthorized);

                    /**
                     * 判断参数 IsAuthorized 是否已赋值
                     * @return IsAuthorized 是否已赋值
                     * 
                     */
                    bool IsAuthorizedHasBeenSet() const;

                    /**
                     * 获取<p>客户是否已按合规指南要求获取用户授权，同意腾讯云结合客户提供的信息，对已合法收集的用户数据进行必要处理得出服务结果，并返回给客户</p><p>枚举值：</p><ul><li>true： 已授权</li><li>false： 未授权</li></ul>
                     * @return IsOrderHanding <p>客户是否已按合规指南要求获取用户授权，同意腾讯云结合客户提供的信息，对已合法收集的用户数据进行必要处理得出服务结果，并返回给客户</p><p>枚举值：</p><ul><li>true： 已授权</li><li>false： 未授权</li></ul>
                     * 
                     */
                    bool GetIsOrderHanding() const;

                    /**
                     * 设置<p>客户是否已按合规指南要求获取用户授权，同意腾讯云结合客户提供的信息，对已合法收集的用户数据进行必要处理得出服务结果，并返回给客户</p><p>枚举值：</p><ul><li>true： 已授权</li><li>false： 未授权</li></ul>
                     * @param _isOrderHanding <p>客户是否已按合规指南要求获取用户授权，同意腾讯云结合客户提供的信息，对已合法收集的用户数据进行必要处理得出服务结果，并返回给客户</p><p>枚举值：</p><ul><li>true： 已授权</li><li>false： 未授权</li></ul>
                     * 
                     */
                    void SetIsOrderHanding(const bool& _isOrderHanding);

                    /**
                     * 判断参数 IsOrderHanding 是否已赋值
                     * @return IsOrderHanding 是否已赋值
                     * 
                     */
                    bool IsOrderHandingHasBeenSet() const;

                    /**
                     * 获取<p>客户获得的用户授权期限Unix时间戳（单位秒），不填默认无固定期限</p>
                     * @return AuthorizationDeadline <p>客户获得的用户授权期限Unix时间戳（单位秒），不填默认无固定期限</p>
                     * 
                     */
                    int64_t GetAuthorizationDeadline() const;

                    /**
                     * 设置<p>客户获得的用户授权期限Unix时间戳（单位秒），不填默认无固定期限</p>
                     * @param _authorizationDeadline <p>客户获得的用户授权期限Unix时间戳（单位秒），不填默认无固定期限</p>
                     * 
                     */
                    void SetAuthorizationDeadline(const int64_t& _authorizationDeadline);

                    /**
                     * 判断参数 AuthorizationDeadline 是否已赋值
                     * @return AuthorizationDeadline 是否已赋值
                     * 
                     */
                    bool AuthorizationDeadlineHasBeenSet() const;

                    /**
                     * 获取<p>客户获得用户授权所依赖的协议地址</p>
                     * @return PrivacyPolicyLink <p>客户获得用户授权所依赖的协议地址</p>
                     * 
                     */
                    std::string GetPrivacyPolicyLink() const;

                    /**
                     * 设置<p>客户获得用户授权所依赖的协议地址</p>
                     * @param _privacyPolicyLink <p>客户获得用户授权所依赖的协议地址</p>
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
                     * <p>数据委托方，客户主体名称</p>
                     */
                    std::string m_dataProviderName;
                    bool m_dataProviderNameHasBeenSet;

                    /**
                     * <p>数据受托方，腾讯云主体名称，固定填：腾讯云计算（北京）有限责任公司</p>
                     */
                    std::string m_dataRecipientName;
                    bool m_dataRecipientNameHasBeenSet;

                    /**
                     * <p>客户请求RCE所提供的用户数据类型，支持多选</p><p>枚举值：</p><ul><li>1： 手机号</li><li>2： 微信开放账号</li><li>3： QQ开放账号</li><li>4： IP地址</li><li>5： URL网址</li><li>999： 其他</li></ul>
                     */
                    std::vector<int64_t> m_userDataType;
                    bool m_userDataTypeHasBeenSet;

                    /**
                     * <p>客户是否已按合规指南要求获取用户授权，同意客户委托腾讯云处理入参信息</p><p>枚举值：</p><ul><li>true： 已授权</li><li>false： 未授权</li></ul>
                     */
                    bool m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                    /**
                     * <p>客户是否已按合规指南要求获取用户授权，同意腾讯云结合客户提供的信息，对已合法收集的用户数据进行必要处理得出服务结果，并返回给客户</p><p>枚举值：</p><ul><li>true： 已授权</li><li>false： 未授权</li></ul>
                     */
                    bool m_isOrderHanding;
                    bool m_isOrderHandingHasBeenSet;

                    /**
                     * <p>客户获得的用户授权期限Unix时间戳（单位秒），不填默认无固定期限</p>
                     */
                    int64_t m_authorizationDeadline;
                    bool m_authorizationDeadlineHasBeenSet;

                    /**
                     * <p>客户获得用户授权所依赖的协议地址</p>
                     */
                    std::string m_privacyPolicyLink;
                    bool m_privacyPolicyLinkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_DATAAUTHORIZATION_H_
