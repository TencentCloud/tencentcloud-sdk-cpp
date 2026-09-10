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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DOWNLOADFUNCTIONRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DOWNLOADFUNCTIONRESPONSE_H_

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
                * DownloadFunction返回参数结构体
                */
                class DownloadFunctionResponse : public AbstractModel
                {
                public:
                    DownloadFunctionResponse();
                    ~DownloadFunctionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>调用SCF报错的错误码</p>
                     * @return SCFErrorCode <p>调用SCF报错的错误码</p>
                     * 
                     */
                    std::string GetSCFErrorCode() const;

                    /**
                     * 判断参数 SCFErrorCode 是否已赋值
                     * @return SCFErrorCode 是否已赋值
                     * 
                     */
                    bool SCFErrorCodeHasBeenSet() const;

                    /**
                     * 获取<p>调用SCF报错的错误信息</p>
                     * @return SCFErrorMsg <p>调用SCF报错的错误信息</p>
                     * 
                     */
                    std::string GetSCFErrorMsg() const;

                    /**
                     * 判断参数 SCFErrorMsg 是否已赋值
                     * @return SCFErrorMsg 是否已赋值
                     * 
                     */
                    bool SCFErrorMsgHasBeenSet() const;

                    /**
                     * 获取<p>返回的不跨域url</p>
                     * @return Url <p>返回的不跨域url</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>函数的SHA256编码</p>
                     * @return CodeSha256 <p>函数的SHA256编码</p>
                     * 
                     */
                    std::string GetCodeSha256() const;

                    /**
                     * 判断参数 CodeSha256 是否已赋值
                     * @return CodeSha256 是否已赋值
                     * 
                     */
                    bool CodeSha256HasBeenSet() const;

                private:

                    /**
                     * <p>调用SCF报错的错误码</p>
                     */
                    std::string m_sCFErrorCode;
                    bool m_sCFErrorCodeHasBeenSet;

                    /**
                     * <p>调用SCF报错的错误信息</p>
                     */
                    std::string m_sCFErrorMsg;
                    bool m_sCFErrorMsgHasBeenSet;

                    /**
                     * <p>返回的不跨域url</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>函数的SHA256编码</p>
                     */
                    std::string m_codeSha256;
                    bool m_codeSha256HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DOWNLOADFUNCTIONRESPONSE_H_
