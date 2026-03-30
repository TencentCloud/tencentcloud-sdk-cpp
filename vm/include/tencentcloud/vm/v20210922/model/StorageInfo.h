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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_STORAGEINFO_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_STORAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/BucketInfo.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * 数据存储信息
                */
                class StorageInfo : public AbstractModel
                {
                public:
                    StorageInfo();
                    ~StorageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>类型 可选：<br>URL 资源链接类型<br>COS 腾讯云对象存储类型</p>
                     * @return Type <p>类型 可选：<br>URL 资源链接类型<br>COS 腾讯云对象存储类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>类型 可选：<br>URL 资源链接类型<br>COS 腾讯云对象存储类型</p>
                     * @param _type <p>类型 可选：<br>URL 资源链接类型<br>COS 腾讯云对象存储类型</p>
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
                     * 获取<p>资源链接</p>
                     * @return Url <p>资源链接</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>资源链接</p>
                     * @param _url <p>资源链接</p>
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
                     * 获取<p>腾讯云存储桶信息</p>
                     * @return BucketInfo <p>腾讯云存储桶信息</p>
                     * 
                     */
                    BucketInfo GetBucketInfo() const;

                    /**
                     * 设置<p>腾讯云存储桶信息</p>
                     * @param _bucketInfo <p>腾讯云存储桶信息</p>
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
                     * 获取<p>大模型审核场景下，送审的图片列表</p>
                     * @return ImageUrlList <p>大模型审核场景下，送审的图片列表</p>
                     * 
                     */
                    std::vector<std::string> GetImageUrlList() const;

                    /**
                     * 设置<p>大模型审核场景下，送审的图片列表</p>
                     * @param _imageUrlList <p>大模型审核场景下，送审的图片列表</p>
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
                     * <p>类型 可选：<br>URL 资源链接类型<br>COS 腾讯云对象存储类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>资源链接</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>腾讯云存储桶信息</p>
                     */
                    BucketInfo m_bucketInfo;
                    bool m_bucketInfoHasBeenSet;

                    /**
                     * <p>大模型审核场景下，送审的图片列表</p>
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

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_STORAGEINFO_H_
