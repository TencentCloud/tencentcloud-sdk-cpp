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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATERECONSTRUCTDOCUMENTFLOWCONFIG_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATERECONSTRUCTDOCUMENTFLOWCONFIG_H_

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
                * 创建智能文档解析任务的配置信息
                */
                class CreateReconstructDocumentFlowConfig : public AbstractModel
                {
                public:
                    CreateReconstructDocumentFlowConfig();
                    ~CreateReconstructDocumentFlowConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Markdown文件中表格返回的形式<br>0，表格以MD形式返回<br>1，表格以HTML形式返回<br>默认为0</p>
                     * @return TableResultType <p>Markdown文件中表格返回的形式<br>0，表格以MD形式返回<br>1，表格以HTML形式返回<br>默认为0</p>
                     * 
                     */
                    std::string GetTableResultType() const;

                    /**
                     * 设置<p>Markdown文件中表格返回的形式<br>0，表格以MD形式返回<br>1，表格以HTML形式返回<br>默认为0</p>
                     * @param _tableResultType <p>Markdown文件中表格返回的形式<br>0，表格以MD形式返回<br>1，表格以HTML形式返回<br>默认为0</p>
                     * 
                     */
                    void SetTableResultType(const std::string& _tableResultType);

                    /**
                     * 判断参数 TableResultType 是否已赋值
                     * @return TableResultType 是否已赋值
                     * 
                     */
                    bool TableResultTypeHasBeenSet() const;

                    /**
                     * 获取<p>智能文档解析返回结果的格式<br>0：只返回全文MD；<br>1：只返回每一页的OCR原始Json；<br>2：只返回每一页的MD，<br>3：返回全文MD + 每一页的OCR原始Json；<br>4：返回全文MD + 每一页的MD<br>5: 返回全文md，每一页ocr原始json，每一页md<br>默认值为0</p>
                     * @return ResultType <p>智能文档解析返回结果的格式<br>0：只返回全文MD；<br>1：只返回每一页的OCR原始Json；<br>2：只返回每一页的MD，<br>3：返回全文MD + 每一页的OCR原始Json；<br>4：返回全文MD + 每一页的MD<br>5: 返回全文md，每一页ocr原始json，每一页md<br>默认值为0</p>
                     * 
                     */
                    std::string GetResultType() const;

                    /**
                     * 设置<p>智能文档解析返回结果的格式<br>0：只返回全文MD；<br>1：只返回每一页的OCR原始Json；<br>2：只返回每一页的MD，<br>3：返回全文MD + 每一页的OCR原始Json；<br>4：返回全文MD + 每一页的MD<br>5: 返回全文md，每一页ocr原始json，每一页md<br>默认值为0</p>
                     * @param _resultType <p>智能文档解析返回结果的格式<br>0：只返回全文MD；<br>1：只返回每一页的OCR原始Json；<br>2：只返回每一页的MD，<br>3：返回全文MD + 每一页的OCR原始Json；<br>4：返回全文MD + 每一页的MD<br>5: 返回全文md，每一页ocr原始json，每一页md<br>默认值为0</p>
                     * 
                     */
                    void SetResultType(const std::string& _resultType);

                    /**
                     * 判断参数 ResultType 是否已赋值
                     * @return ResultType 是否已赋值
                     * 
                     */
                    bool ResultTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否忽略失败页，返回已成功的页数据。默认为true。</p>
                     * @return IgnoreFailedPage <p>是否忽略失败页，返回已成功的页数据。默认为true。</p>
                     * 
                     */
                    bool GetIgnoreFailedPage() const;

                    /**
                     * 设置<p>是否忽略失败页，返回已成功的页数据。默认为true。</p>
                     * @param _ignoreFailedPage <p>是否忽略失败页，返回已成功的页数据。默认为true。</p>
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
                     * <p>Markdown文件中表格返回的形式<br>0，表格以MD形式返回<br>1，表格以HTML形式返回<br>默认为0</p>
                     */
                    std::string m_tableResultType;
                    bool m_tableResultTypeHasBeenSet;

                    /**
                     * <p>智能文档解析返回结果的格式<br>0：只返回全文MD；<br>1：只返回每一页的OCR原始Json；<br>2：只返回每一页的MD，<br>3：返回全文MD + 每一页的OCR原始Json；<br>4：返回全文MD + 每一页的MD<br>5: 返回全文md，每一页ocr原始json，每一页md<br>默认值为0</p>
                     */
                    std::string m_resultType;
                    bool m_resultTypeHasBeenSet;

                    /**
                     * <p>是否忽略失败页，返回已成功的页数据。默认为true。</p>
                     */
                    bool m_ignoreFailedPage;
                    bool m_ignoreFailedPageHasBeenSet;

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

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATERECONSTRUCTDOCUMENTFLOWCONFIG_H_
