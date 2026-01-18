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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEDOMAINERRORPAGEINFOREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEDOMAINERRORPAGEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/HttpHeaderParam.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateDomainErrorPageInfo请求参数结构体
                */
                class CreateDomainErrorPageInfoRequest : public AbstractModel
                {
                public:
                    CreateDomainErrorPageInfoRequest();
                    ~CreateDomainErrorPageInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>监听器ID</p>
                     * @return ListenerId <p>监听器ID</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>监听器ID</p>
                     * @param _listenerId <p>监听器ID</p>
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取<p>域名</p>
                     * @return Domain <p>域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
                     * @param _domain <p>域名</p>
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
                     * 获取<p>原始错误码</p>
                     * @return ErrorNos <p>原始错误码</p>
                     * 
                     */
                    std::vector<int64_t> GetErrorNos() const;

                    /**
                     * 设置<p>原始错误码</p>
                     * @param _errorNos <p>原始错误码</p>
                     * 
                     */
                    void SetErrorNos(const std::vector<int64_t>& _errorNos);

                    /**
                     * 判断参数 ErrorNos 是否已赋值
                     * @return ErrorNos 是否已赋值
                     * 
                     */
                    bool ErrorNosHasBeenSet() const;

                    /**
                     * 获取<p>新的响应包体</p>
                     * @return Body <p>新的响应包体</p>
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置<p>新的响应包体</p>
                     * @param _body <p>新的响应包体</p>
                     * 
                     */
                    void SetBody(const std::string& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取<p>新错误码</p>
                     * @return NewErrorNo <p>新错误码</p>
                     * 
                     */
                    int64_t GetNewErrorNo() const;

                    /**
                     * 设置<p>新错误码</p>
                     * @param _newErrorNo <p>新错误码</p>
                     * 
                     */
                    void SetNewErrorNo(const int64_t& _newErrorNo);

                    /**
                     * 判断参数 NewErrorNo 是否已赋值
                     * @return NewErrorNo 是否已赋值
                     * 
                     */
                    bool NewErrorNoHasBeenSet() const;

                    /**
                     * 获取<p>需要删除的响应头</p>
                     * @return ClearHeaders <p>需要删除的响应头</p>
                     * 
                     */
                    std::vector<std::string> GetClearHeaders() const;

                    /**
                     * 设置<p>需要删除的响应头</p>
                     * @param _clearHeaders <p>需要删除的响应头</p>
                     * 
                     */
                    void SetClearHeaders(const std::vector<std::string>& _clearHeaders);

                    /**
                     * 判断参数 ClearHeaders 是否已赋值
                     * @return ClearHeaders 是否已赋值
                     * 
                     */
                    bool ClearHeadersHasBeenSet() const;

                    /**
                     * 获取<p>需要设置的响应头</p>
                     * @return SetHeaders <p>需要设置的响应头</p>
                     * 
                     */
                    std::vector<HttpHeaderParam> GetSetHeaders() const;

                    /**
                     * 设置<p>需要设置的响应头</p>
                     * @param _setHeaders <p>需要设置的响应头</p>
                     * 
                     */
                    void SetSetHeaders(const std::vector<HttpHeaderParam>& _setHeaders);

                    /**
                     * 判断参数 SetHeaders 是否已赋值
                     * @return SetHeaders 是否已赋值
                     * 
                     */
                    bool SetHeadersHasBeenSet() const;

                private:

                    /**
                     * <p>监听器ID</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>原始错误码</p>
                     */
                    std::vector<int64_t> m_errorNos;
                    bool m_errorNosHasBeenSet;

                    /**
                     * <p>新的响应包体</p>
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * <p>新错误码</p>
                     */
                    int64_t m_newErrorNo;
                    bool m_newErrorNoHasBeenSet;

                    /**
                     * <p>需要删除的响应头</p>
                     */
                    std::vector<std::string> m_clearHeaders;
                    bool m_clearHeadersHasBeenSet;

                    /**
                     * <p>需要设置的响应头</p>
                     */
                    std::vector<HttpHeaderParam> m_setHeaders;
                    bool m_setHeadersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEDOMAINERRORPAGEINFOREQUEST_H_
