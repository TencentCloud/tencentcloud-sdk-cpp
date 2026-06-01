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
                     * 获取<p>主键ID</p>
                     * @return Id <p>主键ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>主键ID</p>
                     * @param _id <p>主键ID</p>
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
                     * 获取<p>公共字段</p>
                     * @return DisplayToolCommon <p>公共字段</p>
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置<p>公共字段</p>
                     * @param _displayToolCommon <p>公共字段</p>
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
                     * 获取<p>Url</p>
                     * @return Url <p>Url</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Url</p>
                     * @param _url <p>Url</p>
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
                     * 获取<p>标题</p>
                     * @return Title <p>标题</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>标题</p>
                     * @param _title <p>标题</p>
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
                     * 获取<p>报文长度</p>
                     * @return ContentLength <p>报文长度</p>
                     * 
                     */
                    int64_t GetContentLength() const;

                    /**
                     * 设置<p>报文长度</p>
                     * @param _contentLength <p>报文长度</p>
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
                     * 获取<p>报文内容</p>
                     * @return Content <p>报文内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>报文内容</p>
                     * @param _content <p>报文内容</p>
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
                     * 获取<p>截图缩略图URL</p>
                     * @return ScreenshotThumbUrl <p>截图缩略图URL</p>
                     * 
                     */
                    std::string GetScreenshotThumbUrl() const;

                    /**
                     * 设置<p>截图缩略图URL</p>
                     * @param _screenshotThumbUrl <p>截图缩略图URL</p>
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
                     * 获取<p>截图URL</p>
                     * @return ScreenshotUrl <p>截图URL</p>
                     * 
                     */
                    std::string GetScreenshotUrl() const;

                    /**
                     * 设置<p>截图URL</p>
                     * @param _screenshotUrl <p>截图URL</p>
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
                     * 获取<p>状态码</p>
                     * @return Code <p>状态码</p>
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置<p>状态码</p>
                     * @param _code <p>状态码</p>
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
                     * 获取<p>Api地址</p>
                     * @return Api <p>Api地址</p>
                     * 
                     */
                    std::string GetApi() const;

                    /**
                     * 设置<p>Api地址</p>
                     * @param _api <p>Api地址</p>
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
                     * 获取<p>解析的IP</p>
                     * @return Ip <p>解析的IP</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>解析的IP</p>
                     * @param _ip <p>解析的IP</p>
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
                     * 获取<p>证书信息</p>
                     * @return Ssl <p>证书信息</p>
                     * 
                     */
                    std::string GetSsl() const;

                    /**
                     * 设置<p>证书信息</p>
                     * @param _ssl <p>证书信息</p>
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
                     * 获取<p>ssl证书过期时间</p>
                     * @return SslExpiredTime <p>ssl证书过期时间</p>
                     * 
                     */
                    std::string GetSslExpiredTime() const;

                    /**
                     * 设置<p>ssl证书过期时间</p>
                     * @param _sslExpiredTime <p>ssl证书过期时间</p>
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
                     * 获取<p>资产是否发生变动</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsChange <p>资产是否发生变动</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsChange() const;

                    /**
                     * 设置<p>资产是否发生变动</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isChange <p>资产是否发生变动</p>
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
                     * 获取<p>是否为云资产：0-非云资产 1-是云资产</p>
                     * @return IsCloudAsset <p>是否为云资产：0-非云资产 1-是云资产</p>
                     * 
                     */
                    int64_t GetIsCloudAsset() const;

                    /**
                     * 设置<p>是否为云资产：0-非云资产 1-是云资产</p>
                     * @param _isCloudAsset <p>是否为云资产：0-非云资产 1-是云资产</p>
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
                     * 获取<p>云资产是否下线：-1-已下线 0-正常</p>
                     * @return CloudAssetStatus <p>云资产是否下线：-1-已下线 0-正常</p>
                     * 
                     */
                    int64_t GetCloudAssetStatus() const;

                    /**
                     * 设置<p>云资产是否下线：-1-已下线 0-正常</p>
                     * @param _cloudAssetStatus <p>云资产是否下线：-1-已下线 0-正常</p>
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
                     * 获取<p>可用率（百分比）</p>
                     * @return AvailabilityRate <p>可用率（百分比）</p>
                     * 
                     */
                    int64_t GetAvailabilityRate() const;

                    /**
                     * 设置<p>可用率（百分比）</p>
                     * @param _availabilityRate <p>可用率（百分比）</p>
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
                     * 获取<p>可用状态 1:异常 0:正常</p>
                     * @return AvailabilityState <p>可用状态 1:异常 0:正常</p>
                     * 
                     */
                    int64_t GetAvailabilityState() const;

                    /**
                     * 设置<p>可用状态 1:异常 0:正常</p>
                     * @param _availabilityState <p>可用状态 1:异常 0:正常</p>
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
                     * 获取<p>平均响应时间：单位ms</p>
                     * @return ResponseTime <p>平均响应时间：单位ms</p>
                     * 
                     */
                    int64_t GetResponseTime() const;

                    /**
                     * 设置<p>平均响应时间：单位ms</p>
                     * @param _responseTime <p>平均响应时间：单位ms</p>
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
                     * 获取<p>域名解析状态 1:异常 0:正常</p>
                     * @return AnalysisState <p>域名解析状态 1:异常 0:正常</p>
                     * 
                     */
                    int64_t GetAnalysisState() const;

                    /**
                     * 设置<p>域名解析状态 1:异常 0:正常</p>
                     * @param _analysisState <p>域名解析状态 1:异常 0:正常</p>
                     * 
                     */
                    void SetAnalysisState(const int64_t& _analysisState);

                    /**
                     * 判断参数 AnalysisState 是否已赋值
                     * @return AnalysisState 是否已赋值
                     * 
                     */
                    bool AnalysisStateHasBeenSet() const;

                    /**
                     * 获取<p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * @return AggregationCount <p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * 
                     */
                    int64_t GetAggregationCount() const;

                    /**
                     * 设置<p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * @param _aggregationCount <p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * 
                     */
                    void SetAggregationCount(const int64_t& _aggregationCount);

                    /**
                     * 判断参数 AggregationCount 是否已赋值
                     * @return AggregationCount 是否已赋值
                     * 
                     */
                    bool AggregationCountHasBeenSet() const;

                private:

                    /**
                     * <p>主键ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>公共字段</p>
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * <p>Url</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>标题</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>报文长度</p>
                     */
                    int64_t m_contentLength;
                    bool m_contentLengthHasBeenSet;

                    /**
                     * <p>报文内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>截图缩略图URL</p>
                     */
                    std::string m_screenshotThumbUrl;
                    bool m_screenshotThumbUrlHasBeenSet;

                    /**
                     * <p>截图URL</p>
                     */
                    std::string m_screenshotUrl;
                    bool m_screenshotUrlHasBeenSet;

                    /**
                     * <p>状态码</p>
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>Api地址</p>
                     */
                    std::string m_api;
                    bool m_apiHasBeenSet;

                    /**
                     * <p>解析的IP</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>证书信息</p>
                     */
                    std::string m_ssl;
                    bool m_sslHasBeenSet;

                    /**
                     * <p>ssl证书过期时间</p>
                     */
                    std::string m_sslExpiredTime;
                    bool m_sslExpiredTimeHasBeenSet;

                    /**
                     * <p>资产是否发生变动</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isChange;
                    bool m_isChangeHasBeenSet;

                    /**
                     * <p>是否为云资产：0-非云资产 1-是云资产</p>
                     */
                    int64_t m_isCloudAsset;
                    bool m_isCloudAssetHasBeenSet;

                    /**
                     * <p>云资产是否下线：-1-已下线 0-正常</p>
                     */
                    int64_t m_cloudAssetStatus;
                    bool m_cloudAssetStatusHasBeenSet;

                    /**
                     * <p>可用率（百分比）</p>
                     */
                    int64_t m_availabilityRate;
                    bool m_availabilityRateHasBeenSet;

                    /**
                     * <p>可用状态 1:异常 0:正常</p>
                     */
                    int64_t m_availabilityState;
                    bool m_availabilityStateHasBeenSet;

                    /**
                     * <p>平均响应时间：单位ms</p>
                     */
                    int64_t m_responseTime;
                    bool m_responseTimeHasBeenSet;

                    /**
                     * <p>域名解析状态 1:异常 0:正常</p>
                     */
                    int64_t m_analysisState;
                    bool m_analysisStateHasBeenSet;

                    /**
                     * <p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     */
                    int64_t m_aggregationCount;
                    bool m_aggregationCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYHTTP_H_
