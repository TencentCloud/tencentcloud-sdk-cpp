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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCEMODESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCEMODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyDBInstanceModes请求参数结构体
                */
                class ModifyDBInstanceModesRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceModesRequest();
                    ~ModifyDBInstanceModesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同。
                     * @return InstanceId 实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同。
                     * @param _instanceId 实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取云数据库的模式，目前仅支持传入 "protectMode" 表示修改主从同步方式。
                     * @return Mode 云数据库的模式，目前仅支持传入 "protectMode" 表示修改主从同步方式。
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置云数据库的模式，目前仅支持传入 "protectMode" 表示修改主从同步方式。
                     * @param _mode 云数据库的模式，目前仅支持传入 "protectMode" 表示修改主从同步方式。
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取数据同步方式，可选值：0-异步复制，1-半同步复制，2-强同步复制。
                     * @return ProtectMode 数据同步方式，可选值：0-异步复制，1-半同步复制，2-强同步复制。
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置数据同步方式，可选值：0-异步复制，1-半同步复制，2-强同步复制。
                     * @param _protectMode 数据同步方式，可选值：0-异步复制，1-半同步复制，2-强同步复制。
                     * 
                     */
                    void SetProtectMode(const int64_t& _protectMode);

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     * 
                     */
                    bool ProtectModeHasBeenSet() const;

                private:

                    /**
                     * 实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 云数据库的模式，目前仅支持传入 "protectMode" 表示修改主从同步方式。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 数据同步方式，可选值：0-异步复制，1-半同步复制，2-强同步复制。
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCEMODESREQUEST_H_
