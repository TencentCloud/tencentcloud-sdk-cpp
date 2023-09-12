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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEDOCUMENTREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEDOCUMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * CreateDocument请求参数结构体
                */
                class CreateDocumentRequest : public AbstractModel
                {
                public:
                    CreateDocumentRequest();
                    ~CreateDocumentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取低代码互动课堂的SdkAppId。
                     * @return SdkAppId 低代码互动课堂的SdkAppId。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码互动课堂的SdkAppId。
                     * @param _sdkAppId 低代码互动课堂的SdkAppId。
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取文档地址。
                     * @return DocumentUrl 文档地址。
                     * 
                     */
                    std::string GetDocumentUrl() const;

                    /**
                     * 设置文档地址。
                     * @param _documentUrl 文档地址。
                     * 
                     */
                    void SetDocumentUrl(const std::string& _documentUrl);

                    /**
                     * 判断参数 DocumentUrl 是否已赋值
                     * @return DocumentUrl 是否已赋值
                     * 
                     */
                    bool DocumentUrlHasBeenSet() const;

                    /**
                     * 获取文档名称。
                     * @return DocumentName 文档名称。
                     * 
                     */
                    std::string GetDocumentName() const;

                    /**
                     * 设置文档名称。
                     * @param _documentName 文档名称。
                     * 
                     */
                    void SetDocumentName(const std::string& _documentName);

                    /**
                     * 判断参数 DocumentName 是否已赋值
                     * @return DocumentName 是否已赋值
                     * 
                     */
                    bool DocumentNameHasBeenSet() const;

                    /**
                     * 获取文档所有者的Id
                     * @return Owner 文档所有者的Id
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置文档所有者的Id
                     * @param _owner 文档所有者的Id
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取转码类型，可以有如下取值：
0 无需转码（默认）
1 需要转码的文档，ppt，pptx，pdf，doc，docx
2 需要转码的视频，mp4，3pg，mpeg，avi，flv，wmv，rm，h264等
2 需要转码的音频，mp3，wav，wma，aac，flac，opus
                     * @return TranscodeType 转码类型，可以有如下取值：
0 无需转码（默认）
1 需要转码的文档，ppt，pptx，pdf，doc，docx
2 需要转码的视频，mp4，3pg，mpeg，avi，flv，wmv，rm，h264等
2 需要转码的音频，mp3，wav，wma，aac，flac，opus
                     * 
                     */
                    uint64_t GetTranscodeType() const;

                    /**
                     * 设置转码类型，可以有如下取值：
0 无需转码（默认）
1 需要转码的文档，ppt，pptx，pdf，doc，docx
2 需要转码的视频，mp4，3pg，mpeg，avi，flv，wmv，rm，h264等
2 需要转码的音频，mp3，wav，wma，aac，flac，opus
                     * @param _transcodeType 转码类型，可以有如下取值：
0 无需转码（默认）
1 需要转码的文档，ppt，pptx，pdf，doc，docx
2 需要转码的视频，mp4，3pg，mpeg，avi，flv，wmv，rm，h264等
2 需要转码的音频，mp3，wav，wma，aac，flac，opus
                     * 
                     */
                    void SetTranscodeType(const uint64_t& _transcodeType);

                    /**
                     * 判断参数 TranscodeType 是否已赋值
                     * @return TranscodeType 是否已赋值
                     * 
                     */
                    bool TranscodeTypeHasBeenSet() const;

                    /**
                     * 获取权限，可以有如下取值：
0 私有文档（默认）
1 公共文档
                     * @return Permission 权限，可以有如下取值：
0 私有文档（默认）
1 公共文档
                     * 
                     */
                    uint64_t GetPermission() const;

                    /**
                     * 设置权限，可以有如下取值：
0 私有文档（默认）
1 公共文档
                     * @param _permission 权限，可以有如下取值：
0 私有文档（默认）
1 公共文档
                     * 
                     */
                    void SetPermission(const uint64_t& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取文档后缀名。
                     * @return DocumentType 文档后缀名。
                     * 
                     */
                    std::string GetDocumentType() const;

                    /**
                     * 设置文档后缀名。
                     * @param _documentType 文档后缀名。
                     * 
                     */
                    void SetDocumentType(const std::string& _documentType);

                    /**
                     * 判断参数 DocumentType 是否已赋值
                     * @return DocumentType 是否已赋值
                     * 
                     */
                    bool DocumentTypeHasBeenSet() const;

                    /**
                     * 获取文档大小，单位 字节
                     * @return DocumentSize 文档大小，单位 字节
                     * 
                     */
                    uint64_t GetDocumentSize() const;

                    /**
                     * 设置文档大小，单位 字节
                     * @param _documentSize 文档大小，单位 字节
                     * 
                     */
                    void SetDocumentSize(const uint64_t& _documentSize);

                    /**
                     * 判断参数 DocumentSize 是否已赋值
                     * @return DocumentSize 是否已赋值
                     * 
                     */
                    bool DocumentSizeHasBeenSet() const;

                    /**
                     * 获取是否对不支持元素开启自动处理的功能。默认关闭。
                     * @return AutoHandleUnsupportedElement 是否对不支持元素开启自动处理的功能。默认关闭。
                     * 
                     */
                    bool GetAutoHandleUnsupportedElement() const;

                    /**
                     * 设置是否对不支持元素开启自动处理的功能。默认关闭。
                     * @param _autoHandleUnsupportedElement 是否对不支持元素开启自动处理的功能。默认关闭。
                     * 
                     */
                    void SetAutoHandleUnsupportedElement(const bool& _autoHandleUnsupportedElement);

                    /**
                     * 判断参数 AutoHandleUnsupportedElement 是否已赋值
                     * @return AutoHandleUnsupportedElement 是否已赋值
                     * 
                     */
                    bool AutoHandleUnsupportedElementHasBeenSet() const;

                private:

                    /**
                     * 低代码互动课堂的SdkAppId。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 文档地址。
                     */
                    std::string m_documentUrl;
                    bool m_documentUrlHasBeenSet;

                    /**
                     * 文档名称。
                     */
                    std::string m_documentName;
                    bool m_documentNameHasBeenSet;

                    /**
                     * 文档所有者的Id
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 转码类型，可以有如下取值：
0 无需转码（默认）
1 需要转码的文档，ppt，pptx，pdf，doc，docx
2 需要转码的视频，mp4，3pg，mpeg，avi，flv，wmv，rm，h264等
2 需要转码的音频，mp3，wav，wma，aac，flac，opus
                     */
                    uint64_t m_transcodeType;
                    bool m_transcodeTypeHasBeenSet;

                    /**
                     * 权限，可以有如下取值：
0 私有文档（默认）
1 公共文档
                     */
                    uint64_t m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * 文档后缀名。
                     */
                    std::string m_documentType;
                    bool m_documentTypeHasBeenSet;

                    /**
                     * 文档大小，单位 字节
                     */
                    uint64_t m_documentSize;
                    bool m_documentSizeHasBeenSet;

                    /**
                     * 是否对不支持元素开启自动处理的功能。默认关闭。
                     */
                    bool m_autoHandleUnsupportedElement;
                    bool m_autoHandleUnsupportedElementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEDOCUMENTREQUEST_H_
