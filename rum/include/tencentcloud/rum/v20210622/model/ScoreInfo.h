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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_SCOREINFO_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_SCOREINFO_H_

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
                class ScoreInfo : public AbstractModel
                {
                public:
                    ScoreInfo();
                    ~ScoreInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取duration
                     * @return StaticDuration duration
                     * 
                     */
                    std::string GetStaticDuration() const;

                    /**
                     * 设置duration
                     * @param _staticDuration duration
                     * 
                     */
                    void SetStaticDuration(const std::string& _staticDuration);

                    /**
                     * 判断参数 StaticDuration 是否已赋值
                     * @return StaticDuration 是否已赋值
                     * 
                     */
                    bool StaticDurationHasBeenSet() const;

                    /**
                     * 获取pv
                     * @return PagePv pv
                     * 
                     */
                    std::string GetPagePv() const;

                    /**
                     * 设置pv
                     * @param _pagePv pv
                     * 
                     */
                    void SetPagePv(const std::string& _pagePv);

                    /**
                     * 判断参数 PagePv 是否已赋值
                     * @return PagePv 是否已赋值
                     * 
                     */
                    bool PagePvHasBeenSet() const;

                    /**
                     * 获取失败
                     * @return ApiFail 失败
                     * 
                     */
                    std::string GetApiFail() const;

                    /**
                     * 设置失败
                     * @param _apiFail 失败
                     * 
                     */
                    void SetApiFail(const std::string& _apiFail);

                    /**
                     * 判断参数 ApiFail 是否已赋值
                     * @return ApiFail 是否已赋值
                     * 
                     */
                    bool ApiFailHasBeenSet() const;

                    /**
                     * 获取请求
                     * @return ApiNum 请求
                     * 
                     */
                    std::string GetApiNum() const;

                    /**
                     * 设置请求
                     * @param _apiNum 请求
                     * 
                     */
                    void SetApiNum(const std::string& _apiNum);

                    /**
                     * 判断参数 ApiNum 是否已赋值
                     * @return ApiNum 是否已赋值
                     * 
                     */
                    bool ApiNumHasBeenSet() const;

                    /**
                     * 获取fail
                     * @return StaticFail fail
                     * 
                     */
                    std::string GetStaticFail() const;

                    /**
                     * 设置fail
                     * @param _staticFail fail
                     * 
                     */
                    void SetStaticFail(const std::string& _staticFail);

                    /**
                     * 判断参数 StaticFail 是否已赋值
                     * @return StaticFail 是否已赋值
                     * 
                     */
                    bool StaticFailHasBeenSet() const;

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
                     * 获取uv
                     * @return PageUv uv
                     * 
                     */
                    std::string GetPageUv() const;

                    /**
                     * 设置uv
                     * @param _pageUv uv
                     * 
                     */
                    void SetPageUv(const std::string& _pageUv);

                    /**
                     * 判断参数 PageUv 是否已赋值
                     * @return PageUv 是否已赋值
                     * 
                     */
                    bool PageUvHasBeenSet() const;

                    /**
                     * 获取请求次数
                     * @return ApiDuration 请求次数
                     * 
                     */
                    std::string GetApiDuration() const;

                    /**
                     * 设置请求次数
                     * @param _apiDuration 请求次数
                     * 
                     */
                    void SetApiDuration(const std::string& _apiDuration);

                    /**
                     * 判断参数 ApiDuration 是否已赋值
                     * @return ApiDuration 是否已赋值
                     * 
                     */
                    bool ApiDurationHasBeenSet() const;

                    /**
                     * 获取项目总分
                     * @return Score 项目总分
                     * 
                     */
                    std::string GetScore() const;

                    /**
                     * 设置项目总分
                     * @param _score 项目总分
                     * 
                     */
                    void SetScore(const std::string& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取error
                     * @return PageError error
                     * 
                     */
                    std::string GetPageError() const;

                    /**
                     * 设置error
                     * @param _pageError error
                     * 
                     */
                    void SetPageError(const std::string& _pageError);

                    /**
                     * 判断参数 PageError 是否已赋值
                     * @return PageError 是否已赋值
                     * 
                     */
                    bool PageErrorHasBeenSet() const;

                    /**
                     * 获取num
                     * @return StaticNum num
                     * 
                     */
                    std::string GetStaticNum() const;

                    /**
                     * 设置num
                     * @param _staticNum num
                     * 
                     */
                    void SetStaticNum(const std::string& _staticNum);

                    /**
                     * 判断参数 StaticNum 是否已赋值
                     * @return StaticNum 是否已赋值
                     * 
                     */
                    bool StaticNumHasBeenSet() const;

                    /**
                     * 获取num
                     * @return RecordNum num
                     * 
                     */
                    int64_t GetRecordNum() const;

                    /**
                     * 设置num
                     * @param _recordNum num
                     * 
                     */
                    void SetRecordNum(const int64_t& _recordNum);

                    /**
                     * 判断参数 RecordNum 是否已赋值
                     * @return RecordNum 是否已赋值
                     * 
                     */
                    bool RecordNumHasBeenSet() const;

                    /**
                     * 获取Duration
                     * @return PageDuration Duration
                     * 
                     */
                    std::string GetPageDuration() const;

                    /**
                     * 设置Duration
                     * @param _pageDuration Duration
                     * 
                     */
                    void SetPageDuration(const std::string& _pageDuration);

                    /**
                     * 判断参数 PageDuration 是否已赋值
                     * @return PageDuration 是否已赋值
                     * 
                     */
                    bool PageDurationHasBeenSet() const;

                    /**
                     * 获取时间
                     * @return CreateTime 时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置时间
                     * @param _createTime 时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取页面性能评分
                     * @return PagePerformanceScore 页面性能评分
                     * 
                     */
                    std::string GetPagePerformanceScore() const;

                    /**
                     * 设置页面性能评分
                     * @param _pagePerformanceScore 页面性能评分
                     * 
                     */
                    void SetPagePerformanceScore(const std::string& _pagePerformanceScore);

                    /**
                     * 判断参数 PagePerformanceScore 是否已赋值
                     * @return PagePerformanceScore 是否已赋值
                     * 
                     */
                    bool PagePerformanceScoreHasBeenSet() const;

                    /**
                     * 获取js错误评分
                     * @return JsErrorScore js错误评分
                     * 
                     */
                    std::string GetJsErrorScore() const;

                    /**
                     * 设置js错误评分
                     * @param _jsErrorScore js错误评分
                     * 
                     */
                    void SetJsErrorScore(const std::string& _jsErrorScore);

                    /**
                     * 判断参数 JsErrorScore 是否已赋值
                     * @return JsErrorScore 是否已赋值
                     * 
                     */
                    bool JsErrorScoreHasBeenSet() const;

                    /**
                     * 获取API性能评分
                     * @return ApiPerformanceScore API性能评分
                     * 
                     */
                    std::string GetApiPerformanceScore() const;

                    /**
                     * 设置API性能评分
                     * @param _apiPerformanceScore API性能评分
                     * 
                     */
                    void SetApiPerformanceScore(const std::string& _apiPerformanceScore);

                    /**
                     * 判断参数 ApiPerformanceScore 是否已赋值
                     * @return ApiPerformanceScore 是否已赋值
                     * 
                     */
                    bool ApiPerformanceScoreHasBeenSet() const;

                    /**
                     * 获取API可用性评分
                     * @return ApiAvaliableScore API可用性评分
                     * 
                     */
                    std::string GetApiAvaliableScore() const;

                    /**
                     * 设置API可用性评分
                     * @param _apiAvaliableScore API可用性评分
                     * 
                     */
                    void SetApiAvaliableScore(const std::string& _apiAvaliableScore);

                    /**
                     * 判断参数 ApiAvaliableScore 是否已赋值
                     * @return ApiAvaliableScore 是否已赋值
                     * 
                     */
                    bool ApiAvaliableScoreHasBeenSet() const;

                    /**
                     * 获取静态资源性能评分
                     * @return StaticPerformanceScore 静态资源性能评分
                     * 
                     */
                    std::string GetStaticPerformanceScore() const;

                    /**
                     * 设置静态资源性能评分
                     * @param _staticPerformanceScore 静态资源性能评分
                     * 
                     */
                    void SetStaticPerformanceScore(const std::string& _staticPerformanceScore);

                    /**
                     * 判断参数 StaticPerformanceScore 是否已赋值
                     * @return StaticPerformanceScore 是否已赋值
                     * 
                     */
                    bool StaticPerformanceScoreHasBeenSet() const;

                    /**
                     * 获取静态资源可用性评分
                     * @return StaticAvaliableScore 静态资源可用性评分
                     * 
                     */
                    std::string GetStaticAvaliableScore() const;

                    /**
                     * 设置静态资源可用性评分
                     * @param _staticAvaliableScore 静态资源可用性评分
                     * 
                     */
                    void SetStaticAvaliableScore(const std::string& _staticAvaliableScore);

                    /**
                     * 判断参数 StaticAvaliableScore 是否已赋值
                     * @return StaticAvaliableScore 是否已赋值
                     * 
                     */
                    bool StaticAvaliableScoreHasBeenSet() const;

                private:

                    /**
                     * duration
                     */
                    std::string m_staticDuration;
                    bool m_staticDurationHasBeenSet;

                    /**
                     * pv
                     */
                    std::string m_pagePv;
                    bool m_pagePvHasBeenSet;

                    /**
                     * 失败
                     */
                    std::string m_apiFail;
                    bool m_apiFailHasBeenSet;

                    /**
                     * 请求
                     */
                    std::string m_apiNum;
                    bool m_apiNumHasBeenSet;

                    /**
                     * fail
                     */
                    std::string m_staticFail;
                    bool m_staticFailHasBeenSet;

                    /**
                     * 项目id
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * uv
                     */
                    std::string m_pageUv;
                    bool m_pageUvHasBeenSet;

                    /**
                     * 请求次数
                     */
                    std::string m_apiDuration;
                    bool m_apiDurationHasBeenSet;

                    /**
                     * 项目总分
                     */
                    std::string m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * error
                     */
                    std::string m_pageError;
                    bool m_pageErrorHasBeenSet;

                    /**
                     * num
                     */
                    std::string m_staticNum;
                    bool m_staticNumHasBeenSet;

                    /**
                     * num
                     */
                    int64_t m_recordNum;
                    bool m_recordNumHasBeenSet;

                    /**
                     * Duration
                     */
                    std::string m_pageDuration;
                    bool m_pageDurationHasBeenSet;

                    /**
                     * 时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 页面性能评分
                     */
                    std::string m_pagePerformanceScore;
                    bool m_pagePerformanceScoreHasBeenSet;

                    /**
                     * js错误评分
                     */
                    std::string m_jsErrorScore;
                    bool m_jsErrorScoreHasBeenSet;

                    /**
                     * API性能评分
                     */
                    std::string m_apiPerformanceScore;
                    bool m_apiPerformanceScoreHasBeenSet;

                    /**
                     * API可用性评分
                     */
                    std::string m_apiAvaliableScore;
                    bool m_apiAvaliableScoreHasBeenSet;

                    /**
                     * 静态资源性能评分
                     */
                    std::string m_staticPerformanceScore;
                    bool m_staticPerformanceScoreHasBeenSet;

                    /**
                     * 静态资源可用性评分
                     */
                    std::string m_staticAvaliableScore;
                    bool m_staticAvaliableScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_SCOREINFO_H_
