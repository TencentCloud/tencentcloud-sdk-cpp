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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImageContentReviewInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ProcessImage请求参数结构体
                */
                class ProcessImageRequest : public AbstractModel
                {
                public:
                    ProcessImageRequest();
                    ~ProcessImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体文件 ID，即该文件在云点播上的全局唯一标识符。本接口要求媒体文件必须是图片格式。
                     * @return FileId 媒体文件 ID，即该文件在云点播上的全局唯一标识符。本接口要求媒体文件必须是图片格式。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件 ID，即该文件在云点播上的全局唯一标识符。本接口要求媒体文件必须是图片格式。
                     * @param _fileId 媒体文件 ID，即该文件在云点播上的全局唯一标识符。本接口要求媒体文件必须是图片格式。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取操作类型。现在仅支持填 ContentReview，表示内容智能识别。
                     * @return Operation 操作类型。现在仅支持填 ContentReview，表示内容智能识别。
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作类型。现在仅支持填 ContentReview，表示内容智能识别。
                     * @param _operation 操作类型。现在仅支持填 ContentReview，表示内容智能识别。
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取图片内容智能识别参数，当 Operation 为 ContentReview 时该字段有效。
                     * @return ContentReviewInput 图片内容智能识别参数，当 Operation 为 ContentReview 时该字段有效。
                     * 
                     */
                    ImageContentReviewInput GetContentReviewInput() const;

                    /**
                     * 设置图片内容智能识别参数，当 Operation 为 ContentReview 时该字段有效。
                     * @param _contentReviewInput 图片内容智能识别参数，当 Operation 为 ContentReview 时该字段有效。
                     * 
                     */
                    void SetContentReviewInput(const ImageContentReviewInput& _contentReviewInput);

                    /**
                     * 判断参数 ContentReviewInput 是否已赋值
                     * @return ContentReviewInput 是否已赋值
                     * 
                     */
                    bool ContentReviewInputHasBeenSet() const;

                private:

                    /**
                     * 媒体文件 ID，即该文件在云点播上的全局唯一标识符。本接口要求媒体文件必须是图片格式。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 操作类型。现在仅支持填 ContentReview，表示内容智能识别。
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 图片内容智能识别参数，当 Operation 为 ContentReview 时该字段有效。
                     */
                    ImageContentReviewInput m_contentReviewInput;
                    bool m_contentReviewInputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEREQUEST_H_
