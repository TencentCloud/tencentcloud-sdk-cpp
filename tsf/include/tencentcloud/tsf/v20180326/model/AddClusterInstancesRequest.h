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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_ADDCLUSTERINSTANCESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_ADDCLUSTERINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/InstanceAdvancedSettings.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * AddClusterInstances请求参数结构体
                */
                class AddClusterInstancesRequest : public AbstractModel
                {
                public:
                    AddClusterInstancesRequest();
                    ~AddClusterInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取云主机ID列表
                     * @return InstanceIdList 云主机ID列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置云主机ID列表
                     * @param _instanceIdList 云主机ID列表
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取操作系统名称
                     * @return OsName 操作系统名称
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置操作系统名称
                     * @param _osName 操作系统名称
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取操作系统镜像ID
                     * @return ImageId 操作系统镜像ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置操作系统镜像ID
                     * @param _imageId 操作系统镜像ID
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取重装系统密码设置
                     * @return Password 重装系统密码设置
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置重装系统密码设置
                     * @param _password 重装系统密码设置
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
                     * 获取重装系统，关联密钥设置
                     * @return KeyId 重装系统，关联密钥设置
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置重装系统，关联密钥设置
                     * @param _keyId 重装系统，关联密钥设置
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取安全组设置
                     * @return SgId 安全组设置
                     * 
                     */
                    std::string GetSgId() const;

                    /**
                     * 设置安全组设置
                     * @param _sgId 安全组设置
                     * 
                     */
                    void SetSgId(const std::string& _sgId);

                    /**
                     * 判断参数 SgId 是否已赋值
                     * @return SgId 是否已赋值
                     * 
                     */
                    bool SgIdHasBeenSet() const;

                    /**
                     * 获取云主机导入方式，虚拟机集群必填，容器集群不填写此字段，R：重装TSF系统镜像，M：手动安装agent
                     * @return InstanceImportMode 云主机导入方式，虚拟机集群必填，容器集群不填写此字段，R：重装TSF系统镜像，M：手动安装agent
                     * 
                     */
                    std::string GetInstanceImportMode() const;

                    /**
                     * 设置云主机导入方式，虚拟机集群必填，容器集群不填写此字段，R：重装TSF系统镜像，M：手动安装agent
                     * @param _instanceImportMode 云主机导入方式，虚拟机集群必填，容器集群不填写此字段，R：重装TSF系统镜像，M：手动安装agent
                     * 
                     */
                    void SetInstanceImportMode(const std::string& _instanceImportMode);

                    /**
                     * 判断参数 InstanceImportMode 是否已赋值
                     * @return InstanceImportMode 是否已赋值
                     * 
                     */
                    bool InstanceImportModeHasBeenSet() const;

                    /**
                     * 获取镜像定制类型
                     * @return OsCustomizeType 镜像定制类型
                     * 
                     */
                    std::string GetOsCustomizeType() const;

                    /**
                     * 设置镜像定制类型
                     * @param _osCustomizeType 镜像定制类型
                     * 
                     */
                    void SetOsCustomizeType(const std::string& _osCustomizeType);

                    /**
                     * 判断参数 OsCustomizeType 是否已赋值
                     * @return OsCustomizeType 是否已赋值
                     * 
                     */
                    bool OsCustomizeTypeHasBeenSet() const;

                    /**
                     * 获取镜像特征ID列表
                     * @return FeatureIdList 镜像特征ID列表
                     * 
                     */
                    std::vector<std::string> GetFeatureIdList() const;

                    /**
                     * 设置镜像特征ID列表
                     * @param _featureIdList 镜像特征ID列表
                     * 
                     */
                    void SetFeatureIdList(const std::vector<std::string>& _featureIdList);

                    /**
                     * 判断参数 FeatureIdList 是否已赋值
                     * @return FeatureIdList 是否已赋值
                     * 
                     */
                    bool FeatureIdListHasBeenSet() const;

                    /**
                     * 获取实例额外需要设置参数信息
                     * @return InstanceAdvancedSettings 实例额外需要设置参数信息
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置实例额外需要设置参数信息
                     * @param _instanceAdvancedSettings 实例额外需要设置参数信息
                     * 
                     */
                    void SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings);

                    /**
                     * 判断参数 InstanceAdvancedSettings 是否已赋值
                     * @return InstanceAdvancedSettings 是否已赋值
                     * 
                     */
                    bool InstanceAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取安全组 ID 列表
                     * @return SecurityGroupIds 安全组 ID 列表
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组 ID 列表
                     * @param _securityGroupIds 安全组 ID 列表
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 云主机ID列表
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * 操作系统名称
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * 操作系统镜像ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 重装系统密码设置
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 重装系统，关联密钥设置
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 安全组设置
                     */
                    std::string m_sgId;
                    bool m_sgIdHasBeenSet;

                    /**
                     * 云主机导入方式，虚拟机集群必填，容器集群不填写此字段，R：重装TSF系统镜像，M：手动安装agent
                     */
                    std::string m_instanceImportMode;
                    bool m_instanceImportModeHasBeenSet;

                    /**
                     * 镜像定制类型
                     */
                    std::string m_osCustomizeType;
                    bool m_osCustomizeTypeHasBeenSet;

                    /**
                     * 镜像特征ID列表
                     */
                    std::vector<std::string> m_featureIdList;
                    bool m_featureIdListHasBeenSet;

                    /**
                     * 实例额外需要设置参数信息
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

                    /**
                     * 安全组 ID 列表
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_ADDCLUSTERINSTANCESREQUEST_H_
