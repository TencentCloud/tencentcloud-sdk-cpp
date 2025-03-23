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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TRANSFORMPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TRANSFORMPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/FailureParam.h>
#include <tencentcloud/ckafka/v20190819/model/MapParam.h>
#include <tencentcloud/ckafka/v20190819/model/FilterMapParam.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 数据处理参数
                */
                class TransformParam : public AbstractModel
                {
                public:
                    TransformParam();
                    ~TransformParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取解析格式，JSON，DELIMITER分隔符，REGULAR正则提取
                     * @return AnalysisFormat 解析格式，JSON，DELIMITER分隔符，REGULAR正则提取
                     * 
                     */
                    std::string GetAnalysisFormat() const;

                    /**
                     * 设置解析格式，JSON，DELIMITER分隔符，REGULAR正则提取
                     * @param _analysisFormat 解析格式，JSON，DELIMITER分隔符，REGULAR正则提取
                     * 
                     */
                    void SetAnalysisFormat(const std::string& _analysisFormat);

                    /**
                     * 判断参数 AnalysisFormat 是否已赋值
                     * @return AnalysisFormat 是否已赋值
                     * 
                     */
                    bool AnalysisFormatHasBeenSet() const;

                    /**
                     * 获取输出格式
                     * @return OutputFormat 输出格式
                     * 
                     */
                    std::string GetOutputFormat() const;

                    /**
                     * 设置输出格式
                     * @param _outputFormat 输出格式
                     * 
                     */
                    void SetOutputFormat(const std::string& _outputFormat);

                    /**
                     * 判断参数 OutputFormat 是否已赋值
                     * @return OutputFormat 是否已赋值
                     * 
                     */
                    bool OutputFormatHasBeenSet() const;

                    /**
                     * 获取是否保留解析失败数据
                     * @return FailureParam 是否保留解析失败数据
                     * 
                     */
                    FailureParam GetFailureParam() const;

                    /**
                     * 设置是否保留解析失败数据
                     * @param _failureParam 是否保留解析失败数据
                     * 
                     */
                    void SetFailureParam(const FailureParam& _failureParam);

                    /**
                     * 判断参数 FailureParam 是否已赋值
                     * @return FailureParam 是否已赋值
                     * 
                     */
                    bool FailureParamHasBeenSet() const;

                    /**
                     * 获取原始数据
                     * @return Content 原始数据
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置原始数据
                     * @param _content 原始数据
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
                     * 获取数据来源，TOPIC从源topic拉取，CUSTOMIZE自定义
                     * @return SourceType 数据来源，TOPIC从源topic拉取，CUSTOMIZE自定义
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置数据来源，TOPIC从源topic拉取，CUSTOMIZE自定义
                     * @param _sourceType 数据来源，TOPIC从源topic拉取，CUSTOMIZE自定义
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取分隔符、正则表达式
                     * @return Regex 分隔符、正则表达式
                     * 
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置分隔符、正则表达式
                     * @param _regex 分隔符、正则表达式
                     * 
                     */
                    void SetRegex(const std::string& _regex);

                    /**
                     * 判断参数 Regex 是否已赋值
                     * @return Regex 是否已赋值
                     * 
                     */
                    bool RegexHasBeenSet() const;

                    /**
                     * 获取Map
                     * @return MapParam Map
                     * 
                     */
                    std::vector<MapParam> GetMapParam() const;

                    /**
                     * 设置Map
                     * @param _mapParam Map
                     * 
                     */
                    void SetMapParam(const std::vector<MapParam>& _mapParam);

                    /**
                     * 判断参数 MapParam 是否已赋值
                     * @return MapParam 是否已赋值
                     * 
                     */
                    bool MapParamHasBeenSet() const;

                    /**
                     * 获取过滤器
                     * @return FilterParam 过滤器
                     * 
                     */
                    std::vector<FilterMapParam> GetFilterParam() const;

                    /**
                     * 设置过滤器
                     * @param _filterParam 过滤器
                     * 
                     */
                    void SetFilterParam(const std::vector<FilterMapParam>& _filterParam);

                    /**
                     * 判断参数 FilterParam 是否已赋值
                     * @return FilterParam 是否已赋值
                     * 
                     */
                    bool FilterParamHasBeenSet() const;

                    /**
                     * 获取测试结果
                     * @return Result 测试结果
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置测试结果
                     * @param _result 测试结果
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取解析结果
                     * @return AnalyseResult 解析结果
                     * 
                     */
                    std::vector<MapParam> GetAnalyseResult() const;

                    /**
                     * 设置解析结果
                     * @param _analyseResult 解析结果
                     * 
                     */
                    void SetAnalyseResult(const std::vector<MapParam>& _analyseResult);

                    /**
                     * 判断参数 AnalyseResult 是否已赋值
                     * @return AnalyseResult 是否已赋值
                     * 
                     */
                    bool AnalyseResultHasBeenSet() const;

                    /**
                     * 获取底层引擎是否使用eb
                     * @return UseEventBus 底层引擎是否使用eb
                     * 
                     */
                    bool GetUseEventBus() const;

                    /**
                     * 设置底层引擎是否使用eb
                     * @param _useEventBus 底层引擎是否使用eb
                     * 
                     */
                    void SetUseEventBus(const bool& _useEventBus);

                    /**
                     * 判断参数 UseEventBus 是否已赋值
                     * @return UseEventBus 是否已赋值
                     * 
                     */
                    bool UseEventBusHasBeenSet() const;

                private:

                    /**
                     * 解析格式，JSON，DELIMITER分隔符，REGULAR正则提取
                     */
                    std::string m_analysisFormat;
                    bool m_analysisFormatHasBeenSet;

                    /**
                     * 输出格式
                     */
                    std::string m_outputFormat;
                    bool m_outputFormatHasBeenSet;

                    /**
                     * 是否保留解析失败数据
                     */
                    FailureParam m_failureParam;
                    bool m_failureParamHasBeenSet;

                    /**
                     * 原始数据
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 数据来源，TOPIC从源topic拉取，CUSTOMIZE自定义
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 分隔符、正则表达式
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                    /**
                     * Map
                     */
                    std::vector<MapParam> m_mapParam;
                    bool m_mapParamHasBeenSet;

                    /**
                     * 过滤器
                     */
                    std::vector<FilterMapParam> m_filterParam;
                    bool m_filterParamHasBeenSet;

                    /**
                     * 测试结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 解析结果
                     */
                    std::vector<MapParam> m_analyseResult;
                    bool m_analyseResultHasBeenSet;

                    /**
                     * 底层引擎是否使用eb
                     */
                    bool m_useEventBus;
                    bool m_useEventBusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TRANSFORMPARAM_H_
