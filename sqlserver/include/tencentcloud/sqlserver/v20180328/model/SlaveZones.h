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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SLAVEZONES_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SLAVEZONES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 备可用区信息
                */
                class SlaveZones : public AbstractModel
                {
                public:
                    SlaveZones();
                    ~SlaveZones() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备可用区地域码
                     * @return SlaveZone 备可用区地域码
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置备可用区地域码
                     * @param _slaveZone 备可用区地域码
                     * 
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取备可用区
                     * @return SlaveZoneName 备可用区
                     * 
                     */
                    std::string GetSlaveZoneName() const;

                    /**
                     * 设置备可用区
                     * @param _slaveZoneName 备可用区
                     * 
                     */
                    void SetSlaveZoneName(const std::string& _slaveZoneName);

                    /**
                     * 判断参数 SlaveZoneName 是否已赋值
                     * @return SlaveZoneName 是否已赋值
                     * 
                     */
                    bool SlaveZoneNameHasBeenSet() const;

                    /**
                     * 获取备机资源ID
                     * @return DrInstanceId 备机资源ID
                     * 
                     */
                    std::string GetDrInstanceId() const;

                    /**
                     * 设置备机资源ID
                     * @param _drInstanceId 备机资源ID
                     * 
                     */
                    void SetDrInstanceId(const std::string& _drInstanceId);

                    /**
                     * 判断参数 DrInstanceId 是否已赋值
                     * @return DrInstanceId 是否已赋值
                     * 
                     */
                    bool DrInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 备可用区地域码
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * 备可用区
                     */
                    std::string m_slaveZoneName;
                    bool m_slaveZoneNameHasBeenSet;

                    /**
                     * 备机资源ID
                     */
                    std::string m_drInstanceId;
                    bool m_drInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SLAVEZONES_H_
