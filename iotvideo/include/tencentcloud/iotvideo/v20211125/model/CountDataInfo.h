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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_COUNTDATAINFO_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_COUNTDATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * 云存上报统计信息
                */
                class CountDataInfo : public AbstractModel
                {
                public:
                    CountDataInfo();
                    ~CountDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频上报异常次数
                     * @return VideoExceptionNum 视频上报异常次数
                     * 
                     */
                    uint64_t GetVideoExceptionNum() const;

                    /**
                     * 设置视频上报异常次数
                     * @param _videoExceptionNum 视频上报异常次数
                     * 
                     */
                    void SetVideoExceptionNum(const uint64_t& _videoExceptionNum);

                    /**
                     * 判断参数 VideoExceptionNum 是否已赋值
                     * @return VideoExceptionNum 是否已赋值
                     * 
                     */
                    bool VideoExceptionNumHasBeenSet() const;

                    /**
                     * 获取视频上报成功次数
                     * @return VideoSuccessNum 视频上报成功次数
                     * 
                     */
                    uint64_t GetVideoSuccessNum() const;

                    /**
                     * 设置视频上报成功次数
                     * @param _videoSuccessNum 视频上报成功次数
                     * 
                     */
                    void SetVideoSuccessNum(const uint64_t& _videoSuccessNum);

                    /**
                     * 判断参数 VideoSuccessNum 是否已赋值
                     * @return VideoSuccessNum 是否已赋值
                     * 
                     */
                    bool VideoSuccessNumHasBeenSet() const;

                    /**
                     * 获取视频上报成功率

                     * @return VideoSuccessRate 视频上报成功率

                     * 
                     */
                    std::string GetVideoSuccessRate() const;

                    /**
                     * 设置视频上报成功率

                     * @param _videoSuccessRate 视频上报成功率

                     * 
                     */
                    void SetVideoSuccessRate(const std::string& _videoSuccessRate);

                    /**
                     * 判断参数 VideoSuccessRate 是否已赋值
                     * @return VideoSuccessRate 是否已赋值
                     * 
                     */
                    bool VideoSuccessRateHasBeenSet() const;

                    /**
                     * 获取事件上报异常次数
                     * @return EventExceptionNum 事件上报异常次数
                     * 
                     */
                    uint64_t GetEventExceptionNum() const;

                    /**
                     * 设置事件上报异常次数
                     * @param _eventExceptionNum 事件上报异常次数
                     * 
                     */
                    void SetEventExceptionNum(const uint64_t& _eventExceptionNum);

                    /**
                     * 判断参数 EventExceptionNum 是否已赋值
                     * @return EventExceptionNum 是否已赋值
                     * 
                     */
                    bool EventExceptionNumHasBeenSet() const;

                    /**
                     * 获取事件上报成功次数
                     * @return EventSuccessNum 事件上报成功次数
                     * 
                     */
                    uint64_t GetEventSuccessNum() const;

                    /**
                     * 设置事件上报成功次数
                     * @param _eventSuccessNum 事件上报成功次数
                     * 
                     */
                    void SetEventSuccessNum(const uint64_t& _eventSuccessNum);

                    /**
                     * 判断参数 EventSuccessNum 是否已赋值
                     * @return EventSuccessNum 是否已赋值
                     * 
                     */
                    bool EventSuccessNumHasBeenSet() const;

                    /**
                     * 获取事件上报成功率
                     * @return EventSuccessRate 事件上报成功率
                     * 
                     */
                    std::string GetEventSuccessRate() const;

                    /**
                     * 设置事件上报成功率
                     * @param _eventSuccessRate 事件上报成功率
                     * 
                     */
                    void SetEventSuccessRate(const std::string& _eventSuccessRate);

                    /**
                     * 判断参数 EventSuccessRate 是否已赋值
                     * @return EventSuccessRate 是否已赋值
                     * 
                     */
                    bool EventSuccessRateHasBeenSet() const;

                private:

                    /**
                     * 视频上报异常次数
                     */
                    uint64_t m_videoExceptionNum;
                    bool m_videoExceptionNumHasBeenSet;

                    /**
                     * 视频上报成功次数
                     */
                    uint64_t m_videoSuccessNum;
                    bool m_videoSuccessNumHasBeenSet;

                    /**
                     * 视频上报成功率

                     */
                    std::string m_videoSuccessRate;
                    bool m_videoSuccessRateHasBeenSet;

                    /**
                     * 事件上报异常次数
                     */
                    uint64_t m_eventExceptionNum;
                    bool m_eventExceptionNumHasBeenSet;

                    /**
                     * 事件上报成功次数
                     */
                    uint64_t m_eventSuccessNum;
                    bool m_eventSuccessNumHasBeenSet;

                    /**
                     * 事件上报成功率
                     */
                    std::string m_eventSuccessRate;
                    bool m_eventSuccessRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_COUNTDATAINFO_H_
