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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICESRESPONSE_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/ListDeviceInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * ListDevices返回参数结构体
                */
                class ListDevicesResponse : public AbstractModel
                {
                public:
                    ListDevicesResponse();
                    ~ListDevicesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备列表详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 设备列表详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ListDeviceInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取设备总数
                     * @return TotalCount 设备总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 设备列表详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ListDeviceInfo> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 设备总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICESRESPONSE_H_
