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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYVIRTUALDEVICEGROUPSREQITEM_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYVIRTUALDEVICEGROUPSREQITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 操作的设备列表
                */
                class ModifyVirtualDeviceGroupsReqItem : public AbstractModel
                {
                public:
                    ModifyVirtualDeviceGroupsReqItem();
                    ~ModifyVirtualDeviceGroupsReqItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备mid
                     * @return DeviceMid 设备mid
                     * 
                     */
                    std::string GetDeviceMid() const;

                    /**
                     * 设置设备mid
                     * @param _deviceMid 设备mid
                     * 
                     */
                    void SetDeviceMid(const std::string& _deviceMid);

                    /**
                     * 判断参数 DeviceMid 是否已赋值
                     * @return DeviceMid 是否已赋值
                     * 
                     */
                    bool DeviceMidHasBeenSet() const;

                    /**
                     * 获取操作标识  0:删除设备 1:添加设备
                     * @return Operation 操作标识  0:删除设备 1:添加设备
                     * 
                     */
                    int64_t GetOperation() const;

                    /**
                     * 设置操作标识  0:删除设备 1:添加设备
                     * @param _operation 操作标识  0:删除设备 1:添加设备
                     * 
                     */
                    void SetOperation(const int64_t& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                private:

                    /**
                     * 设备mid
                     */
                    std::string m_deviceMid;
                    bool m_deviceMidHasBeenSet;

                    /**
                     * 操作标识  0:删除设备 1:添加设备
                     */
                    int64_t m_operation;
                    bool m_operationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYVIRTUALDEVICEGROUPSREQITEM_H_
