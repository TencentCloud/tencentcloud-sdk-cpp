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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIMAGEREGISTRYCONNECTIVITYTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIMAGEREGISTRYCONNECTIVITYTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ImageRegistryDetectionHostParam.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateImageRegistryConnectivityTask请求参数结构体
                */
                class CreateImageRegistryConnectivityTaskRequest : public AbstractModel
                {
                public:
                    CreateImageRegistryConnectivityTaskRequest();
                    ~CreateImageRegistryConnectivityTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库名</p>
                     * @return RegistryName <p>镜像仓库名</p>
                     * 
                     */
                    std::string GetRegistryName() const;

                    /**
                     * 设置<p>镜像仓库名</p>
                     * @param _registryName <p>镜像仓库名</p>
                     * 
                     */
                    void SetRegistryName(const std::string& _registryName);

                    /**
                     * 判断参数 RegistryName 是否已赋值
                     * @return RegistryName 是否已赋值
                     * 
                     */
                    bool RegistryNameHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库所在region</p>
                     * @return RegistryRegion <p>镜像仓库所在region</p>
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置<p>镜像仓库所在region</p>
                     * @param _registryRegion <p>镜像仓库所在region</p>
                     * 
                     */
                    void SetRegistryRegion(const std::string& _registryRegion);

                    /**
                     * 判断参数 RegistryRegion 是否已赋值
                     * @return RegistryRegion 是否已赋值
                     * 
                     */
                    bool RegistryRegionHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库类型</p>
                     * @return RegistryType <p>镜像仓库类型</p>
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置<p>镜像仓库类型</p>
                     * @param _registryType <p>镜像仓库类型</p>
                     * 
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库API版本</p>
                     * @return ApiVersion <p>镜像仓库API版本</p>
                     * 
                     */
                    std::string GetApiVersion() const;

                    /**
                     * 设置<p>镜像仓库API版本</p>
                     * @param _apiVersion <p>镜像仓库API版本</p>
                     * 
                     */
                    void SetApiVersion(const std::string& _apiVersion);

                    /**
                     * 判断参数 ApiVersion 是否已赋值
                     * @return ApiVersion 是否已赋值
                     * 
                     */
                    bool ApiVersionHasBeenSet() const;

                    /**
                     * 获取<p>账号</p>
                     * @return UserName <p>账号</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>账号</p>
                     * @param _userName <p>账号</p>
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
                     * 获取<p>密码</p>
                     * @return Password <p>密码</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>密码</p>
                     * @param _password <p>密码</p>
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
                     * 获取<p>镜像仓库url</p>
                     * @return Url <p>镜像仓库url</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>镜像仓库url</p>
                     * @param _url <p>镜像仓库url</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>链接检查参数</p>
                     * @return Params <p>链接检查参数</p>
                     * 
                     */
                    std::vector<ImageRegistryDetectionHostParam> GetParams() const;

                    /**
                     * 设置<p>链接检查参数</p>
                     * @param _params <p>链接检查参数</p>
                     * 
                     */
                    void SetParams(const std::vector<ImageRegistryDetectionHostParam>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取<p>仓库id</p>
                     * @return RegistryId <p>仓库id</p>
                     * 
                     */
                    uint64_t GetRegistryId() const;

                    /**
                     * 设置<p>仓库id</p>
                     * @param _registryId <p>仓库id</p>
                     * 
                     */
                    void SetRegistryId(const uint64_t& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取<p>仓库实例id</p>
                     * @return InstanceId <p>仓库实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>仓库实例id</p>
                     * @param _instanceId <p>仓库实例id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>镜像仓库名</p>
                     */
                    std::string m_registryName;
                    bool m_registryNameHasBeenSet;

                    /**
                     * <p>镜像仓库所在region</p>
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * <p>镜像仓库类型</p>
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * <p>镜像仓库API版本</p>
                     */
                    std::string m_apiVersion;
                    bool m_apiVersionHasBeenSet;

                    /**
                     * <p>账号</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>密码</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>镜像仓库url</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>链接检查参数</p>
                     */
                    std::vector<ImageRegistryDetectionHostParam> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * <p>仓库id</p>
                     */
                    uint64_t m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>仓库实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIMAGEREGISTRYCONNECTIVITYTASKREQUEST_H_
