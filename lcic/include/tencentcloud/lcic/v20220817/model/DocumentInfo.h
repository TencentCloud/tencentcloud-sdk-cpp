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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DOCUMENTINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DOCUMENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 文档信息
                */
                class DocumentInfo : public AbstractModel
                {
                public:
                    DocumentInfo();
                    ~DocumentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文档Id
                     * @return DocumentId 文档Id
                     * 
                     */
                    std::string GetDocumentId() const;

                    /**
                     * 设置文档Id
                     * @param _documentId 文档Id
                     * 
                     */
                    void SetDocumentId(const std::string& _documentId);

                    /**
                     * 判断参数 DocumentId 是否已赋值
                     * @return DocumentId 是否已赋值
                     * 
                     */
                    bool DocumentIdHasBeenSet() const;

                    /**
                     * 获取文档原址url
                     * @return DocumentUrl 文档原址url
                     * 
                     */
                    std::string GetDocumentUrl() const;

                    /**
                     * 设置文档原址url
                     * @param _documentUrl 文档原址url
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
                     * 获取文档名称
                     * @return DocumentName 文档名称
                     * 
                     */
                    std::string GetDocumentName() const;

                    /**
                     * 设置文档名称
                     * @param _documentName 文档名称
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
                     * 获取文档所有者UserId
                     * @return Owner 文档所有者UserId
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置文档所有者UserId
                     * @param _owner 文档所有者UserId
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
                     * 获取应用Id
                     * @return SdkAppId 应用Id
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用Id
                     * @param _sdkAppId 应用Id
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
                     * 获取文档权限，0：私有课件 1：公共课件
                     * @return Permission 文档权限，0：私有课件 1：公共课件
                     * 
                     */
                    uint64_t GetPermission() const;

                    /**
                     * 设置文档权限，0：私有课件 1：公共课件
                     * @param _permission 文档权限，0：私有课件 1：公共课件
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
                     * 获取转码结果，无需转码为空，转码成功为结果url，转码失败为错误码
                     * @return TranscodeResult 转码结果，无需转码为空，转码成功为结果url，转码失败为错误码
                     * 
                     */
                    std::string GetTranscodeResult() const;

                    /**
                     * 设置转码结果，无需转码为空，转码成功为结果url，转码失败为错误码
                     * @param _transcodeResult 转码结果，无需转码为空，转码成功为结果url，转码失败为错误码
                     * 
                     */
                    void SetTranscodeResult(const std::string& _transcodeResult);

                    /**
                     * 判断参数 TranscodeResult 是否已赋值
                     * @return TranscodeResult 是否已赋值
                     * 
                     */
                    bool TranscodeResultHasBeenSet() const;

                    /**
                     * 获取转码类型
                     * @return TranscodeType 转码类型
                     * 
                     */
                    uint64_t GetTranscodeType() const;

                    /**
                     * 设置转码类型
                     * @param _transcodeType 转码类型
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
                     * 获取转码进度， 0 - 100 表示（0% - 100%）
                     * @return TranscodeProgress 转码进度， 0 - 100 表示（0% - 100%）
                     * 
                     */
                    uint64_t GetTranscodeProgress() const;

                    /**
                     * 设置转码进度， 0 - 100 表示（0% - 100%）
                     * @param _transcodeProgress 转码进度， 0 - 100 表示（0% - 100%）
                     * 
                     */
                    void SetTranscodeProgress(const uint64_t& _transcodeProgress);

                    /**
                     * 判断参数 TranscodeProgress 是否已赋值
                     * @return TranscodeProgress 是否已赋值
                     * 
                     */
                    bool TranscodeProgressHasBeenSet() const;

                    /**
                     * 获取转码状态，0为无需转码，1为正在转码，2为转码失败，3为转码成功
                     * @return TranscodeState 转码状态，0为无需转码，1为正在转码，2为转码失败，3为转码成功
                     * 
                     */
                    uint64_t GetTranscodeState() const;

                    /**
                     * 设置转码状态，0为无需转码，1为正在转码，2为转码失败，3为转码成功
                     * @param _transcodeState 转码状态，0为无需转码，1为正在转码，2为转码失败，3为转码成功
                     * 
                     */
                    void SetTranscodeState(const uint64_t& _transcodeState);

                    /**
                     * 判断参数 TranscodeState 是否已赋值
                     * @return TranscodeState 是否已赋值
                     * 
                     */
                    bool TranscodeStateHasBeenSet() const;

                    /**
                     * 获取转码失败后的错误信息
                     * @return TranscodeInfo 转码失败后的错误信息
                     * 
                     */
                    std::string GetTranscodeInfo() const;

                    /**
                     * 设置转码失败后的错误信息
                     * @param _transcodeInfo 转码失败后的错误信息
                     * 
                     */
                    void SetTranscodeInfo(const std::string& _transcodeInfo);

                    /**
                     * 判断参数 TranscodeInfo 是否已赋值
                     * @return TranscodeInfo 是否已赋值
                     * 
                     */
                    bool TranscodeInfoHasBeenSet() const;

                    /**
                     * 获取文档类型
                     * @return DocumentType 文档类型
                     * 
                     */
                    std::string GetDocumentType() const;

                    /**
                     * 设置文档类型
                     * @param _documentType 文档类型
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
                     * 获取文档大小，单位：字节
                     * @return DocumentSize 文档大小，单位：字节
                     * 
                     */
                    uint64_t GetDocumentSize() const;

                    /**
                     * 设置文档大小，单位：字节
                     * @param _documentSize 文档大小，单位：字节
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
                     * 获取更新的UNIX时间戳
                     * @return UpdateTime 更新的UNIX时间戳
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置更新的UNIX时间戳
                     * @param _updateTime 更新的UNIX时间戳
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取课件页数
                     * @return Pages 课件页数
                     * 
                     */
                    uint64_t GetPages() const;

                    /**
                     * 设置课件页数
                     * @param _pages 课件页数
                     * 
                     */
                    void SetPages(const uint64_t& _pages);

                    /**
                     * 判断参数 Pages 是否已赋值
                     * @return Pages 是否已赋值
                     * 
                     */
                    bool PagesHasBeenSet() const;

                    /**
                     * 获取宽，仅在静态转码的课件有效
                     * @return Width 宽，仅在静态转码的课件有效
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置宽，仅在静态转码的课件有效
                     * @param _width 宽，仅在静态转码的课件有效
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取高，仅在静态转码的课件有效
                     * @return Height 高，仅在静态转码的课件有效
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置高，仅在静态转码的课件有效
                     * @param _height 高，仅在静态转码的课件有效
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取封面，仅转码的课件会生成封面
                     * @return Cover 封面，仅转码的课件会生成封面
                     * 
                     */
                    std::string GetCover() const;

                    /**
                     * 设置封面，仅转码的课件会生成封面
                     * @param _cover 封面，仅转码的课件会生成封面
                     * 
                     */
                    void SetCover(const std::string& _cover);

                    /**
                     * 判断参数 Cover 是否已赋值
                     * @return Cover 是否已赋值
                     * 
                     */
                    bool CoverHasBeenSet() const;

                    /**
                     * 获取课件预览地址
                     * @return Preview 课件预览地址
                     * 
                     */
                    std::string GetPreview() const;

                    /**
                     * 设置课件预览地址
                     * @param _preview 课件预览地址
                     * 
                     */
                    void SetPreview(const std::string& _preview);

                    /**
                     * 判断参数 Preview 是否已赋值
                     * @return Preview 是否已赋值
                     * 
                     */
                    bool PreviewHasBeenSet() const;

                    /**
                     * 获取文档的分辨率
                     * @return Resolution 文档的分辨率
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置文档的分辨率
                     * @param _resolution 文档的分辨率
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取转码后文档的最小分辨率，和创建文档时传入的参数一致。
                     * @return MinScaleResolution 转码后文档的最小分辨率，和创建文档时传入的参数一致。
                     * 
                     */
                    std::string GetMinScaleResolution() const;

                    /**
                     * 设置转码后文档的最小分辨率，和创建文档时传入的参数一致。
                     * @param _minScaleResolution 转码后文档的最小分辨率，和创建文档时传入的参数一致。
                     * 
                     */
                    void SetMinScaleResolution(const std::string& _minScaleResolution);

                    /**
                     * 判断参数 MinScaleResolution 是否已赋值
                     * @return MinScaleResolution 是否已赋值
                     * 
                     */
                    bool MinScaleResolutionHasBeenSet() const;

                private:

                    /**
                     * 文档Id
                     */
                    std::string m_documentId;
                    bool m_documentIdHasBeenSet;

                    /**
                     * 文档原址url
                     */
                    std::string m_documentUrl;
                    bool m_documentUrlHasBeenSet;

                    /**
                     * 文档名称
                     */
                    std::string m_documentName;
                    bool m_documentNameHasBeenSet;

                    /**
                     * 文档所有者UserId
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 应用Id
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 文档权限，0：私有课件 1：公共课件
                     */
                    uint64_t m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * 转码结果，无需转码为空，转码成功为结果url，转码失败为错误码
                     */
                    std::string m_transcodeResult;
                    bool m_transcodeResultHasBeenSet;

                    /**
                     * 转码类型
                     */
                    uint64_t m_transcodeType;
                    bool m_transcodeTypeHasBeenSet;

                    /**
                     * 转码进度， 0 - 100 表示（0% - 100%）
                     */
                    uint64_t m_transcodeProgress;
                    bool m_transcodeProgressHasBeenSet;

                    /**
                     * 转码状态，0为无需转码，1为正在转码，2为转码失败，3为转码成功
                     */
                    uint64_t m_transcodeState;
                    bool m_transcodeStateHasBeenSet;

                    /**
                     * 转码失败后的错误信息
                     */
                    std::string m_transcodeInfo;
                    bool m_transcodeInfoHasBeenSet;

                    /**
                     * 文档类型
                     */
                    std::string m_documentType;
                    bool m_documentTypeHasBeenSet;

                    /**
                     * 文档大小，单位：字节
                     */
                    uint64_t m_documentSize;
                    bool m_documentSizeHasBeenSet;

                    /**
                     * 更新的UNIX时间戳
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 课件页数
                     */
                    uint64_t m_pages;
                    bool m_pagesHasBeenSet;

                    /**
                     * 宽，仅在静态转码的课件有效
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 高，仅在静态转码的课件有效
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 封面，仅转码的课件会生成封面
                     */
                    std::string m_cover;
                    bool m_coverHasBeenSet;

                    /**
                     * 课件预览地址
                     */
                    std::string m_preview;
                    bool m_previewHasBeenSet;

                    /**
                     * 文档的分辨率
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 转码后文档的最小分辨率，和创建文档时传入的参数一致。
                     */
                    std::string m_minScaleResolution;
                    bool m_minScaleResolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DOCUMENTINFO_H_
