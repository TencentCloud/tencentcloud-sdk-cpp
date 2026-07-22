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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_SECRETACCOUNTINFO_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_SECRETACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * 凭据对应的账户信息(用户名、主机、版本号、轮转时间)
                */
                class SecretAccountInfo : public AbstractModel
                {
                public:
                    SecretAccountInfo();
                    ~SecretAccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>账户名称</p>
                     * @return AccountName <p>账户名称</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>账户名称</p>
                     * @param _accountName <p>账户名称</p>
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取<p>账户登录主机</p>
                     * @return Host <p>账户登录主机</p>
                     * 
                     */
                    std::vector<std::string> GetHost() const;

                    /**
                     * 设置<p>账户登录主机</p>
                     * @param _host <p>账户登录主机</p>
                     * 
                     */
                    void SetHost(const std::vector<std::string>& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>账号状态（生效中/待轮转）</p>
                     * @return Version <p>账号状态（生效中/待轮转）</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>账号状态（生效中/待轮转）</p>
                     * @param _version <p>账号状态（生效中/待轮转）</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>账号轮转时间</p>
                     * @return RotatedTime <p>账号轮转时间</p>
                     * 
                     */
                    std::string GetRotatedTime() const;

                    /**
                     * 设置<p>账号轮转时间</p>
                     * @param _rotatedTime <p>账号轮转时间</p>
                     * 
                     */
                    void SetRotatedTime(const std::string& _rotatedTime);

                    /**
                     * 判断参数 RotatedTime 是否已赋值
                     * @return RotatedTime 是否已赋值
                     * 
                     */
                    bool RotatedTimeHasBeenSet() const;

                private:

                    /**
                     * <p>账户名称</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>账户登录主机</p>
                     */
                    std::vector<std::string> m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>账号状态（生效中/待轮转）</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>账号轮转时间</p>
                     */
                    std::string m_rotatedTime;
                    bool m_rotatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_SECRETACCOUNTINFO_H_
