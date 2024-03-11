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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_QQACCOUNTINFO_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_QQACCOUNTINFO_H_

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
                * QQ账号信息。
                */
                class QQAccountInfo : public AbstractModel
                {
                public:
                    QQAccountInfo();
                    ~QQAccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取QQ的OpenId。
                     * @return QQOpenId QQ的OpenId。
                     * 
                     */
                    std::string GetQQOpenId() const;

                    /**
                     * 设置QQ的OpenId。
                     * @param _qQOpenId QQ的OpenId。
                     * 
                     */
                    void SetQQOpenId(const std::string& _qQOpenId);

                    /**
                     * 判断参数 QQOpenId 是否已赋值
                     * @return QQOpenId 是否已赋值
                     * 
                     */
                    bool QQOpenIdHasBeenSet() const;

                    /**
                     * 获取QQ分配给网站或应用的AppId，用来唯一标识网站或应用。
                     * @return AppIdUser QQ分配给网站或应用的AppId，用来唯一标识网站或应用。
                     * 
                     */
                    std::string GetAppIdUser() const;

                    /**
                     * 设置QQ分配给网站或应用的AppId，用来唯一标识网站或应用。
                     * @param _appIdUser QQ分配给网站或应用的AppId，用来唯一标识网站或应用。
                     * 
                     */
                    void SetAppIdUser(const std::string& _appIdUser);

                    /**
                     * 判断参数 AppIdUser 是否已赋值
                     * @return AppIdUser 是否已赋值
                     * 
                     */
                    bool AppIdUserHasBeenSet() const;

                    /**
                     * 获取用于标识QQ用户登录后所关联业务自身的账号ID。
                     * @return AssociateAccount 用于标识QQ用户登录后所关联业务自身的账号ID。
                     * 
                     */
                    std::string GetAssociateAccount() const;

                    /**
                     * 设置用于标识QQ用户登录后所关联业务自身的账号ID。
                     * @param _associateAccount 用于标识QQ用户登录后所关联业务自身的账号ID。
                     * 
                     */
                    void SetAssociateAccount(const std::string& _associateAccount);

                    /**
                     * 判断参数 AssociateAccount 是否已赋值
                     * @return AssociateAccount 是否已赋值
                     * 
                     */
                    bool AssociateAccountHasBeenSet() const;

                    /**
                     * 获取账号绑定的MD5手机号，
注释：只支中国大陆11位手机号MD5加密后位的32位小写字符串。
                     * @return MobilePhone 账号绑定的MD5手机号，
注释：只支中国大陆11位手机号MD5加密后位的32位小写字符串。
                     * 
                     */
                    std::string GetMobilePhone() const;

                    /**
                     * 设置账号绑定的MD5手机号，
注释：只支中国大陆11位手机号MD5加密后位的32位小写字符串。
                     * @param _mobilePhone 账号绑定的MD5手机号，
注释：只支中国大陆11位手机号MD5加密后位的32位小写字符串。
                     * 
                     */
                    void SetMobilePhone(const std::string& _mobilePhone);

                    /**
                     * 判断参数 MobilePhone 是否已赋值
                     * @return MobilePhone 是否已赋值
                     * 
                     */
                    bool MobilePhoneHasBeenSet() const;

                    /**
                     * 获取用户设备号，支持IMEI、IMEIMD5、IDFA、IDFAMD5
注释：IMEIMD5、IDFAMD5加密方式，对IMEI、IDFA明文进行MD5加密，加密后取32位小写值。

                     * @return DeviceId 用户设备号，支持IMEI、IMEIMD5、IDFA、IDFAMD5
注释：IMEIMD5、IDFAMD5加密方式，对IMEI、IDFA明文进行MD5加密，加密后取32位小写值。

                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置用户设备号，支持IMEI、IMEIMD5、IDFA、IDFAMD5
注释：IMEIMD5、IDFAMD5加密方式，对IMEI、IDFA明文进行MD5加密，加密后取32位小写值。

                     * @param _deviceId 用户设备号，支持IMEI、IMEIMD5、IDFA、IDFAMD5
注释：IMEIMD5、IDFAMD5加密方式，对IMEI、IDFA明文进行MD5加密，加密后取32位小写值。

                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                private:

                    /**
                     * QQ的OpenId。
                     */
                    std::string m_qQOpenId;
                    bool m_qQOpenIdHasBeenSet;

                    /**
                     * QQ分配给网站或应用的AppId，用来唯一标识网站或应用。
                     */
                    std::string m_appIdUser;
                    bool m_appIdUserHasBeenSet;

                    /**
                     * 用于标识QQ用户登录后所关联业务自身的账号ID。
                     */
                    std::string m_associateAccount;
                    bool m_associateAccountHasBeenSet;

                    /**
                     * 账号绑定的MD5手机号，
注释：只支中国大陆11位手机号MD5加密后位的32位小写字符串。
                     */
                    std::string m_mobilePhone;
                    bool m_mobilePhoneHasBeenSet;

                    /**
                     * 用户设备号，支持IMEI、IMEIMD5、IDFA、IDFAMD5
注释：IMEIMD5、IDFAMD5加密方式，对IMEI、IDFA明文进行MD5加密，加密后取32位小写值。

                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_QQACCOUNTINFO_H_
