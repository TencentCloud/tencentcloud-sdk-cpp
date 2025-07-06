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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEVIRTUALDEVICEGROUPSDETAIL_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEVIRTUALDEVICEGROUPSDETAIL_H_

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
                * 终端自定义分组列表数据
                */
                class DeviceVirtualDeviceGroupsDetail : public AbstractModel
                {
                public:
                    DeviceVirtualDeviceGroupsDetail();
                    ~DeviceVirtualDeviceGroupsDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取终端自定义分组id
                     * @return Id 终端自定义分组id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置终端自定义分组id
                     * @param _id 终端自定义分组id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取自定义分组名称
                     * @return DeviceVirtualGroupName 自定义分组名称
                     * 
                     */
                    std::string GetDeviceVirtualGroupName() const;

                    /**
                     * 设置自定义分组名称
                     * @param _deviceVirtualGroupName 自定义分组名称
                     * 
                     */
                    void SetDeviceVirtualGroupName(const std::string& _deviceVirtualGroupName);

                    /**
                     * 判断参数 DeviceVirtualGroupName 是否已赋值
                     * @return DeviceVirtualGroupName 是否已赋值
                     * 
                     */
                    bool DeviceVirtualGroupNameHasBeenSet() const;

                    /**
                     * 获取设备数
                     * @return DeviceCount 设备数
                     * 
                     */
                    int64_t GetDeviceCount() const;

                    /**
                     * 设置设备数
                     * @param _deviceCount 设备数
                     * 
                     */
                    void SetDeviceCount(const int64_t& _deviceCount);

                    /**
                     * 判断参数 DeviceCount 是否已赋值
                     * @return DeviceCount 是否已赋值
                     * 
                     */
                    bool DeviceCountHasBeenSet() const;

                    /**
                     * 获取系统类型（0: win，1：linux，2: mac，4：android，5：ios  ）
                     * @return OsType 系统类型（0: win，1：linux，2: mac，4：android，5：ios  ）
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置系统类型（0: win，1：linux，2: mac，4：android，5：ios  ）
                     * @param _osType 系统类型（0: win，1：linux，2: mac，4：android，5：ios  ）
                     * 
                     */
                    void SetOsType(const int64_t& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return Itime 创建时间
                     * 
                     */
                    std::string GetItime() const;

                    /**
                     * 设置创建时间
                     * @param _itime 创建时间
                     * 
                     */
                    void SetItime(const std::string& _itime);

                    /**
                     * 判断参数 Itime 是否已赋值
                     * @return Itime 是否已赋值
                     * 
                     */
                    bool ItimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return Utime 更新时间
                     * 
                     */
                    std::string GetUtime() const;

                    /**
                     * 设置更新时间
                     * @param _utime 更新时间
                     * 
                     */
                    void SetUtime(const std::string& _utime);

                    /**
                     * 判断参数 Utime 是否已赋值
                     * @return Utime 是否已赋值
                     * 
                     */
                    bool UtimeHasBeenSet() const;

                private:

                    /**
                     * 终端自定义分组id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 自定义分组名称
                     */
                    std::string m_deviceVirtualGroupName;
                    bool m_deviceVirtualGroupNameHasBeenSet;

                    /**
                     * 设备数
                     */
                    int64_t m_deviceCount;
                    bool m_deviceCountHasBeenSet;

                    /**
                     * 系统类型（0: win，1：linux，2: mac，4：android，5：ios  ）
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_itime;
                    bool m_itimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_utime;
                    bool m_utimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEVIRTUALDEVICEGROUPSDETAIL_H_
