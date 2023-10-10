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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SEARCHLOGRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SEARCHLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/LogInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * SearchLog返回参数结构体
                */
                class SearchLogResponse : public AbstractModel
                {
                public:
                    SearchLogResponse();
                    ~SearchLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取匹配检索条件的原始日志的数量
                     * @return Count 匹配检索条件的原始日志的数量
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取透传本次接口返回的Context值，可获取后续更多日志，过期时间1小时
                     * @return Context 透传本次接口返回的Context值，可获取后续更多日志，过期时间1小时
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取符合检索条件的日志是否已全部返回，如未全部返回可使用Context参数获取后续更多日志
                     * @return ListOver 符合检索条件的日志是否已全部返回，如未全部返回可使用Context参数获取后续更多日志
                     * 
                     */
                    bool GetListOver() const;

                    /**
                     * 判断参数 ListOver 是否已赋值
                     * @return ListOver 是否已赋值
                     * 
                     */
                    bool ListOverHasBeenSet() const;

                    /**
                     * 获取返回的是否为统计分析（即SQL）结果
                     * @return Analysis 返回的是否为统计分析（即SQL）结果
                     * 
                     */
                    bool GetAnalysis() const;

                    /**
                     * 判断参数 Analysis 是否已赋值
                     * @return Analysis 是否已赋值
                     * 
                     */
                    bool AnalysisHasBeenSet() const;

                    /**
                     * 获取匹配检索条件的原始日志
                     * @return Data 匹配检索条件的原始日志
                     * 
                     */
                    std::vector<LogInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 匹配检索条件的原始日志的数量
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 透传本次接口返回的Context值，可获取后续更多日志，过期时间1小时
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 符合检索条件的日志是否已全部返回，如未全部返回可使用Context参数获取后续更多日志
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * 返回的是否为统计分析（即SQL）结果
                     */
                    bool m_analysis;
                    bool m_analysisHasBeenSet;

                    /**
                     * 匹配检索条件的原始日志
                     */
                    std::vector<LogInfo> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SEARCHLOGRESPONSE_H_
