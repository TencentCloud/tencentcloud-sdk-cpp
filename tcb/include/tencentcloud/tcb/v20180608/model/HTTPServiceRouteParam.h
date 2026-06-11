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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEROUTEPARAM_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEROUTEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServicePathRewrite.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServiceRouteQPSPolicy.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServiceExtension.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 创建或修改HTTP访问服务输入的路由信息，修改HTTP访问服务路由信息时对应字段不传参数表示不用修改。
                */
                class HTTPServiceRouteParam : public AbstractModel
                {
                public:
                    HTTPServiceRouteParam();
                    ~HTTPServiceRouteParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>路径</p>
                     * @return Path <p>路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>路径</p>
                     * @param _path <p>路径</p>
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
                     * 获取<p>上游服务类型。创建时必填，修改时可选填</p><p>枚举值：</p><ul><li>SCF： 云函数</li><li>CBR： 云托管</li><li>STATIC_STORE： 静态托管</li><li>WEB_SCF： web云函数</li><li>LH： Lighthouse</li></ul>
                     * @return UpstreamResourceType <p>上游服务类型。创建时必填，修改时可选填</p><p>枚举值：</p><ul><li>SCF： 云函数</li><li>CBR： 云托管</li><li>STATIC_STORE： 静态托管</li><li>WEB_SCF： web云函数</li><li>LH： Lighthouse</li></ul>
                     * 
                     */
                    std::string GetUpstreamResourceType() const;

                    /**
                     * 设置<p>上游服务类型。创建时必填，修改时可选填</p><p>枚举值：</p><ul><li>SCF： 云函数</li><li>CBR： 云托管</li><li>STATIC_STORE： 静态托管</li><li>WEB_SCF： web云函数</li><li>LH： Lighthouse</li></ul>
                     * @param _upstreamResourceType <p>上游服务类型。创建时必填，修改时可选填</p><p>枚举值：</p><ul><li>SCF： 云函数</li><li>CBR： 云托管</li><li>STATIC_STORE： 静态托管</li><li>WEB_SCF： web云函数</li><li>LH： Lighthouse</li></ul>
                     * 
                     */
                    void SetUpstreamResourceType(const std::string& _upstreamResourceType);

                    /**
                     * 判断参数 UpstreamResourceType 是否已赋值
                     * @return UpstreamResourceType 是否已赋值
                     * 
                     */
                    bool UpstreamResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>上游服务名。创建时必填，修改时可选填</p>
                     * @return UpstreamResourceName <p>上游服务名。创建时必填，修改时可选填</p>
                     * 
                     */
                    std::string GetUpstreamResourceName() const;

                    /**
                     * 设置<p>上游服务名。创建时必填，修改时可选填</p>
                     * @param _upstreamResourceName <p>上游服务名。创建时必填，修改时可选填</p>
                     * 
                     */
                    void SetUpstreamResourceName(const std::string& _upstreamResourceName);

                    /**
                     * 判断参数 UpstreamResourceName 是否已赋值
                     * @return UpstreamResourceName 是否已赋值
                     * 
                     */
                    bool UpstreamResourceNameHasBeenSet() const;

                    /**
                     * 获取<p>路径重写</p>
                     * @return PathRewrite <p>路径重写</p>
                     * 
                     */
                    HTTPServicePathRewrite GetPathRewrite() const;

                    /**
                     * 设置<p>路径重写</p>
                     * @param _pathRewrite <p>路径重写</p>
                     * 
                     */
                    void SetPathRewrite(const HTTPServicePathRewrite& _pathRewrite);

                    /**
                     * 判断参数 PathRewrite 是否已赋值
                     * @return PathRewrite 是否已赋值
                     * 
                     */
                    bool PathRewriteHasBeenSet() const;

                    /**
                     * 获取<p>是否开启安全域名。默认开启</p>
                     * @return EnableSafeDomain <p>是否开启安全域名。默认开启</p>
                     * 
                     */
                    bool GetEnableSafeDomain() const;

                    /**
                     * 设置<p>是否开启安全域名。默认开启</p>
                     * @param _enableSafeDomain <p>是否开启安全域名。默认开启</p>
                     * 
                     */
                    void SetEnableSafeDomain(const bool& _enableSafeDomain);

                    /**
                     * 判断参数 EnableSafeDomain 是否已赋值
                     * @return EnableSafeDomain 是否已赋值
                     * 
                     */
                    bool EnableSafeDomainHasBeenSet() const;

                    /**
                     * 获取<p>是否开启身份认证。默认关闭</p>
                     * @return EnableAuth <p>是否开启身份认证。默认关闭</p>
                     * 
                     */
                    bool GetEnableAuth() const;

                    /**
                     * 设置<p>是否开启身份认证。默认关闭</p>
                     * @param _enableAuth <p>是否开启身份认证。默认关闭</p>
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
                     * 获取<p>是否开启路径透传。默认关闭</p>
                     * @return EnablePathTransmission <p>是否开启路径透传。默认关闭</p>
                     * 
                     */
                    bool GetEnablePathTransmission() const;

                    /**
                     * 设置<p>是否开启路径透传。默认关闭</p>
                     * @param _enablePathTransmission <p>是否开启路径透传。默认关闭</p>
                     * 
                     */
                    void SetEnablePathTransmission(const bool& _enablePathTransmission);

                    /**
                     * 判断参数 EnablePathTransmission 是否已赋值
                     * @return EnablePathTransmission 是否已赋值
                     * 
                     */
                    bool EnablePathTransmissionHasBeenSet() const;

                    /**
                     * 获取<p>QPS限频策略</p>
                     * @return QPSPolicy <p>QPS限频策略</p>
                     * 
                     */
                    HTTPServiceRouteQPSPolicy GetQPSPolicy() const;

                    /**
                     * 设置<p>QPS限频策略</p>
                     * @param _qPSPolicy <p>QPS限频策略</p>
                     * 
                     */
                    void SetQPSPolicy(const HTTPServiceRouteQPSPolicy& _qPSPolicy);

                    /**
                     * 判断参数 QPSPolicy 是否已赋值
                     * @return QPSPolicy 是否已赋值
                     * 
                     */
                    bool QPSPolicyHasBeenSet() const;

                    /**
                     * 获取<p>是否开启路由</p>
                     * @return Enable <p>是否开启路由</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>是否开启路由</p>
                     * @param _enable <p>是否开启路由</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>扩展字段，内部包含headers处理等</p>
                     * @return Extension <p>扩展字段，内部包含headers处理等</p>
                     * 
                     */
                    HTTPServiceExtension GetExtension() const;

                    /**
                     * 设置<p>扩展字段，内部包含headers处理等</p>
                     * @param _extension <p>扩展字段，内部包含headers处理等</p>
                     * 
                     */
                    void SetExtension(const HTTPServiceExtension& _extension);

                    /**
                     * 判断参数 Extension 是否已赋值
                     * @return Extension 是否已赋值
                     * 
                     */
                    bool ExtensionHasBeenSet() const;

                private:

                    /**
                     * <p>路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>上游服务类型。创建时必填，修改时可选填</p><p>枚举值：</p><ul><li>SCF： 云函数</li><li>CBR： 云托管</li><li>STATIC_STORE： 静态托管</li><li>WEB_SCF： web云函数</li><li>LH： Lighthouse</li></ul>
                     */
                    std::string m_upstreamResourceType;
                    bool m_upstreamResourceTypeHasBeenSet;

                    /**
                     * <p>上游服务名。创建时必填，修改时可选填</p>
                     */
                    std::string m_upstreamResourceName;
                    bool m_upstreamResourceNameHasBeenSet;

                    /**
                     * <p>路径重写</p>
                     */
                    HTTPServicePathRewrite m_pathRewrite;
                    bool m_pathRewriteHasBeenSet;

                    /**
                     * <p>是否开启安全域名。默认开启</p>
                     */
                    bool m_enableSafeDomain;
                    bool m_enableSafeDomainHasBeenSet;

                    /**
                     * <p>是否开启身份认证。默认关闭</p>
                     */
                    bool m_enableAuth;
                    bool m_enableAuthHasBeenSet;

                    /**
                     * <p>是否开启路径透传。默认关闭</p>
                     */
                    bool m_enablePathTransmission;
                    bool m_enablePathTransmissionHasBeenSet;

                    /**
                     * <p>QPS限频策略</p>
                     */
                    HTTPServiceRouteQPSPolicy m_qPSPolicy;
                    bool m_qPSPolicyHasBeenSet;

                    /**
                     * <p>是否开启路由</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>扩展字段，内部包含headers处理等</p>
                     */
                    HTTPServiceExtension m_extension;
                    bool m_extensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEROUTEPARAM_H_
