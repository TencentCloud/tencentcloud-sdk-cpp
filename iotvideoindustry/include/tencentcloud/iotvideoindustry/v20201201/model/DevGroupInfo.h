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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DEVGROUPINFO_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DEVGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 设备所在分组信息
                */
                class DevGroupInfo : public AbstractModel
                {
                public:
                    DevGroupInfo();
                    ~DevGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备唯一标识
                     * @return DeviceId 设备唯一标识
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备唯一标识
                     * @param _deviceId 设备唯一标识
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取分组ID
                     * @return GroupId 分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组ID
                     * @param _groupId 分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取分组路径
                     * @return GroupPath 分组路径
                     * 
                     */
                    std::string GetGroupPath() const;

                    /**
                     * 设置分组路径
                     * @param _groupPath 分组路径
                     * 
                     */
                    void SetGroupPath(const std::string& _groupPath);

                    /**
                     * 判断参数 GroupPath 是否已赋值
                     * @return GroupPath 是否已赋值
                     * 
                     */
                    bool GroupPathHasBeenSet() const;

                    /**
                     * 获取父分组ID
                     * @return ParentId 父分组ID
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置父分组ID
                     * @param _parentId 父分组ID
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取设备错误，仅在用户没权限或者设备已删除时返回具体结果
                     * @return Error 设备错误，仅在用户没权限或者设备已删除时返回具体结果
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置设备错误，仅在用户没权限或者设备已删除时返回具体结果
                     * @param _error 设备错误，仅在用户没权限或者设备已删除时返回具体结果
                     * 
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * 设备唯一标识
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 分组路径
                     */
                    std::string m_groupPath;
                    bool m_groupPathHasBeenSet;

                    /**
                     * 父分组ID
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 设备错误，仅在用户没权限或者设备已删除时返回具体结果
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DEVGROUPINFO_H_
