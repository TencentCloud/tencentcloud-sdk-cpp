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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUTVOLUME_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUTVOLUME_H_

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
                * 音量布局SEI参数，可以自定义AppData和PayloadType类型。
该参数内容可以为空，表示携带默认的音量布局SEI。
                */
                class McuLayoutVolume : public AbstractModel
                {
                public:
                    McuLayoutVolume();
                    ~McuLayoutVolume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AppData的内容，会被写入自定义SEI中的app_data字段，长度需小于4096。
                     * @return AppData AppData的内容，会被写入自定义SEI中的app_data字段，长度需小于4096。
                     * 
                     */
                    std::string GetAppData() const;

                    /**
                     * 设置AppData的内容，会被写入自定义SEI中的app_data字段，长度需小于4096。
                     * @param _appData AppData的内容，会被写入自定义SEI中的app_data字段，长度需小于4096。
                     * 
                     */
                    void SetAppData(const std::string& _appData);

                    /**
                     * 判断参数 AppData 是否已赋值
                     * @return AppData 是否已赋值
                     * 
                     */
                    bool AppDataHasBeenSet() const;

                    /**
                     * 获取SEI消息的payload_type，默认值100，取值范围100-254（244除外，244为我们内部自定义的时间戳SEI）
                     * @return PayloadType SEI消息的payload_type，默认值100，取值范围100-254（244除外，244为我们内部自定义的时间戳SEI）
                     * 
                     */
                    uint64_t GetPayloadType() const;

                    /**
                     * 设置SEI消息的payload_type，默认值100，取值范围100-254（244除外，244为我们内部自定义的时间戳SEI）
                     * @param _payloadType SEI消息的payload_type，默认值100，取值范围100-254（244除外，244为我们内部自定义的时间戳SEI）
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
                     * AppData的内容，会被写入自定义SEI中的app_data字段，长度需小于4096。
                     */
                    std::string m_appData;
                    bool m_appDataHasBeenSet;

                    /**
                     * SEI消息的payload_type，默认值100，取值范围100-254（244除外，244为我们内部自定义的时间戳SEI）
                     */
                    uint64_t m_payloadType;
                    bool m_payloadTypeHasBeenSet;

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

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUTVOLUME_H_
