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
                     * 获取<p>Markdown文件中表格返回的形式<br>0，表格以MD形式返回<br>1，表格以HTML形式返回<br>默认为</p>
                     * @return TableResultType <p>Markdown文件中表格返回的形式<br>0，表格以MD形式返回<br>1，表格以HTML形式返回<br>默认为</p>
                     * @deprecated
                     */
                    std::string GetTableResultType() const;

                    /**
                     * 设置<p>Markdown文件中表格返回的形式<br>0，表格以MD形式返回<br>1，表格以HTML形式返回<br>默认为</p>
                     * @param _tableResultType <p>Markdown文件中表格返回的形式<br>0，表格以MD形式返回<br>1，表格以HTML形式返回<br>默认为</p>
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
                     * 获取<p>智能文档解析返回结果的格式<br>0：只返回全文MD；<br>1：只返回每一页的OCR原始Json；<br>2：只返回每一页的MD；<br>3：返回全文MD + 每一页的OCR原始Json；<br>4：返回全文MD + 每一页的MD；<br>5：返回全文md，每一页ocr原始json，每一页md。</p>
                     * @return ResultType <p>智能文档解析返回结果的格式<br>0：只返回全文MD；<br>1：只返回每一页的OCR原始Json；<br>2：只返回每一页的MD；<br>3：返回全文MD + 每一页的OCR原始Json；<br>4：返回全文MD + 每一页的MD；<br>5：返回全文md，每一页ocr原始json，每一页md。</p>
                     * @deprecated
                     */
                    std::string GetResultType() const;

                    /**
                     * 设置<p>智能文档解析返回结果的格式<br>0：只返回全文MD；<br>1：只返回每一页的OCR原始Json；<br>2：只返回每一页的MD；<br>3：返回全文MD + 每一页的OCR原始Json；<br>4：返回全文MD + 每一页的MD；<br>5：返回全文md，每一页ocr原始json，每一页md。</p>
                     * @param _resultType <p>智能文档解析返回结果的格式<br>0：只返回全文MD；<br>1：只返回每一页的OCR原始Json；<br>2：只返回每一页的MD；<br>3：返回全文MD + 每一页的OCR原始Json；<br>4：返回全文MD + 每一页的MD；<br>5：返回全文md，每一页ocr原始json，每一页md。</p>
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
                     * 获取<p>是否开启mllm</p>
                     * @return EnableMllm <p>是否开启mllm</p>
                     * 
                     */
                    bool GetEnableMllm() const;

                    /**
                     * 设置<p>是否开启mllm</p>
                     * @param _enableMllm <p>是否开启mllm</p>
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
                     * 获取<p>最大分片长度</p>
                     * @return MaxChunkSize <p>最大分片长度</p>
                     * 
                     */
                    int64_t GetMaxChunkSize() const;

                    /**
                     * 设置<p>最大分片长度</p>
                     * @param _maxChunkSize <p>最大分片长度</p>
                     * 
                     */
                    void SetMaxChunkSize(const int64_t& _maxChunkSize);

                    /**
                     * 判断参数 MaxChunkSize 是否已赋值
                     * @return MaxChunkSize 是否已赋值
                     * 
                     */
                    bool MaxChunkSizeHasBeenSet() const;

                    /**
                     * 获取<p>是否忽略返回失败页码</p>
                     * @return IgnoreFailedPage <p>是否忽略返回失败页码</p>
                     * 
                     */
                    bool GetIgnoreFailedPage() const;

                    /**
                     * 设置<p>是否忽略返回失败页码</p>
                     * @param _ignoreFailedPage <p>是否忽略返回失败页码</p>
                     * 
                     */
                    void SetIgnoreFailedPage(const bool& _ignoreFailedPage);

                    /**
                     * 判断参数 IgnoreFailedPage 是否已赋值
                     * @return IgnoreFailedPage 是否已赋值
                     * 
                     */
                    bool IgnoreFailedPageHasBeenSet() const;

                    /**
                     * 获取<p>智能文档解析返回结果的格式<br>0：只返回全文MD；<br>1：只返回每一页的OCR原始Json；<br>2：只返回每一页的MD；<br>3：返回全文MD + 每一页的OCR原始Json；<br>4：返回全文MD + 每一页的MD；<br>5：返回全文md，每一页ocr原始json，每一页md。</p>
                     * @return SplitResultType <p>智能文档解析返回结果的格式<br>0：只返回全文MD；<br>1：只返回每一页的OCR原始Json；<br>2：只返回每一页的MD；<br>3：返回全文MD + 每一页的OCR原始Json；<br>4：返回全文MD + 每一页的MD；<br>5：返回全文md，每一页ocr原始json，每一页md。</p>
                     * 
                     */
                    std::string GetSplitResultType() const;

                    /**
                     * 设置<p>智能文档解析返回结果的格式<br>0：只返回全文MD；<br>1：只返回每一页的OCR原始Json；<br>2：只返回每一页的MD；<br>3：返回全文MD + 每一页的OCR原始Json；<br>4：返回全文MD + 每一页的MD；<br>5：返回全文md，每一页ocr原始json，每一页md。</p>
                     * @param _splitResultType <p>智能文档解析返回结果的格式<br>0：只返回全文MD；<br>1：只返回每一页的OCR原始Json；<br>2：只返回每一页的MD；<br>3：返回全文MD + 每一页的OCR原始Json；<br>4：返回全文MD + 每一页的MD；<br>5：返回全文md，每一页ocr原始json，每一页md。</p>
                     * 
                     */
                    void SetSplitResultType(const std::string& _splitResultType);

                    /**
                     * 判断参数 SplitResultType 是否已赋值
                     * @return SplitResultType 是否已赋值
                     * 
                     */
                    bool SplitResultTypeHasBeenSet() const;

                    /**
                     * 获取<p>Markdown文件中表格返回的形式<br>0，表格以MD形式返回<br>1，表格以HTML形式返回<br>默认为</p>
                     * @return SplitTableResultType <p>Markdown文件中表格返回的形式<br>0，表格以MD形式返回<br>1，表格以HTML形式返回<br>默认为</p>
                     * 
                     */
                    std::string GetSplitTableResultType() const;

                    /**
                     * 设置<p>Markdown文件中表格返回的形式<br>0，表格以MD形式返回<br>1，表格以HTML形式返回<br>默认为</p>
                     * @param _splitTableResultType <p>Markdown文件中表格返回的形式<br>0，表格以MD形式返回<br>1，表格以HTML形式返回<br>默认为</p>
                     * 
                     */
                    void SetSplitTableResultType(const std::string& _splitTableResultType);

                    /**
                     * 判断参数 SplitTableResultType 是否已赋值
                     * @return SplitTableResultType 是否已赋值
                     * 
                     */
                    bool SplitTableResultTypeHasBeenSet() const;

                    /**
                     * 获取<p>Markdown文件中是否包含页码信息</p>
                     * @return ReturnPageFormat <p>Markdown文件中是否包含页码信息</p>
                     * 
                     */
                    bool GetReturnPageFormat() const;

                    /**
                     * 设置<p>Markdown文件中是否包含页码信息</p>
                     * @param _returnPageFormat <p>Markdown文件中是否包含页码信息</p>
                     * 
                     */
                    void SetReturnPageFormat(const bool& _returnPageFormat);

                    /**
                     * 判断参数 ReturnPageFormat 是否已赋值
                     * @return ReturnPageFormat 是否已赋值
                     * 
                     */
                    bool ReturnPageFormatHasBeenSet() const;

                    /**
                     * 获取<p>自定义输出页码样式,{{p}}为页码占位符，开启ReturnPageFormat生效。未填默认样式:<page_num>page {{p}}</page_num></p>
                     * @return PageFormat <p>自定义输出页码样式,{{p}}为页码占位符，开启ReturnPageFormat生效。未填默认样式:<page_num>page {{p}}</page_num></p>
                     * 
                     */
                    std::string GetPageFormat() const;

                    /**
                     * 设置<p>自定义输出页码样式,{{p}}为页码占位符，开启ReturnPageFormat生效。未填默认样式:<page_num>page {{p}}</page_num></p>
                     * @param _pageFormat <p>自定义输出页码样式,{{p}}为页码占位符，开启ReturnPageFormat生效。未填默认样式:<page_num>page {{p}}</page_num></p>
                     * 
                     */
                    void SetPageFormat(const std::string& _pageFormat);

                    /**
                     * 判断参数 PageFormat 是否已赋值
                     * @return PageFormat 是否已赋值
                     * 
                     */
                    bool PageFormatHasBeenSet() const;

                private:

                    /**
                     * <p>Markdown文件中表格返回的形式<br>0，表格以MD形式返回<br>1，表格以HTML形式返回<br>默认为</p>
                     */
                    std::string m_tableResultType;
                    bool m_tableResultTypeHasBeenSet;

                    /**
                     * <p>智能文档解析返回结果的格式<br>0：只返回全文MD；<br>1：只返回每一页的OCR原始Json；<br>2：只返回每一页的MD；<br>3：返回全文MD + 每一页的OCR原始Json；<br>4：返回全文MD + 每一页的MD；<br>5：返回全文md，每一页ocr原始json，每一页md。</p>
                     */
                    std::string m_resultType;
                    bool m_resultTypeHasBeenSet;

                    /**
                     * <p>是否开启mllm</p>
                     */
                    bool m_enableMllm;
                    bool m_enableMllmHasBeenSet;

                    /**
                     * <p>最大分片长度</p>
                     */
                    int64_t m_maxChunkSize;
                    bool m_maxChunkSizeHasBeenSet;

                    /**
                     * <p>是否忽略返回失败页码</p>
                     */
                    bool m_ignoreFailedPage;
                    bool m_ignoreFailedPageHasBeenSet;

                    /**
                     * <p>智能文档解析返回结果的格式<br>0：只返回全文MD；<br>1：只返回每一页的OCR原始Json；<br>2：只返回每一页的MD；<br>3：返回全文MD + 每一页的OCR原始Json；<br>4：返回全文MD + 每一页的MD；<br>5：返回全文md，每一页ocr原始json，每一页md。</p>
                     */
                    std::string m_splitResultType;
                    bool m_splitResultTypeHasBeenSet;

                    /**
                     * <p>Markdown文件中表格返回的形式<br>0，表格以MD形式返回<br>1，表格以HTML形式返回<br>默认为</p>
                     */
                    std::string m_splitTableResultType;
                    bool m_splitTableResultTypeHasBeenSet;

                    /**
                     * <p>Markdown文件中是否包含页码信息</p>
                     */
                    bool m_returnPageFormat;
                    bool m_returnPageFormatHasBeenSet;

                    /**
                     * <p>自定义输出页码样式,{{p}}为页码占位符，开启ReturnPageFormat生效。未填默认样式:<page_num>page {{p}}</page_num></p>
                     */
                    std::string m_pageFormat;
                    bool m_pageFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATESPLITDOCUMENTFLOWCONFIG_H_
