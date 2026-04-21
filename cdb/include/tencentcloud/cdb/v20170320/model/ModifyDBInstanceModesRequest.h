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
                     * 获取<p>实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同。</p>
                     * @return InstanceId <p>实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同。</p>
                     * @param _instanceId <p>实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同。</p>
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
                     * 获取<p>云数据库的模式，目前仅支持传入 &quot;protectMode&quot; 表示修改主从同步方式。</p>
                     * @return Mode <p>云数据库的模式，目前仅支持传入 &quot;protectMode&quot; 表示修改主从同步方式。</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>云数据库的模式，目前仅支持传入 &quot;protectMode&quot; 表示修改主从同步方式。</p>
                     * @param _mode <p>云数据库的模式，目前仅支持传入 &quot;protectMode&quot; 表示修改主从同步方式。</p>
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
                     * 获取<p>数据同步方式，可选值：0-异步复制，1-半同步复制，2-强同步复制。</p>
                     * @return ProtectMode <p>数据同步方式，可选值：0-异步复制，1-半同步复制，2-强同步复制。</p>
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置<p>数据同步方式，可选值：0-异步复制，1-半同步复制，2-强同步复制。</p>
                     * @param _protectMode <p>数据同步方式，可选值：0-异步复制，1-半同步复制，2-强同步复制。</p>
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
                     * <p>实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>云数据库的模式，目前仅支持传入 &quot;protectMode&quot; 表示修改主从同步方式。</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>数据同步方式，可选值：0-异步复制，1-半同步复制，2-强同步复制。</p>
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCEMODESREQUEST_H_
