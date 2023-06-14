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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEPUSHAUTHKEYREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEPUSHAUTHKEYREQUEST_H_

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
                * ModifyLivePushAuthKey请求参数结构体
                */
                class ModifyLivePushAuthKeyRequest : public AbstractModel
                {
                public:
                    ModifyLivePushAuthKeyRequest();
                    ~ModifyLivePushAuthKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取推流域名。
                     * @return DomainName 推流域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置推流域名。
                     * @param _domainName 推流域名。
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
                     * 获取是否启用，0：关闭，1：启用。
不传表示不修改当前值。
                     * @return Enable 是否启用，0：关闭，1：启用。
不传表示不修改当前值。
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置是否启用，0：关闭，1：启用。
不传表示不修改当前值。
                     * @param _enable 是否启用，0：关闭，1：启用。
不传表示不修改当前值。
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
                     * 获取主鉴权key。
不传表示不修改当前值。
                     * @return MasterAuthKey 主鉴权key。
不传表示不修改当前值。
                     * 
                     */
                    std::string GetMasterAuthKey() const;

                    /**
                     * 设置主鉴权key。
不传表示不修改当前值。
                     * @param _masterAuthKey 主鉴权key。
不传表示不修改当前值。
                     * 
                     */
                    void SetMasterAuthKey(const std::string& _masterAuthKey);

                    /**
                     * 判断参数 MasterAuthKey 是否已赋值
                     * @return MasterAuthKey 是否已赋值
                     * 
                     */
                    bool MasterAuthKeyHasBeenSet() const;

                    /**
                     * 获取备鉴权key。
不传表示不修改当前值。
                     * @return BackupAuthKey 备鉴权key。
不传表示不修改当前值。
                     * 
                     */
                    std::string GetBackupAuthKey() const;

                    /**
                     * 设置备鉴权key。
不传表示不修改当前值。
                     * @param _backupAuthKey 备鉴权key。
不传表示不修改当前值。
                     * 
                     */
                    void SetBackupAuthKey(const std::string& _backupAuthKey);

                    /**
                     * 判断参数 BackupAuthKey 是否已赋值
                     * @return BackupAuthKey 是否已赋值
                     * 
                     */
                    bool BackupAuthKeyHasBeenSet() const;

                    /**
                     * 获取有效时间，单位：秒。
                     * @return AuthDelta 有效时间，单位：秒。
                     * 
                     */
                    uint64_t GetAuthDelta() const;

                    /**
                     * 设置有效时间，单位：秒。
                     * @param _authDelta 有效时间，单位：秒。
                     * 
                     */
                    void SetAuthDelta(const uint64_t& _authDelta);

                    /**
                     * 判断参数 AuthDelta 是否已赋值
                     * @return AuthDelta 是否已赋值
                     * 
                     */
                    bool AuthDeltaHasBeenSet() const;

                private:

                    /**
                     * 推流域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 是否启用，0：关闭，1：启用。
不传表示不修改当前值。
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 主鉴权key。
不传表示不修改当前值。
                     */
                    std::string m_masterAuthKey;
                    bool m_masterAuthKeyHasBeenSet;

                    /**
                     * 备鉴权key。
不传表示不修改当前值。
                     */
                    std::string m_backupAuthKey;
                    bool m_backupAuthKeyHasBeenSet;

                    /**
                     * 有效时间，单位：秒。
                     */
                    uint64_t m_authDelta;
                    bool m_authDeltaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEPUSHAUTHKEYREQUEST_H_
