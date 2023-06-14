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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSTARGET_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Label.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * prometheus一个抓取目标的信息
                */
                class PrometheusTarget : public AbstractModel
                {
                public:
                    PrometheusTarget();
                    ~PrometheusTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取抓取目标的URL
                     * @return Url 抓取目标的URL
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置抓取目标的URL
                     * @param _url 抓取目标的URL
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
                     * 获取target当前状态,当前支持
up = 健康
down = 不健康
unknown = 未知
                     * @return State target当前状态,当前支持
up = 健康
down = 不健康
unknown = 未知
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置target当前状态,当前支持
up = 健康
down = 不健康
unknown = 未知
                     * @param _state target当前状态,当前支持
up = 健康
down = 不健康
unknown = 未知
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取target的元label
                     * @return Labels target的元label
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置target的元label
                     * @param _labels target的元label
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取上一次抓取的时间
                     * @return LastScrape 上一次抓取的时间
                     * 
                     */
                    std::string GetLastScrape() const;

                    /**
                     * 设置上一次抓取的时间
                     * @param _lastScrape 上一次抓取的时间
                     * 
                     */
                    void SetLastScrape(const std::string& _lastScrape);

                    /**
                     * 判断参数 LastScrape 是否已赋值
                     * @return LastScrape 是否已赋值
                     * 
                     */
                    bool LastScrapeHasBeenSet() const;

                    /**
                     * 获取上一次抓取的耗时，单位是s
                     * @return ScrapeDuration 上一次抓取的耗时，单位是s
                     * 
                     */
                    double GetScrapeDuration() const;

                    /**
                     * 设置上一次抓取的耗时，单位是s
                     * @param _scrapeDuration 上一次抓取的耗时，单位是s
                     * 
                     */
                    void SetScrapeDuration(const double& _scrapeDuration);

                    /**
                     * 判断参数 ScrapeDuration 是否已赋值
                     * @return ScrapeDuration 是否已赋值
                     * 
                     */
                    bool ScrapeDurationHasBeenSet() const;

                    /**
                     * 获取上一次抓取如果错误，该字段存储错误信息
                     * @return Error 上一次抓取如果错误，该字段存储错误信息
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置上一次抓取如果错误，该字段存储错误信息
                     * @param _error 上一次抓取如果错误，该字段存储错误信息
                     * 
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * 抓取目标的URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * target当前状态,当前支持
up = 健康
down = 不健康
unknown = 未知
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * target的元label
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 上一次抓取的时间
                     */
                    std::string m_lastScrape;
                    bool m_lastScrapeHasBeenSet;

                    /**
                     * 上一次抓取的耗时，单位是s
                     */
                    double m_scrapeDuration;
                    bool m_scrapeDurationHasBeenSet;

                    /**
                     * 上一次抓取如果错误，该字段存储错误信息
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSTARGET_H_
