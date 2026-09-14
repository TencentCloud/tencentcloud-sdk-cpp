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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEOBJECTMETADATA_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEOBJECTMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeObjectMetadataEntry.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 直传对象元数据
                */
                class SeeObjectMetadata : public AbstractModel
                {
                public:
                    SeeObjectMetadata();
                    ~SeeObjectMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>对象 Key</p>
                     * @return Key <p>对象 Key</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>对象 Key</p>
                     * @param _key <p>对象 Key</p>
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>对象的 COS URI</p>
                     * @return COSURI <p>对象的 COS URI</p>
                     * 
                     */
                    std::string GetCOSURI() const;

                    /**
                     * 设置<p>对象的 COS URI</p>
                     * @param _cOSURI <p>对象的 COS URI</p>
                     * 
                     */
                    void SetCOSURI(const std::string& _cOSURI);

                    /**
                     * 判断参数 COSURI 是否已赋值
                     * @return COSURI 是否已赋值
                     * 
                     */
                    bool COSURIHasBeenSet() const;

                    /**
                     * 获取<p>对象的 MIME 类型</p>
                     * @return ContentType <p>对象的 MIME 类型</p>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置<p>对象的 MIME 类型</p>
                     * @param _contentType <p>对象的 MIME 类型</p>
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取<p>对象大小，单位：字节</p>
                     * @return Size <p>对象大小，单位：字节</p>
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置<p>对象大小，单位：字节</p>
                     * @param _size <p>对象大小，单位：字节</p>
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取<p>对象的 ETag</p>
                     * @return ETag <p>对象的 ETag</p>
                     * 
                     */
                    std::string GetETag() const;

                    /**
                     * 设置<p>对象的 ETag</p>
                     * @param _eTag <p>对象的 ETag</p>
                     * 
                     */
                    void SetETag(const std::string& _eTag);

                    /**
                     * 判断参数 ETag 是否已赋值
                     * @return ETag 是否已赋值
                     * 
                     */
                    bool ETagHasBeenSet() const;

                    /**
                     * 获取<p>对象最后修改时间，秒级 UNIX 时间戳</p>
                     * @return LastModified <p>对象最后修改时间，秒级 UNIX 时间戳</p>
                     * 
                     */
                    int64_t GetLastModified() const;

                    /**
                     * 设置<p>对象最后修改时间，秒级 UNIX 时间戳</p>
                     * @param _lastModified <p>对象最后修改时间，秒级 UNIX 时间戳</p>
                     * 
                     */
                    void SetLastModified(const int64_t& _lastModified);

                    /**
                     * 判断参数 LastModified 是否已赋值
                     * @return LastModified 是否已赋值
                     * 
                     */
                    bool LastModifiedHasBeenSet() const;

                    /**
                     * 获取<p>对象的自定义元数据列表</p>
                     * @return Metadata <p>对象的自定义元数据列表</p>
                     * 
                     */
                    std::vector<SeeObjectMetadataEntry> GetMetadata() const;

                    /**
                     * 设置<p>对象的自定义元数据列表</p>
                     * @param _metadata <p>对象的自定义元数据列表</p>
                     * 
                     */
                    void SetMetadata(const std::vector<SeeObjectMetadataEntry>& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                private:

                    /**
                     * <p>对象 Key</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>对象的 COS URI</p>
                     */
                    std::string m_cOSURI;
                    bool m_cOSURIHasBeenSet;

                    /**
                     * <p>对象的 MIME 类型</p>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>对象大小，单位：字节</p>
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>对象的 ETag</p>
                     */
                    std::string m_eTag;
                    bool m_eTagHasBeenSet;

                    /**
                     * <p>对象最后修改时间，秒级 UNIX 时间戳</p>
                     */
                    int64_t m_lastModified;
                    bool m_lastModifiedHasBeenSet;

                    /**
                     * <p>对象的自定义元数据列表</p>
                     */
                    std::vector<SeeObjectMetadataEntry> m_metadata;
                    bool m_metadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEOBJECTMETADATA_H_
