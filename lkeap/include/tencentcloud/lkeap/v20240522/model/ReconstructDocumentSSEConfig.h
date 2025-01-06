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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_RECONSTRUCTDOCUMENTSSECONFIG_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_RECONSTRUCTDOCUMENTSSECONFIG_H_

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
                * ReconstructDocumentSSE 功能配置参数
                */
                class ReconstructDocumentSSEConfig : public AbstractModel
                {
                public:
                    ReconstructDocumentSSEConfig();
                    ~ReconstructDocumentSSEConfig() = default;
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
                     * 获取Markdown文件中图片返回的形式
0:markdown中图片以链接形式返回
1:markdown中图片只返回图片中提取的文本内容
默认是0
                     * @return MarkdownImageResponseType Markdown文件中图片返回的形式
0:markdown中图片以链接形式返回
1:markdown中图片只返回图片中提取的文本内容
默认是0
                     * 
                     */
                    std::string GetMarkdownImageResponseType() const;

                    /**
                     * 设置Markdown文件中图片返回的形式
0:markdown中图片以链接形式返回
1:markdown中图片只返回图片中提取的文本内容
默认是0
                     * @param _markdownImageResponseType Markdown文件中图片返回的形式
0:markdown中图片以链接形式返回
1:markdown中图片只返回图片中提取的文本内容
默认是0
                     * 
                     */
                    void SetMarkdownImageResponseType(const std::string& _markdownImageResponseType);

                    /**
                     * 判断参数 MarkdownImageResponseType 是否已赋值
                     * @return MarkdownImageResponseType 是否已赋值
                     * 
                     */
                    bool MarkdownImageResponseTypeHasBeenSet() const;

                    /**
                     * 获取Markdown文件中是否包含页码信息
                     * @return ReturnPageFormat Markdown文件中是否包含页码信息
                     * 
                     */
                    bool GetReturnPageFormat() const;

                    /**
                     * 设置Markdown文件中是否包含页码信息
                     * @param _returnPageFormat Markdown文件中是否包含页码信息
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
                     * 获取自定义输出页码样式,{{p}}为页码占位符，开启ReturnPageFormat生效。未填默认样式:<page_num>page {{p}}</page_num>
                     * @return PageFormat 自定义输出页码样式,{{p}}为页码占位符，开启ReturnPageFormat生效。未填默认样式:<page_num>page {{p}}</page_num>
                     * 
                     */
                    std::string GetPageFormat() const;

                    /**
                     * 设置自定义输出页码样式,{{p}}为页码占位符，开启ReturnPageFormat生效。未填默认样式:<page_num>page {{p}}</page_num>
                     * @param _pageFormat 自定义输出页码样式,{{p}}为页码占位符，开启ReturnPageFormat生效。未填默认样式:<page_num>page {{p}}</page_num>
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
                     * Markdown文件中表格返回的形式
0，表格以MD形式返回
1，表格以HTML形式返回
默认为0
                     */
                    std::string m_tableResultType;
                    bool m_tableResultTypeHasBeenSet;

                    /**
                     * Markdown文件中图片返回的形式
0:markdown中图片以链接形式返回
1:markdown中图片只返回图片中提取的文本内容
默认是0
                     */
                    std::string m_markdownImageResponseType;
                    bool m_markdownImageResponseTypeHasBeenSet;

                    /**
                     * Markdown文件中是否包含页码信息
                     */
                    bool m_returnPageFormat;
                    bool m_returnPageFormatHasBeenSet;

                    /**
                     * 自定义输出页码样式,{{p}}为页码占位符，开启ReturnPageFormat生效。未填默认样式:<page_num>page {{p}}</page_num>
                     */
                    std::string m_pageFormat;
                    bool m_pageFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_RECONSTRUCTDOCUMENTSSECONFIG_H_
