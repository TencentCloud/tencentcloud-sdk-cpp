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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_TRANSCODETASKRESULT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_TRANSCODETASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 转码任务结果
                */
                class TranscodeTaskResult : public AbstractModel
                {
                public:
                    TranscodeTaskResult();
                    ~TranscodeTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转码结果地址
                     * @return ResultUrl 转码结果地址
                     */
                    std::string GetResultUrl() const;

                    /**
                     * 设置转码结果地址
                     * @param ResultUrl 转码结果地址
                     */
                    void SetResultUrl(const std::string& _resultUrl);

                    /**
                     * 判断参数 ResultUrl 是否已赋值
                     * @return ResultUrl 是否已赋值
                     */
                    bool ResultUrlHasBeenSet() const;

                    /**
                     * 获取分辨率
                     * @return Resolution 分辨率
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置分辨率
                     * @param Resolution 分辨率
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取标题（一般为文件名）
                     * @return Title 标题（一般为文件名）
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置标题（一般为文件名）
                     * @param Title 标题（一般为文件名）
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取转码页数
                     * @return Pages 转码页数
                     */
                    int64_t GetPages() const;

                    /**
                     * 设置转码页数
                     * @param Pages 转码页数
                     */
                    void SetPages(const int64_t& _pages);

                    /**
                     * 判断参数 Pages 是否已赋值
                     * @return Pages 是否已赋值
                     */
                    bool PagesHasBeenSet() const;

                    /**
                     * 获取缩略图URL前缀，比如，该URL前缀为http://example.com/g0jb42ps49vtebjshilb/，那么动态PPT第1页的缩略图URL为
http://example.com/g0jb42ps49vtebjshilb/1.jpg，其它页以此类推

如果发起文档转码请求参数中带了ThumbnailResolution参数，并且转码类型为动态转码，该参数不为空，其余情况该参数为空字符串
                     * @return ThumbnailUrl 缩略图URL前缀，比如，该URL前缀为http://example.com/g0jb42ps49vtebjshilb/，那么动态PPT第1页的缩略图URL为
http://example.com/g0jb42ps49vtebjshilb/1.jpg，其它页以此类推

如果发起文档转码请求参数中带了ThumbnailResolution参数，并且转码类型为动态转码，该参数不为空，其余情况该参数为空字符串
                     */
                    std::string GetThumbnailUrl() const;

                    /**
                     * 设置缩略图URL前缀，比如，该URL前缀为http://example.com/g0jb42ps49vtebjshilb/，那么动态PPT第1页的缩略图URL为
http://example.com/g0jb42ps49vtebjshilb/1.jpg，其它页以此类推

如果发起文档转码请求参数中带了ThumbnailResolution参数，并且转码类型为动态转码，该参数不为空，其余情况该参数为空字符串
                     * @param ThumbnailUrl 缩略图URL前缀，比如，该URL前缀为http://example.com/g0jb42ps49vtebjshilb/，那么动态PPT第1页的缩略图URL为
http://example.com/g0jb42ps49vtebjshilb/1.jpg，其它页以此类推

如果发起文档转码请求参数中带了ThumbnailResolution参数，并且转码类型为动态转码，该参数不为空，其余情况该参数为空字符串
                     */
                    void SetThumbnailUrl(const std::string& _thumbnailUrl);

                    /**
                     * 判断参数 ThumbnailUrl 是否已赋值
                     * @return ThumbnailUrl 是否已赋值
                     */
                    bool ThumbnailUrlHasBeenSet() const;

                    /**
                     * 获取动态转码缩略图生成分辨率
                     * @return ThumbnailResolution 动态转码缩略图生成分辨率
                     */
                    std::string GetThumbnailResolution() const;

                    /**
                     * 设置动态转码缩略图生成分辨率
                     * @param ThumbnailResolution 动态转码缩略图生成分辨率
                     */
                    void SetThumbnailResolution(const std::string& _thumbnailResolution);

                    /**
                     * 判断参数 ThumbnailResolution 是否已赋值
                     * @return ThumbnailResolution 是否已赋值
                     */
                    bool ThumbnailResolutionHasBeenSet() const;

                    /**
                     * 获取转码压缩文件下载的URL，如果发起文档转码请求参数中CompressFileType为空或者不是支持的压缩格式，该参数为空字符串
                     * @return CompressFileUrl 转码压缩文件下载的URL，如果发起文档转码请求参数中CompressFileType为空或者不是支持的压缩格式，该参数为空字符串
                     */
                    std::string GetCompressFileUrl() const;

                    /**
                     * 设置转码压缩文件下载的URL，如果发起文档转码请求参数中CompressFileType为空或者不是支持的压缩格式，该参数为空字符串
                     * @param CompressFileUrl 转码压缩文件下载的URL，如果发起文档转码请求参数中CompressFileType为空或者不是支持的压缩格式，该参数为空字符串
                     */
                    void SetCompressFileUrl(const std::string& _compressFileUrl);

                    /**
                     * 判断参数 CompressFileUrl 是否已赋值
                     * @return CompressFileUrl 是否已赋值
                     */
                    bool CompressFileUrlHasBeenSet() const;

                    /**
                     * 获取任务失败错误码
                     * @return ErrorCode 任务失败错误码
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置任务失败错误码
                     * @param ErrorCode 任务失败错误码
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取任务失败错误信息
                     * @return ErrorMsg 任务失败错误信息
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置任务失败错误信息
                     * @param ErrorMsg 任务失败错误信息
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * 转码结果地址
                     */
                    std::string m_resultUrl;
                    bool m_resultUrlHasBeenSet;

                    /**
                     * 分辨率
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 标题（一般为文件名）
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 转码页数
                     */
                    int64_t m_pages;
                    bool m_pagesHasBeenSet;

                    /**
                     * 缩略图URL前缀，比如，该URL前缀为http://example.com/g0jb42ps49vtebjshilb/，那么动态PPT第1页的缩略图URL为
http://example.com/g0jb42ps49vtebjshilb/1.jpg，其它页以此类推

如果发起文档转码请求参数中带了ThumbnailResolution参数，并且转码类型为动态转码，该参数不为空，其余情况该参数为空字符串
                     */
                    std::string m_thumbnailUrl;
                    bool m_thumbnailUrlHasBeenSet;

                    /**
                     * 动态转码缩略图生成分辨率
                     */
                    std::string m_thumbnailResolution;
                    bool m_thumbnailResolutionHasBeenSet;

                    /**
                     * 转码压缩文件下载的URL，如果发起文档转码请求参数中CompressFileType为空或者不是支持的压缩格式，该参数为空字符串
                     */
                    std::string m_compressFileUrl;
                    bool m_compressFileUrlHasBeenSet;

                    /**
                     * 任务失败错误码
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 任务失败错误信息
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_TRANSCODETASKRESULT_H_
