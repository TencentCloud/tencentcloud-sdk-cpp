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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBESKILLSECSCANRESULTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBESKILLSECSCANRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeSkillSecScanResult请求参数结构体
                */
                class DescribeSkillSecScanResultRequest : public AbstractModel
                {
                public:
                    DescribeSkillSecScanResultRequest();
                    ~DescribeSkillSecScanResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>服务ID</p>
                     * @return ServiceId <p>服务ID</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>服务ID</p>
                     * @param _serviceId <p>服务ID</p>
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
                     * 获取<p>ZIP 文件的 SHA256 哈希值，格式为 sha256:hex_digest，请严格遵循文档中的zip打包规范</p>
                     * @return ContentHash <p>ZIP 文件的 SHA256 哈希值，格式为 sha256:hex_digest，请严格遵循文档中的zip打包规范</p>
                     * 
                     */
                    std::string GetContentHash() const;

                    /**
                     * 设置<p>ZIP 文件的 SHA256 哈希值，格式为 sha256:hex_digest，请严格遵循文档中的zip打包规范</p>
                     * @param _contentHash <p>ZIP 文件的 SHA256 哈希值，格式为 sha256:hex_digest，请严格遵循文档中的zip打包规范</p>
                     * 
                     */
                    void SetContentHash(const std::string& _contentHash);

                    /**
                     * 判断参数 ContentHash 是否已赋值
                     * @return ContentHash 是否已赋值
                     * 
                     */
                    bool ContentHashHasBeenSet() const;

                    /**
                     * 获取<p>返回语言。支持 zh / en，默认 zh</p>
                     * @return Lang <p>返回语言。支持 zh / en，默认 zh</p>
                     * 
                     */
                    std::string GetLang() const;

                    /**
                     * 设置<p>返回语言。支持 zh / en，默认 zh</p>
                     * @param _lang <p>返回语言。支持 zh / en，默认 zh</p>
                     * 
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                private:

                    /**
                     * <p>服务ID</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>ZIP 文件的 SHA256 哈希值，格式为 sha256:hex_digest，请严格遵循文档中的zip打包规范</p>
                     */
                    std::string m_contentHash;
                    bool m_contentHashHasBeenSet;

                    /**
                     * <p>返回语言。支持 zh / en，默认 zh</p>
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBESKILLSECSCANRESULTREQUEST_H_
