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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LIVERECORDINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LIVERECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 直播录制信息
                */
                class LiveRecordInfo : public AbstractModel
                {
                public:
                    LiveRecordInfo();
                    ~LiveRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取直播录制流 ID。
                     * @return StreamId 直播录制流 ID。
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置直播录制流 ID。
                     * @param _streamId 直播录制流 ID。
                     * 
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     * 
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取录制起始时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return RecordStartTime 录制起始时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetRecordStartTime() const;

                    /**
                     * 设置录制起始时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _recordStartTime 录制起始时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetRecordStartTime(const std::string& _recordStartTime);

                    /**
                     * 判断参数 RecordStartTime 是否已赋值
                     * @return RecordStartTime 是否已赋值
                     * 
                     */
                    bool RecordStartTimeHasBeenSet() const;

                    /**
                     * 获取录制结束时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return RecordEndTime 录制结束时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetRecordEndTime() const;

                    /**
                     * 设置录制结束时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _recordEndTime 录制结束时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetRecordEndTime(const std::string& _recordEndTime);

                    /**
                     * 判断参数 RecordEndTime 是否已赋值
                     * @return RecordEndTime 是否已赋值
                     * 
                     */
                    bool RecordEndTimeHasBeenSet() const;

                private:

                    /**
                     * 直播录制流 ID。
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * 录制起始时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_recordStartTime;
                    bool m_recordStartTimeHasBeenSet;

                    /**
                     * 录制结束时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_recordEndTime;
                    bool m_recordEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LIVERECORDINFO_H_
