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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_MODIFYDEVICEACTIONRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_MODIFYDEVICEACTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * ModifyDeviceAction返回参数结构体
                */
                class ModifyDeviceActionResponse : public AbstractModel
                {
                public:
                    ModifyDeviceActionResponse();
                    ~ModifyDeviceActionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备端的响应结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 设备端的响应结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取任务ID
若设备端未能及时响应时，会返回此字段，用户可以通过DescribeModelDataRet获取设备的最终响应结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务ID
若设备端未能及时响应时，会返回此字段，用户可以通过DescribeModelDataRet获取设备的最终响应结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 设备端的响应结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 任务ID
若设备端未能及时响应时，会返回此字段，用户可以通过DescribeModelDataRet获取设备的最终响应结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_MODIFYDEVICEACTIONRESPONSE_H_
