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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_SWITCHDRINSTANCETOMASTERREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_SWITCHDRINSTANCETOMASTERREQUEST_H_

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
                * SwitchDrInstanceToMaster请求参数结构体
                */
                class SwitchDrInstanceToMasterRequest : public AbstractModel
                {
                public:
                    SwitchDrInstanceToMasterRequest();
                    ~SwitchDrInstanceToMasterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>灾备实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * @return InstanceId <p>灾备实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>灾备实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * @param _instanceId <p>灾备实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
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
                     * 获取<p>忽略同步延迟的阈值，不填默认为0表示完全等待追平</p><p>取值范围：[0, 104857600]</p><p>默认值：0</p>
                     * @return IgnoreSyncDelay <p>忽略同步延迟的阈值，不填默认为0表示完全等待追平</p><p>取值范围：[0, 104857600]</p><p>默认值：0</p>
                     * 
                     */
                    int64_t GetIgnoreSyncDelay() const;

                    /**
                     * 设置<p>忽略同步延迟的阈值，不填默认为0表示完全等待追平</p><p>取值范围：[0, 104857600]</p><p>默认值：0</p>
                     * @param _ignoreSyncDelay <p>忽略同步延迟的阈值，不填默认为0表示完全等待追平</p><p>取值范围：[0, 104857600]</p><p>默认值：0</p>
                     * 
                     */
                    void SetIgnoreSyncDelay(const int64_t& _ignoreSyncDelay);

                    /**
                     * 判断参数 IgnoreSyncDelay 是否已赋值
                     * @return IgnoreSyncDelay 是否已赋值
                     * 
                     */
                    bool IgnoreSyncDelayHasBeenSet() const;

                private:

                    /**
                     * <p>灾备实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>忽略同步延迟的阈值，不填默认为0表示完全等待追平</p><p>取值范围：[0, 104857600]</p><p>默认值：0</p>
                     */
                    int64_t m_ignoreSyncDelay;
                    bool m_ignoreSyncDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_SWITCHDRINSTANCETOMASTERREQUEST_H_
