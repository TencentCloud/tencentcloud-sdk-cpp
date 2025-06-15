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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEINFORSPDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEINFORSPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/DeviceProcessInfo.h>
#include <tencentcloud/ioa/v20220601/model/DeviceNetworkInfo.h>
#include <tencentcloud/ioa/v20220601/model/DeviceServiceInfo.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 业务响应数据
                */
                class DescribeDeviceInfoRspData : public AbstractModel
                {
                public:
                    DescribeDeviceInfoRspData();
                    ~DescribeDeviceInfoRspData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分页的具体数据对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessList 分页的具体数据对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DeviceProcessInfo> GetProcessList() const;

                    /**
                     * 设置分页的具体数据对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processList 分页的具体数据对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessList(const std::vector<DeviceProcessInfo>& _processList);

                    /**
                     * 判断参数 ProcessList 是否已赋值
                     * @return ProcessList 是否已赋值
                     * 
                     */
                    bool ProcessListHasBeenSet() const;

                    /**
                     * 获取分页的具体数据对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkList 分页的具体数据对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DeviceNetworkInfo> GetNetworkList() const;

                    /**
                     * 设置分页的具体数据对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networkList 分页的具体数据对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetworkList(const std::vector<DeviceNetworkInfo>& _networkList);

                    /**
                     * 判断参数 NetworkList 是否已赋值
                     * @return NetworkList 是否已赋值
                     * 
                     */
                    bool NetworkListHasBeenSet() const;

                    /**
                     * 获取分页的具体数据对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceList 分页的具体数据对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DeviceServiceInfo> GetServiceList() const;

                    /**
                     * 设置分页的具体数据对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceList 分页的具体数据对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceList(const std::vector<DeviceServiceInfo>& _serviceList);

                    /**
                     * 判断参数 ServiceList 是否已赋值
                     * @return ServiceList 是否已赋值
                     * 
                     */
                    bool ServiceListHasBeenSet() const;

                private:

                    /**
                     * 分页的具体数据对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeviceProcessInfo> m_processList;
                    bool m_processListHasBeenSet;

                    /**
                     * 分页的具体数据对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeviceNetworkInfo> m_networkList;
                    bool m_networkListHasBeenSet;

                    /**
                     * 分页的具体数据对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeviceServiceInfo> m_serviceList;
                    bool m_serviceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEINFORSPDATA_H_
