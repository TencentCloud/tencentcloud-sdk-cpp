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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYCONFIG_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYCONFIG_H_

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
                * 目录爆破详情
                */
                class DisplayConfig : public AbstractModel
                {
                public:
                    DisplayConfig();
                    ~DisplayConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键Id
                     * @return Id 主键Id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置主键Id
                     * @param _id 主键Id
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
                     * 获取地址
                     * @return Url 地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置地址
                     * @param _url 地址
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
                     * 获取站点标题
                     * @return Title 站点标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置站点标题
                     * @param _title 站点标题
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
                     * 获取响应长度
                     * @return ContentLength 响应长度
                     * 
                     */
                    int64_t GetContentLength() const;

                    /**
                     * 设置响应长度
                     * @param _contentLength 响应长度
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
                     * 获取Ip数据
                     * @return Ip Ip数据
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Ip数据
                     * @param _ip Ip数据
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
                     * 获取AI评分
                     * @return AIRating AI评分
                     * 
                     */
                    int64_t GetAIRating() const;

                    /**
                     * 设置AI评分
                     * @param _aIRating AI评分
                     * 
                     */
                    void SetAIRating(const int64_t& _aIRating);

                    /**
                     * 判断参数 AIRating 是否已赋值
                     * @return AIRating 是否已赋值
                     * 
                     */
                    bool AIRatingHasBeenSet() const;

                    /**
                     * 获取AI分析
                     * @return AIAnalysis AI分析
                     * 
                     */
                    std::string GetAIAnalysis() const;

                    /**
                     * 设置AI分析
                     * @param _aIAnalysis AI分析
                     * 
                     */
                    void SetAIAnalysis(const std::string& _aIAnalysis);

                    /**
                     * 判断参数 AIAnalysis 是否已赋值
                     * @return AIAnalysis 是否已赋值
                     * 
                     */
                    bool AIAnalysisHasBeenSet() const;

                    /**
                     * 获取风险等级: 1-低危, 2-中危, 3-高危, 4-危级, 5-误报
                     * @return RiskLevel 风险等级: 1-低危, 2-中危, 3-高危, 4-危级, 5-误报
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置风险等级: 1-低危, 2-中危, 3-高危, 4-危级, 5-误报
                     * @param _riskLevel 风险等级: 1-低危, 2-中危, 3-高危, 4-危级, 5-误报
                     * 
                     */
                    void SetRiskLevel(const int64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取建议
                     * @return Suggestion 建议
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置建议
                     * @param _suggestion 建议
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取是否为云资产
                     * @return IsCloudAsset 是否为云资产
                     * 
                     */
                    int64_t GetIsCloudAsset() const;

                    /**
                     * 设置是否为云资产
                     * @param _isCloudAsset 是否为云资产
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
                     * 获取云资产状态，-1为下线
                     * @return CloudAssetStatus 云资产状态，-1为下线
                     * 
                     */
                    int64_t GetCloudAssetStatus() const;

                    /**
                     * 设置云资产状态，-1为下线
                     * @param _cloudAssetStatus 云资产状态，-1为下线
                     * 
                     */
                    void SetCloudAssetStatus(const int64_t& _cloudAssetStatus);

                    /**
                     * 判断参数 CloudAssetStatus 是否已赋值
                     * @return CloudAssetStatus 是否已赋值
                     * 
                     */
                    bool CloudAssetStatusHasBeenSet() const;

                private:

                    /**
                     * 主键Id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 站点标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 状态码
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 响应长度
                     */
                    int64_t m_contentLength;
                    bool m_contentLengthHasBeenSet;

                    /**
                     * 公共字段
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * Ip数据
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * AI评分
                     */
                    int64_t m_aIRating;
                    bool m_aIRatingHasBeenSet;

                    /**
                     * AI分析
                     */
                    std::string m_aIAnalysis;
                    bool m_aIAnalysisHasBeenSet;

                    /**
                     * 风险等级: 1-低危, 2-中危, 3-高危, 4-危级, 5-误报
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 建议
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 是否为云资产
                     */
                    int64_t m_isCloudAsset;
                    bool m_isCloudAssetHasBeenSet;

                    /**
                     * 云资产状态，-1为下线
                     */
                    int64_t m_cloudAssetStatus;
                    bool m_cloudAssetStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYCONFIG_H_
