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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEALLDEVICELISTREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEALLDEVICELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeAllDeviceList请求参数结构体
                */
                class DescribeAllDeviceListRequest : public AbstractModel
                {
                public:
                    DescribeAllDeviceListRequest();
                    ~DescribeAllDeviceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，默认0
                     * @return Offset 偏移量，默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认0
                     * @param _offset 偏移量，默认0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制，默认200
                     * @return Limit 限制，默认200
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制，默认200
                     * @param _limit 限制，默认200
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取设备名称，需要模糊匹配设备名称时为必填
                     * @return NickName 设备名称，需要模糊匹配设备名称时为必填
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置设备名称，需要模糊匹配设备名称时为必填
                     * @param _nickName 设备名称，需要模糊匹配设备名称时为必填
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取DeviceId列表，需要精确查找设备时为必填
                     * @return DeviceIds DeviceId列表，需要精确查找设备时为必填
                     * 
                     */
                    std::vector<std::string> GetDeviceIds() const;

                    /**
                     * 设置DeviceId列表，需要精确查找设备时为必填
                     * @param _deviceIds DeviceId列表，需要精确查找设备时为必填
                     * 
                     */
                    void SetDeviceIds(const std::vector<std::string>& _deviceIds);

                    /**
                     * 判断参数 DeviceIds 是否已赋值
                     * @return DeviceIds 是否已赋值
                     * 
                     */
                    bool DeviceIdsHasBeenSet() const;

                    /**
                     * 获取设备类型过滤，设备类型，1：国标VMS设备(公有云不支持此类型)，2：国标IPC设备，3：国标NVR设备，9：智能告警设备(公有云不支持此类型)
                     * @return DeviceTypes 设备类型过滤，设备类型，1：国标VMS设备(公有云不支持此类型)，2：国标IPC设备，3：国标NVR设备，9：智能告警设备(公有云不支持此类型)
                     * 
                     */
                    std::vector<int64_t> GetDeviceTypes() const;

                    /**
                     * 设置设备类型过滤，设备类型，1：国标VMS设备(公有云不支持此类型)，2：国标IPC设备，3：国标NVR设备，9：智能告警设备(公有云不支持此类型)
                     * @param _deviceTypes 设备类型过滤，设备类型，1：国标VMS设备(公有云不支持此类型)，2：国标IPC设备，3：国标NVR设备，9：智能告警设备(公有云不支持此类型)
                     * 
                     */
                    void SetDeviceTypes(const std::vector<int64_t>& _deviceTypes);

                    /**
                     * 判断参数 DeviceTypes 是否已赋值
                     * @return DeviceTypes 是否已赋值
                     * 
                     */
                    bool DeviceTypesHasBeenSet() const;

                private:

                    /**
                     * 偏移量，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制，默认200
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 设备名称，需要模糊匹配设备名称时为必填
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * DeviceId列表，需要精确查找设备时为必填
                     */
                    std::vector<std::string> m_deviceIds;
                    bool m_deviceIdsHasBeenSet;

                    /**
                     * 设备类型过滤，设备类型，1：国标VMS设备(公有云不支持此类型)，2：国标IPC设备，3：国标NVR设备，9：智能告警设备(公有云不支持此类型)
                     */
                    std::vector<int64_t> m_deviceTypes;
                    bool m_deviceTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEALLDEVICELISTREQUEST_H_
