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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_RECORDINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_RECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 录像信息
                */
                class RecordInfo : public AbstractModel
                {
                public:
                    RecordInfo();
                    ~RecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取本录像片段开始时间（s）
                     * @return StartTime 本录像片段开始时间（s）
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置本录像片段开始时间（s）
                     * @param _startTime 本录像片段开始时间（s）
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取本录像片段结束时间（s）
                     * @return EndTime 本录像片段结束时间（s）
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置本录像片段结束时间（s）
                     * @param _endTime 本录像片段结束时间（s）
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取录像片段文件url
                     * @return VideoURL 录像片段文件url
                     * 
                     */
                    std::string GetVideoURL() const;

                    /**
                     * 设置录像片段文件url
                     * @param _videoURL 录像片段文件url
                     * 
                     */
                    void SetVideoURL(const std::string& _videoURL);

                    /**
                     * 判断参数 VideoURL 是否已赋值
                     * @return VideoURL 是否已赋值
                     * 
                     */
                    bool VideoURLHasBeenSet() const;

                private:

                    /**
                     * 本录像片段开始时间（s）
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 本录像片段结束时间（s）
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 录像片段文件url
                     */
                    std::string m_videoURL;
                    bool m_videoURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_RECORDINFO_H_
