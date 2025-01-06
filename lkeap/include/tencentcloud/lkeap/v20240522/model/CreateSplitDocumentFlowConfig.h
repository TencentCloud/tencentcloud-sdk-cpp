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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATESPLITDOCUMENTFLOWCONFIG_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATESPLITDOCUMENTFLOWCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * 创建智能文档拆分任务的配置信息
                */
                class CreateSplitDocumentFlowConfig : public AbstractModel
                {
                public:
                    CreateSplitDocumentFlowConfig();
                    ~CreateSplitDocumentFlowConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Markdown文件中表格返回的形式
0，表格以MD形式返回
1，表格以HTML形式返回
默认为
                     * @return TableResultType Markdown文件中表格返回的形式
0，表格以MD形式返回
1，表格以HTML形式返回
默认为
                     * @deprecated
                     */
                    std::string GetTableResultType() const;

                    /**
                     * 设置Markdown文件中表格返回的形式
0，表格以MD形式返回
1，表格以HTML形式返回
默认为
                     * @param _tableResultType Markdown文件中表格返回的形式
0，表格以MD形式返回
1，表格以HTML形式返回
默认为
                     * @deprecated
                     */
                    void SetTableResultType(const std::string& _tableResultType);

                    /**
                     * 判断参数 TableResultType 是否已赋值
                     * @return TableResultType 是否已赋值
                     * @deprecated
                     */
                    bool TableResultTypeHasBeenSet() const;

                    /**
                     * 获取智能文档解析返回结果的格式
0：只返回全文MD；
1：只返回每一页的OCR原始Json；
2：只返回每一页的MD，
3：返回全文MD + 每一页的OCR原始Json；
4：返回全文MD + 每一页的MD，
默认值为3（返回全文MD + 每一页的OCR原始Json）


                     * @return ResultType 智能文档解析返回结果的格式
0：只返回全文MD；
1：只返回每一页的OCR原始Json；
2：只返回每一页的MD，
3：返回全文MD + 每一页的OCR原始Json；
4：返回全文MD + 每一页的MD，
默认值为3（返回全文MD + 每一页的OCR原始Json）


                     * @deprecated
                     */
                    std::string GetResultType() const;

                    /**
                     * 设置智能文档解析返回结果的格式
0：只返回全文MD；
1：只返回每一页的OCR原始Json；
2：只返回每一页的MD，
3：返回全文MD + 每一页的OCR原始Json；
4：返回全文MD + 每一页的MD，
默认值为3（返回全文MD + 每一页的OCR原始Json）


                     * @param _resultType 智能文档解析返回结果的格式
0：只返回全文MD；
1：只返回每一页的OCR原始Json；
2：只返回每一页的MD，
3：返回全文MD + 每一页的OCR原始Json；
4：返回全文MD + 每一页的MD，
默认值为3（返回全文MD + 每一页的OCR原始Json）


                     * @deprecated
                     */
                    void SetResultType(const std::string& _resultType);

                    /**
                     * 判断参数 ResultType 是否已赋值
                     * @return ResultType 是否已赋值
                     * @deprecated
                     */
                    bool ResultTypeHasBeenSet() const;

                    /**
                     * 获取是否开启mllm
                     * @return EnableMllm 是否开启mllm
                     * 
                     */
                    bool GetEnableMllm() const;

                    /**
                     * 设置是否开启mllm
                     * @param _enableMllm 是否开启mllm
                     * 
                     */
                    void SetEnableMllm(const bool& _enableMllm);

                    /**
                     * 判断参数 EnableMllm 是否已赋值
                     * @return EnableMllm 是否已赋值
                     * 
                     */
                    bool EnableMllmHasBeenSet() const;

                    /**
                     * 获取最大分片长度
                     * @return MaxChunkSize 最大分片长度
                     * 
                     */
                    int64_t GetMaxChunkSize() const;

                    /**
                     * 设置最大分片长度
                     * @param _maxChunkSize 最大分片长度
                     * 
                     */
                    void SetMaxChunkSize(const int64_t& _maxChunkSize);

                    /**
                     * 判断参数 MaxChunkSize 是否已赋值
                     * @return MaxChunkSize 是否已赋值
                     * 
                     */
                    bool MaxChunkSizeHasBeenSet() const;

                private:

                    /**
                     * Markdown文件中表格返回的形式
0，表格以MD形式返回
1，表格以HTML形式返回
默认为
                     */
                    std::string m_tableResultType;
                    bool m_tableResultTypeHasBeenSet;

                    /**
                     * 智能文档解析返回结果的格式
0：只返回全文MD；
1：只返回每一页的OCR原始Json；
2：只返回每一页的MD，
3：返回全文MD + 每一页的OCR原始Json；
4：返回全文MD + 每一页的MD，
默认值为3（返回全文MD + 每一页的OCR原始Json）


                     */
                    std::string m_resultType;
                    bool m_resultTypeHasBeenSet;

                    /**
                     * 是否开启mllm
                     */
                    bool m_enableMllm;
                    bool m_enableMllmHasBeenSet;

                    /**
                     * 最大分片长度
                     */
                    int64_t m_maxChunkSize;
                    bool m_maxChunkSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATESPLITDOCUMENTFLOWCONFIG_H_
