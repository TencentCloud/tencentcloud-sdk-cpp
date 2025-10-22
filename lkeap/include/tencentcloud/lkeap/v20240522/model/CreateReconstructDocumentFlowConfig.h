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
                     * 获取Markdown文件中表格返回的形式
0，表格以MD形式返回
1，表格以HTML形式返回
默认为0
                     * @return TableResultType Markdown文件中表格返回的形式
0，表格以MD形式返回
1，表格以HTML形式返回
默认为0
                     * 
                     */
                    std::string GetTableResultType() const;

                    /**
                     * 设置Markdown文件中表格返回的形式
0，表格以MD形式返回
1，表格以HTML形式返回
默认为0
                     * @param _tableResultType Markdown文件中表格返回的形式
0，表格以MD形式返回
1，表格以HTML形式返回
默认为0
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
                     * 获取智能文档解析返回结果的格式
0：只返回全文MD；
1：只返回每一页的OCR原始Json；
2：只返回每一页的MD，
3：返回全文MD + 每一页的OCR原始Json；
4：返回全文MD + 每一页的MD
5: 返回全文md，每一页ocr原始json，每一页md
默认值为0

                     * @return ResultType 智能文档解析返回结果的格式
0：只返回全文MD；
1：只返回每一页的OCR原始Json；
2：只返回每一页的MD，
3：返回全文MD + 每一页的OCR原始Json；
4：返回全文MD + 每一页的MD
5: 返回全文md，每一页ocr原始json，每一页md
默认值为0

                     * 
                     */
                    std::string GetResultType() const;

                    /**
                     * 设置智能文档解析返回结果的格式
0：只返回全文MD；
1：只返回每一页的OCR原始Json；
2：只返回每一页的MD，
3：返回全文MD + 每一页的OCR原始Json；
4：返回全文MD + 每一页的MD
5: 返回全文md，每一页ocr原始json，每一页md
默认值为0

                     * @param _resultType 智能文档解析返回结果的格式
0：只返回全文MD；
1：只返回每一页的OCR原始Json；
2：只返回每一页的MD，
3：返回全文MD + 每一页的OCR原始Json；
4：返回全文MD + 每一页的MD
5: 返回全文md，每一页ocr原始json，每一页md
默认值为0

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
                     * 获取是否忽略失败页，返回已成功的页数据。默认为true。
                     * @return IgnoreFailedPage 是否忽略失败页，返回已成功的页数据。默认为true。
                     * 
                     */
                    bool GetIgnoreFailedPage() const;

                    /**
                     * 设置是否忽略失败页，返回已成功的页数据。默认为true。
                     * @param _ignoreFailedPage 是否忽略失败页，返回已成功的页数据。默认为true。
                     * 
                     */
                    void SetIgnoreFailedPage(const bool& _ignoreFailedPage);

                    /**
                     * 判断参数 IgnoreFailedPage 是否已赋值
                     * @return IgnoreFailedPage 是否已赋值
                     * 
                     */
                    bool IgnoreFailedPageHasBeenSet() const;

                private:

                    /**
                     * Markdown文件中表格返回的形式
0，表格以MD形式返回
1，表格以HTML形式返回
默认为0
                     */
                    std::string m_tableResultType;
                    bool m_tableResultTypeHasBeenSet;

                    /**
                     * 智能文档解析返回结果的格式
0：只返回全文MD；
1：只返回每一页的OCR原始Json；
2：只返回每一页的MD，
3：返回全文MD + 每一页的OCR原始Json；
4：返回全文MD + 每一页的MD
5: 返回全文md，每一页ocr原始json，每一页md
默认值为0

                     */
                    std::string m_resultType;
                    bool m_resultTypeHasBeenSet;

                    /**
                     * 是否忽略失败页，返回已成功的页数据。默认为true。
                     */
                    bool m_ignoreFailedPage;
                    bool m_ignoreFailedPageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATERECONSTRUCTDOCUMENTFLOWCONFIG_H_
