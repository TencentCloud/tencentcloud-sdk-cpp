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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHDELETERECORDRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHDELETERECORDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * BatchDeleteRecord返回参数结构体
                */
                class BatchDeleteRecordResponse : public AbstractModel
                {
                public:
                    BatchDeleteRecordResponse();
                    ~BatchDeleteRecordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取本次操作删除成功的房间ID列表。如果入参列表中某个房间ID的录制文件已经删除，则出参列表中无对应的房间ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoomIds 本次操作删除成功的房间ID列表。如果入参列表中某个房间ID的录制文件已经删除，则出参列表中无对应的房间ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetRoomIds() const;

                    /**
                     * 判断参数 RoomIds 是否已赋值
                     * @return RoomIds 是否已赋值
                     * 
                     */
                    bool RoomIdsHasBeenSet() const;

                private:

                    /**
                     * 本次操作删除成功的房间ID列表。如果入参列表中某个房间ID的录制文件已经删除，则出参列表中无对应的房间ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_roomIds;
                    bool m_roomIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHDELETERECORDRESPONSE_H_
