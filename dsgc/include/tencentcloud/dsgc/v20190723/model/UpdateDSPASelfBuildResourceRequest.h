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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_UPDATEDSPASELFBUILDRESOURCEREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_UPDATEDSPASELFBUILDRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * UpdateDSPASelfBuildResource请求参数结构体
                */
                class UpdateDSPASelfBuildResourceRequest : public AbstractModel
                {
                public:
                    UpdateDSPASelfBuildResourceRequest();
                    ~UpdateDSPASelfBuildResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID。
                     * @return DspaId DSPA实例ID。
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID。
                     * @param _dspaId DSPA实例ID。
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取云资源名称，如果是通过CVM访问则填写CVM的资源ID，如果是通过LB访问则填写LB的资源ID。
                     * @return ResourceId 云资源名称，如果是通过CVM访问则填写CVM的资源ID，如果是通过LB访问则填写LB的资源ID。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置云资源名称，如果是通过CVM访问则填写CVM的资源ID，如果是通过LB访问则填写LB的资源ID。
                     * @param _resourceId 云资源名称，如果是通过CVM访问则填写CVM的资源ID，如果是通过LB访问则填写LB的资源ID。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源绑定的端口，为0则表示不更新。
                     * @return ResourceVPort 资源绑定的端口，为0则表示不更新。
                     * 
                     */
                    uint64_t GetResourceVPort() const;

                    /**
                     * 设置资源绑定的端口，为0则表示不更新。
                     * @param _resourceVPort 资源绑定的端口，为0则表示不更新。
                     * 
                     */
                    void SetResourceVPort(const uint64_t& _resourceVPort);

                    /**
                     * 判断参数 ResourceVPort 是否已赋值
                     * @return ResourceVPort 是否已赋值
                     * 
                     */
                    bool ResourceVPortHasBeenSet() const;

                    /**
                     * 获取账户名，为空则表示不更新。
UserName和Password必须同时填写或同时为空。
                     * @return UserName 账户名，为空则表示不更新。
UserName和Password必须同时填写或同时为空。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置账户名，为空则表示不更新。
UserName和Password必须同时填写或同时为空。
                     * @param _userName 账户名，为空则表示不更新。
UserName和Password必须同时填写或同时为空。
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
                     * 获取账户密码，为空则表示不更新。
UserName和Password必须同时填写或同时为空。
                     * @return Password 账户密码，为空则表示不更新。
UserName和Password必须同时填写或同时为空。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置账户密码，为空则表示不更新。
UserName和Password必须同时填写或同时为空。
                     * @param _password 账户密码，为空则表示不更新。
UserName和Password必须同时填写或同时为空。
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取授权范围：all 授权全部  manual：手动指定
                     * @return AuthRange 授权范围：all 授权全部  manual：手动指定
                     * 
                     */
                    std::string GetAuthRange() const;

                    /**
                     * 设置授权范围：all 授权全部  manual：手动指定
                     * @param _authRange 授权范围：all 授权全部  manual：手动指定
                     * 
                     */
                    void SetAuthRange(const std::string& _authRange);

                    /**
                     * 判断参数 AuthRange 是否已赋值
                     * @return AuthRange 是否已赋值
                     * 
                     */
                    bool AuthRangeHasBeenSet() const;

                    /**
                     * 获取自建数据资产的名称，支持修改
                     * @return ResourceName 自建数据资产的名称，支持修改
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置自建数据资产的名称，支持修改
                     * @param _resourceName 自建数据资产的名称，支持修改
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID。
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 云资源名称，如果是通过CVM访问则填写CVM的资源ID，如果是通过LB访问则填写LB的资源ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源绑定的端口，为0则表示不更新。
                     */
                    uint64_t m_resourceVPort;
                    bool m_resourceVPortHasBeenSet;

                    /**
                     * 账户名，为空则表示不更新。
UserName和Password必须同时填写或同时为空。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 账户密码，为空则表示不更新。
UserName和Password必须同时填写或同时为空。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 授权范围：all 授权全部  manual：手动指定
                     */
                    std::string m_authRange;
                    bool m_authRangeHasBeenSet;

                    /**
                     * 自建数据资产的名称，支持修改
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_UPDATEDSPASELFBUILDRESOURCEREQUEST_H_
