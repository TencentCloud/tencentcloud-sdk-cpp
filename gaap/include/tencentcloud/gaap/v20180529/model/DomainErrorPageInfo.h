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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DOMAINERRORPAGEINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DOMAINERRORPAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 域名的定制错误响应配置
                */
                class DomainErrorPageInfo : public AbstractModel
                {
                public:
                    DomainErrorPageInfo();
                    ~DomainErrorPageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取错误定制响应的配置ID
                     * @return ErrorPageId 错误定制响应的配置ID
                     * 
                     */
                    std::string GetErrorPageId() const;

                    /**
                     * 设置错误定制响应的配置ID
                     * @param _errorPageId 错误定制响应的配置ID
                     * 
                     */
                    void SetErrorPageId(const std::string& _errorPageId);

                    /**
                     * 判断参数 ErrorPageId 是否已赋值
                     * @return ErrorPageId 是否已赋值
                     * 
                     */
                    bool ErrorPageIdHasBeenSet() const;

                    /**
                     * 获取监听器ID
                     * @return ListenerId 监听器ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID
                     * @param _listenerId 监听器ID
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
                     * 获取原始错误码
                     * @return ErrorNos 原始错误码
                     * 
                     */
                    std::vector<int64_t> GetErrorNos() const;

                    /**
                     * 设置原始错误码
                     * @param _errorNos 原始错误码
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
                     * 获取新的错误码
                     * @return NewErrorNo 新的错误码
                     * 
                     */
                    int64_t GetNewErrorNo() const;

                    /**
                     * 设置新的错误码
                     * @param _newErrorNo 新的错误码
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
                     * 获取需要清理的响应头
                     * @return ClearHeaders 需要清理的响应头
                     * 
                     */
                    std::vector<std::string> GetClearHeaders() const;

                    /**
                     * 设置需要清理的响应头
                     * @param _clearHeaders 需要清理的响应头
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
                     * 获取需要设置的响应头
                     * @return SetHeaders 需要设置的响应头
                     * 
                     */
                    std::vector<HttpHeaderParam> GetSetHeaders() const;

                    /**
                     * 设置需要设置的响应头
                     * @param _setHeaders 需要设置的响应头
                     * 
                     */
                    void SetSetHeaders(const std::vector<HttpHeaderParam>& _setHeaders);

                    /**
                     * 判断参数 SetHeaders 是否已赋值
                     * @return SetHeaders 是否已赋值
                     * 
                     */
                    bool SetHeadersHasBeenSet() const;

                    /**
                     * 获取设置的响应体(不包括 HTTP头)
                     * @return Body 设置的响应体(不包括 HTTP头)
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置设置的响应体(不包括 HTTP头)
                     * @param _body 设置的响应体(不包括 HTTP头)
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
                     * 获取规则状态,0为成功
                     * @return Status 规则状态,0为成功
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置规则状态,0为成功
                     * @param _status 规则状态,0为成功
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 错误定制响应的配置ID
                     */
                    std::string m_errorPageId;
                    bool m_errorPageIdHasBeenSet;

                    /**
                     * 监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 原始错误码
                     */
                    std::vector<int64_t> m_errorNos;
                    bool m_errorNosHasBeenSet;

                    /**
                     * 新的错误码
                     */
                    int64_t m_newErrorNo;
                    bool m_newErrorNoHasBeenSet;

                    /**
                     * 需要清理的响应头
                     */
                    std::vector<std::string> m_clearHeaders;
                    bool m_clearHeadersHasBeenSet;

                    /**
                     * 需要设置的响应头
                     */
                    std::vector<HttpHeaderParam> m_setHeaders;
                    bool m_setHeadersHasBeenSet;

                    /**
                     * 设置的响应体(不包括 HTTP头)
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * 规则状态,0为成功
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DOMAINERRORPAGEINFO_H_
