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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASEGWAPI_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASEGWAPI_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseGWAPIQPSPolicy.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * tcb 网关API
                */
                class CloudBaseGWAPI : public AbstractModel
                {
                public:
                    CloudBaseGWAPI();
                    ~CloudBaseGWAPI() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务ID
                     * @return ServiceId 服务ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务ID
                     * @param _serviceId 服务ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取API ID
                     * @return APIId API ID
                     * 
                     */
                    std::string GetAPIId() const;

                    /**
                     * 设置API ID
                     * @param _aPIId API ID
                     * 
                     */
                    void SetAPIId(const std::string& _aPIId);

                    /**
                     * 判断参数 APIId 是否已赋值
                     * @return APIId 是否已赋值
                     * 
                     */
                    bool APIIdHasBeenSet() const;

                    /**
                     * 获取API Path
                     * @return Path API Path
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置API Path
                     * @param _path API Path
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取API 类型
                     * @return Type API 类型
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置API 类型
                     * @param _type API 类型
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取API 名
                     * @return Name API 名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置API 名
                     * @param _name API 名
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
                     * 获取API创建时间
                     * @return CreateTime API创建时间
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置API创建时间
                     * @param _createTime API创建时间
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取自定义值通用字段：
Type为1时，该值为空。
Type为2时，该值为容器的代理IP:PORT数组。
                     * @return Custom 自定义值通用字段：
Type为1时，该值为空。
Type为2时，该值为容器的代理IP:PORT数组。
                     * 
                     */
                    std::string GetCustom() const;

                    /**
                     * 设置自定义值通用字段：
Type为1时，该值为空。
Type为2时，该值为容器的代理IP:PORT数组。
                     * @param _custom 自定义值通用字段：
Type为1时，该值为空。
Type为2时，该值为容器的代理IP:PORT数组。
                     * 
                     */
                    void SetCustom(const std::string& _custom);

                    /**
                     * 判断参数 Custom 是否已赋值
                     * @return Custom 是否已赋值
                     * 
                     */
                    bool CustomHasBeenSet() const;

                    /**
                     * 获取表示是否开启认证
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableAuth 表示是否开启认证
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableAuth() const;

                    /**
                     * 设置表示是否开启认证
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableAuth 表示是否开启认证
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableAuth(const bool& _enableAuth);

                    /**
                     * 判断参数 EnableAuth 是否已赋值
                     * @return EnableAuth 是否已赋值
                     * 
                     */
                    bool EnableAuthHasBeenSet() const;

                    /**
                     * 获取云开发环境ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvId 云开发环境ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置云开发环境ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _envId 云开发环境ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取访问类型（该参数暂不对外暴露）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessType 访问类型（该参数暂不对外暴露）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置访问类型（该参数暂不对外暴露）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessType 访问类型（该参数暂不对外暴露）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取统一发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnionStatus 统一发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUnionStatus() const;

                    /**
                     * 设置统一发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unionStatus 统一发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnionStatus(const int64_t& _unionStatus);

                    /**
                     * 判断参数 UnionStatus 是否已赋值
                     * @return UnionStatus 是否已赋值
                     * 
                     */
                    bool UnionStatusHasBeenSet() const;

                    /**
                     * 获取域名（*表示所有域名）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 域名（*表示所有域名）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名（*表示所有域名）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain 域名（*表示所有域名）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取是否有路径冲突
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConflictFlag 是否有路径冲突
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetConflictFlag() const;

                    /**
                     * 设置是否有路径冲突
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conflictFlag 是否有路径冲突
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConflictFlag(const bool& _conflictFlag);

                    /**
                     * 判断参数 ConflictFlag 是否已赋值
                     * @return ConflictFlag 是否已赋值
                     * 
                     */
                    bool ConflictFlagHasBeenSet() const;

                    /**
                     * 获取域名状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainStatus 域名状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDomainStatus() const;

                    /**
                     * 设置域名状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainStatus 域名状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomainStatus(const int64_t& _domainStatus);

                    /**
                     * 判断参数 DomainStatus 是否已赋值
                     * @return DomainStatus 是否已赋值
                     * 
                     */
                    bool DomainStatusHasBeenSet() const;

                    /**
                     * 获取是否开启路径透传，默认true表示短路径，即不开启(已弃用)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsShortPath 是否开启路径透传，默认true表示短路径，即不开启(已弃用)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsShortPath() const;

                    /**
                     * 设置是否开启路径透传，默认true表示短路径，即不开启(已弃用)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isShortPath 是否开启路径透传，默认true表示短路径，即不开启(已弃用)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsShortPath(const bool& _isShortPath);

                    /**
                     * 判断参数 IsShortPath 是否已赋值
                     * @return IsShortPath 是否已赋值
                     * 
                     */
                    bool IsShortPathHasBeenSet() const;

                    /**
                     * 获取路径透传，默认0关闭，1开启，2关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathTransmission 路径透传，默认0关闭，1开启，2关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPathTransmission() const;

                    /**
                     * 设置路径透传，默认0关闭，1开启，2关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pathTransmission 路径透传，默认0关闭，1开启，2关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPathTransmission(const uint64_t& _pathTransmission);

                    /**
                     * 判断参数 PathTransmission 是否已赋值
                     * @return PathTransmission 是否已赋值
                     * 
                     */
                    bool PathTransmissionHasBeenSet() const;

                    /**
                     * 获取跨域校验，默认0开启，1开启，2关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableCheckAcrossDomain 跨域校验，默认0开启，1开启，2关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEnableCheckAcrossDomain() const;

                    /**
                     * 设置跨域校验，默认0开启，1开启，2关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableCheckAcrossDomain 跨域校验，默认0开启，1开启，2关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableCheckAcrossDomain(const uint64_t& _enableCheckAcrossDomain);

                    /**
                     * 判断参数 EnableCheckAcrossDomain 是否已赋值
                     * @return EnableCheckAcrossDomain 是否已赋值
                     * 
                     */
                    bool EnableCheckAcrossDomainHasBeenSet() const;

                    /**
                     * 获取静态托管文件目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StaticFileDirectory 静态托管文件目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStaticFileDirectory() const;

                    /**
                     * 设置静态托管文件目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _staticFileDirectory 静态托管文件目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStaticFileDirectory(const std::string& _staticFileDirectory);

                    /**
                     * 判断参数 StaticFileDirectory 是否已赋值
                     * @return StaticFileDirectory 是否已赋值
                     * 
                     */
                    bool StaticFileDirectoryHasBeenSet() const;

                    /**
                     * 获取QPS策略
                     * @return QPSPolicy QPS策略
                     * 
                     */
                    CloudBaseGWAPIQPSPolicy GetQPSPolicy() const;

                    /**
                     * 设置QPS策略
                     * @param _qPSPolicy QPS策略
                     * 
                     */
                    void SetQPSPolicy(const CloudBaseGWAPIQPSPolicy& _qPSPolicy);

                    /**
                     * 判断参数 QPSPolicy 是否已赋值
                     * @return QPSPolicy 是否已赋值
                     * 
                     */
                    bool QPSPolicyHasBeenSet() const;

                private:

                    /**
                     * 服务ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * API ID
                     */
                    std::string m_aPIId;
                    bool m_aPIIdHasBeenSet;

                    /**
                     * API Path
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * API 类型
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * API 名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * API创建时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 自定义值通用字段：
Type为1时，该值为空。
Type为2时，该值为容器的代理IP:PORT数组。
                     */
                    std::string m_custom;
                    bool m_customHasBeenSet;

                    /**
                     * 表示是否开启认证
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableAuth;
                    bool m_enableAuthHasBeenSet;

                    /**
                     * 云开发环境ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 访问类型（该参数暂不对外暴露）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 统一发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_unionStatus;
                    bool m_unionStatusHasBeenSet;

                    /**
                     * 域名（*表示所有域名）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 是否有路径冲突
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_conflictFlag;
                    bool m_conflictFlagHasBeenSet;

                    /**
                     * 域名状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_domainStatus;
                    bool m_domainStatusHasBeenSet;

                    /**
                     * 是否开启路径透传，默认true表示短路径，即不开启(已弃用)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isShortPath;
                    bool m_isShortPathHasBeenSet;

                    /**
                     * 路径透传，默认0关闭，1开启，2关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pathTransmission;
                    bool m_pathTransmissionHasBeenSet;

                    /**
                     * 跨域校验，默认0开启，1开启，2关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_enableCheckAcrossDomain;
                    bool m_enableCheckAcrossDomainHasBeenSet;

                    /**
                     * 静态托管文件目录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_staticFileDirectory;
                    bool m_staticFileDirectoryHasBeenSet;

                    /**
                     * QPS策略
                     */
                    CloudBaseGWAPIQPSPolicy m_qPSPolicy;
                    bool m_qPSPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASEGWAPI_H_
