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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_VERIFYHTTPSERVICEROUTECHECKITEM_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_VERIFYHTTPSERVICEROUTECHECKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/OwnershipVerificationInfo.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * VerifyHTTPServiceRoute单项前置校验结果
                */
                class VerifyHTTPServiceRouteCheckItem : public AbstractModel
                {
                public:
                    VerifyHTTPServiceRouteCheckItem();
                    ~VerifyHTTPServiceRouteCheckItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>检查状态</p><p>枚举值：</p><ul><li>PASS： 通过</li><li>SKIPPED： 跳过（无需校验，视为通过）</li><li>FAIL： 失败</li></ul><p>默认值：SKIPPED</p>
                     * @return Status <p>检查状态</p><p>枚举值：</p><ul><li>PASS： 通过</li><li>SKIPPED： 跳过（无需校验，视为通过）</li><li>FAIL： 失败</li></ul><p>默认值：SKIPPED</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>检查状态</p><p>枚举值：</p><ul><li>PASS： 通过</li><li>SKIPPED： 跳过（无需校验，视为通过）</li><li>FAIL： 失败</li></ul><p>默认值：SKIPPED</p>
                     * @param _status <p>检查状态</p><p>枚举值：</p><ul><li>PASS： 通过</li><li>SKIPPED： 跳过（无需校验，视为通过）</li><li>FAIL： 失败</li></ul><p>默认值：SKIPPED</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>前置校验子项失败原因枚举，仅在 Status=FAIL 时有值，供前端根据 Code 精确渲染提示与操作指引</p><p>枚举值：</p><ul><li>INTERNAL_CHECK_ERROR： 预检过程中依赖服务/内部资源异常</li><li>OWNERSHIP_DNS_LOOKUP_FAILED： DNS解析失败</li><li>OWNERSHIP_VERIFY_FAILED： DNS记录内容与预期dns记录值不匹配</li><li>CERT_VERIFY_FAILED： 证书校验失败：不匹配当前域名 / 已过期 / 不属于当前 uin 等</li><li>QUOTA_EXCEEDED： 域名或路径数量超出配额限制</li><li>ROUTE_CONFLICT： 存在同域名下已被占用的路径，前端应提示用户修改路径</li><li>DOMAIN_IN_USE： 域名已被其他环境占用，无法在当前环境接入</li><li>NON_INTERNAL_ACCOUNT： 使用了内部域名但当前账号不是内部账号</li><li>DOMAIN_IN_BLACKLIST： 域名被列入黑名单，禁止接入</li><li>CDN_RESOURCE_PROCESSING： CDN 资源正处于变更中，需稍后重试</li><li>CDN_RESOURCE_OFFLINE： CDN 资源已下线，需重新上线后才能绑定</li><li>EO_OWNERSHIP_VERIFY_FAILED： EdgeOne 侧归属权未通过，响应体中 OwnershipVerification 会给出，EdgeOne要求配置的 DNS/文件 verification 指引</li><li>EO_DOMAIN_NOT_ICP： EdgeOne 检测到域名未备案</li><li>EO_DOMAIN_IN_USE： EdgeOne 检测到域名已被其他账号接入 EdgeOne</li></ul>
                     * @return Code <p>前置校验子项失败原因枚举，仅在 Status=FAIL 时有值，供前端根据 Code 精确渲染提示与操作指引</p><p>枚举值：</p><ul><li>INTERNAL_CHECK_ERROR： 预检过程中依赖服务/内部资源异常</li><li>OWNERSHIP_DNS_LOOKUP_FAILED： DNS解析失败</li><li>OWNERSHIP_VERIFY_FAILED： DNS记录内容与预期dns记录值不匹配</li><li>CERT_VERIFY_FAILED： 证书校验失败：不匹配当前域名 / 已过期 / 不属于当前 uin 等</li><li>QUOTA_EXCEEDED： 域名或路径数量超出配额限制</li><li>ROUTE_CONFLICT： 存在同域名下已被占用的路径，前端应提示用户修改路径</li><li>DOMAIN_IN_USE： 域名已被其他环境占用，无法在当前环境接入</li><li>NON_INTERNAL_ACCOUNT： 使用了内部域名但当前账号不是内部账号</li><li>DOMAIN_IN_BLACKLIST： 域名被列入黑名单，禁止接入</li><li>CDN_RESOURCE_PROCESSING： CDN 资源正处于变更中，需稍后重试</li><li>CDN_RESOURCE_OFFLINE： CDN 资源已下线，需重新上线后才能绑定</li><li>EO_OWNERSHIP_VERIFY_FAILED： EdgeOne 侧归属权未通过，响应体中 OwnershipVerification 会给出，EdgeOne要求配置的 DNS/文件 verification 指引</li><li>EO_DOMAIN_NOT_ICP： EdgeOne 检测到域名未备案</li><li>EO_DOMAIN_IN_USE： EdgeOne 检测到域名已被其他账号接入 EdgeOne</li></ul>
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置<p>前置校验子项失败原因枚举，仅在 Status=FAIL 时有值，供前端根据 Code 精确渲染提示与操作指引</p><p>枚举值：</p><ul><li>INTERNAL_CHECK_ERROR： 预检过程中依赖服务/内部资源异常</li><li>OWNERSHIP_DNS_LOOKUP_FAILED： DNS解析失败</li><li>OWNERSHIP_VERIFY_FAILED： DNS记录内容与预期dns记录值不匹配</li><li>CERT_VERIFY_FAILED： 证书校验失败：不匹配当前域名 / 已过期 / 不属于当前 uin 等</li><li>QUOTA_EXCEEDED： 域名或路径数量超出配额限制</li><li>ROUTE_CONFLICT： 存在同域名下已被占用的路径，前端应提示用户修改路径</li><li>DOMAIN_IN_USE： 域名已被其他环境占用，无法在当前环境接入</li><li>NON_INTERNAL_ACCOUNT： 使用了内部域名但当前账号不是内部账号</li><li>DOMAIN_IN_BLACKLIST： 域名被列入黑名单，禁止接入</li><li>CDN_RESOURCE_PROCESSING： CDN 资源正处于变更中，需稍后重试</li><li>CDN_RESOURCE_OFFLINE： CDN 资源已下线，需重新上线后才能绑定</li><li>EO_OWNERSHIP_VERIFY_FAILED： EdgeOne 侧归属权未通过，响应体中 OwnershipVerification 会给出，EdgeOne要求配置的 DNS/文件 verification 指引</li><li>EO_DOMAIN_NOT_ICP： EdgeOne 检测到域名未备案</li><li>EO_DOMAIN_IN_USE： EdgeOne 检测到域名已被其他账号接入 EdgeOne</li></ul>
                     * @param _code <p>前置校验子项失败原因枚举，仅在 Status=FAIL 时有值，供前端根据 Code 精确渲染提示与操作指引</p><p>枚举值：</p><ul><li>INTERNAL_CHECK_ERROR： 预检过程中依赖服务/内部资源异常</li><li>OWNERSHIP_DNS_LOOKUP_FAILED： DNS解析失败</li><li>OWNERSHIP_VERIFY_FAILED： DNS记录内容与预期dns记录值不匹配</li><li>CERT_VERIFY_FAILED： 证书校验失败：不匹配当前域名 / 已过期 / 不属于当前 uin 等</li><li>QUOTA_EXCEEDED： 域名或路径数量超出配额限制</li><li>ROUTE_CONFLICT： 存在同域名下已被占用的路径，前端应提示用户修改路径</li><li>DOMAIN_IN_USE： 域名已被其他环境占用，无法在当前环境接入</li><li>NON_INTERNAL_ACCOUNT： 使用了内部域名但当前账号不是内部账号</li><li>DOMAIN_IN_BLACKLIST： 域名被列入黑名单，禁止接入</li><li>CDN_RESOURCE_PROCESSING： CDN 资源正处于变更中，需稍后重试</li><li>CDN_RESOURCE_OFFLINE： CDN 资源已下线，需重新上线后才能绑定</li><li>EO_OWNERSHIP_VERIFY_FAILED： EdgeOne 侧归属权未通过，响应体中 OwnershipVerification 会给出，EdgeOne要求配置的 DNS/文件 verification 指引</li><li>EO_DOMAIN_NOT_ICP： EdgeOne 检测到域名未备案</li><li>EO_DOMAIN_IN_USE： EdgeOne 检测到域名已被其他账号接入 EdgeOne</li></ul>
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取<p>详细描述；Skipped 时给出跳过原因；Pass 时可为空</p>
                     * @return Message <p>详细描述；Skipped 时给出跳过原因；Pass 时可为空</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>详细描述；Skipped 时给出跳过原因；Pass 时可为空</p>
                     * @param _message <p>详细描述；Skipped 时给出跳过原因；Pass 时可为空</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>域名归属权验证指引信息，仅在所有权校验未通过时有值</p>
                     * @return OwnershipVerification <p>域名归属权验证指引信息，仅在所有权校验未通过时有值</p>
                     * 
                     */
                    OwnershipVerificationInfo GetOwnershipVerification() const;

                    /**
                     * 设置<p>域名归属权验证指引信息，仅在所有权校验未通过时有值</p>
                     * @param _ownershipVerification <p>域名归属权验证指引信息，仅在所有权校验未通过时有值</p>
                     * 
                     */
                    void SetOwnershipVerification(const OwnershipVerificationInfo& _ownershipVerification);

                    /**
                     * 判断参数 OwnershipVerification 是否已赋值
                     * @return OwnershipVerification 是否已赋值
                     * 
                     */
                    bool OwnershipVerificationHasBeenSet() const;

                private:

                    /**
                     * <p>检查状态</p><p>枚举值：</p><ul><li>PASS： 通过</li><li>SKIPPED： 跳过（无需校验，视为通过）</li><li>FAIL： 失败</li></ul><p>默认值：SKIPPED</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>前置校验子项失败原因枚举，仅在 Status=FAIL 时有值，供前端根据 Code 精确渲染提示与操作指引</p><p>枚举值：</p><ul><li>INTERNAL_CHECK_ERROR： 预检过程中依赖服务/内部资源异常</li><li>OWNERSHIP_DNS_LOOKUP_FAILED： DNS解析失败</li><li>OWNERSHIP_VERIFY_FAILED： DNS记录内容与预期dns记录值不匹配</li><li>CERT_VERIFY_FAILED： 证书校验失败：不匹配当前域名 / 已过期 / 不属于当前 uin 等</li><li>QUOTA_EXCEEDED： 域名或路径数量超出配额限制</li><li>ROUTE_CONFLICT： 存在同域名下已被占用的路径，前端应提示用户修改路径</li><li>DOMAIN_IN_USE： 域名已被其他环境占用，无法在当前环境接入</li><li>NON_INTERNAL_ACCOUNT： 使用了内部域名但当前账号不是内部账号</li><li>DOMAIN_IN_BLACKLIST： 域名被列入黑名单，禁止接入</li><li>CDN_RESOURCE_PROCESSING： CDN 资源正处于变更中，需稍后重试</li><li>CDN_RESOURCE_OFFLINE： CDN 资源已下线，需重新上线后才能绑定</li><li>EO_OWNERSHIP_VERIFY_FAILED： EdgeOne 侧归属权未通过，响应体中 OwnershipVerification 会给出，EdgeOne要求配置的 DNS/文件 verification 指引</li><li>EO_DOMAIN_NOT_ICP： EdgeOne 检测到域名未备案</li><li>EO_DOMAIN_IN_USE： EdgeOne 检测到域名已被其他账号接入 EdgeOne</li></ul>
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>详细描述；Skipped 时给出跳过原因；Pass 时可为空</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>域名归属权验证指引信息，仅在所有权校验未通过时有值</p>
                     */
                    OwnershipVerificationInfo m_ownershipVerification;
                    bool m_ownershipVerificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_VERIFYHTTPSERVICEROUTECHECKITEM_H_
