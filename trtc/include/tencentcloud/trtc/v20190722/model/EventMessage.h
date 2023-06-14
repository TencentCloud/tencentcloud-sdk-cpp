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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_EVENTMESSAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_EVENTMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 事件信息，包括，事件时间戳，事件ID,
                */
                class EventMessage : public AbstractModel
                {
                public:
                    EventMessage();
                    ~EventMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频流类型：
0：与视频无关的事件；
2：视频为大画面；
3：视频为小画面；
7：视频为旁路画面；
                     * @return Type 视频流类型：
0：与视频无关的事件；
2：视频为大画面；
3：视频为小画面；
7：视频为旁路画面；
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置视频流类型：
0：与视频无关的事件；
2：视频为大画面；
3：视频为小画面；
7：视频为旁路画面；
                     * @param _type 视频流类型：
0：与视频无关的事件；
2：视频为大画面；
3：视频为小画面；
7：视频为旁路画面；
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取事件上报的时间戳，unix时间（1589891188801ms)
                     * @return Time 事件上报的时间戳，unix时间（1589891188801ms)
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置事件上报的时间戳，unix时间（1589891188801ms)
                     * @param _time 事件上报的时间戳，unix时间（1589891188801ms)
                     * 
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取事件Id：分为sdk的事件和webrtc的事件，详情见：附录/事件 ID 映射表：https://cloud.tencent.com/document/product/647/44916
                     * @return EventId 事件Id：分为sdk的事件和webrtc的事件，详情见：附录/事件 ID 映射表：https://cloud.tencent.com/document/product/647/44916
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置事件Id：分为sdk的事件和webrtc的事件，详情见：附录/事件 ID 映射表：https://cloud.tencent.com/document/product/647/44916
                     * @param _eventId 事件Id：分为sdk的事件和webrtc的事件，详情见：附录/事件 ID 映射表：https://cloud.tencent.com/document/product/647/44916
                     * 
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取事件的第一个参数，如视频分辨率宽
                     * @return ParamOne 事件的第一个参数，如视频分辨率宽
                     * 
                     */
                    int64_t GetParamOne() const;

                    /**
                     * 设置事件的第一个参数，如视频分辨率宽
                     * @param _paramOne 事件的第一个参数，如视频分辨率宽
                     * 
                     */
                    void SetParamOne(const int64_t& _paramOne);

                    /**
                     * 判断参数 ParamOne 是否已赋值
                     * @return ParamOne 是否已赋值
                     * 
                     */
                    bool ParamOneHasBeenSet() const;

                    /**
                     * 获取事件的第二个参数，如视频分辨率高
                     * @return ParamTwo 事件的第二个参数，如视频分辨率高
                     * 
                     */
                    int64_t GetParamTwo() const;

                    /**
                     * 设置事件的第二个参数，如视频分辨率高
                     * @param _paramTwo 事件的第二个参数，如视频分辨率高
                     * 
                     */
                    void SetParamTwo(const int64_t& _paramTwo);

                    /**
                     * 判断参数 ParamTwo 是否已赋值
                     * @return ParamTwo 是否已赋值
                     * 
                     */
                    bool ParamTwoHasBeenSet() const;

                private:

                    /**
                     * 视频流类型：
0：与视频无关的事件；
2：视频为大画面；
3：视频为小画面；
7：视频为旁路画面；
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 事件上报的时间戳，unix时间（1589891188801ms)
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 事件Id：分为sdk的事件和webrtc的事件，详情见：附录/事件 ID 映射表：https://cloud.tencent.com/document/product/647/44916
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 事件的第一个参数，如视频分辨率宽
                     */
                    int64_t m_paramOne;
                    bool m_paramOneHasBeenSet;

                    /**
                     * 事件的第二个参数，如视频分辨率高
                     */
                    int64_t m_paramTwo;
                    bool m_paramTwoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_EVENTMESSAGE_H_
