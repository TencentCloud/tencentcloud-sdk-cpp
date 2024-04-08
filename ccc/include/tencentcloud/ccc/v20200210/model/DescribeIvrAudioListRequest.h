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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEIVRAUDIOLISTREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEIVRAUDIOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeIvrAudioList请求参数结构体
                */
                class DescribeIvrAudioListRequest : public AbstractModel
                {
                public:
                    DescribeIvrAudioListRequest();
                    ~DescribeIvrAudioListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取分页尺寸，上限 50
                     * @return PageSize 分页尺寸，上限 50
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页尺寸，上限 50
                     * @param _pageSize 分页尺寸，上限 50
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取分页页码，从 0 开始
                     * @return PageNumber 分页页码，从 0 开始
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置分页页码，从 0 开始
                     * @param _pageNumber 分页页码，从 0 开始
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取文件别名
                     * @return CustomFileName 文件别名
                     * 
                     */
                    std::vector<std::string> GetCustomFileName() const;

                    /**
                     * 设置文件别名
                     * @param _customFileName 文件别名
                     * 
                     */
                    void SetCustomFileName(const std::vector<std::string>& _customFileName);

                    /**
                     * 判断参数 CustomFileName 是否已赋值
                     * @return CustomFileName 是否已赋值
                     * 
                     */
                    bool CustomFileNameHasBeenSet() const;

                    /**
                     * 获取文件名
                     * @return AudioFileName 文件名
                     * 
                     */
                    std::vector<std::string> GetAudioFileName() const;

                    /**
                     * 设置文件名
                     * @param _audioFileName 文件名
                     * 
                     */
                    void SetAudioFileName(const std::vector<std::string>& _audioFileName);

                    /**
                     * 判断参数 AudioFileName 是否已赋值
                     * @return AudioFileName 是否已赋值
                     * 
                     */
                    bool AudioFileNameHasBeenSet() const;

                    /**
                     * 获取文件ID
                     * @return FileId 文件ID
                     * 
                     */
                    std::vector<uint64_t> GetFileId() const;

                    /**
                     * 设置文件ID
                     * @param _fileId 文件ID
                     * 
                     */
                    void SetFileId(const std::vector<uint64_t>& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 分页尺寸，上限 50
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页页码，从 0 开始
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 文件别名
                     */
                    std::vector<std::string> m_customFileName;
                    bool m_customFileNameHasBeenSet;

                    /**
                     * 文件名
                     */
                    std::vector<std::string> m_audioFileName;
                    bool m_audioFileNameHasBeenSet;

                    /**
                     * 文件ID
                     */
                    std::vector<uint64_t> m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEIVRAUDIOLISTREQUEST_H_
