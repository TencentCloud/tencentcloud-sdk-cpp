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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_VIDEOAPPEARINFO_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_VIDEOAPPEARINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 关键词在视觉结果中的定位信息
                */
                class VideoAppearInfo : public AbstractModel
                {
                public:
                    VideoAppearInfo();
                    ~VideoAppearInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视觉信息起始时间戳，从0开始
                     * @return StartTimeStamp 视觉信息起始时间戳，从0开始
                     * 
                     */
                    double GetStartTimeStamp() const;

                    /**
                     * 设置视觉信息起始时间戳，从0开始
                     * @param _startTimeStamp 视觉信息起始时间戳，从0开始
                     * 
                     */
                    void SetStartTimeStamp(const double& _startTimeStamp);

                    /**
                     * 判断参数 StartTimeStamp 是否已赋值
                     * @return StartTimeStamp 是否已赋值
                     * 
                     */
                    bool StartTimeStampHasBeenSet() const;

                    /**
                     * 获取视觉信息终止时间戳，从0开始
关键词在视觉信息中的区间为[StartTimeStamp, EndTimeStamp)
                     * @return EndTimeStamp 视觉信息终止时间戳，从0开始
关键词在视觉信息中的区间为[StartTimeStamp, EndTimeStamp)
                     * 
                     */
                    double GetEndTimeStamp() const;

                    /**
                     * 设置视觉信息终止时间戳，从0开始
关键词在视觉信息中的区间为[StartTimeStamp, EndTimeStamp)
                     * @param _endTimeStamp 视觉信息终止时间戳，从0开始
关键词在视觉信息中的区间为[StartTimeStamp, EndTimeStamp)
                     * 
                     */
                    void SetEndTimeStamp(const double& _endTimeStamp);

                    /**
                     * 判断参数 EndTimeStamp 是否已赋值
                     * @return EndTimeStamp 是否已赋值
                     * 
                     */
                    bool EndTimeStampHasBeenSet() const;

                    /**
                     * 获取关键词在视觉信息中的封面图片
                     * @return ImageURL 关键词在视觉信息中的封面图片
                     * 
                     */
                    std::string GetImageURL() const;

                    /**
                     * 设置关键词在视觉信息中的封面图片
                     * @param _imageURL 关键词在视觉信息中的封面图片
                     * 
                     */
                    void SetImageURL(const std::string& _imageURL);

                    /**
                     * 判断参数 ImageURL 是否已赋值
                     * @return ImageURL 是否已赋值
                     * 
                     */
                    bool ImageURLHasBeenSet() const;

                private:

                    /**
                     * 视觉信息起始时间戳，从0开始
                     */
                    double m_startTimeStamp;
                    bool m_startTimeStampHasBeenSet;

                    /**
                     * 视觉信息终止时间戳，从0开始
关键词在视觉信息中的区间为[StartTimeStamp, EndTimeStamp)
                     */
                    double m_endTimeStamp;
                    bool m_endTimeStampHasBeenSet;

                    /**
                     * 关键词在视觉信息中的封面图片
                     */
                    std::string m_imageURL;
                    bool m_imageURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_VIDEOAPPEARINFO_H_
