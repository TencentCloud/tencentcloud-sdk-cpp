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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMODELRESPONSEVO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMODELRESPONSEVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 查询模型详情的响应
                */
                class DescribeModelResponseVO : public AbstractModel
                {
                public:
                    DescribeModelResponseVO();
                    ~DescribeModelResponseVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取腾讯云AppID
                     * @return AppID 腾讯云AppID
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置腾讯云AppID
                     * @param _appID 腾讯云AppID
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取腾讯云Uin
                     * @return Uin 腾讯云Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置腾讯云Uin
                     * @param _uin 腾讯云Uin
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
                     * 获取实例ID
                     * @return InstanceID 实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例ID
                     * @param _instanceID 实例ID
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
                     * 获取凭据名称
                     * @return CredentialName 凭据名称
                     * 
                     */
                    std::string GetCredentialName() const;

                    /**
                     * 设置凭据名称
                     * @param _credentialName 凭据名称
                     * 
                     */
                    void SetCredentialName(const std::string& _credentialName);

                    /**
                     * 判断参数 CredentialName 是否已赋值
                     * @return CredentialName 是否已赋值
                     * 
                     */
                    bool CredentialNameHasBeenSet() const;

                    /**
                     * 获取http协议类型
                     * @return HttpProtocolType http协议类型
                     * 
                     */
                    std::string GetHttpProtocolType() const;

                    /**
                     * 设置http协议类型
                     * @param _httpProtocolType http协议类型
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
                     * 获取https时，是否校验目标证书
                     * @return CheckTargetCertsError https时，是否校验目标证书
                     * 
                     */
                    bool GetCheckTargetCertsError() const;

                    /**
                     * 设置https时，是否校验目标证书
                     * @param _checkTargetCertsError https时，是否校验目标证书
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
                     * 获取目标器列表
                     * @return TargetHosts 目标器列表
                     * 
                     */
                    std::vector<TargetHostDTO> GetTargetHosts() const;

                    /**
                     * 设置目标器列表
                     * @param _targetHosts 目标器列表
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
                     * 获取被模型服务使用的个数
                     * @return ModelServiceCount 被模型服务使用的个数
                     * 
                     */
                    int64_t GetModelServiceCount() const;

                    /**
                     * 设置被模型服务使用的个数
                     * @param _modelServiceCount 被模型服务使用的个数
                     * 
                     */
                    void SetModelServiceCount(const int64_t& _modelServiceCount);

                    /**
                     * 判断参数 ModelServiceCount 是否已赋值
                     * @return ModelServiceCount 是否已赋值
                     * 
                     */
                    bool ModelServiceCountHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最后修改时间
                     * @return LastUpdateTime 最后修改时间
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置最后修改时间
                     * @param _lastUpdateTime 最后修改时间
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 腾讯云AppID
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 腾讯云Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 实例ID
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
                     * 凭据ID
                     */
                    std::string m_credentialID;
                    bool m_credentialIDHasBeenSet;

                    /**
                     * 凭据名称
                     */
                    std::string m_credentialName;
                    bool m_credentialNameHasBeenSet;

                    /**
                     * http协议类型
                     */
                    std::string m_httpProtocolType;
                    bool m_httpProtocolTypeHasBeenSet;

                    /**
                     * https时，是否校验目标证书
                     */
                    bool m_checkTargetCertsError;
                    bool m_checkTargetCertsErrorHasBeenSet;

                    /**
                     * http协议版本：1.1/2.0
                     */
                    std::string m_httpProtocolVersion;
                    bool m_httpProtocolVersionHasBeenSet;

                    /**
                     * 目标路径
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

                    /**
                     * 目标器列表
                     */
                    std::vector<TargetHostDTO> m_targetHosts;
                    bool m_targetHostsHasBeenSet;

                    /**
                     * 被模型服务使用的个数
                     */
                    int64_t m_modelServiceCount;
                    bool m_modelServiceCountHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后修改时间
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMODELRESPONSEVO_H_
