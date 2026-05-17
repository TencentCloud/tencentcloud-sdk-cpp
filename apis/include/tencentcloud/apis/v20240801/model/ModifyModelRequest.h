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
                     * 获取<p>实例</p>
                     * @return InstanceID <p>实例</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例</p>
                     * @param _instanceID <p>实例</p>
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
                     * 获取<p>模型ID</p>
                     * @return ID <p>模型ID</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>模型ID</p>
                     * @param _iD <p>模型ID</p>
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
                     * 获取<p>模型名称</p>
                     * @return Name <p>模型名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>模型名称</p>
                     * @param _name <p>模型名称</p>
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
                     * 获取<p>协议类型：http/https</p>
                     * @return HttpProtocolType <p>协议类型：http/https</p>
                     * 
                     */
                    std::string GetHttpProtocolType() const;

                    /**
                     * 设置<p>协议类型：http/https</p>
                     * @param _httpProtocolType <p>协议类型：http/https</p>
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
                     * 获取<p>目标路径</p>
                     * @return TargetPath <p>目标路径</p>
                     * 
                     */
                    std::string GetTargetPath() const;

                    /**
                     * 设置<p>目标路径</p>
                     * @param _targetPath <p>目标路径</p>
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
                     * 获取<p>目标服务器</p>
                     * @return TargetHosts <p>目标服务器</p>
                     * 
                     */
                    std::vector<TargetHostDTO> GetTargetHosts() const;

                    /**
                     * 设置<p>目标服务器</p>
                     * @param _targetHosts <p>目标服务器</p>
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
                     * 获取<p>凭据ID</p>
                     * @return CredentialID <p>凭据ID</p>
                     * 
                     */
                    std::string GetCredentialID() const;

                    /**
                     * 设置<p>凭据ID</p>
                     * @param _credentialID <p>凭据ID</p>
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
                     * 获取<p>https时，是否检查证书合法</p>
                     * @return CheckTargetCertsError <p>https时，是否检查证书合法</p>
                     * 
                     */
                    bool GetCheckTargetCertsError() const;

                    /**
                     * 设置<p>https时，是否检查证书合法</p>
                     * @param _checkTargetCertsError <p>https时，是否检查证书合法</p>
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
                     * 获取<p>http协议版本：1.1/2.0</p>
                     * @return HttpProtocolVersion <p>http协议版本：1.1/2.0</p>
                     * 
                     */
                    std::string GetHttpProtocolVersion() const;

                    /**
                     * 设置<p>http协议版本：1.1/2.0</p>
                     * @param _httpProtocolVersion <p>http协议版本：1.1/2.0</p>
                     * 
                     */
                    void SetHttpProtocolVersion(const std::string& _httpProtocolVersion);

                    /**
                     * 判断参数 HttpProtocolVersion 是否已赋值
                     * @return HttpProtocolVersion 是否已赋值
                     * 
                     */
                    bool HttpProtocolVersionHasBeenSet() const;

                    /**
                     * 获取<p>model ID</p>
                     * @return ModelID <p>model ID</p>
                     * 
                     */
                    std::string GetModelID() const;

                    /**
                     * 设置<p>model ID</p>
                     * @param _modelID <p>model ID</p>
                     * 
                     */
                    void SetModelID(const std::string& _modelID);

                    /**
                     * 判断参数 ModelID 是否已赋值
                     * @return ModelID 是否已赋值
                     * 
                     */
                    bool ModelIDHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>实例</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>模型ID</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>模型名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>协议类型：http/https</p>
                     */
                    std::string m_httpProtocolType;
                    bool m_httpProtocolTypeHasBeenSet;

                    /**
                     * <p>目标路径</p>
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

                    /**
                     * <p>目标服务器</p>
                     */
                    std::vector<TargetHostDTO> m_targetHosts;
                    bool m_targetHostsHasBeenSet;

                    /**
                     * <p>凭据ID</p>
                     */
                    std::string m_credentialID;
                    bool m_credentialIDHasBeenSet;

                    /**
                     * <p>https时，是否检查证书合法</p>
                     */
                    bool m_checkTargetCertsError;
                    bool m_checkTargetCertsErrorHasBeenSet;

                    /**
                     * <p>http协议版本：1.1/2.0</p>
                     */
                    std::string m_httpProtocolVersion;
                    bool m_httpProtocolVersionHasBeenSet;

                    /**
                     * <p>model ID</p>
                     */
                    std::string m_modelID;
                    bool m_modelIDHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_MODIFYMODELREQUEST_H_
