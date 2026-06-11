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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_SCOREINFOV2_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_SCOREINFOV2_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * project Score分数实体
                */
                class ScoreInfoV2 : public AbstractModel
                {
                public:
                    ScoreInfoV2();
                    ~ScoreInfoV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>项目id</p>
                     * @return ProjectID <p>项目id</p>
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置<p>项目id</p>
                     * @param _projectID <p>项目id</p>
                     * 
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取<p>项目总分</p>
                     * @return Score <p>项目总分</p>
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置<p>项目总分</p>
                     * @param _score <p>项目总分</p>
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取<p>API性能评分</p>
                     * @return ApiPerformanceScore <p>API性能评分</p>
                     * 
                     */
                    double GetApiPerformanceScore() const;

                    /**
                     * 设置<p>API性能评分</p>
                     * @param _apiPerformanceScore <p>API性能评分</p>
                     * 
                     */
                    void SetApiPerformanceScore(const double& _apiPerformanceScore);

                    /**
                     * 判断参数 ApiPerformanceScore 是否已赋值
                     * @return ApiPerformanceScore 是否已赋值
                     * 
                     */
                    bool ApiPerformanceScoreHasBeenSet() const;

                    /**
                     * 获取<p>API可用性评分</p>
                     * @return ApiAvailableScore <p>API可用性评分</p>
                     * 
                     */
                    double GetApiAvailableScore() const;

                    /**
                     * 设置<p>API可用性评分</p>
                     * @param _apiAvailableScore <p>API可用性评分</p>
                     * 
                     */
                    void SetApiAvailableScore(const double& _apiAvailableScore);

                    /**
                     * 判断参数 ApiAvailableScore 是否已赋值
                     * @return ApiAvailableScore 是否已赋值
                     * 
                     */
                    bool ApiAvailableScoreHasBeenSet() const;

                    /**
                     * 获取<p>API调用总数</p>
                     * @return ApiNum <p>API调用总数</p>
                     * 
                     */
                    int64_t GetApiNum() const;

                    /**
                     * 设置<p>API调用总数</p>
                     * @param _apiNum <p>API调用总数</p>
                     * 
                     */
                    void SetApiNum(const int64_t& _apiNum);

                    /**
                     * 判断参数 ApiNum 是否已赋值
                     * @return ApiNum 是否已赋值
                     * 
                     */
                    bool ApiNumHasBeenSet() const;

                    /**
                     * 获取<p>API失败次数</p>
                     * @return ApiFail <p>API失败次数</p>
                     * 
                     */
                    int64_t GetApiFail() const;

                    /**
                     * 设置<p>API失败次数</p>
                     * @param _apiFail <p>API失败次数</p>
                     * 
                     */
                    void SetApiFail(const int64_t& _apiFail);

                    /**
                     * 判断参数 ApiFail 是否已赋值
                     * @return ApiFail 是否已赋值
                     * 
                     */
                    bool ApiFailHasBeenSet() const;

                    /**
                     * 获取<p>API平均持续时间</p>
                     * @return ApiDuration <p>API平均持续时间</p>
                     * 
                     */
                    double GetApiDuration() const;

                    /**
                     * 设置<p>API平均持续时间</p>
                     * @param _apiDuration <p>API平均持续时间</p>
                     * 
                     */
                    void SetApiDuration(const double& _apiDuration);

                    /**
                     * 判断参数 ApiDuration 是否已赋值
                     * @return ApiDuration 是否已赋值
                     * 
                     */
                    bool ApiDurationHasBeenSet() const;

                    /**
                     * 获取<p>页面性能评分</p>
                     * @return PagePerformanceScore <p>页面性能评分</p>
                     * 
                     */
                    double GetPagePerformanceScore() const;

                    /**
                     * 设置<p>页面性能评分</p>
                     * @param _pagePerformanceScore <p>页面性能评分</p>
                     * 
                     */
                    void SetPagePerformanceScore(const double& _pagePerformanceScore);

                    /**
                     * 判断参数 PagePerformanceScore 是否已赋值
                     * @return PagePerformanceScore 是否已赋值
                     * 
                     */
                    bool PagePerformanceScoreHasBeenSet() const;

                    /**
                     * 获取<p>页面浏览量</p>
                     * @return PagePv <p>页面浏览量</p>
                     * 
                     */
                    int64_t GetPagePv() const;

                    /**
                     * 设置<p>页面浏览量</p>
                     * @param _pagePv <p>页面浏览量</p>
                     * 
                     */
                    void SetPagePv(const int64_t& _pagePv);

                    /**
                     * 判断参数 PagePv 是否已赋值
                     * @return PagePv 是否已赋值
                     * 
                     */
                    bool PagePvHasBeenSet() const;

                    /**
                     * 获取<p>独立访客数</p>
                     * @return PageUv <p>独立访客数</p>
                     * 
                     */
                    int64_t GetPageUv() const;

                    /**
                     * 设置<p>独立访客数</p>
                     * @param _pageUv <p>独立访客数</p>
                     * 
                     */
                    void SetPageUv(const int64_t& _pageUv);

                    /**
                     * 判断参数 PageUv 是否已赋值
                     * @return PageUv 是否已赋值
                     * 
                     */
                    bool PageUvHasBeenSet() const;

                    /**
                     * 获取<p>页面错误数</p>
                     * @return PageError <p>页面错误数</p>
                     * 
                     */
                    int64_t GetPageError() const;

                    /**
                     * 设置<p>页面错误数</p>
                     * @param _pageError <p>页面错误数</p>
                     * 
                     */
                    void SetPageError(const int64_t& _pageError);

                    /**
                     * 判断参数 PageError 是否已赋值
                     * @return PageError 是否已赋值
                     * 
                     */
                    bool PageErrorHasBeenSet() const;

                    /**
                     * 获取<p>首屏时间</p>
                     * @return PageDuration <p>首屏时间</p>
                     * 
                     */
                    double GetPageDuration() const;

                    /**
                     * 设置<p>首屏时间</p>
                     * @param _pageDuration <p>首屏时间</p>
                     * 
                     */
                    void SetPageDuration(const double& _pageDuration);

                    /**
                     * 判断参数 PageDuration 是否已赋值
                     * @return PageDuration 是否已赋值
                     * 
                     */
                    bool PageDurationHasBeenSet() const;

                    /**
                     * 获取<p>平均 LCP</p>
                     * @return PageLCP <p>平均 LCP</p>
                     * 
                     */
                    double GetPageLCP() const;

                    /**
                     * 设置<p>平均 LCP</p>
                     * @param _pageLCP <p>平均 LCP</p>
                     * 
                     */
                    void SetPageLCP(const double& _pageLCP);

                    /**
                     * 判断参数 PageLCP 是否已赋值
                     * @return PageLCP 是否已赋值
                     * 
                     */
                    bool PageLCPHasBeenSet() const;

                    /**
                     * 获取<p>平均 FID</p>
                     * @return PageFID <p>平均 FID</p>
                     * 
                     */
                    double GetPageFID() const;

                    /**
                     * 设置<p>平均 FID</p>
                     * @param _pageFID <p>平均 FID</p>
                     * 
                     */
                    void SetPageFID(const double& _pageFID);

                    /**
                     * 判断参数 PageFID 是否已赋值
                     * @return PageFID 是否已赋值
                     * 
                     */
                    bool PageFIDHasBeenSet() const;

                    /**
                     * 获取<p>平均 CLS</p>
                     * @return PageCLS <p>平均 CLS</p>
                     * 
                     */
                    double GetPageCLS() const;

                    /**
                     * 设置<p>平均 CLS</p>
                     * @param _pageCLS <p>平均 CLS</p>
                     * 
                     */
                    void SetPageCLS(const double& _pageCLS);

                    /**
                     * 判断参数 PageCLS 是否已赋值
                     * @return PageCLS 是否已赋值
                     * 
                     */
                    bool PageCLSHasBeenSet() const;

                    /**
                     * 获取<p>平均 FCP</p>
                     * @return PageFCP <p>平均 FCP</p>
                     * 
                     */
                    double GetPageFCP() const;

                    /**
                     * 设置<p>平均 FCP</p>
                     * @param _pageFCP <p>平均 FCP</p>
                     * 
                     */
                    void SetPageFCP(const double& _pageFCP);

                    /**
                     * 判断参数 PageFCP 是否已赋值
                     * @return PageFCP 是否已赋值
                     * 
                     */
                    bool PageFCPHasBeenSet() const;

                    /**
                     * 获取<p>平均 INP</p>
                     * @return PageINP <p>平均 INP</p>
                     * 
                     */
                    double GetPageINP() const;

                    /**
                     * 设置<p>平均 INP</p>
                     * @param _pageINP <p>平均 INP</p>
                     * 
                     */
                    void SetPageINP(const double& _pageINP);

                    /**
                     * 判断参数 PageINP 是否已赋值
                     * @return PageINP 是否已赋值
                     * 
                     */
                    bool PageINPHasBeenSet() const;

                    /**
                     * 获取<p>JavaScript错误评分</p>
                     * @return JsErrorScore <p>JavaScript错误评分</p>
                     * 
                     */
                    double GetJsErrorScore() const;

                    /**
                     * 设置<p>JavaScript错误评分</p>
                     * @param _jsErrorScore <p>JavaScript错误评分</p>
                     * 
                     */
                    void SetJsErrorScore(const double& _jsErrorScore);

                    /**
                     * 判断参数 JsErrorScore 是否已赋值
                     * @return JsErrorScore 是否已赋值
                     * 
                     */
                    bool JsErrorScoreHasBeenSet() const;

                    /**
                     * 获取<p>静态资源可用性评分</p>
                     * @return StaticAvailableScore <p>静态资源可用性评分</p>
                     * 
                     */
                    double GetStaticAvailableScore() const;

                    /**
                     * 设置<p>静态资源可用性评分</p>
                     * @param _staticAvailableScore <p>静态资源可用性评分</p>
                     * 
                     */
                    void SetStaticAvailableScore(const double& _staticAvailableScore);

                    /**
                     * 判断参数 StaticAvailableScore 是否已赋值
                     * @return StaticAvailableScore 是否已赋值
                     * 
                     */
                    bool StaticAvailableScoreHasBeenSet() const;

                    /**
                     * 获取<p>静态资源性能评分</p>
                     * @return StaticPerformanceScore <p>静态资源性能评分</p>
                     * 
                     */
                    double GetStaticPerformanceScore() const;

                    /**
                     * 设置<p>静态资源性能评分</p>
                     * @param _staticPerformanceScore <p>静态资源性能评分</p>
                     * 
                     */
                    void SetStaticPerformanceScore(const double& _staticPerformanceScore);

                    /**
                     * 判断参数 StaticPerformanceScore 是否已赋值
                     * @return StaticPerformanceScore 是否已赋值
                     * 
                     */
                    bool StaticPerformanceScoreHasBeenSet() const;

                    /**
                     * 获取<p>静态资源请求总数</p>
                     * @return StaticNum <p>静态资源请求总数</p>
                     * 
                     */
                    int64_t GetStaticNum() const;

                    /**
                     * 设置<p>静态资源请求总数</p>
                     * @param _staticNum <p>静态资源请求总数</p>
                     * 
                     */
                    void SetStaticNum(const int64_t& _staticNum);

                    /**
                     * 判断参数 StaticNum 是否已赋值
                     * @return StaticNum 是否已赋值
                     * 
                     */
                    bool StaticNumHasBeenSet() const;

                    /**
                     * 获取<p>静态资源加载失败数</p>
                     * @return StaticFail <p>静态资源加载失败数</p>
                     * 
                     */
                    int64_t GetStaticFail() const;

                    /**
                     * 设置<p>静态资源加载失败数</p>
                     * @param _staticFail <p>静态资源加载失败数</p>
                     * 
                     */
                    void SetStaticFail(const int64_t& _staticFail);

                    /**
                     * 判断参数 StaticFail 是否已赋值
                     * @return StaticFail 是否已赋值
                     * 
                     */
                    bool StaticFailHasBeenSet() const;

                    /**
                     * 获取<p>静态资源加载时间</p>
                     * @return StaticDuration <p>静态资源加载时间</p>
                     * 
                     */
                    double GetStaticDuration() const;

                    /**
                     * 设置<p>静态资源加载时间</p>
                     * @param _staticDuration <p>静态资源加载时间</p>
                     * 
                     */
                    void SetStaticDuration(const double& _staticDuration);

                    /**
                     * 判断参数 StaticDuration 是否已赋值
                     * @return StaticDuration 是否已赋值
                     * 
                     */
                    bool StaticDurationHasBeenSet() const;

                    /**
                     * 获取<p>忽略的配置项</p>
                     * @return Exclusion <p>忽略的配置项</p>
                     * 
                     */
                    std::string GetExclusion() const;

                    /**
                     * 设置<p>忽略的配置项</p>
                     * @param _exclusion <p>忽略的配置项</p>
                     * 
                     */
                    void SetExclusion(const std::string& _exclusion);

                    /**
                     * 判断参数 Exclusion 是否已赋值
                     * @return Exclusion 是否已赋值
                     * 
                     */
                    bool ExclusionHasBeenSet() const;

                private:

                    /**
                     * <p>项目id</p>
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * <p>项目总分</p>
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>API性能评分</p>
                     */
                    double m_apiPerformanceScore;
                    bool m_apiPerformanceScoreHasBeenSet;

                    /**
                     * <p>API可用性评分</p>
                     */
                    double m_apiAvailableScore;
                    bool m_apiAvailableScoreHasBeenSet;

                    /**
                     * <p>API调用总数</p>
                     */
                    int64_t m_apiNum;
                    bool m_apiNumHasBeenSet;

                    /**
                     * <p>API失败次数</p>
                     */
                    int64_t m_apiFail;
                    bool m_apiFailHasBeenSet;

                    /**
                     * <p>API平均持续时间</p>
                     */
                    double m_apiDuration;
                    bool m_apiDurationHasBeenSet;

                    /**
                     * <p>页面性能评分</p>
                     */
                    double m_pagePerformanceScore;
                    bool m_pagePerformanceScoreHasBeenSet;

                    /**
                     * <p>页面浏览量</p>
                     */
                    int64_t m_pagePv;
                    bool m_pagePvHasBeenSet;

                    /**
                     * <p>独立访客数</p>
                     */
                    int64_t m_pageUv;
                    bool m_pageUvHasBeenSet;

                    /**
                     * <p>页面错误数</p>
                     */
                    int64_t m_pageError;
                    bool m_pageErrorHasBeenSet;

                    /**
                     * <p>首屏时间</p>
                     */
                    double m_pageDuration;
                    bool m_pageDurationHasBeenSet;

                    /**
                     * <p>平均 LCP</p>
                     */
                    double m_pageLCP;
                    bool m_pageLCPHasBeenSet;

                    /**
                     * <p>平均 FID</p>
                     */
                    double m_pageFID;
                    bool m_pageFIDHasBeenSet;

                    /**
                     * <p>平均 CLS</p>
                     */
                    double m_pageCLS;
                    bool m_pageCLSHasBeenSet;

                    /**
                     * <p>平均 FCP</p>
                     */
                    double m_pageFCP;
                    bool m_pageFCPHasBeenSet;

                    /**
                     * <p>平均 INP</p>
                     */
                    double m_pageINP;
                    bool m_pageINPHasBeenSet;

                    /**
                     * <p>JavaScript错误评分</p>
                     */
                    double m_jsErrorScore;
                    bool m_jsErrorScoreHasBeenSet;

                    /**
                     * <p>静态资源可用性评分</p>
                     */
                    double m_staticAvailableScore;
                    bool m_staticAvailableScoreHasBeenSet;

                    /**
                     * <p>静态资源性能评分</p>
                     */
                    double m_staticPerformanceScore;
                    bool m_staticPerformanceScoreHasBeenSet;

                    /**
                     * <p>静态资源请求总数</p>
                     */
                    int64_t m_staticNum;
                    bool m_staticNumHasBeenSet;

                    /**
                     * <p>静态资源加载失败数</p>
                     */
                    int64_t m_staticFail;
                    bool m_staticFailHasBeenSet;

                    /**
                     * <p>静态资源加载时间</p>
                     */
                    double m_staticDuration;
                    bool m_staticDurationHasBeenSet;

                    /**
                     * <p>忽略的配置项</p>
                     */
                    std::string m_exclusion;
                    bool m_exclusionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_SCOREINFOV2_H_
