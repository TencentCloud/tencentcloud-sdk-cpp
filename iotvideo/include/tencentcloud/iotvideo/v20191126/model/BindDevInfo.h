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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_BINDDEVINFO_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_BINDDEVINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 终端用户绑定的设备
                */
                class BindDevInfo : public AbstractModel
                {
                public:
                    BindDevInfo();
                    ~BindDevInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备TID
                     * @return Tid 设备TID
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 设置设备TID
                     * @param _tid 设备TID
                     * 
                     */
                    void SetTid(const std::string& _tid);

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取设备型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceModel 设备型号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeviceModel() const;

                    /**
                     * 设置设备型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deviceModel 设备型号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeviceModel(const std::string& _deviceModel);

                    /**
                     * 判断参数 DeviceModel 是否已赋值
                     * @return DeviceModel 是否已赋值
                     * 
                     */
                    bool DeviceModelHasBeenSet() const;

                    /**
                     * 获取用户角色，owner：主人，guest：访客
                     * @return Role 用户角色，owner：主人，guest：访客
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置用户角色，owner：主人，guest：访客
                     * @param _role 用户角色，owner：主人，guest：访客
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                private:

                    /**
                     * 设备TID
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备型号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceModel;
                    bool m_deviceModelHasBeenSet;

                    /**
                     * 用户角色，owner：主人，guest：访客
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_BINDDEVINFO_H_
