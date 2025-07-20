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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DISKTYPECONFIGITEM_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DISKTYPECONFIGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 磁盘售卖类型
                */
                class DiskTypeConfigItem : public AbstractModel
                {
                public:
                    DiskTypeConfigItem();
                    ~DiskTypeConfigItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取磁盘对应的实例类型。仅支持单节点基础型和集群版。
                     * @return DeviceType 磁盘对应的实例类型。仅支持单节点基础型和集群版。
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置磁盘对应的实例类型。仅支持单节点基础型和集群版。
                     * @param _deviceType 磁盘对应的实例类型。仅支持单节点基础型和集群版。
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取可以选择的磁盘类型列表。
                     * @return DiskType 可以选择的磁盘类型列表。
                     * 
                     */
                    std::vector<std::string> GetDiskType() const;

                    /**
                     * 设置可以选择的磁盘类型列表。
                     * @param _diskType 可以选择的磁盘类型列表。
                     * 
                     */
                    void SetDiskType(const std::vector<std::string>& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                private:

                    /**
                     * 磁盘对应的实例类型。仅支持单节点基础型和集群版。
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 可以选择的磁盘类型列表。
                     */
                    std::vector<std::string> m_diskType;
                    bool m_diskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DISKTYPECONFIGITEM_H_
