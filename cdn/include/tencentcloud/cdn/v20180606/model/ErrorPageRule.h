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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ERRORPAGERULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ERRORPAGERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 状态码重定向规则配置
                */
                class ErrorPageRule : public AbstractModel
                {
                public:
                    ErrorPageRule();
                    ~ErrorPageRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态码
支持 400、403、404、500
                     * @return StatusCode 状态码
支持 400、403、404、500
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置状态码
支持 400、403、404、500
                     * @param _statusCode 状态码
支持 400、403、404、500
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取重定向状态码设置
支持 301 或 302
                     * @return RedirectCode 重定向状态码设置
支持 301 或 302
                     * 
                     */
                    int64_t GetRedirectCode() const;

                    /**
                     * 设置重定向状态码设置
支持 301 或 302
                     * @param _redirectCode 重定向状态码设置
支持 301 或 302
                     * 
                     */
                    void SetRedirectCode(const int64_t& _redirectCode);

                    /**
                     * 判断参数 RedirectCode 是否已赋值
                     * @return RedirectCode 是否已赋值
                     * 
                     */
                    bool RedirectCodeHasBeenSet() const;

                    /**
                     * 获取重定向 URL
需要为完整跳转路径，如 https://www.test.com/error.html
                     * @return RedirectUrl 重定向 URL
需要为完整跳转路径，如 https://www.test.com/error.html
                     * 
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置重定向 URL
需要为完整跳转路径，如 https://www.test.com/error.html
                     * @param _redirectUrl 重定向 URL
需要为完整跳转路径，如 https://www.test.com/error.html
                     * 
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     * 
                     */
                    bool RedirectUrlHasBeenSet() const;

                private:

                    /**
                     * 状态码
支持 400、403、404、500
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 重定向状态码设置
支持 301 或 302
                     */
                    int64_t m_redirectCode;
                    bool m_redirectCodeHasBeenSet;

                    /**
                     * 重定向 URL
需要为完整跳转路径，如 https://www.test.com/error.html
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ERRORPAGERULE_H_
