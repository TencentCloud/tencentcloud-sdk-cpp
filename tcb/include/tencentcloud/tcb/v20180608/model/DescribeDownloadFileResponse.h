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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEDOWNLOADFILERESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEDOWNLOADFILERESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDownloadFile返回参数结构体
                */
                class DescribeDownloadFileResponse : public AbstractModel
                {
                public:
                    DescribeDownloadFileResponse();
                    ~DescribeDownloadFileResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件路径，该字段已废弃
                     * @return FilePath 文件路径，该字段已废弃
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取加密key，用于计算下载加密文件的header。参考SSE-C https://cloud.tencent.com/document/product/436/7728#sse-c
                     * @return CustomKey 加密key，用于计算下载加密文件的header。参考SSE-C https://cloud.tencent.com/document/product/436/7728#sse-c
                     * 
                     */
                    std::string GetCustomKey() const;

                    /**
                     * 判断参数 CustomKey 是否已赋值
                     * @return CustomKey 是否已赋值
                     * 
                     */
                    bool CustomKeyHasBeenSet() const;

                    /**
                     * 获取下载链接
                     * @return DownloadUrl 下载链接
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                private:

                    /**
                     * 文件路径，该字段已废弃
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 加密key，用于计算下载加密文件的header。参考SSE-C https://cloud.tencent.com/document/product/436/7728#sse-c
                     */
                    std::string m_customKey;
                    bool m_customKeyHasBeenSet;

                    /**
                     * 下载链接
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEDOWNLOADFILERESPONSE_H_
