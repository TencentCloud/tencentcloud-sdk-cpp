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
                     * 获取<p>腾讯云AppID</p>
                     * @return AppID <p>腾讯云AppID</p>
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置<p>腾讯云AppID</p>
                     * @param _appID <p>腾讯云AppID</p>
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
                     * 获取<p>腾讯云Uin</p>
                     * @return Uin <p>腾讯云Uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>腾讯云Uin</p>
                     * @param _uin <p>腾讯云Uin</p>
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
                     * 获取<p>实例ID</p>
                     * @return InstanceID <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceID <p>实例ID</p>
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
                     * 获取<p>凭据名称</p>
                     * @return CredentialName <p>凭据名称</p>
                     * 
                     */
                    std::string GetCredentialName() const;

                    /**
                     * 设置<p>凭据名称</p>
                     * @param _credentialName <p>凭据名称</p>
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
                     * 获取<p>http协议类型</p>
                     * @return HttpProtocolType <p>http协议类型</p>
                     * 
                     */
                    std::string GetHttpProtocolType() const;

                    /**
                     * 设置<p>http协议类型</p>
                     * @param _httpProtocolType <p>http协议类型</p>
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
                     * 获取<p>https时，是否校验目标证书</p>
                     * @return CheckTargetCertsError <p>https时，是否校验目标证书</p>
                     * 
                     */
                    bool GetCheckTargetCertsError() const;

                    /**
                     * 设置<p>https时，是否校验目标证书</p>
                     * @param _checkTargetCertsError <p>https时，是否校验目标证书</p>
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
                     * 获取<p>目标器列表</p>
                     * @return TargetHosts <p>目标器列表</p>
                     * 
                     */
                    std::vector<TargetHostDTO> GetTargetHosts() const;

                    /**
                     * 设置<p>目标器列表</p>
                     * @param _targetHosts <p>目标器列表</p>
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
                     * 获取<p>被模型服务使用的个数</p>
                     * @return ModelServiceCount <p>被模型服务使用的个数</p>
                     * 
                     */
                    int64_t GetModelServiceCount() const;

                    /**
                     * 设置<p>被模型服务使用的个数</p>
                     * @param _modelServiceCount <p>被模型服务使用的个数</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>最后修改时间</p>
                     * @return LastUpdateTime <p>最后修改时间</p>
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置<p>最后修改时间</p>
                     * @param _lastUpdateTime <p>最后修改时间</p>
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

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
                     * <p>腾讯云AppID</p>
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>腾讯云Uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>实例ID</p>
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
                     * <p>凭据ID</p>
                     */
                    std::string m_credentialID;
                    bool m_credentialIDHasBeenSet;

                    /**
                     * <p>凭据名称</p>
                     */
                    std::string m_credentialName;
                    bool m_credentialNameHasBeenSet;

                    /**
                     * <p>http协议类型</p>
                     */
                    std::string m_httpProtocolType;
                    bool m_httpProtocolTypeHasBeenSet;

                    /**
                     * <p>https时，是否校验目标证书</p>
                     */
                    bool m_checkTargetCertsError;
                    bool m_checkTargetCertsErrorHasBeenSet;

                    /**
                     * <p>http协议版本：1.1/2.0</p>
                     */
                    std::string m_httpProtocolVersion;
                    bool m_httpProtocolVersionHasBeenSet;

                    /**
                     * <p>目标路径</p>
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

                    /**
                     * <p>目标器列表</p>
                     */
                    std::vector<TargetHostDTO> m_targetHosts;
                    bool m_targetHostsHasBeenSet;

                    /**
                     * <p>被模型服务使用的个数</p>
                     */
                    int64_t m_modelServiceCount;
                    bool m_modelServiceCountHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最后修改时间</p>
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

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

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMODELRESPONSEVO_H_
