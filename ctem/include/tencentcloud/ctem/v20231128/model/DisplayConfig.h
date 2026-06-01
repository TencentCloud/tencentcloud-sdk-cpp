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
                     * 获取<p>主键Id</p>
                     * @return Id <p>主键Id</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>主键Id</p>
                     * @param _id <p>主键Id</p>
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
                     * 获取<p>地址</p>
                     * @return Url <p>地址</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>地址</p>
                     * @param _url <p>地址</p>
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
                     * 获取<p>站点标题</p>
                     * @return Title <p>站点标题</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>站点标题</p>
                     * @param _title <p>站点标题</p>
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
                     * 获取<p>响应长度</p>
                     * @return ContentLength <p>响应长度</p>
                     * 
                     */
                    int64_t GetContentLength() const;

                    /**
                     * 设置<p>响应长度</p>
                     * @param _contentLength <p>响应长度</p>
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
                     * 获取<p>Ip数据</p>
                     * @return Ip <p>Ip数据</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>Ip数据</p>
                     * @param _ip <p>Ip数据</p>
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
                     * 获取<p>AI评分</p>
                     * @return AIRating <p>AI评分</p>
                     * 
                     */
                    int64_t GetAIRating() const;

                    /**
                     * 设置<p>AI评分</p>
                     * @param _aIRating <p>AI评分</p>
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
                     * 获取<p>AI分析</p>
                     * @return AIAnalysis <p>AI分析</p>
                     * 
                     */
                    std::string GetAIAnalysis() const;

                    /**
                     * 设置<p>AI分析</p>
                     * @param _aIAnalysis <p>AI分析</p>
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
                     * 获取<p>风险等级: 1-低危, 2-中危, 3-高危, 4-危级, 5-误报</p>
                     * @return RiskLevel <p>风险等级: 1-低危, 2-中危, 3-高危, 4-危级, 5-误报</p>
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置<p>风险等级: 1-低危, 2-中危, 3-高危, 4-危级, 5-误报</p>
                     * @param _riskLevel <p>风险等级: 1-低危, 2-中危, 3-高危, 4-危级, 5-误报</p>
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
                     * 获取<p>建议</p>
                     * @return Suggestion <p>建议</p>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置<p>建议</p>
                     * @param _suggestion <p>建议</p>
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
                     * 获取<p>是否为云资产</p>
                     * @return IsCloudAsset <p>是否为云资产</p>
                     * 
                     */
                    int64_t GetIsCloudAsset() const;

                    /**
                     * 设置<p>是否为云资产</p>
                     * @param _isCloudAsset <p>是否为云资产</p>
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
                     * 获取<p>云资产状态，-1为下线</p>
                     * @return CloudAssetStatus <p>云资产状态，-1为下线</p>
                     * 
                     */
                    int64_t GetCloudAssetStatus() const;

                    /**
                     * 设置<p>云资产状态，-1为下线</p>
                     * @param _cloudAssetStatus <p>云资产状态，-1为下线</p>
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
                     * <p>主键Id</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>地址</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>站点标题</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>状态码</p>
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>响应长度</p>
                     */
                    int64_t m_contentLength;
                    bool m_contentLengthHasBeenSet;

                    /**
                     * <p>公共字段</p>
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * <p>Ip数据</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>AI评分</p>
                     */
                    int64_t m_aIRating;
                    bool m_aIRatingHasBeenSet;

                    /**
                     * <p>AI分析</p>
                     */
                    std::string m_aIAnalysis;
                    bool m_aIAnalysisHasBeenSet;

                    /**
                     * <p>风险等级: 1-低危, 2-中危, 3-高危, 4-危级, 5-误报</p>
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>建议</p>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * <p>是否为云资产</p>
                     */
                    int64_t m_isCloudAsset;
                    bool m_isCloudAssetHasBeenSet;

                    /**
                     * <p>云资产状态，-1为下线</p>
                     */
                    int64_t m_cloudAssetStatus;
                    bool m_cloudAssetStatusHasBeenSet;

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

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYCONFIG_H_
