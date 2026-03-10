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
                     * 获取项目id
                     * @return ProjectID 项目id
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置项目id
                     * @param _projectID 项目id
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
                     * 获取项目总分
                     * @return Score 项目总分
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置项目总分
                     * @param _score 项目总分
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
                     * 获取API性能评分
                     * @return ApiPerformanceScore API性能评分
                     * 
                     */
                    double GetApiPerformanceScore() const;

                    /**
                     * 设置API性能评分
                     * @param _apiPerformanceScore API性能评分
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
                     * 获取API可用性评分
                     * @return ApiAvailableScore API可用性评分
                     * 
                     */
                    double GetApiAvailableScore() const;

                    /**
                     * 设置API可用性评分
                     * @param _apiAvailableScore API可用性评分
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
                     * 获取API调用总数
                     * @return ApiNum API调用总数
                     * 
                     */
                    int64_t GetApiNum() const;

                    /**
                     * 设置API调用总数
                     * @param _apiNum API调用总数
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
                     * 获取API失败次数
                     * @return ApiFail API失败次数
                     * 
                     */
                    int64_t GetApiFail() const;

                    /**
                     * 设置API失败次数
                     * @param _apiFail API失败次数
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
                     * 获取API平均持续时间
                     * @return ApiDuration API平均持续时间
                     * 
                     */
                    double GetApiDuration() const;

                    /**
                     * 设置API平均持续时间
                     * @param _apiDuration API平均持续时间
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
                     * 获取页面性能评分
                     * @return PagePerformanceScore 页面性能评分
                     * 
                     */
                    double GetPagePerformanceScore() const;

                    /**
                     * 设置页面性能评分
                     * @param _pagePerformanceScore 页面性能评分
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
                     * 获取页面浏览量
                     * @return PagePv 页面浏览量
                     * 
                     */
                    int64_t GetPagePv() const;

                    /**
                     * 设置页面浏览量
                     * @param _pagePv 页面浏览量
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
                     * 获取独立访客数
                     * @return PageUv 独立访客数
                     * 
                     */
                    int64_t GetPageUv() const;

                    /**
                     * 设置独立访客数
                     * @param _pageUv 独立访客数
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
                     * 获取页面错误数
                     * @return PageError 页面错误数
                     * 
                     */
                    int64_t GetPageError() const;

                    /**
                     * 设置页面错误数
                     * @param _pageError 页面错误数
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
                     * 获取首屏时间
                     * @return PageDuration 首屏时间
                     * 
                     */
                    double GetPageDuration() const;

                    /**
                     * 设置首屏时间
                     * @param _pageDuration 首屏时间
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
                     * 获取平均 LCP
                     * @return PageLCP 平均 LCP
                     * 
                     */
                    double GetPageLCP() const;

                    /**
                     * 设置平均 LCP
                     * @param _pageLCP 平均 LCP
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
                     * 获取平均 FID
                     * @return PageFID 平均 FID
                     * 
                     */
                    double GetPageFID() const;

                    /**
                     * 设置平均 FID
                     * @param _pageFID 平均 FID
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
                     * 获取平均 CLS
                     * @return PageCLS 平均 CLS
                     * 
                     */
                    double GetPageCLS() const;

                    /**
                     * 设置平均 CLS
                     * @param _pageCLS 平均 CLS
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
                     * 获取平均 FCP
                     * @return PageFCP 平均 FCP
                     * 
                     */
                    double GetPageFCP() const;

                    /**
                     * 设置平均 FCP
                     * @param _pageFCP 平均 FCP
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
                     * 获取平均 INP
                     * @return PageINP 平均 INP
                     * 
                     */
                    double GetPageINP() const;

                    /**
                     * 设置平均 INP
                     * @param _pageINP 平均 INP
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
                     * 获取JavaScript错误评分
                     * @return JsErrorScore JavaScript错误评分
                     * 
                     */
                    double GetJsErrorScore() const;

                    /**
                     * 设置JavaScript错误评分
                     * @param _jsErrorScore JavaScript错误评分
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
                     * 获取静态资源可用性评分
                     * @return StaticAvailableScore 静态资源可用性评分
                     * 
                     */
                    double GetStaticAvailableScore() const;

                    /**
                     * 设置静态资源可用性评分
                     * @param _staticAvailableScore 静态资源可用性评分
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
                     * 获取静态资源性能评分
                     * @return StaticPerformanceScore 静态资源性能评分
                     * 
                     */
                    double GetStaticPerformanceScore() const;

                    /**
                     * 设置静态资源性能评分
                     * @param _staticPerformanceScore 静态资源性能评分
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
                     * 获取静态资源请求总数
                     * @return StaticNum 静态资源请求总数
                     * 
                     */
                    int64_t GetStaticNum() const;

                    /**
                     * 设置静态资源请求总数
                     * @param _staticNum 静态资源请求总数
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
                     * 获取静态资源加载失败数
                     * @return StaticFail 静态资源加载失败数
                     * 
                     */
                    int64_t GetStaticFail() const;

                    /**
                     * 设置静态资源加载失败数
                     * @param _staticFail 静态资源加载失败数
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
                     * 获取静态资源加载时间
                     * @return StaticDuration 静态资源加载时间
                     * 
                     */
                    double GetStaticDuration() const;

                    /**
                     * 设置静态资源加载时间
                     * @param _staticDuration 静态资源加载时间
                     * 
                     */
                    void SetStaticDuration(const double& _staticDuration);

                    /**
                     * 判断参数 StaticDuration 是否已赋值
                     * @return StaticDuration 是否已赋值
                     * 
                     */
                    bool StaticDurationHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * 项目总分
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * API性能评分
                     */
                    double m_apiPerformanceScore;
                    bool m_apiPerformanceScoreHasBeenSet;

                    /**
                     * API可用性评分
                     */
                    double m_apiAvailableScore;
                    bool m_apiAvailableScoreHasBeenSet;

                    /**
                     * API调用总数
                     */
                    int64_t m_apiNum;
                    bool m_apiNumHasBeenSet;

                    /**
                     * API失败次数
                     */
                    int64_t m_apiFail;
                    bool m_apiFailHasBeenSet;

                    /**
                     * API平均持续时间
                     */
                    double m_apiDuration;
                    bool m_apiDurationHasBeenSet;

                    /**
                     * 页面性能评分
                     */
                    double m_pagePerformanceScore;
                    bool m_pagePerformanceScoreHasBeenSet;

                    /**
                     * 页面浏览量
                     */
                    int64_t m_pagePv;
                    bool m_pagePvHasBeenSet;

                    /**
                     * 独立访客数
                     */
                    int64_t m_pageUv;
                    bool m_pageUvHasBeenSet;

                    /**
                     * 页面错误数
                     */
                    int64_t m_pageError;
                    bool m_pageErrorHasBeenSet;

                    /**
                     * 首屏时间
                     */
                    double m_pageDuration;
                    bool m_pageDurationHasBeenSet;

                    /**
                     * 平均 LCP
                     */
                    double m_pageLCP;
                    bool m_pageLCPHasBeenSet;

                    /**
                     * 平均 FID
                     */
                    double m_pageFID;
                    bool m_pageFIDHasBeenSet;

                    /**
                     * 平均 CLS
                     */
                    double m_pageCLS;
                    bool m_pageCLSHasBeenSet;

                    /**
                     * 平均 FCP
                     */
                    double m_pageFCP;
                    bool m_pageFCPHasBeenSet;

                    /**
                     * 平均 INP
                     */
                    double m_pageINP;
                    bool m_pageINPHasBeenSet;

                    /**
                     * JavaScript错误评分
                     */
                    double m_jsErrorScore;
                    bool m_jsErrorScoreHasBeenSet;

                    /**
                     * 静态资源可用性评分
                     */
                    double m_staticAvailableScore;
                    bool m_staticAvailableScoreHasBeenSet;

                    /**
                     * 静态资源性能评分
                     */
                    double m_staticPerformanceScore;
                    bool m_staticPerformanceScoreHasBeenSet;

                    /**
                     * 静态资源请求总数
                     */
                    int64_t m_staticNum;
                    bool m_staticNumHasBeenSet;

                    /**
                     * 静态资源加载失败数
                     */
                    int64_t m_staticFail;
                    bool m_staticFailHasBeenSet;

                    /**
                     * 静态资源加载时间
                     */
                    double m_staticDuration;
                    bool m_staticDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_SCOREINFOV2_H_
