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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBERECORDINFORESPONSE_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBERECORDINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/RecordInfo.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeRecordInfo返回参数结构体
                */
                class DescribeRecordInfoResponse : public AbstractModel
                {
                public:
                    DescribeRecordInfoResponse();
                    ~DescribeRecordInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取录制信息。
                     * @return RecordInfo 录制信息。
                     * 
                     */
                    std::vector<RecordInfo> GetRecordInfo() const;

                    /**
                     * 判断参数 RecordInfo 是否已赋值
                     * @return RecordInfo 是否已赋值
                     * 
                     */
                    bool RecordInfoHasBeenSet() const;

                    /**
                     * 获取录制类型：1代表单流 2代表混流 3代表单流和混流。
                     * @return RecordMode 录制类型：1代表单流 2代表混流 3代表单流和混流。
                     * 
                     */
                    uint64_t GetRecordMode() const;

                    /**
                     * 判断参数 RecordMode 是否已赋值
                     * @return RecordMode 是否已赋值
                     * 
                     */
                    bool RecordModeHasBeenSet() const;

                    /**
                     * 获取房间ID。
                     * @return RoomId 房间ID。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                private:

                    /**
                     * 录制信息。
                     */
                    std::vector<RecordInfo> m_recordInfo;
                    bool m_recordInfoHasBeenSet;

                    /**
                     * 录制类型：1代表单流 2代表混流 3代表单流和混流。
                     */
                    uint64_t m_recordMode;
                    bool m_recordModeHasBeenSet;

                    /**
                     * 房间ID。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBERECORDINFORESPONSE_H_
