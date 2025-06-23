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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_REPOSITORYIMAGEVO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_REPOSITORYIMAGEVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 仓库镜像列表
                */
                class RepositoryImageVO : public AbstractModel
                {
                public:
                    RepositoryImageVO();
                    ~RepositoryImageVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 用户uin
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NickName 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nickName 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 镜像id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName 镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取镜像创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceCreateTime 镜像创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceCreateTime() const;

                    /**
                     * 设置镜像创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceCreateTime 镜像创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceCreateTime(const std::string& _instanceCreateTime);

                    /**
                     * 判断参数 InstanceCreateTime 是否已赋值
                     * @return InstanceCreateTime 是否已赋值
                     * 
                     */
                    bool InstanceCreateTimeHasBeenSet() const;

                    /**
                     * 获取镜像大小带单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceSize 镜像大小带单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceSize() const;

                    /**
                     * 设置镜像大小带单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceSize 镜像大小带单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceSize(const std::string& _instanceSize);

                    /**
                     * 判断参数 InstanceSize 是否已赋值
                     * @return InstanceSize 是否已赋值
                     * 
                     */
                    bool InstanceSizeHasBeenSet() const;

                    /**
                     * 获取构建次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BuildCount 构建次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBuildCount() const;

                    /**
                     * 设置构建次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _buildCount 构建次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBuildCount(const int64_t& _buildCount);

                    /**
                     * 判断参数 BuildCount 是否已赋值
                     * @return BuildCount 是否已赋值
                     * 
                     */
                    bool BuildCountHasBeenSet() const;

                    /**
                     * 获取镜像类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 镜像类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置镜像类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType 镜像类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取授权状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthStatus 授权状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAuthStatus() const;

                    /**
                     * 设置授权状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authStatus 授权状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthStatus(const int64_t& _authStatus);

                    /**
                     * 判断参数 AuthStatus 是否已赋值
                     * @return AuthStatus 是否已赋值
                     * 
                     */
                    bool AuthStatusHasBeenSet() const;

                    /**
                     * 获取镜像版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceVersion 镜像版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceVersion() const;

                    /**
                     * 设置镜像版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceVersion 镜像版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceVersion(const std::string& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepositoryUrl 仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRepositoryUrl() const;

                    /**
                     * 设置仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repositoryUrl 仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRepositoryUrl(const std::string& _repositoryUrl);

                    /**
                     * 判断参数 RepositoryUrl 是否已赋值
                     * @return RepositoryUrl 是否已赋值
                     * 
                     */
                    bool RepositoryUrlHasBeenSet() const;

                    /**
                     * 获取仓库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepositoryName 仓库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 设置仓库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repositoryName 仓库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRepositoryName(const std::string& _repositoryName);

                    /**
                     * 判断参数 RepositoryName 是否已赋值
                     * @return RepositoryName 是否已赋值
                     * 
                     */
                    bool RepositoryNameHasBeenSet() const;

                    /**
                     * 获取是否核心
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsCore 是否核心
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsCore() const;

                    /**
                     * 设置是否核心
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isCore 是否核心
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsCore(const uint64_t& _isCore);

                    /**
                     * 判断参数 IsCore 是否已赋值
                     * @return IsCore 是否已赋值
                     * 
                     */
                    bool IsCoreHasBeenSet() const;

                    /**
                     * 获取漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulRisk 漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVulRisk() const;

                    /**
                     * 设置漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulRisk 漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulRisk(const int64_t& _vulRisk);

                    /**
                     * 判断参数 VulRisk 是否已赋值
                     * @return VulRisk 是否已赋值
                     * 
                     */
                    bool VulRiskHasBeenSet() const;

                    /**
                     * 获取检查任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckCount 检查任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCheckCount() const;

                    /**
                     * 设置检查任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkCount 检查任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheckCount(const int64_t& _checkCount);

                    /**
                     * 判断参数 CheckCount 是否已赋值
                     * @return CheckCount 是否已赋值
                     * 
                     */
                    bool CheckCountHasBeenSet() const;

                    /**
                     * 获取体检时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckTime 体检时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCheckTime() const;

                    /**
                     * 设置体检时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkTime 体检时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheckTime(const std::string& _checkTime);

                    /**
                     * 判断参数 CheckTime 是否已赋值
                     * @return CheckTime 是否已赋值
                     * 
                     */
                    bool CheckTimeHasBeenSet() const;

                    /**
                     * 获取是否新资产 1新
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsNewAsset 是否新资产 1新
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsNewAsset() const;

                    /**
                     * 设置是否新资产 1新
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isNewAsset 是否新资产 1新
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsNewAsset(const uint64_t& _isNewAsset);

                    /**
                     * 判断参数 IsNewAsset 是否已赋值
                     * @return IsNewAsset 是否已赋值
                     * 
                     */
                    bool IsNewAssetHasBeenSet() const;

                private:

                    /**
                     * 用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 镜像创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceCreateTime;
                    bool m_instanceCreateTimeHasBeenSet;

                    /**
                     * 镜像大小带单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceSize;
                    bool m_instanceSizeHasBeenSet;

                    /**
                     * 构建次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_buildCount;
                    bool m_buildCountHasBeenSet;

                    /**
                     * 镜像类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 授权状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_authStatus;
                    bool m_authStatusHasBeenSet;

                    /**
                     * 镜像版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repositoryUrl;
                    bool m_repositoryUrlHasBeenSet;

                    /**
                     * 仓库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                    /**
                     * 是否核心
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                    /**
                     * 漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_vulRisk;
                    bool m_vulRiskHasBeenSet;

                    /**
                     * 检查任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_checkCount;
                    bool m_checkCountHasBeenSet;

                    /**
                     * 体检时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkTime;
                    bool m_checkTimeHasBeenSet;

                    /**
                     * 是否新资产 1新
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isNewAsset;
                    bool m_isNewAssetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_REPOSITORYIMAGEVO_H_
