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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TRANSFORMSPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TRANSFORMSPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/FieldParam.h>
#include <tencentcloud/ckafka/v20190819/model/FilterMapParam.h>
#include <tencentcloud/ckafka/v20190819/model/FailureParam.h>
#include <tencentcloud/ckafka/v20190819/model/RowParam.h>
#include <tencentcloud/ckafka/v20190819/model/BatchAnalyseParam.h>


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
                class TransformsParam : public AbstractModel
                {
                public:
                    TransformsParam();
                    ~TransformsParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取处理链
                     * @return FieldChain 处理链
                     * 
                     */
                    std::vector<FieldParam> GetFieldChain() const;

                    /**
                     * 设置处理链
                     * @param _fieldChain 处理链
                     * 
                     */
                    void SetFieldChain(const std::vector<FieldParam>& _fieldChain);

                    /**
                     * 判断参数 FieldChain 是否已赋值
                     * @return FieldChain 是否已赋值
                     * 
                     */
                    bool FieldChainHasBeenSet() const;

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
                     * 获取失败处理
                     * @return FailureParam 失败处理
                     * 
                     */
                    FailureParam GetFailureParam() const;

                    /**
                     * 设置失败处理
                     * @param _failureParam 失败处理
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
                     * 获取数据来源
                     * @return SourceType 数据来源
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置数据来源
                     * @param _sourceType 数据来源
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
                     * 获取输出格式，JSON，ROW，默认为JSON
                     * @return OutputFormat 输出格式，JSON，ROW，默认为JSON
                     * 
                     */
                    std::string GetOutputFormat() const;

                    /**
                     * 设置输出格式，JSON，ROW，默认为JSON
                     * @param _outputFormat 输出格式，JSON，ROW，默认为JSON
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
                     * 获取输出格式为ROW必填
                     * @return RowParam 输出格式为ROW必填
                     * 
                     */
                    RowParam GetRowParam() const;

                    /**
                     * 设置输出格式为ROW必填
                     * @param _rowParam 输出格式为ROW必填
                     * 
                     */
                    void SetRowParam(const RowParam& _rowParam);

                    /**
                     * 判断参数 RowParam 是否已赋值
                     * @return RowParam 是否已赋值
                     * 
                     */
                    bool RowParamHasBeenSet() const;

                    /**
                     * 获取是否保留数据源Topic元数据信息（源Topic、Partition、Offset），默认为false
                     * @return KeepMetadata 是否保留数据源Topic元数据信息（源Topic、Partition、Offset），默认为false
                     * 
                     */
                    bool GetKeepMetadata() const;

                    /**
                     * 设置是否保留数据源Topic元数据信息（源Topic、Partition、Offset），默认为false
                     * @param _keepMetadata 是否保留数据源Topic元数据信息（源Topic、Partition、Offset），默认为false
                     * 
                     */
                    void SetKeepMetadata(const bool& _keepMetadata);

                    /**
                     * 判断参数 KeepMetadata 是否已赋值
                     * @return KeepMetadata 是否已赋值
                     * 
                     */
                    bool KeepMetadataHasBeenSet() const;

                    /**
                     * 获取数组解析
                     * @return BatchAnalyse 数组解析
                     * 
                     */
                    BatchAnalyseParam GetBatchAnalyse() const;

                    /**
                     * 设置数组解析
                     * @param _batchAnalyse 数组解析
                     * 
                     */
                    void SetBatchAnalyse(const BatchAnalyseParam& _batchAnalyse);

                    /**
                     * 判断参数 BatchAnalyse 是否已赋值
                     * @return BatchAnalyse 是否已赋值
                     * 
                     */
                    bool BatchAnalyseHasBeenSet() const;

                private:

                    /**
                     * 原始数据
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 处理链
                     */
                    std::vector<FieldParam> m_fieldChain;
                    bool m_fieldChainHasBeenSet;

                    /**
                     * 过滤器
                     */
                    std::vector<FilterMapParam> m_filterParam;
                    bool m_filterParamHasBeenSet;

                    /**
                     * 失败处理
                     */
                    FailureParam m_failureParam;
                    bool m_failureParamHasBeenSet;

                    /**
                     * 测试结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 数据来源
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 输出格式，JSON，ROW，默认为JSON
                     */
                    std::string m_outputFormat;
                    bool m_outputFormatHasBeenSet;

                    /**
                     * 输出格式为ROW必填
                     */
                    RowParam m_rowParam;
                    bool m_rowParamHasBeenSet;

                    /**
                     * 是否保留数据源Topic元数据信息（源Topic、Partition、Offset），默认为false
                     */
                    bool m_keepMetadata;
                    bool m_keepMetadataHasBeenSet;

                    /**
                     * 数组解析
                     */
                    BatchAnalyseParam m_batchAnalyse;
                    bool m_batchAnalyseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TRANSFORMSPARAM_H_
