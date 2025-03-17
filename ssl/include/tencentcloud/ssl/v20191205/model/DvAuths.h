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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DVAUTHS_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DVAUTHS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 返回参数键为 DvAuths 的内容。
                */
                class DvAuths : public AbstractModel
                {
                public:
                    DvAuths();
                    ~DvAuths() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书域名验证记录Key
                     * @return DvAuthKey 证书域名验证记录Key
                     * 
                     */
                    std::string GetDvAuthKey() const;

                    /**
                     * 设置证书域名验证记录Key
                     * @param _dvAuthKey 证书域名验证记录Key
                     * 
                     */
                    void SetDvAuthKey(const std::string& _dvAuthKey);

                    /**
                     * 判断参数 DvAuthKey 是否已赋值
                     * @return DvAuthKey 是否已赋值
                     * 
                     */
                    bool DvAuthKeyHasBeenSet() const;

                    /**
                     * 获取证书域名验证记录值
                     * @return DvAuthValue 证书域名验证记录值
                     * 
                     */
                    std::string GetDvAuthValue() const;

                    /**
                     * 设置证书域名验证记录值
                     * @param _dvAuthValue 证书域名验证记录值
                     * 
                     */
                    void SetDvAuthValue(const std::string& _dvAuthValue);

                    /**
                     * 判断参数 DvAuthValue 是否已赋值
                     * @return DvAuthValue 是否已赋值
                     * 
                     */
                    bool DvAuthValueHasBeenSet() const;

                    /**
                     * 获取证书域名验证域名值
                     * @return DvAuthDomain 证书域名验证域名值
                     * 
                     */
                    std::string GetDvAuthDomain() const;

                    /**
                     * 设置证书域名验证域名值
                     * @param _dvAuthDomain 证书域名验证域名值
                     * 
                     */
                    void SetDvAuthDomain(const std::string& _dvAuthDomain);

                    /**
                     * 判断参数 DvAuthDomain 是否已赋值
                     * @return DvAuthDomain 是否已赋值
                     * 
                     */
                    bool DvAuthDomainHasBeenSet() const;

                    /**
                     * 获取证书域名验证文件路径， 仅FILE、FILE_PROXY使用
                     * @return DvAuthPath 证书域名验证文件路径， 仅FILE、FILE_PROXY使用
                     * 
                     */
                    std::string GetDvAuthPath() const;

                    /**
                     * 设置证书域名验证文件路径， 仅FILE、FILE_PROXY使用
                     * @param _dvAuthPath 证书域名验证文件路径， 仅FILE、FILE_PROXY使用
                     * 
                     */
                    void SetDvAuthPath(const std::string& _dvAuthPath);

                    /**
                     * 判断参数 DvAuthPath 是否已赋值
                     * @return DvAuthPath 是否已赋值
                     * 
                     */
                    bool DvAuthPathHasBeenSet() const;

                    /**
                     * 获取证书域名验证子域名
                     * @return DvAuthSubDomain 证书域名验证子域名
                     * 
                     */
                    std::string GetDvAuthSubDomain() const;

                    /**
                     * 设置证书域名验证子域名
                     * @param _dvAuthSubDomain 证书域名验证子域名
                     * 
                     */
                    void SetDvAuthSubDomain(const std::string& _dvAuthSubDomain);

                    /**
                     * 判断参数 DvAuthSubDomain 是否已赋值
                     * @return DvAuthSubDomain 是否已赋值
                     * 
                     */
                    bool DvAuthSubDomainHasBeenSet() const;

                    /**
                     * 获取证书域名验证类型，取值：
TXT：DNS域名验证添加TXT记录
FILE：域名文件验证
CNAME：DNS域名验证添加CNAME记录
                     * @return DvAuthVerifyType 证书域名验证类型，取值：
TXT：DNS域名验证添加TXT记录
FILE：域名文件验证
CNAME：DNS域名验证添加CNAME记录
                     * 
                     */
                    std::string GetDvAuthVerifyType() const;

                    /**
                     * 设置证书域名验证类型，取值：
TXT：DNS域名验证添加TXT记录
FILE：域名文件验证
CNAME：DNS域名验证添加CNAME记录
                     * @param _dvAuthVerifyType 证书域名验证类型，取值：
TXT：DNS域名验证添加TXT记录
FILE：域名文件验证
CNAME：DNS域名验证添加CNAME记录
                     * 
                     */
                    void SetDvAuthVerifyType(const std::string& _dvAuthVerifyType);

                    /**
                     * 判断参数 DvAuthVerifyType 是否已赋值
                     * @return DvAuthVerifyType 是否已赋值
                     * 
                     */
                    bool DvAuthVerifyTypeHasBeenSet() const;

                private:

                    /**
                     * 证书域名验证记录Key
                     */
                    std::string m_dvAuthKey;
                    bool m_dvAuthKeyHasBeenSet;

                    /**
                     * 证书域名验证记录值
                     */
                    std::string m_dvAuthValue;
                    bool m_dvAuthValueHasBeenSet;

                    /**
                     * 证书域名验证域名值
                     */
                    std::string m_dvAuthDomain;
                    bool m_dvAuthDomainHasBeenSet;

                    /**
                     * 证书域名验证文件路径， 仅FILE、FILE_PROXY使用
                     */
                    std::string m_dvAuthPath;
                    bool m_dvAuthPathHasBeenSet;

                    /**
                     * 证书域名验证子域名
                     */
                    std::string m_dvAuthSubDomain;
                    bool m_dvAuthSubDomainHasBeenSet;

                    /**
                     * 证书域名验证类型，取值：
TXT：DNS域名验证添加TXT记录
FILE：域名文件验证
CNAME：DNS域名验证添加CNAME记录
                     */
                    std::string m_dvAuthVerifyType;
                    bool m_dvAuthVerifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DVAUTHS_H_
