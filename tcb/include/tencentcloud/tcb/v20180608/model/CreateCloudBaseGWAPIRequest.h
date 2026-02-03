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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATECLOUDBASEGWAPIREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATECLOUDBASEGWAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CreateCloudBaseGWAPI请求参数结构体
                */
                class CreateCloudBaseGWAPIRequest : public AbstractModel
                {
                public:
                    CreateCloudBaseGWAPIRequest();
                    ~CreateCloudBaseGWAPIRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Service ID
                     * @return ServiceId Service ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Service ID
                     * @param _serviceId Service ID
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
                     * 获取API类型（1表示云函数，2表示容器）
                     * @return Type API类型（1表示云函数，2表示容器）
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置API类型（1表示云函数，2表示容器）
                     * @param _type API类型（1表示云函数，2表示容器）
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
                     * 获取API Name
                     * @return Name API Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置API Name
                     * @param _name API Name
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
                     * 获取APIId，如果非空，表示修改绑定Path
                     * @return APIId APIId，如果非空，表示修改绑定Path
                     * 
                     */
                    std::string GetAPIId() const;

                    /**
                     * 设置APIId，如果非空，表示修改绑定Path
                     * @param _aPIId APIId，如果非空，表示修改绑定Path
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
                     * 获取自定义值通用字段（当Type为容器时必填）
                     * @return Custom 自定义值通用字段（当Type为容器时必填）
                     * 
                     */
                    std::string GetCustom() const;

                    /**
                     * 设置自定义值通用字段（当Type为容器时必填）
                     * @param _custom 自定义值通用字段（当Type为容器时必填）
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
                     * 获取认证开关 1为开启 2为关闭
                     * @return AuthSwitch 认证开关 1为开启 2为关闭
                     * 
                     */
                    uint64_t GetAuthSwitch() const;

                    /**
                     * 设置认证开关 1为开启 2为关闭
                     * @param _authSwitch 认证开关 1为开启 2为关闭
                     * 
                     */
                    void SetAuthSwitch(const uint64_t& _authSwitch);

                    /**
                     * 判断参数 AuthSwitch 是否已赋值
                     * @return AuthSwitch 是否已赋值
                     * 
                     */
                    bool AuthSwitchHasBeenSet() const;

                    /**
                     * 获取是否开启多地域
                     * @return EnableRegion 是否开启多地域
                     * 
                     */
                    bool GetEnableRegion() const;

                    /**
                     * 设置是否开启多地域
                     * @param _enableRegion 是否开启多地域
                     * 
                     */
                    void SetEnableRegion(const bool& _enableRegion);

                    /**
                     * 判断参数 EnableRegion 是否已赋值
                     * @return EnableRegion 是否已赋值
                     * 
                     */
                    bool EnableRegionHasBeenSet() const;

                    /**
                     * 获取是否启用统一域名
                     * @return EnableUnion 是否启用统一域名
                     * 
                     */
                    bool GetEnableUnion() const;

                    /**
                     * 设置是否启用统一域名
                     * @param _enableUnion 是否启用统一域名
                     * 
                     */
                    void SetEnableUnion(const bool& _enableUnion);

                    /**
                     * 判断参数 EnableUnion 是否已赋值
                     * @return EnableUnion 是否已赋值
                     * 
                     */
                    bool EnableUnionHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取访问类型："OA", "PUBLIC", "MINIAPP", "VPC" （不传默认PUBLIC+MINIAPP+VPC）
                     * @return AccessTypes 访问类型："OA", "PUBLIC", "MINIAPP", "VPC" （不传默认PUBLIC+MINIAPP+VPC）
                     * 
                     */
                    std::vector<std::string> GetAccessTypes() const;

                    /**
                     * 设置访问类型："OA", "PUBLIC", "MINIAPP", "VPC" （不传默认PUBLIC+MINIAPP+VPC）
                     * @param _accessTypes 访问类型："OA", "PUBLIC", "MINIAPP", "VPC" （不传默认PUBLIC+MINIAPP+VPC）
                     * 
                     */
                    void SetAccessTypes(const std::vector<std::string>& _accessTypes);

                    /**
                     * 判断参数 AccessTypes 是否已赋值
                     * @return AccessTypes 是否已赋值
                     * 
                     */
                    bool AccessTypesHasBeenSet() const;

                    /**
                     * 获取是否开启路径透传，默认true表示短路径，即不开启路径透传(已弃用)
                     * @return IsShortPath 是否开启路径透传，默认true表示短路径，即不开启路径透传(已弃用)
                     * 
                     */
                    bool GetIsShortPath() const;

                    /**
                     * 设置是否开启路径透传，默认true表示短路径，即不开启路径透传(已弃用)
                     * @param _isShortPath 是否开启路径透传，默认true表示短路径，即不开启路径透传(已弃用)
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
                     * @return PathTransmission 路径透传，默认0关闭，1开启，2关闭
                     * 
                     */
                    uint64_t GetPathTransmission() const;

                    /**
                     * 设置路径透传，默认0关闭，1开启，2关闭
                     * @param _pathTransmission 路径透传，默认0关闭，1开启，2关闭
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
                     * @return EnableCheckAcrossDomain 跨域校验，默认0开启，1开启，2关闭
                     * 
                     */
                    uint64_t GetEnableCheckAcrossDomain() const;

                    /**
                     * 设置跨域校验，默认0开启，1开启，2关闭
                     * @param _enableCheckAcrossDomain 跨域校验，默认0开启，1开启，2关闭
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
                     * 获取静态托管资源目录
                     * @return StaticFileDirectory 静态托管资源目录
                     * 
                     */
                    std::string GetStaticFileDirectory() const;

                    /**
                     * 设置静态托管资源目录
                     * @param _staticFileDirectory 静态托管资源目录
                     * 
                     */
                    void SetStaticFileDirectory(const std::string& _staticFileDirectory);

                    /**
                     * 判断参数 StaticFileDirectory 是否已赋值
                     * @return StaticFileDirectory 是否已赋值
                     * 
                     */
                    bool StaticFileDirectoryHasBeenSet() const;

                private:

                    /**
                     * Service ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * API Path
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * API类型（1表示云函数，2表示容器）
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * API Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * APIId，如果非空，表示修改绑定Path
                     */
                    std::string m_aPIId;
                    bool m_aPIIdHasBeenSet;

                    /**
                     * 自定义值通用字段（当Type为容器时必填）
                     */
                    std::string m_custom;
                    bool m_customHasBeenSet;

                    /**
                     * 认证开关 1为开启 2为关闭
                     */
                    uint64_t m_authSwitch;
                    bool m_authSwitchHasBeenSet;

                    /**
                     * 是否开启多地域
                     */
                    bool m_enableRegion;
                    bool m_enableRegionHasBeenSet;

                    /**
                     * 是否启用统一域名
                     */
                    bool m_enableUnion;
                    bool m_enableUnionHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 访问类型："OA", "PUBLIC", "MINIAPP", "VPC" （不传默认PUBLIC+MINIAPP+VPC）
                     */
                    std::vector<std::string> m_accessTypes;
                    bool m_accessTypesHasBeenSet;

                    /**
                     * 是否开启路径透传，默认true表示短路径，即不开启路径透传(已弃用)
                     */
                    bool m_isShortPath;
                    bool m_isShortPathHasBeenSet;

                    /**
                     * 路径透传，默认0关闭，1开启，2关闭
                     */
                    uint64_t m_pathTransmission;
                    bool m_pathTransmissionHasBeenSet;

                    /**
                     * 跨域校验，默认0开启，1开启，2关闭
                     */
                    uint64_t m_enableCheckAcrossDomain;
                    bool m_enableCheckAcrossDomainHasBeenSet;

                    /**
                     * 静态托管资源目录
                     */
                    std::string m_staticFileDirectory;
                    bool m_staticFileDirectoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATECLOUDBASEGWAPIREQUEST_H_
