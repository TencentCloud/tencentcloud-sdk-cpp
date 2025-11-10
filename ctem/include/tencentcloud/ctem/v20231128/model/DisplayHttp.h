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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYHTTP_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYHTTP_H_

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
                * Http详情
                */
                class DisplayHttp : public AbstractModel
                {
                public:
                    DisplayHttp();
                    ~DisplayHttp() = default;
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
                     * 获取Api地址
                     * @return Api Api地址
                     * 
                     */
                    std::string GetApi() const;

                    /**
                     * 设置Api地址
                     * @param _api Api地址
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
                     * 获取资产是否发生变动
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsChange 资产是否发生变动
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsChange() const;

                    /**
                     * 设置资产是否发生变动
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isChange 资产是否发生变动
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsChange(const bool& _isChange);

                    /**
                     * 判断参数 IsChange 是否已赋值
                     * @return IsChange 是否已赋值
                     * 
                     */
                    bool IsChangeHasBeenSet() const;

                    /**
                     * 获取是否为云资产：0-非云资产 1-是云资产
                     * @return IsCloudAsset 是否为云资产：0-非云资产 1-是云资产
                     * 
                     */
                    int64_t GetIsCloudAsset() const;

                    /**
                     * 设置是否为云资产：0-非云资产 1-是云资产
                     * @param _isCloudAsset 是否为云资产：0-非云资产 1-是云资产
                     * 
                     */
                    void SetIsCloudAsset(const int64_t& _isCloudAsset);

                    /**
                     * 判断参数 IsCloudAsset 是否已赋值
                     * @return IsCloudAsset 是否已赋值
                     * 
                     */
                    bool IsCloudAssetHasBeenSet() const;

                    /**
                     * 获取云资产是否下线：-1-已下线 0-正常
                     * @return CloudAssetStatus 云资产是否下线：-1-已下线 0-正常
                     * 
                     */
                    int64_t GetCloudAssetStatus() const;

                    /**
                     * 设置云资产是否下线：-1-已下线 0-正常
                     * @param _cloudAssetStatus 云资产是否下线：-1-已下线 0-正常
                     * 
                     */
                    void SetCloudAssetStatus(const int64_t& _cloudAssetStatus);

                    /**
                     * 判断参数 CloudAssetStatus 是否已赋值
                     * @return CloudAssetStatus 是否已赋值
                     * 
                     */
                    bool CloudAssetStatusHasBeenSet() const;

                    /**
                     * 获取可用率（百分比）
                     * @return AvailabilityRate 可用率（百分比）
                     * 
                     */
                    int64_t GetAvailabilityRate() const;

                    /**
                     * 设置可用率（百分比）
                     * @param _availabilityRate 可用率（百分比）
                     * 
                     */
                    void SetAvailabilityRate(const int64_t& _availabilityRate);

                    /**
                     * 判断参数 AvailabilityRate 是否已赋值
                     * @return AvailabilityRate 是否已赋值
                     * 
                     */
                    bool AvailabilityRateHasBeenSet() const;

                    /**
                     * 获取可用状态 1:异常 0:正常
                     * @return AvailabilityState 可用状态 1:异常 0:正常
                     * 
                     */
                    int64_t GetAvailabilityState() const;

                    /**
                     * 设置可用状态 1:异常 0:正常
                     * @param _availabilityState 可用状态 1:异常 0:正常
                     * 
                     */
                    void SetAvailabilityState(const int64_t& _availabilityState);

                    /**
                     * 判断参数 AvailabilityState 是否已赋值
                     * @return AvailabilityState 是否已赋值
                     * 
                     */
                    bool AvailabilityStateHasBeenSet() const;

                    /**
                     * 获取平均响应时间：单位ms
                     * @return ResponseTime 平均响应时间：单位ms
                     * 
                     */
                    int64_t GetResponseTime() const;

                    /**
                     * 设置平均响应时间：单位ms
                     * @param _responseTime 平均响应时间：单位ms
                     * 
                     */
                    void SetResponseTime(const int64_t& _responseTime);

                    /**
                     * 判断参数 ResponseTime 是否已赋值
                     * @return ResponseTime 是否已赋值
                     * 
                     */
                    bool ResponseTimeHasBeenSet() const;

                    /**
                     * 获取域名解析状态 1:异常 0:正常
                     * @return AnalysisState 域名解析状态 1:异常 0:正常
                     * 
                     */
                    int64_t GetAnalysisState() const;

                    /**
                     * 设置域名解析状态 1:异常 0:正常
                     * @param _analysisState 域名解析状态 1:异常 0:正常
                     * 
                     */
                    void SetAnalysisState(const int64_t& _analysisState);

                    /**
                     * 判断参数 AnalysisState 是否已赋值
                     * @return AnalysisState 是否已赋值
                     * 
                     */
                    bool AnalysisStateHasBeenSet() const;

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
                     * Api地址
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
                     * 资产是否发生变动
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isChange;
                    bool m_isChangeHasBeenSet;

                    /**
                     * 是否为云资产：0-非云资产 1-是云资产
                     */
                    int64_t m_isCloudAsset;
                    bool m_isCloudAssetHasBeenSet;

                    /**
                     * 云资产是否下线：-1-已下线 0-正常
                     */
                    int64_t m_cloudAssetStatus;
                    bool m_cloudAssetStatusHasBeenSet;

                    /**
                     * 可用率（百分比）
                     */
                    int64_t m_availabilityRate;
                    bool m_availabilityRateHasBeenSet;

                    /**
                     * 可用状态 1:异常 0:正常
                     */
                    int64_t m_availabilityState;
                    bool m_availabilityStateHasBeenSet;

                    /**
                     * 平均响应时间：单位ms
                     */
                    int64_t m_responseTime;
                    bool m_responseTimeHasBeenSet;

                    /**
                     * 域名解析状态 1:异常 0:正常
                     */
                    int64_t m_analysisState;
                    bool m_analysisStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYHTTP_H_
