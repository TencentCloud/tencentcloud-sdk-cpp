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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_INPUTINFO_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_INPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20201229/model/BucketInfo.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 输入信息详情
                */
                class InputInfo : public AbstractModel
                {
                public:
                    InputInfo();
                    ~InputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>该字段表示文件访问类型，取值为<strong>URL</strong>（资源链接）和<strong>COS</strong> (腾讯云对象存储)。</p>
                     * @return Type <p>该字段表示文件访问类型，取值为<strong>URL</strong>（资源链接）和<strong>COS</strong> (腾讯云对象存储)。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>该字段表示文件访问类型，取值为<strong>URL</strong>（资源链接）和<strong>COS</strong> (腾讯云对象存储)。</p>
                     * @param _type <p>该字段表示文件访问类型，取值为<strong>URL</strong>（资源链接）和<strong>COS</strong> (腾讯云对象存储)。</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>该字段表示文件访问的链接地址，格式为标准URL格式。<br> 备注：当Type为URL时此字段不为空。</p>
                     * @return Url <p>该字段表示文件访问的链接地址，格式为标准URL格式。<br> 备注：当Type为URL时此字段不为空。</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>该字段表示文件访问的链接地址，格式为标准URL格式。<br> 备注：当Type为URL时此字段不为空。</p>
                     * @param _url <p>该字段表示文件访问的链接地址，格式为标准URL格式。<br> 备注：当Type为URL时此字段不为空。</p>
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
                     * 获取<p>该字段表示文件访问的腾讯云存储桶信息。<br> 备注：当Type为COS时此字段不为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BucketInfo <p>该字段表示文件访问的腾讯云存储桶信息。<br> 备注：当Type为COS时此字段不为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BucketInfo GetBucketInfo() const;

                    /**
                     * 设置<p>该字段表示文件访问的腾讯云存储桶信息。<br> 备注：当Type为COS时此字段不为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucketInfo <p>该字段表示文件访问的腾讯云存储桶信息。<br> 备注：当Type为COS时此字段不为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBucketInfo(const BucketInfo& _bucketInfo);

                    /**
                     * 判断参数 BucketInfo 是否已赋值
                     * @return BucketInfo 是否已赋值
                     * 
                     */
                    bool BucketInfoHasBeenSet() const;

                    /**
                     * 获取<p>大模型审核可选输入图片列表</p>
                     * @return ImageUrlList <p>大模型审核可选输入图片列表</p>
                     * 
                     */
                    std::vector<std::string> GetImageUrlList() const;

                    /**
                     * 设置<p>大模型审核可选输入图片列表</p>
                     * @param _imageUrlList <p>大模型审核可选输入图片列表</p>
                     * 
                     */
                    void SetImageUrlList(const std::vector<std::string>& _imageUrlList);

                    /**
                     * 判断参数 ImageUrlList 是否已赋值
                     * @return ImageUrlList 是否已赋值
                     * 
                     */
                    bool ImageUrlListHasBeenSet() const;

                    /**
                     * 获取<p>大模型审核场景下，base64编码的审核要求内容</p>
                     * @return TextContent <p>大模型审核场景下，base64编码的审核要求内容</p>
                     * 
                     */
                    std::string GetTextContent() const;

                    /**
                     * 设置<p>大模型审核场景下，base64编码的审核要求内容</p>
                     * @param _textContent <p>大模型审核场景下，base64编码的审核要求内容</p>
                     * 
                     */
                    void SetTextContent(const std::string& _textContent);

                    /**
                     * 判断参数 TextContent 是否已赋值
                     * @return TextContent 是否已赋值
                     * 
                     */
                    bool TextContentHasBeenSet() const;

                private:

                    /**
                     * <p>该字段表示文件访问类型，取值为<strong>URL</strong>（资源链接）和<strong>COS</strong> (腾讯云对象存储)。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>该字段表示文件访问的链接地址，格式为标准URL格式。<br> 备注：当Type为URL时此字段不为空。</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>该字段表示文件访问的腾讯云存储桶信息。<br> 备注：当Type为COS时此字段不为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BucketInfo m_bucketInfo;
                    bool m_bucketInfoHasBeenSet;

                    /**
                     * <p>大模型审核可选输入图片列表</p>
                     */
                    std::vector<std::string> m_imageUrlList;
                    bool m_imageUrlListHasBeenSet;

                    /**
                     * <p>大模型审核场景下，base64编码的审核要求内容</p>
                     */
                    std::string m_textContent;
                    bool m_textContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_INPUTINFO_H_
