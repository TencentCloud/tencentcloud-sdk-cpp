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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_MODIFYMODELREQUEST_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_MODIFYMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/TargetHostDTO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * ModifyModel请求参数结构体
                */
                class ModifyModelRequest : public AbstractModel
                {
                public:
                    ModifyModelRequest();
                    ~ModifyModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例
                     * @return InstanceID 实例
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例
                     * @param _instanceID 实例
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取模型ID
                     * @return ID 模型ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置模型ID
                     * @param _iD 模型ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取模型名称
                     * @return Name 模型名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模型名称
                     * @param _name 模型名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取协议类型：http/https
                     * @return HttpProtocolType 协议类型：http/https
                     * 
                     */
                    std::string GetHttpProtocolType() const;

                    /**
                     * 设置协议类型：http/https
                     * @param _httpProtocolType 协议类型：http/https
                     * 
                     */
                    void SetHttpProtocolType(const std::string& _httpProtocolType);

                    /**
                     * 判断参数 HttpProtocolType 是否已赋值
                     * @return HttpProtocolType 是否已赋值
                     * 
                     */
                    bool HttpProtocolTypeHasBeenSet() const;

                    /**
                     * 获取目标路径
                     * @return TargetPath 目标路径
                     * 
                     */
                    std::string GetTargetPath() const;

                    /**
                     * 设置目标路径
                     * @param _targetPath 目标路径
                     * 
                     */
                    void SetTargetPath(const std::string& _targetPath);

                    /**
                     * 判断参数 TargetPath 是否已赋值
                     * @return TargetPath 是否已赋值
                     * 
                     */
                    bool TargetPathHasBeenSet() const;

                    /**
                     * 获取目标服务器
                     * @return TargetHosts 目标服务器
                     * 
                     */
                    std::vector<TargetHostDTO> GetTargetHosts() const;

                    /**
                     * 设置目标服务器
                     * @param _targetHosts 目标服务器
                     * 
                     */
                    void SetTargetHosts(const std::vector<TargetHostDTO>& _targetHosts);

                    /**
                     * 判断参数 TargetHosts 是否已赋值
                     * @return TargetHosts 是否已赋值
                     * 
                     */
                    bool TargetHostsHasBeenSet() const;

                    /**
                     * 获取凭据ID
                     * @return CredentialID 凭据ID
                     * 
                     */
                    std::string GetCredentialID() const;

                    /**
                     * 设置凭据ID
                     * @param _credentialID 凭据ID
                     * 
                     */
                    void SetCredentialID(const std::string& _credentialID);

                    /**
                     * 判断参数 CredentialID 是否已赋值
                     * @return CredentialID 是否已赋值
                     * 
                     */
                    bool CredentialIDHasBeenSet() const;

                    /**
                     * 获取https时，是否检查证书合法
                     * @return CheckTargetCertsError https时，是否检查证书合法
                     * 
                     */
                    bool GetCheckTargetCertsError() const;

                    /**
                     * 设置https时，是否检查证书合法
                     * @param _checkTargetCertsError https时，是否检查证书合法
                     * 
                     */
                    void SetCheckTargetCertsError(const bool& _checkTargetCertsError);

                    /**
                     * 判断参数 CheckTargetCertsError 是否已赋值
                     * @return CheckTargetCertsError 是否已赋值
                     * 
                     */
                    bool CheckTargetCertsErrorHasBeenSet() const;

                    /**
                     * 获取http协议版本：1.1/2.0
                     * @return HttpProtocolVersion http协议版本：1.1/2.0
                     * 
                     */
                    std::string GetHttpProtocolVersion() const;

                    /**
                     * 设置http协议版本：1.1/2.0
                     * @param _httpProtocolVersion http协议版本：1.1/2.0
                     * 
                     */
                    void SetHttpProtocolVersion(const std::string& _httpProtocolVersion);

                    /**
                     * 判断参数 HttpProtocolVersion 是否已赋值
                     * @return HttpProtocolVersion 是否已赋值
                     * 
                     */
                    bool HttpProtocolVersionHasBeenSet() const;

                private:

                    /**
                     * 实例
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 模型ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 模型名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 协议类型：http/https
                     */
                    std::string m_httpProtocolType;
                    bool m_httpProtocolTypeHasBeenSet;

                    /**
                     * 目标路径
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

                    /**
                     * 目标服务器
                     */
                    std::vector<TargetHostDTO> m_targetHosts;
                    bool m_targetHostsHasBeenSet;

                    /**
                     * 凭据ID
                     */
                    std::string m_credentialID;
                    bool m_credentialIDHasBeenSet;

                    /**
                     * https时，是否检查证书合法
                     */
                    bool m_checkTargetCertsError;
                    bool m_checkTargetCertsErrorHasBeenSet;

                    /**
                     * http协议版本：1.1/2.0
                     */
                    std::string m_httpProtocolVersion;
                    bool m_httpProtocolVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_MODIFYMODELREQUEST_H_
