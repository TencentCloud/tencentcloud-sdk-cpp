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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_USERINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 新增或是修改用户
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群实例id
                     * @return InstanceId 集群实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例id
                     * @param _instanceId 集群实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return UserName 用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param _userName 用户名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取密码
                     * @return PassWord 密码
                     * 
                     */
                    std::string GetPassWord() const;

                    /**
                     * 设置密码
                     * @param _passWord 密码
                     * 
                     */
                    void SetPassWord(const std::string& _passWord);

                    /**
                     * 判断参数 PassWord 是否已赋值
                     * @return PassWord 是否已赋值
                     * 
                     */
                    bool PassWordHasBeenSet() const;

                    /**
                     * 获取用户链接来自的 IP
                     * @return WhiteHost 用户链接来自的 IP
                     * 
                     */
                    std::string GetWhiteHost() const;

                    /**
                     * 设置用户链接来自的 IP
                     * @param _whiteHost 用户链接来自的 IP
                     * 
                     */
                    void SetWhiteHost(const std::string& _whiteHost);

                    /**
                     * 判断参数 WhiteHost 是否已赋值
                     * @return WhiteHost 是否已赋值
                     * 
                     */
                    bool WhiteHostHasBeenSet() const;

                    /**
                     * 获取修改前用户链接来自的 IP
                     * @return OldWhiteHost 修改前用户链接来自的 IP
                     * 
                     */
                    std::string GetOldWhiteHost() const;

                    /**
                     * 设置修改前用户链接来自的 IP
                     * @param _oldWhiteHost 修改前用户链接来自的 IP
                     * 
                     */
                    void SetOldWhiteHost(const std::string& _oldWhiteHost);

                    /**
                     * 判断参数 OldWhiteHost 是否已赋值
                     * @return OldWhiteHost 是否已赋值
                     * 
                     */
                    bool OldWhiteHostHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Describe 描述
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置描述
                     * @param _describe 描述
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取旧密码
                     * @return OldPwd 旧密码
                     * 
                     */
                    std::string GetOldPwd() const;

                    /**
                     * 设置旧密码
                     * @param _oldPwd 旧密码
                     * 
                     */
                    void SetOldPwd(const std::string& _oldPwd);

                    /**
                     * 判断参数 OldPwd 是否已赋值
                     * @return OldPwd 是否已赋值
                     * 
                     */
                    bool OldPwdHasBeenSet() const;

                    /**
                     * 获取绑定的子用户uin
                     * @return CamUin 绑定的子用户uin
                     * 
                     */
                    std::string GetCamUin() const;

                    /**
                     * 设置绑定的子用户uin
                     * @param _camUin 绑定的子用户uin
                     * 
                     */
                    void SetCamUin(const std::string& _camUin);

                    /**
                     * 判断参数 CamUin 是否已赋值
                     * @return CamUin 是否已赋值
                     * 
                     */
                    bool CamUinHasBeenSet() const;

                    /**
                     * 获取ranger group id列表
                     * @return CamRangerGroupIds ranger group id列表
                     * 
                     */
                    std::vector<int64_t> GetCamRangerGroupIds() const;

                    /**
                     * 设置ranger group id列表
                     * @param _camRangerGroupIds ranger group id列表
                     * 
                     */
                    void SetCamRangerGroupIds(const std::vector<int64_t>& _camRangerGroupIds);

                    /**
                     * 判断参数 CamRangerGroupIds 是否已赋值
                     * @return CamRangerGroupIds 是否已赋值
                     * 
                     */
                    bool CamRangerGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 集群实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 密码
                     */
                    std::string m_passWord;
                    bool m_passWordHasBeenSet;

                    /**
                     * 用户链接来自的 IP
                     */
                    std::string m_whiteHost;
                    bool m_whiteHostHasBeenSet;

                    /**
                     * 修改前用户链接来自的 IP
                     */
                    std::string m_oldWhiteHost;
                    bool m_oldWhiteHostHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * 旧密码
                     */
                    std::string m_oldPwd;
                    bool m_oldPwdHasBeenSet;

                    /**
                     * 绑定的子用户uin
                     */
                    std::string m_camUin;
                    bool m_camUinHasBeenSet;

                    /**
                     * ranger group id列表
                     */
                    std::vector<int64_t> m_camRangerGroupIds;
                    bool m_camRangerGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_USERINFO_H_
