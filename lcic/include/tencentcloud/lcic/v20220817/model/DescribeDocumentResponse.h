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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEDOCUMENTRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEDOCUMENTRESPONSE_H_

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
                * DescribeDocument返回参数结构体
                */
                class DescribeDocumentResponse : public AbstractModel
                {
                public:
                    DescribeDocumentResponse();
                    ~DescribeDocumentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文档Id
                     * @return DocumentId 文档Id
                     * 
                     */
                    std::string GetDocumentId() const;

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
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取文档权限
                     * @return Permission 文档权限
                     * 
                     */
                    uint64_t GetPermission() const;

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
                     * 判断参数 Pages 是否已赋值
                     * @return Pages 是否已赋值
                     * 
                     */
                    bool PagesHasBeenSet() const;

                    /**
                     * 获取课件预览地址
                     * @return Preview 课件预览地址
                     * 
                     */
                    std::string GetPreview() const;

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
                     * 文档权限
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

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEDOCUMENTRESPONSE_H_
