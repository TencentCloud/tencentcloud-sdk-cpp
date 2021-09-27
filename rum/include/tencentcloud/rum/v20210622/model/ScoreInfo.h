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
                     */
                    std::string GetStaticDuration() const;

                    /**
                     * 设置duration
                     * @param StaticDuration duration
                     */
                    void SetStaticDuration(const std::string& _staticDuration);

                    /**
                     * 判断参数 StaticDuration 是否已赋值
                     * @return StaticDuration 是否已赋值
                     */
                    bool StaticDurationHasBeenSet() const;

                    /**
                     * 获取pv
                     * @return PagePv pv
                     */
                    std::string GetPagePv() const;

                    /**
                     * 设置pv
                     * @param PagePv pv
                     */
                    void SetPagePv(const std::string& _pagePv);

                    /**
                     * 判断参数 PagePv 是否已赋值
                     * @return PagePv 是否已赋值
                     */
                    bool PagePvHasBeenSet() const;

                    /**
                     * 获取失败
                     * @return ApiFail 失败
                     */
                    std::string GetApiFail() const;

                    /**
                     * 设置失败
                     * @param ApiFail 失败
                     */
                    void SetApiFail(const std::string& _apiFail);

                    /**
                     * 判断参数 ApiFail 是否已赋值
                     * @return ApiFail 是否已赋值
                     */
                    bool ApiFailHasBeenSet() const;

                    /**
                     * 获取请求
                     * @return ApiNum 请求
                     */
                    std::string GetApiNum() const;

                    /**
                     * 设置请求
                     * @param ApiNum 请求
                     */
                    void SetApiNum(const std::string& _apiNum);

                    /**
                     * 判断参数 ApiNum 是否已赋值
                     * @return ApiNum 是否已赋值
                     */
                    bool ApiNumHasBeenSet() const;

                    /**
                     * 获取fail
                     * @return StaticFail fail
                     */
                    std::string GetStaticFail() const;

                    /**
                     * 设置fail
                     * @param StaticFail fail
                     */
                    void SetStaticFail(const std::string& _staticFail);

                    /**
                     * 判断参数 StaticFail 是否已赋值
                     * @return StaticFail 是否已赋值
                     */
                    bool StaticFailHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectID 项目id
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置项目id
                     * @param ProjectID 项目id
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取uv
                     * @return PageUv uv
                     */
                    std::string GetPageUv() const;

                    /**
                     * 设置uv
                     * @param PageUv uv
                     */
                    void SetPageUv(const std::string& _pageUv);

                    /**
                     * 判断参数 PageUv 是否已赋值
                     * @return PageUv 是否已赋值
                     */
                    bool PageUvHasBeenSet() const;

                    /**
                     * 获取请求次数
                     * @return ApiDuration 请求次数
                     */
                    std::string GetApiDuration() const;

                    /**
                     * 设置请求次数
                     * @param ApiDuration 请求次数
                     */
                    void SetApiDuration(const std::string& _apiDuration);

                    /**
                     * 判断参数 ApiDuration 是否已赋值
                     * @return ApiDuration 是否已赋值
                     */
                    bool ApiDurationHasBeenSet() const;

                    /**
                     * 获取分数
                     * @return Score 分数
                     */
                    std::string GetScore() const;

                    /**
                     * 设置分数
                     * @param Score 分数
                     */
                    void SetScore(const std::string& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取error
                     * @return PageError error
                     */
                    std::string GetPageError() const;

                    /**
                     * 设置error
                     * @param PageError error
                     */
                    void SetPageError(const std::string& _pageError);

                    /**
                     * 判断参数 PageError 是否已赋值
                     * @return PageError 是否已赋值
                     */
                    bool PageErrorHasBeenSet() const;

                    /**
                     * 获取num
                     * @return StaticNum num
                     */
                    std::string GetStaticNum() const;

                    /**
                     * 设置num
                     * @param StaticNum num
                     */
                    void SetStaticNum(const std::string& _staticNum);

                    /**
                     * 判断参数 StaticNum 是否已赋值
                     * @return StaticNum 是否已赋值
                     */
                    bool StaticNumHasBeenSet() const;

                    /**
                     * 获取num
                     * @return RecordNum num
                     */
                    int64_t GetRecordNum() const;

                    /**
                     * 设置num
                     * @param RecordNum num
                     */
                    void SetRecordNum(const int64_t& _recordNum);

                    /**
                     * 判断参数 RecordNum 是否已赋值
                     * @return RecordNum 是否已赋值
                     */
                    bool RecordNumHasBeenSet() const;

                    /**
                     * 获取Duration
                     * @return PageDuration Duration
                     */
                    std::string GetPageDuration() const;

                    /**
                     * 设置Duration
                     * @param PageDuration Duration
                     */
                    void SetPageDuration(const std::string& _pageDuration);

                    /**
                     * 判断参数 PageDuration 是否已赋值
                     * @return PageDuration 是否已赋值
                     */
                    bool PageDurationHasBeenSet() const;

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
                     * 分数
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_SCOREINFO_H_
