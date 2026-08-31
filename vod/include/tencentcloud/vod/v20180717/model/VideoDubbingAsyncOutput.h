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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODUBBINGASYNCOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODUBBINGASYNCOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频配音任务输出。
                */
                class VideoDubbingAsyncOutput : public AbstractModel
                {
                public:
                    VideoDubbingAsyncOutput();
                    ~VideoDubbingAsyncOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>配音结果Url</p>
                     * @return ResultUrl <p>配音结果Url</p>
                     * 
                     */
                    std::string GetResultUrl() const;

                    /**
                     * 设置<p>配音结果Url</p>
                     * @param _resultUrl <p>配音结果Url</p>
                     * 
                     */
                    void SetResultUrl(const std::string& _resultUrl);

                    /**
                     * 判断参数 ResultUrl 是否已赋值
                     * @return ResultUrl 是否已赋值
                     * 
                     */
                    bool ResultUrlHasBeenSet() const;

                    /**
                     * 获取<p>配音结果FileId</p>
                     * @return FileId <p>配音结果FileId</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>配音结果FileId</p>
                     * @param _fileId <p>配音结果FileId</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                private:

                    /**
                     * <p>配音结果Url</p>
                     */
                    std::string m_resultUrl;
                    bool m_resultUrlHasBeenSet;

                    /**
                     * <p>配音结果FileId</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODUBBINGASYNCOUTPUT_H_
