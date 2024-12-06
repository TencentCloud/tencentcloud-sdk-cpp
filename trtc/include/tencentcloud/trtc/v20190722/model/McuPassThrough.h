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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUPASSTHROUGH_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUPASSTHROUGH_H_

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
                * 自定义透传SEI
                */
                class McuPassThrough : public AbstractModel
                {
                public:
                    McuPassThrough();
                    ~McuPassThrough() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取透传SEI的payload内容。
                     * @return PayloadContent 透传SEI的payload内容。
                     * 
                     */
                    std::string GetPayloadContent() const;

                    /**
                     * 设置透传SEI的payload内容。
                     * @param _payloadContent 透传SEI的payload内容。
                     * 
                     */
                    void SetPayloadContent(const std::string& _payloadContent);

                    /**
                     * 判断参数 PayloadContent 是否已赋值
                     * @return PayloadContent 是否已赋值
                     * 
                     */
                    bool PayloadContentHasBeenSet() const;

                    /**
                     * 获取SEI消息的PayloadType，取值范围5、100-254（244除外，244为我们内部自定义的时间戳SEI）。
注：部分播放器可能不支持PayloadType为5带PayloadUuid的标准类型，建议优先使用其他PayloadType。
                     * @return PayloadType SEI消息的PayloadType，取值范围5、100-254（244除外，244为我们内部自定义的时间戳SEI）。
注：部分播放器可能不支持PayloadType为5带PayloadUuid的标准类型，建议优先使用其他PayloadType。
                     * 
                     */
                    uint64_t GetPayloadType() const;

                    /**
                     * 设置SEI消息的PayloadType，取值范围5、100-254（244除外，244为我们内部自定义的时间戳SEI）。
注：部分播放器可能不支持PayloadType为5带PayloadUuid的标准类型，建议优先使用其他PayloadType。
                     * @param _payloadType SEI消息的PayloadType，取值范围5、100-254（244除外，244为我们内部自定义的时间戳SEI）。
注：部分播放器可能不支持PayloadType为5带PayloadUuid的标准类型，建议优先使用其他PayloadType。
                     * 
                     */
                    void SetPayloadType(const uint64_t& _payloadType);

                    /**
                     * 判断参数 PayloadType 是否已赋值
                     * @return PayloadType 是否已赋值
                     * 
                     */
                    bool PayloadTypeHasBeenSet() const;

                    /**
                     * 获取PayloadType为5，PayloadUuid必须填写。PayloadType不是5时，不需要填写，填写会被后台忽略。该值必须是32长度的十六进制。
                     * @return PayloadUuid PayloadType为5，PayloadUuid必须填写。PayloadType不是5时，不需要填写，填写会被后台忽略。该值必须是32长度的十六进制。
                     * 
                     */
                    std::string GetPayloadUuid() const;

                    /**
                     * 设置PayloadType为5，PayloadUuid必须填写。PayloadType不是5时，不需要填写，填写会被后台忽略。该值必须是32长度的十六进制。
                     * @param _payloadUuid PayloadType为5，PayloadUuid必须填写。PayloadType不是5时，不需要填写，填写会被后台忽略。该值必须是32长度的十六进制。
                     * 
                     */
                    void SetPayloadUuid(const std::string& _payloadUuid);

                    /**
                     * 判断参数 PayloadUuid 是否已赋值
                     * @return PayloadUuid 是否已赋值
                     * 
                     */
                    bool PayloadUuidHasBeenSet() const;

                    /**
                     * 获取SEI发送间隔，单位毫秒，默认值为1000。
                     * @return Interval SEI发送间隔，单位毫秒，默认值为1000。
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置SEI发送间隔，单位毫秒，默认值为1000。
                     * @param _interval SEI发送间隔，单位毫秒，默认值为1000。
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取取值范围[0,1]，填1：发送关键帧时会确保带SEI；填0：发送关键帧时不确保带SEI。默认值为0。
                     * @return FollowIdr 取值范围[0,1]，填1：发送关键帧时会确保带SEI；填0：发送关键帧时不确保带SEI。默认值为0。
                     * 
                     */
                    uint64_t GetFollowIdr() const;

                    /**
                     * 设置取值范围[0,1]，填1：发送关键帧时会确保带SEI；填0：发送关键帧时不确保带SEI。默认值为0。
                     * @param _followIdr 取值范围[0,1]，填1：发送关键帧时会确保带SEI；填0：发送关键帧时不确保带SEI。默认值为0。
                     * 
                     */
                    void SetFollowIdr(const uint64_t& _followIdr);

                    /**
                     * 判断参数 FollowIdr 是否已赋值
                     * @return FollowIdr 是否已赋值
                     * 
                     */
                    bool FollowIdrHasBeenSet() const;

                private:

                    /**
                     * 透传SEI的payload内容。
                     */
                    std::string m_payloadContent;
                    bool m_payloadContentHasBeenSet;

                    /**
                     * SEI消息的PayloadType，取值范围5、100-254（244除外，244为我们内部自定义的时间戳SEI）。
注：部分播放器可能不支持PayloadType为5带PayloadUuid的标准类型，建议优先使用其他PayloadType。
                     */
                    uint64_t m_payloadType;
                    bool m_payloadTypeHasBeenSet;

                    /**
                     * PayloadType为5，PayloadUuid必须填写。PayloadType不是5时，不需要填写，填写会被后台忽略。该值必须是32长度的十六进制。
                     */
                    std::string m_payloadUuid;
                    bool m_payloadUuidHasBeenSet;

                    /**
                     * SEI发送间隔，单位毫秒，默认值为1000。
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 取值范围[0,1]，填1：发送关键帧时会确保带SEI；填0：发送关键帧时不确保带SEI。默认值为0。
                     */
                    uint64_t m_followIdr;
                    bool m_followIdrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUPASSTHROUGH_H_
