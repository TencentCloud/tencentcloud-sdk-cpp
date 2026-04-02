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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FACERECOGNITIONINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FACERECOGNITIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/FaceRecognitionTask.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 人脸识别的媒体信息
                */
                class FaceRecognitionInfo : public AbstractModel
                {
                public:
                    FaceRecognitionInfo();
                    ~FaceRecognitionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>人脸识别任务列表</p>
                     * @return FaceRecognitionTasks <p>人脸识别任务列表</p>
                     * 
                     */
                    std::vector<FaceRecognitionTask> GetFaceRecognitionTasks() const;

                    /**
                     * 设置<p>人脸识别任务列表</p>
                     * @param _faceRecognitionTasks <p>人脸识别任务列表</p>
                     * 
                     */
                    void SetFaceRecognitionTasks(const std::vector<FaceRecognitionTask>& _faceRecognitionTasks);

                    /**
                     * 判断参数 FaceRecognitionTasks 是否已赋值
                     * @return FaceRecognitionTasks 是否已赋值
                     * 
                     */
                    bool FaceRecognitionTasksHasBeenSet() const;

                private:

                    /**
                     * <p>人脸识别任务列表</p>
                     */
                    std::vector<FaceRecognitionTask> m_faceRecognitionTasks;
                    bool m_faceRecognitionTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FACERECOGNITIONINFO_H_
