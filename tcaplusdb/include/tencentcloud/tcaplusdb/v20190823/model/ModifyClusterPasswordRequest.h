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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERPASSWORDREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * ModifyClusterPassword请求参数结构体
                */
                class ModifyClusterPasswordRequest : public AbstractModel
                {
                public:
                    ModifyClusterPasswordRequest();
                    ~ModifyClusterPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改密码的集群ID
                     * @return ClusterId 需要修改密码的集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置需要修改密码的集群ID
                     * @param _clusterId 需要修改密码的集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群旧密码
                     * @return OldPassword 集群旧密码
                     * 
                     */
                    std::string GetOldPassword() const;

                    /**
                     * 设置集群旧密码
                     * @param _oldPassword 集群旧密码
                     * 
                     */
                    void SetOldPassword(const std::string& _oldPassword);

                    /**
                     * 判断参数 OldPassword 是否已赋值
                     * @return OldPassword 是否已赋值
                     * 
                     */
                    bool OldPasswordHasBeenSet() const;

                    /**
                     * 获取集群旧密码预期失效时间
                     * @return OldPasswordExpireTime 集群旧密码预期失效时间
                     * 
                     */
                    std::string GetOldPasswordExpireTime() const;

                    /**
                     * 设置集群旧密码预期失效时间
                     * @param _oldPasswordExpireTime 集群旧密码预期失效时间
                     * 
                     */
                    void SetOldPasswordExpireTime(const std::string& _oldPasswordExpireTime);

                    /**
                     * 判断参数 OldPasswordExpireTime 是否已赋值
                     * @return OldPasswordExpireTime 是否已赋值
                     * 
                     */
                    bool OldPasswordExpireTimeHasBeenSet() const;

                    /**
                     * 获取集群新密码，密码必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母
                     * @return NewPassword 集群新密码，密码必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母
                     * 
                     */
                    std::string GetNewPassword() const;

                    /**
                     * 设置集群新密码，密码必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母
                     * @param _newPassword 集群新密码，密码必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母
                     * 
                     */
                    void SetNewPassword(const std::string& _newPassword);

                    /**
                     * 判断参数 NewPassword 是否已赋值
                     * @return NewPassword 是否已赋值
                     * 
                     */
                    bool NewPasswordHasBeenSet() const;

                    /**
                     * 获取更新模式： `1` 更新密码；`2` 更新旧密码失效时间，默认为`1` 模式
                     * @return Mode 更新模式： `1` 更新密码；`2` 更新旧密码失效时间，默认为`1` 模式
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置更新模式： `1` 更新密码；`2` 更新旧密码失效时间，默认为`1` 模式
                     * @param _mode 更新模式： `1` 更新密码；`2` 更新旧密码失效时间，默认为`1` 模式
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * 需要修改密码的集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群旧密码
                     */
                    std::string m_oldPassword;
                    bool m_oldPasswordHasBeenSet;

                    /**
                     * 集群旧密码预期失效时间
                     */
                    std::string m_oldPasswordExpireTime;
                    bool m_oldPasswordExpireTimeHasBeenSet;

                    /**
                     * 集群新密码，密码必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母
                     */
                    std::string m_newPassword;
                    bool m_newPasswordHasBeenSet;

                    /**
                     * 更新模式： `1` 更新密码；`2` 更新旧密码失效时间，默认为`1` 模式
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERPASSWORDREQUEST_H_
