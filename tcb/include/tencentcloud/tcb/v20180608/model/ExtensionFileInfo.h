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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_EXTENSIONFILEINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_EXTENSIONFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 扩展文件信息
                */
                class ExtensionFileInfo : public AbstractModel
                {
                public:
                    ExtensionFileInfo();
                    ~ExtensionFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板里使用的地址
                     * @return CodeUri 模板里使用的地址
                     * 
                     */
                    std::string GetCodeUri() const;

                    /**
                     * 设置模板里使用的地址
                     * @param _codeUri 模板里使用的地址
                     * 
                     */
                    void SetCodeUri(const std::string& _codeUri);

                    /**
                     * 判断参数 CodeUri 是否已赋值
                     * @return CodeUri 是否已赋值
                     * 
                     */
                    bool CodeUriHasBeenSet() const;

                    /**
                     * 获取上传文件的临时地址，含签名
                     * @return UploadUrl 上传文件的临时地址，含签名
                     * 
                     */
                    std::string GetUploadUrl() const;

                    /**
                     * 设置上传文件的临时地址，含签名
                     * @param _uploadUrl 上传文件的临时地址，含签名
                     * 
                     */
                    void SetUploadUrl(const std::string& _uploadUrl);

                    /**
                     * 判断参数 UploadUrl 是否已赋值
                     * @return UploadUrl 是否已赋值
                     * 
                     */
                    bool UploadUrlHasBeenSet() const;

                    /**
                     * 获取自定义密钥。如果为空，则表示不需要加密。
参考cos预签名url上传https://cloud.tencent.com/document/product/436/36121
上传的时候要按照 SSE-C 的方式设置header：https://cloud.tencent.com/document/product/436/7728
                     * @return CustomKey 自定义密钥。如果为空，则表示不需要加密。
参考cos预签名url上传https://cloud.tencent.com/document/product/436/36121
上传的时候要按照 SSE-C 的方式设置header：https://cloud.tencent.com/document/product/436/7728
                     * 
                     */
                    std::string GetCustomKey() const;

                    /**
                     * 设置自定义密钥。如果为空，则表示不需要加密。
参考cos预签名url上传https://cloud.tencent.com/document/product/436/36121
上传的时候要按照 SSE-C 的方式设置header：https://cloud.tencent.com/document/product/436/7728
                     * @param _customKey 自定义密钥。如果为空，则表示不需要加密。
参考cos预签名url上传https://cloud.tencent.com/document/product/436/36121
上传的时候要按照 SSE-C 的方式设置header：https://cloud.tencent.com/document/product/436/7728
                     * 
                     */
                    void SetCustomKey(const std::string& _customKey);

                    /**
                     * 判断参数 CustomKey 是否已赋值
                     * @return CustomKey 是否已赋值
                     * 
                     */
                    bool CustomKeyHasBeenSet() const;

                    /**
                     * 获取文件大小限制，单位M，客户端上传前需要主动检查文件大小，超过限制的文件会被删除。
                     * @return MaxSize 文件大小限制，单位M，客户端上传前需要主动检查文件大小，超过限制的文件会被删除。
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置文件大小限制，单位M，客户端上传前需要主动检查文件大小，超过限制的文件会被删除。
                     * @param _maxSize 文件大小限制，单位M，客户端上传前需要主动检查文件大小，超过限制的文件会被删除。
                     * 
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                private:

                    /**
                     * 模板里使用的地址
                     */
                    std::string m_codeUri;
                    bool m_codeUriHasBeenSet;

                    /**
                     * 上传文件的临时地址，含签名
                     */
                    std::string m_uploadUrl;
                    bool m_uploadUrlHasBeenSet;

                    /**
                     * 自定义密钥。如果为空，则表示不需要加密。
参考cos预签名url上传https://cloud.tencent.com/document/product/436/36121
上传的时候要按照 SSE-C 的方式设置header：https://cloud.tencent.com/document/product/436/7728
                     */
                    std::string m_customKey;
                    bool m_customKeyHasBeenSet;

                    /**
                     * 文件大小限制，单位M，客户端上传前需要主动检查文件大小，超过限制的文件会被删除。
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_EXTENSIONFILEINFO_H_
