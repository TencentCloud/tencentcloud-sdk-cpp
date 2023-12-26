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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATEWXCLOUDBASERUNSERVERDBCLUSTERREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATEWXCLOUDBASERUNSERVERDBCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateWxCloudBaseRunServerDBCluster请求参数结构体
                */
                class CreateWxCloudBaseRunServerDBClusterRequest : public AbstractModel
                {
                public:
                    CreateWxCloudBaseRunServerDBClusterRequest();
                    ~CreateWxCloudBaseRunServerDBClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取账户密码
                     * @return AccountPassword 账户密码
                     * 
                     */
                    std::string GetAccountPassword() const;

                    /**
                     * 设置账户密码
                     * @param _accountPassword 账户密码
                     * 
                     */
                    void SetAccountPassword(const std::string& _accountPassword);

                    /**
                     * 判断参数 AccountPassword 是否已赋值
                     * @return AccountPassword 是否已赋值
                     * 
                     */
                    bool AccountPasswordHasBeenSet() const;

                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取微信appid
                     * @return WxAppId 微信appid
                     * 
                     */
                    std::string GetWxAppId() const;

                    /**
                     * 设置微信appid
                     * @param _wxAppId 微信appid
                     * 
                     */
                    void SetWxAppId(const std::string& _wxAppId);

                    /**
                     * 判断参数 WxAppId 是否已赋值
                     * @return WxAppId 是否已赋值
                     * 
                     */
                    bool WxAppIdHasBeenSet() const;

                    /**
                     * 获取mysql内核版本，支持5.7,8.0
                     * @return DbVersion mysql内核版本，支持5.7,8.0
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置mysql内核版本，支持5.7,8.0
                     * @param _dbVersion mysql内核版本，支持5.7,8.0
                     * 
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     * 
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取0: 大小写敏感
1: 非大小写敏感
默认为0
                     * @return LowerCaseTableName 0: 大小写敏感
1: 非大小写敏感
默认为0
                     * 
                     */
                    std::string GetLowerCaseTableName() const;

                    /**
                     * 设置0: 大小写敏感
1: 非大小写敏感
默认为0
                     * @param _lowerCaseTableName 0: 大小写敏感
1: 非大小写敏感
默认为0
                     * 
                     */
                    void SetLowerCaseTableName(const std::string& _lowerCaseTableName);

                    /**
                     * 判断参数 LowerCaseTableName 是否已赋值
                     * @return LowerCaseTableName 是否已赋值
                     * 
                     */
                    bool LowerCaseTableNameHasBeenSet() const;

                private:

                    /**
                     * 账户密码
                     */
                    std::string m_accountPassword;
                    bool m_accountPasswordHasBeenSet;

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 微信appid
                     */
                    std::string m_wxAppId;
                    bool m_wxAppIdHasBeenSet;

                    /**
                     * mysql内核版本，支持5.7,8.0
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * 0: 大小写敏感
1: 非大小写敏感
默认为0
                     */
                    std::string m_lowerCaseTableName;
                    bool m_lowerCaseTableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATEWXCLOUDBASERUNSERVERDBCLUSTERREQUEST_H_
