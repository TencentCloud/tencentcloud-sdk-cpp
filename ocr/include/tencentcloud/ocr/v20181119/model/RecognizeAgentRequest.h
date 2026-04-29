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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEAGENTREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/SchemaList.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeAgent请求参数结构体
                */
                class RecognizeAgentRequest : public AbstractModel
                {
                public:
                    RecognizeAgentRequest();
                    ~RecognizeAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     * @return ImageUrl <p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     * @param _imageUrl <p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>图片/PDF的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * @return ImageBase64 <p>图片/PDF的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>图片/PDF的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * @param _imageBase64 <p>图片/PDF的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取<p>需识别的PDF页码。仅支持PDF单页识别，当上传文件为PDF时有效。</p><p>默认值：1</p>
                     * @return PdfPageNumber <p>需识别的PDF页码。仅支持PDF单页识别，当上传文件为PDF时有效。</p><p>默认值：1</p>
                     * 
                     */
                    int64_t GetPdfPageNumber() const;

                    /**
                     * 设置<p>需识别的PDF页码。仅支持PDF单页识别，当上传文件为PDF时有效。</p><p>默认值：1</p>
                     * @param _pdfPageNumber <p>需识别的PDF页码。仅支持PDF单页识别，当上传文件为PDF时有效。</p><p>默认值：1</p>
                     * 
                     */
                    void SetPdfPageNumber(const int64_t& _pdfPageNumber);

                    /**
                     * 判断参数 PdfPageNumber 是否已赋值
                     * @return PdfPageNumber 是否已赋值
                     * 
                     */
                    bool PdfPageNumberHasBeenSet() const;

                    /**
                     * 获取<p>模型选择。</p><p>枚举值：</p><ul><li>0： 推理模型。</li><li>1： 识别、推理模型。</li></ul><p>默认值：0</p>
                     * @return SelectModel <p>模型选择。</p><p>枚举值：</p><ul><li>0： 推理模型。</li><li>1： 识别、推理模型。</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetSelectModel() const;

                    /**
                     * 设置<p>模型选择。</p><p>枚举值：</p><ul><li>0： 推理模型。</li><li>1： 识别、推理模型。</li></ul><p>默认值：0</p>
                     * @param _selectModel <p>模型选择。</p><p>枚举值：</p><ul><li>0： 推理模型。</li><li>1： 识别、推理模型。</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetSelectModel(const int64_t& _selectModel);

                    /**
                     * 判断参数 SelectModel 是否已赋值
                     * @return SelectModel 是否已赋值
                     * 
                     */
                    bool SelectModelHasBeenSet() const;

                    /**
                     * 获取<p>任务类型。</p><p>枚举值：</p><ul><li><p>0： 全文识别。识别且输出全文内容。</p></li><li><p>1： 判断。判断输入图的内容是否为Query中的内容，返回结果为是或否。如Query:&quot;增值税发票&quot;，该任务类型下，将判断输入图是否为增值税发票，返回&quot;是&quot;或&quot;否&quot;。</p></li><li><p>2： 分类。判断输入图属于Query中具体哪个分类项。如Query:[&quot;营业执照&quot;,&quot;合同&quot;,&quot;票据&quot;]，在该任务类型下，将判断输入图是否属于&quot;营业执照&quot;、&quot;合同&quot;、&quot;票据&quot;，返回&quot;营业执照&quot;/&quot;合同&quot;/&quot;票据&quot;或&quot;均不符合&quot;。</p></li><li><p>3： 总结提炼。总结输入图与Query相关的内容。如Query:&quot;工作经历&quot;，在该任务类型下，将输出输入图中和&quot;工作经历&quot;相关的内容，或&quot;无相关内容&quot;。</p></li><li><p>4： 信息提取。按照自定义字段提取Key-Value，且支持多层级提取，详见入参SchemaItems说明。入参可参考下面的接口示例QueryType=4场景</p></li></ul><p>默认值：0</p>
                     * @return QueryType <p>任务类型。</p><p>枚举值：</p><ul><li><p>0： 全文识别。识别且输出全文内容。</p></li><li><p>1： 判断。判断输入图的内容是否为Query中的内容，返回结果为是或否。如Query:&quot;增值税发票&quot;，该任务类型下，将判断输入图是否为增值税发票，返回&quot;是&quot;或&quot;否&quot;。</p></li><li><p>2： 分类。判断输入图属于Query中具体哪个分类项。如Query:[&quot;营业执照&quot;,&quot;合同&quot;,&quot;票据&quot;]，在该任务类型下，将判断输入图是否属于&quot;营业执照&quot;、&quot;合同&quot;、&quot;票据&quot;，返回&quot;营业执照&quot;/&quot;合同&quot;/&quot;票据&quot;或&quot;均不符合&quot;。</p></li><li><p>3： 总结提炼。总结输入图与Query相关的内容。如Query:&quot;工作经历&quot;，在该任务类型下，将输出输入图中和&quot;工作经历&quot;相关的内容，或&quot;无相关内容&quot;。</p></li><li><p>4： 信息提取。按照自定义字段提取Key-Value，且支持多层级提取，详见入参SchemaItems说明。入参可参考下面的接口示例QueryType=4场景</p></li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetQueryType() const;

                    /**
                     * 设置<p>任务类型。</p><p>枚举值：</p><ul><li><p>0： 全文识别。识别且输出全文内容。</p></li><li><p>1： 判断。判断输入图的内容是否为Query中的内容，返回结果为是或否。如Query:&quot;增值税发票&quot;，该任务类型下，将判断输入图是否为增值税发票，返回&quot;是&quot;或&quot;否&quot;。</p></li><li><p>2： 分类。判断输入图属于Query中具体哪个分类项。如Query:[&quot;营业执照&quot;,&quot;合同&quot;,&quot;票据&quot;]，在该任务类型下，将判断输入图是否属于&quot;营业执照&quot;、&quot;合同&quot;、&quot;票据&quot;，返回&quot;营业执照&quot;/&quot;合同&quot;/&quot;票据&quot;或&quot;均不符合&quot;。</p></li><li><p>3： 总结提炼。总结输入图与Query相关的内容。如Query:&quot;工作经历&quot;，在该任务类型下，将输出输入图中和&quot;工作经历&quot;相关的内容，或&quot;无相关内容&quot;。</p></li><li><p>4： 信息提取。按照自定义字段提取Key-Value，且支持多层级提取，详见入参SchemaItems说明。入参可参考下面的接口示例QueryType=4场景</p></li></ul><p>默认值：0</p>
                     * @param _queryType <p>任务类型。</p><p>枚举值：</p><ul><li><p>0： 全文识别。识别且输出全文内容。</p></li><li><p>1： 判断。判断输入图的内容是否为Query中的内容，返回结果为是或否。如Query:&quot;增值税发票&quot;，该任务类型下，将判断输入图是否为增值税发票，返回&quot;是&quot;或&quot;否&quot;。</p></li><li><p>2： 分类。判断输入图属于Query中具体哪个分类项。如Query:[&quot;营业执照&quot;,&quot;合同&quot;,&quot;票据&quot;]，在该任务类型下，将判断输入图是否属于&quot;营业执照&quot;、&quot;合同&quot;、&quot;票据&quot;，返回&quot;营业执照&quot;/&quot;合同&quot;/&quot;票据&quot;或&quot;均不符合&quot;。</p></li><li><p>3： 总结提炼。总结输入图与Query相关的内容。如Query:&quot;工作经历&quot;，在该任务类型下，将输出输入图中和&quot;工作经历&quot;相关的内容，或&quot;无相关内容&quot;。</p></li><li><p>4： 信息提取。按照自定义字段提取Key-Value，且支持多层级提取，详见入参SchemaItems说明。入参可参考下面的接口示例QueryType=4场景</p></li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetQueryType(const int64_t& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

                    /**
                     * 获取<p>自定义提取字段的结构，详见SchemaList结构。仅当QueryType=4时生效。</p><p>注：.N表示数组型参数。</p>
                     * @return SchemaItems <p>自定义提取字段的结构，详见SchemaList结构。仅当QueryType=4时生效。</p><p>注：.N表示数组型参数。</p>
                     * 
                     */
                    std::vector<SchemaList> GetSchemaItems() const;

                    /**
                     * 设置<p>自定义提取字段的结构，详见SchemaList结构。仅当QueryType=4时生效。</p><p>注：.N表示数组型参数。</p>
                     * @param _schemaItems <p>自定义提取字段的结构，详见SchemaList结构。仅当QueryType=4时生效。</p><p>注：.N表示数组型参数。</p>
                     * 
                     */
                    void SetSchemaItems(const std::vector<SchemaList>& _schemaItems);

                    /**
                     * 判断参数 SchemaItems 是否已赋值
                     * @return SchemaItems 是否已赋值
                     * 
                     */
                    bool SchemaItemsHasBeenSet() const;

                    /**
                     * 获取<p>推理任务的提示词。与QueryType搭配使用，具体说明见QueryType描述。1）仅当QueryType=1/2/3时生效，且QueryType=1/3时，长度必须为1；2）QueryType=2，Query长度必须符合2≤x≤5。</p><p>注：.N表示数组型参数。</p>
                     * @return Query <p>推理任务的提示词。与QueryType搭配使用，具体说明见QueryType描述。1）仅当QueryType=1/2/3时生效，且QueryType=1/3时，长度必须为1；2）QueryType=2，Query长度必须符合2≤x≤5。</p><p>注：.N表示数组型参数。</p>
                     * 
                     */
                    std::vector<std::string> GetQuery() const;

                    /**
                     * 设置<p>推理任务的提示词。与QueryType搭配使用，具体说明见QueryType描述。1）仅当QueryType=1/2/3时生效，且QueryType=1/3时，长度必须为1；2）QueryType=2，Query长度必须符合2≤x≤5。</p><p>注：.N表示数组型参数。</p>
                     * @param _query <p>推理任务的提示词。与QueryType搭配使用，具体说明见QueryType描述。1）仅当QueryType=1/2/3时生效，且QueryType=1/3时，长度必须为1；2）QueryType=2，Query长度必须符合2≤x≤5。</p><p>注：.N表示数组型参数。</p>
                     * 
                     */
                    void SetQuery(const std::vector<std::string>& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>是否需要返回坐标。</p><p>默认值：false</p><p>注：仅对QueryType=4时生效，且坐标位置为 Response.ExtractFields.Polygon。</p>
                     * @return EnableCoord <p>是否需要返回坐标。</p><p>默认值：false</p><p>注：仅对QueryType=4时生效，且坐标位置为 Response.ExtractFields.Polygon。</p>
                     * 
                     */
                    bool GetEnableCoord() const;

                    /**
                     * 设置<p>是否需要返回坐标。</p><p>默认值：false</p><p>注：仅对QueryType=4时生效，且坐标位置为 Response.ExtractFields.Polygon。</p>
                     * @param _enableCoord <p>是否需要返回坐标。</p><p>默认值：false</p><p>注：仅对QueryType=4时生效，且坐标位置为 Response.ExtractFields.Polygon。</p>
                     * 
                     */
                    void SetEnableCoord(const bool& _enableCoord);

                    /**
                     * 判断参数 EnableCoord 是否已赋值
                     * @return EnableCoord 是否已赋值
                     * 
                     */
                    bool EnableCoordHasBeenSet() const;

                private:

                    /**
                     * <p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>图片/PDF的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>需识别的PDF页码。仅支持PDF单页识别，当上传文件为PDF时有效。</p><p>默认值：1</p>
                     */
                    int64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                    /**
                     * <p>模型选择。</p><p>枚举值：</p><ul><li>0： 推理模型。</li><li>1： 识别、推理模型。</li></ul><p>默认值：0</p>
                     */
                    int64_t m_selectModel;
                    bool m_selectModelHasBeenSet;

                    /**
                     * <p>任务类型。</p><p>枚举值：</p><ul><li><p>0： 全文识别。识别且输出全文内容。</p></li><li><p>1： 判断。判断输入图的内容是否为Query中的内容，返回结果为是或否。如Query:&quot;增值税发票&quot;，该任务类型下，将判断输入图是否为增值税发票，返回&quot;是&quot;或&quot;否&quot;。</p></li><li><p>2： 分类。判断输入图属于Query中具体哪个分类项。如Query:[&quot;营业执照&quot;,&quot;合同&quot;,&quot;票据&quot;]，在该任务类型下，将判断输入图是否属于&quot;营业执照&quot;、&quot;合同&quot;、&quot;票据&quot;，返回&quot;营业执照&quot;/&quot;合同&quot;/&quot;票据&quot;或&quot;均不符合&quot;。</p></li><li><p>3： 总结提炼。总结输入图与Query相关的内容。如Query:&quot;工作经历&quot;，在该任务类型下，将输出输入图中和&quot;工作经历&quot;相关的内容，或&quot;无相关内容&quot;。</p></li><li><p>4： 信息提取。按照自定义字段提取Key-Value，且支持多层级提取，详见入参SchemaItems说明。入参可参考下面的接口示例QueryType=4场景</p></li></ul><p>默认值：0</p>
                     */
                    int64_t m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * <p>自定义提取字段的结构，详见SchemaList结构。仅当QueryType=4时生效。</p><p>注：.N表示数组型参数。</p>
                     */
                    std::vector<SchemaList> m_schemaItems;
                    bool m_schemaItemsHasBeenSet;

                    /**
                     * <p>推理任务的提示词。与QueryType搭配使用，具体说明见QueryType描述。1）仅当QueryType=1/2/3时生效，且QueryType=1/3时，长度必须为1；2）QueryType=2，Query长度必须符合2≤x≤5。</p><p>注：.N表示数组型参数。</p>
                     */
                    std::vector<std::string> m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>是否需要返回坐标。</p><p>默认值：false</p><p>注：仅对QueryType=4时生效，且坐标位置为 Response.ExtractFields.Polygon。</p>
                     */
                    bool m_enableCoord;
                    bool m_enableCoordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEAGENTREQUEST_H_
