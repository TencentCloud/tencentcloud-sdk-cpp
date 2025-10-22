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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEDAILYPLAYSTATFILELISTRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEDAILYPLAYSTATFILELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/PlayStatFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeDailyPlayStatFileList返回参数结构体
                */
                class DescribeDailyPlayStatFileListResponse : public AbstractModel
                {
                public:
                    DescribeDailyPlayStatFileListResponse();
                    ~DescribeDailyPlayStatFileListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取播放统计文件列表。
                     * @return PlayStatFileSet 播放统计文件列表。
                     * 
                     */
                    std::vector<PlayStatFileInfo> GetPlayStatFileSet() const;

                    /**
                     * 判断参数 PlayStatFileSet 是否已赋值
                     * @return PlayStatFileSet 是否已赋值
                     * 
                     */
                    bool PlayStatFileSetHasBeenSet() const;

                private:

                    /**
                     * 播放统计文件列表。
                     */
                    std::vector<PlayStatFileInfo> m_playStatFileSet;
                    bool m_playStatFileSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEDAILYPLAYSTATFILELISTRESPONSE_H_
