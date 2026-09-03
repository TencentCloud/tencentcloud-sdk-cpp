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
                     * 获取<p>终端自定义分组id</p>
                     * @return Id <p>终端自定义分组id</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>终端自定义分组id</p>
                     * @param _id <p>终端自定义分组id</p>
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
                     * 获取<p>自定义分组名称</p>
                     * @return DeviceVirtualGroupName <p>自定义分组名称</p>
                     * 
                     */
                    std::string GetDeviceVirtualGroupName() const;

                    /**
                     * 设置<p>自定义分组名称</p>
                     * @param _deviceVirtualGroupName <p>自定义分组名称</p>
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
                     * 获取<p>设备数</p>
                     * @return DeviceCount <p>设备数</p>
                     * 
                     */
                    int64_t GetDeviceCount() const;

                    /**
                     * 设置<p>设备数</p>
                     * @param _deviceCount <p>设备数</p>
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
                     * 获取<p>系统类型（0: win，1：linux，2: mac，4：android，5：ios  ）</p>
                     * @return OsType <p>系统类型（0: win，1：linux，2: mac，4：android，5：ios  ）</p>
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置<p>系统类型（0: win，1：linux，2: mac，4：android，5：ios  ）</p>
                     * @param _osType <p>系统类型（0: win，1：linux，2: mac，4：android，5：ios  ）</p>
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
                     * 获取<p>创建时间</p>
                     * @return Itime <p>创建时间</p>
                     * 
                     */
                    std::string GetItime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _itime <p>创建时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return Utime <p>更新时间</p>
                     * 
                     */
                    std::string GetUtime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _utime <p>更新时间</p>
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
                     * <p>终端自定义分组id</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>自定义分组名称</p>
                     */
                    std::string m_deviceVirtualGroupName;
                    bool m_deviceVirtualGroupNameHasBeenSet;

                    /**
                     * <p>设备数</p>
                     */
                    int64_t m_deviceCount;
                    bool m_deviceCountHasBeenSet;

                    /**
                     * <p>系统类型（0: win，1：linux，2: mac，4：android，5：ios  ）</p>
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_itime;
                    bool m_itimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_utime;
                    bool m_utimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEVIRTUALDEVICEGROUPSDETAIL_H_
