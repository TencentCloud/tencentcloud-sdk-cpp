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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_VIDEODOWNLOADTASKDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_VIDEODOWNLOADTASKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 录像下载任务数据结构
                */
                class VideoDownloadTaskData : public AbstractModel
                {
                public:
                    VideoDownloadTaskData();
                    ~VideoDownloadTaskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取下载任务ID
                     * @return DownloadTaskId 下载任务ID
                     * 
                     */
                    std::string GetDownloadTaskId() const;

                    /**
                     * 设置下载任务ID
                     * @param _downloadTaskId 下载任务ID
                     * 
                     */
                    void SetDownloadTaskId(const std::string& _downloadTaskId);

                    /**
                     * 判断参数 DownloadTaskId 是否已赋值
                     * @return DownloadTaskId 是否已赋值
                     * 
                     */
                    bool DownloadTaskIdHasBeenSet() const;

                private:

                    /**
                     * 下载任务ID
                     */
                    std::string m_downloadTaskId;
                    bool m_downloadTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_VIDEODOWNLOADTASKDATA_H_
