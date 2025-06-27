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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYSUSPICIOUSASSET_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYSUSPICIOUSASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/DisplayToolCommon.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 影子资产详情
                */
                class DisplaySuspiciousAsset : public AbstractModel
                {
                public:
                    DisplaySuspiciousAsset();
                    ~DisplaySuspiciousAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键ID
                     * @return Id 主键ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置主键ID
                     * @param _id 主键ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取公共字段
                     * @return DisplayToolCommon 公共字段
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置公共字段
                     * @param _displayToolCommon 公共字段
                     * 
                     */
                    void SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon);

                    /**
                     * 判断参数 DisplayToolCommon 是否已赋值
                     * @return DisplayToolCommon 是否已赋值
                     * 
                     */
                    bool DisplayToolCommonHasBeenSet() const;

                    /**
                     * 获取Url
                     * @return Url Url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Url
                     * @param _url Url
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取标题
                     * @return Title 标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置标题
                     * @param _title 标题
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取报文长度
                     * @return ContentLength 报文长度
                     * 
                     */
                    int64_t GetContentLength() const;

                    /**
                     * 设置报文长度
                     * @param _contentLength 报文长度
                     * 
                     */
                    void SetContentLength(const int64_t& _contentLength);

                    /**
                     * 判断参数 ContentLength 是否已赋值
                     * @return ContentLength 是否已赋值
                     * 
                     */
                    bool ContentLengthHasBeenSet() const;

                    /**
                     * 获取报文内容
                     * @return Content 报文内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置报文内容
                     * @param _content 报文内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取截图缩略图URL
                     * @return ScreenshotThumbUrl 截图缩略图URL
                     * 
                     */
                    std::string GetScreenshotThumbUrl() const;

                    /**
                     * 设置截图缩略图URL
                     * @param _screenshotThumbUrl 截图缩略图URL
                     * 
                     */
                    void SetScreenshotThumbUrl(const std::string& _screenshotThumbUrl);

                    /**
                     * 判断参数 ScreenshotThumbUrl 是否已赋值
                     * @return ScreenshotThumbUrl 是否已赋值
                     * 
                     */
                    bool ScreenshotThumbUrlHasBeenSet() const;

                    /**
                     * 获取截图URL
                     * @return ScreenshotUrl 截图URL
                     * 
                     */
                    std::string GetScreenshotUrl() const;

                    /**
                     * 设置截图URL
                     * @param _screenshotUrl 截图URL
                     * 
                     */
                    void SetScreenshotUrl(const std::string& _screenshotUrl);

                    /**
                     * 判断参数 ScreenshotUrl 是否已赋值
                     * @return ScreenshotUrl 是否已赋值
                     * 
                     */
                    bool ScreenshotUrlHasBeenSet() const;

                    /**
                     * 获取状态码
                     * @return Code 状态码
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置状态码
                     * @param _code 状态码
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Api
                     * @return Api Api
                     * 
                     */
                    std::string GetApi() const;

                    /**
                     * 设置Api
                     * @param _api Api
                     * 
                     */
                    void SetApi(const std::string& _api);

                    /**
                     * 判断参数 Api 是否已赋值
                     * @return Api 是否已赋值
                     * 
                     */
                    bool ApiHasBeenSet() const;

                    /**
                     * 获取解析的IP
                     * @return Ip 解析的IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置解析的IP
                     * @param _ip 解析的IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取证书信息
                     * @return Ssl 证书信息
                     * 
                     */
                    std::string GetSsl() const;

                    /**
                     * 设置证书信息
                     * @param _ssl 证书信息
                     * 
                     */
                    void SetSsl(const std::string& _ssl);

                    /**
                     * 判断参数 Ssl 是否已赋值
                     * @return Ssl 是否已赋值
                     * 
                     */
                    bool SslHasBeenSet() const;

                    /**
                     * 获取ssl证书过期时间
                     * @return SslExpiredTime ssl证书过期时间
                     * 
                     */
                    std::string GetSslExpiredTime() const;

                    /**
                     * 设置ssl证书过期时间
                     * @param _sslExpiredTime ssl证书过期时间
                     * 
                     */
                    void SetSslExpiredTime(const std::string& _sslExpiredTime);

                    /**
                     * 判断参数 SslExpiredTime 是否已赋值
                     * @return SslExpiredTime 是否已赋值
                     * 
                     */
                    bool SslExpiredTimeHasBeenSet() const;

                    /**
                     * 获取来源类型
                     * @return SourceType 来源类型
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置来源类型
                     * @param _sourceType 来源类型
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取来源值
                     * @return SourceValue 来源值
                     * 
                     */
                    std::string GetSourceValue() const;

                    /**
                     * 设置来源值
                     * @param _sourceValue 来源值
                     * 
                     */
                    void SetSourceValue(const std::string& _sourceValue);

                    /**
                     * 判断参数 SourceValue 是否已赋值
                     * @return SourceValue 是否已赋值
                     * 
                     */
                    bool SourceValueHasBeenSet() const;

                    /**
                     * 获取是否信任
                     * @return Trusted 是否信任
                     * 
                     */
                    bool GetTrusted() const;

                    /**
                     * 设置是否信任
                     * @param _trusted 是否信任
                     * 
                     */
                    void SetTrusted(const bool& _trusted);

                    /**
                     * 判断参数 Trusted 是否已赋值
                     * @return Trusted 是否已赋值
                     * 
                     */
                    bool TrustedHasBeenSet() const;

                    /**
                     * 获取所属者
                     * @return Owner 所属者
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置所属者
                     * @param _owner 所属者
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取根域名
                     * @return RootDomain 根域名
                     * 
                     */
                    std::string GetRootDomain() const;

                    /**
                     * 设置根域名
                     * @param _rootDomain 根域名
                     * 
                     */
                    void SetRootDomain(const std::string& _rootDomain);

                    /**
                     * 判断参数 RootDomain 是否已赋值
                     * @return RootDomain 是否已赋值
                     * 
                     */
                    bool RootDomainHasBeenSet() const;

                private:

                    /**
                     * 主键ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 公共字段
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * Url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 报文长度
                     */
                    int64_t m_contentLength;
                    bool m_contentLengthHasBeenSet;

                    /**
                     * 报文内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 截图缩略图URL
                     */
                    std::string m_screenshotThumbUrl;
                    bool m_screenshotThumbUrlHasBeenSet;

                    /**
                     * 截图URL
                     */
                    std::string m_screenshotUrl;
                    bool m_screenshotUrlHasBeenSet;

                    /**
                     * 状态码
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Api
                     */
                    std::string m_api;
                    bool m_apiHasBeenSet;

                    /**
                     * 解析的IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 证书信息
                     */
                    std::string m_ssl;
                    bool m_sslHasBeenSet;

                    /**
                     * ssl证书过期时间
                     */
                    std::string m_sslExpiredTime;
                    bool m_sslExpiredTimeHasBeenSet;

                    /**
                     * 来源类型
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 来源值
                     */
                    std::string m_sourceValue;
                    bool m_sourceValueHasBeenSet;

                    /**
                     * 是否信任
                     */
                    bool m_trusted;
                    bool m_trustedHasBeenSet;

                    /**
                     * 所属者
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 根域名
                     */
                    std::string m_rootDomain;
                    bool m_rootDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYSUSPICIOUSASSET_H_
