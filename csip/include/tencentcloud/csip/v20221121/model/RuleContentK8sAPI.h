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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTK8SAPI_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTK8SAPI_H_

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
                * EDR K8s API 异常请求规则内容。
                */
                class RuleContentK8sAPI : public AbstractModel
                {
                public:
                    RuleContentK8sAPI();
                    ~RuleContentK8sAPI() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>请求资源</p>
                     * @return RequestURI <p>请求资源</p>
                     * 
                     */
                    std::string GetRequestURI() const;

                    /**
                     * 设置<p>请求资源</p>
                     * @param _requestURI <p>请求资源</p>
                     * 
                     */
                    void SetRequestURI(const std::string& _requestURI);

                    /**
                     * 判断参数 RequestURI 是否已赋值
                     * @return RequestURI 是否已赋值
                     * 
                     */
                    bool RequestURIHasBeenSet() const;

                    /**
                     * 获取<p>操作类型</p>
                     * @return Verb <p>操作类型</p>
                     * 
                     */
                    std::string GetVerb() const;

                    /**
                     * 设置<p>操作类型</p>
                     * @param _verb <p>操作类型</p>
                     * 
                     */
                    void SetVerb(const std::string& _verb);

                    /**
                     * 判断参数 Verb 是否已赋值
                     * @return Verb 是否已赋值
                     * 
                     */
                    bool VerbHasBeenSet() const;

                    /**
                     * 获取<p>发起请求用户</p>
                     * @return RequestUser <p>发起请求用户</p>
                     * 
                     */
                    std::string GetRequestUser() const;

                    /**
                     * 设置<p>发起请求用户</p>
                     * @param _requestUser <p>发起请求用户</p>
                     * 
                     */
                    void SetRequestUser(const std::string& _requestUser);

                    /**
                     * 判断参数 RequestUser 是否已赋值
                     * @return RequestUser 是否已赋值
                     * 
                     */
                    bool RequestUserHasBeenSet() const;

                    /**
                     * 获取<p>用户代理</p>
                     * @return UserAgent <p>用户代理</p>
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置<p>用户代理</p>
                     * @param _userAgent <p>用户代理</p>
                     * 
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     * 
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取<p>来源 IP</p>
                     * @return SourceIPS <p>来源 IP</p>
                     * 
                     */
                    std::string GetSourceIPS() const;

                    /**
                     * 设置<p>来源 IP</p>
                     * @param _sourceIPS <p>来源 IP</p>
                     * 
                     */
                    void SetSourceIPS(const std::string& _sourceIPS);

                    /**
                     * 判断参数 SourceIPS 是否已赋值
                     * @return SourceIPS 是否已赋值
                     * 
                     */
                    bool SourceIPSHasBeenSet() const;

                    /**
                     * 获取<p>响应状态码</p>
                     * @return ResponseStatusCode <p>响应状态码</p>
                     * 
                     */
                    std::string GetResponseStatusCode() const;

                    /**
                     * 设置<p>响应状态码</p>
                     * @param _responseStatusCode <p>响应状态码</p>
                     * 
                     */
                    void SetResponseStatusCode(const std::string& _responseStatusCode);

                    /**
                     * 判断参数 ResponseStatusCode 是否已赋值
                     * @return ResponseStatusCode 是否已赋值
                     * 
                     */
                    bool ResponseStatusCodeHasBeenSet() const;

                    /**
                     * 获取<p>请求数据</p>
                     * @return RequestObject <p>请求数据</p>
                     * 
                     */
                    std::string GetRequestObject() const;

                    /**
                     * 设置<p>请求数据</p>
                     * @param _requestObject <p>请求数据</p>
                     * 
                     */
                    void SetRequestObject(const std::string& _requestObject);

                    /**
                     * 判断参数 RequestObject 是否已赋值
                     * @return RequestObject 是否已赋值
                     * 
                     */
                    bool RequestObjectHasBeenSet() const;

                    /**
                     * 获取<p>响应数据</p>
                     * @return ResponseObject <p>响应数据</p>
                     * 
                     */
                    std::string GetResponseObject() const;

                    /**
                     * 设置<p>响应数据</p>
                     * @param _responseObject <p>响应数据</p>
                     * 
                     */
                    void SetResponseObject(const std::string& _responseObject);

                    /**
                     * 判断参数 ResponseObject 是否已赋值
                     * @return ResponseObject 是否已赋值
                     * 
                     */
                    bool ResponseObjectHasBeenSet() const;

                    /**
                     * 获取<p>挂载宿主机目录</p>
                     * @return MountHostDir <p>挂载宿主机目录</p>
                     * 
                     */
                    std::string GetMountHostDir() const;

                    /**
                     * 设置<p>挂载宿主机目录</p>
                     * @param _mountHostDir <p>挂载宿主机目录</p>
                     * 
                     */
                    void SetMountHostDir(const std::string& _mountHostDir);

                    /**
                     * 判断参数 MountHostDir 是否已赋值
                     * @return MountHostDir 是否已赋值
                     * 
                     */
                    bool MountHostDirHasBeenSet() const;

                    /**
                     * 获取<p>Pod 名称或 IP</p>
                     * @return PodNameIP <p>Pod 名称或 IP</p>
                     * 
                     */
                    std::string GetPodNameIP() const;

                    /**
                     * 设置<p>Pod 名称或 IP</p>
                     * @param _podNameIP <p>Pod 名称或 IP</p>
                     * 
                     */
                    void SetPodNameIP(const std::string& _podNameIP);

                    /**
                     * 判断参数 PodNameIP 是否已赋值
                     * @return PodNameIP 是否已赋值
                     * 
                     */
                    bool PodNameIPHasBeenSet() const;

                    /**
                     * 获取<p>审计日志 ID</p>
                     * @return AuditID <p>审计日志 ID</p>
                     * 
                     */
                    std::string GetAuditID() const;

                    /**
                     * 设置<p>审计日志 ID</p>
                     * @param _auditID <p>审计日志 ID</p>
                     * 
                     */
                    void SetAuditID(const std::string& _auditID);

                    /**
                     * 判断参数 AuditID 是否已赋值
                     * @return AuditID 是否已赋值
                     * 
                     */
                    bool AuditIDHasBeenSet() const;

                private:

                    /**
                     * <p>请求资源</p>
                     */
                    std::string m_requestURI;
                    bool m_requestURIHasBeenSet;

                    /**
                     * <p>操作类型</p>
                     */
                    std::string m_verb;
                    bool m_verbHasBeenSet;

                    /**
                     * <p>发起请求用户</p>
                     */
                    std::string m_requestUser;
                    bool m_requestUserHasBeenSet;

                    /**
                     * <p>用户代理</p>
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * <p>来源 IP</p>
                     */
                    std::string m_sourceIPS;
                    bool m_sourceIPSHasBeenSet;

                    /**
                     * <p>响应状态码</p>
                     */
                    std::string m_responseStatusCode;
                    bool m_responseStatusCodeHasBeenSet;

                    /**
                     * <p>请求数据</p>
                     */
                    std::string m_requestObject;
                    bool m_requestObjectHasBeenSet;

                    /**
                     * <p>响应数据</p>
                     */
                    std::string m_responseObject;
                    bool m_responseObjectHasBeenSet;

                    /**
                     * <p>挂载宿主机目录</p>
                     */
                    std::string m_mountHostDir;
                    bool m_mountHostDirHasBeenSet;

                    /**
                     * <p>Pod 名称或 IP</p>
                     */
                    std::string m_podNameIP;
                    bool m_podNameIPHasBeenSet;

                    /**
                     * <p>审计日志 ID</p>
                     */
                    std::string m_auditID;
                    bool m_auditIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTK8SAPI_H_
