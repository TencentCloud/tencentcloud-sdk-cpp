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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_VIDEOSEGMENT_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_VIDEOSEGMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/VideoSegmentResult.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * 单个视频切片审核结果
                */
                class VideoSegment : public AbstractModel
                {
                public:
                    VideoSegment();
                    ~VideoSegment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>视频切片审核结果</p>
                     * @return Result <p>视频切片审核结果</p>
                     * 
                     */
                    VideoSegmentResult GetResult() const;

                    /**
                     * 设置<p>视频切片审核结果</p>
                     * @param _result <p>视频切片审核结果</p>
                     * 
                     */
                    void SetResult(const VideoSegmentResult& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取<p>视频切片的起始时间偏移</p>
                     * @return OffsetTime <p>视频切片的起始时间偏移</p>
                     * 
                     */
                    std::string GetOffsetTime() const;

                    /**
                     * 设置<p>视频切片的起始时间偏移</p>
                     * @param _offsetTime <p>视频切片的起始时间偏移</p>
                     * 
                     */
                    void SetOffsetTime(const std::string& _offsetTime);

                    /**
                     * 判断参数 OffsetTime 是否已赋值
                     * @return OffsetTime 是否已赋值
                     * 
                     */
                    bool OffsetTimeHasBeenSet() const;

                    /**
                     * 获取<p>切片保存时间</p>
                     * @return CreatedAt <p>切片保存时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>切片保存时间</p>
                     * @param _createdAt <p>切片保存时间</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                private:

                    /**
                     * <p>视频切片审核结果</p>
                     */
                    VideoSegmentResult m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>视频切片的起始时间偏移</p>
                     */
                    std::string m_offsetTime;
                    bool m_offsetTimeHasBeenSet;

                    /**
                     * <p>切片保存时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_VIDEOSEGMENT_H_
