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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SUBACCOUNTINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SUBACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 子账号信息
                */
                class SubAccountInfo : public AbstractModel
                {
                public:
                    SubAccountInfo();
                    ~SubAccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取腾讯云主账号UIN
                     * @return Uin 腾讯云主账号UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置腾讯云主账号UIN
                     * @param _uin 腾讯云主账号UIN
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取腾讯云子账号UIN
                     * @return SubUin 腾讯云子账号UIN
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置腾讯云子账号UIN
                     * @param _subUin 腾讯云子账号UIN
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取子账号名称
                     * @return SubUinName 子账号名称
                     * 
                     */
                    std::string GetSubUinName() const;

                    /**
                     * 设置子账号名称
                     * @param _subUinName 子账号名称
                     * 
                     */
                    void SetSubUinName(const std::string& _subUinName);

                    /**
                     * 判断参数 SubUinName 是否已赋值
                     * @return SubUinName 是否已赋值
                     * 
                     */
                    bool SubUinNameHasBeenSet() const;

                    /**
                     * 获取子账号在Linux下的UID
                     * @return LinuxUid 子账号在Linux下的UID
                     * 
                     */
                    int64_t GetLinuxUid() const;

                    /**
                     * 设置子账号在Linux下的UID
                     * @param _linuxUid 子账号在Linux下的UID
                     * 
                     */
                    void SetLinuxUid(const int64_t& _linuxUid);

                    /**
                     * 判断参数 LinuxUid 是否已赋值
                     * @return LinuxUid 是否已赋值
                     * 
                     */
                    bool LinuxUidHasBeenSet() const;

                    /**
                     * 获取子账号在Linux下的GID
                     * @return LinuxGid 子账号在Linux下的GID
                     * 
                     */
                    int64_t GetLinuxGid() const;

                    /**
                     * 设置子账号在Linux下的GID
                     * @param _linuxGid 子账号在Linux下的GID
                     * 
                     */
                    void SetLinuxGid(const int64_t& _linuxGid);

                    /**
                     * 判断参数 LinuxGid 是否已赋值
                     * @return LinuxGid 是否已赋值
                     * 
                     */
                    bool LinuxGidHasBeenSet() const;

                    /**
                     * 获取子账号在Linux下的用户名
                     * @return LinuxUserName 子账号在Linux下的用户名
                     * 
                     */
                    std::string GetLinuxUserName() const;

                    /**
                     * 设置子账号在Linux下的用户名
                     * @param _linuxUserName 子账号在Linux下的用户名
                     * 
                     */
                    void SetLinuxUserName(const std::string& _linuxUserName);

                    /**
                     * 判断参数 LinuxUserName 是否已赋值
                     * @return LinuxUserName 是否已赋值
                     * 
                     */
                    bool LinuxUserNameHasBeenSet() const;

                    /**
                     * 获取是否开启 root 登录
                     * @return EnableRootLogin 是否开启 root 登录
                     * 
                     */
                    bool GetEnableRootLogin() const;

                    /**
                     * 设置是否开启 root 登录
                     * @param _enableRootLogin 是否开启 root 登录
                     * 
                     */
                    void SetEnableRootLogin(const bool& _enableRootLogin);

                    /**
                     * 判断参数 EnableRootLogin 是否已赋值
                     * @return EnableRootLogin 是否已赋值
                     * 
                     */
                    bool EnableRootLoginHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 腾讯云主账号UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 腾讯云子账号UIN
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * 子账号名称
                     */
                    std::string m_subUinName;
                    bool m_subUinNameHasBeenSet;

                    /**
                     * 子账号在Linux下的UID
                     */
                    int64_t m_linuxUid;
                    bool m_linuxUidHasBeenSet;

                    /**
                     * 子账号在Linux下的GID
                     */
                    int64_t m_linuxGid;
                    bool m_linuxGidHasBeenSet;

                    /**
                     * 子账号在Linux下的用户名
                     */
                    std::string m_linuxUserName;
                    bool m_linuxUserNameHasBeenSet;

                    /**
                     * 是否开启 root 登录
                     */
                    bool m_enableRootLogin;
                    bool m_enableRootLoginHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SUBACCOUNTINFO_H_
