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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYREALSERVERACCESSSTRATEGYREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYREALSERVERACCESSSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyRealServerAccessStrategy请求参数结构体
                */
                class ModifyRealServerAccessStrategyRequest : public AbstractModel
                {
                public:
                    ModifyRealServerAccessStrategyRequest();
                    ~ModifyRealServerAccessStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：tdsql-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例 ID，格式如：tdsql-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：tdsql-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例 ID，格式如：tdsql-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
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
                     * 获取RS就近模式, 0-无策略, 1-可用区就近访问。
                     * @return RsAccessStrategy RS就近模式, 0-无策略, 1-可用区就近访问。
                     * 
                     */
                    int64_t GetRsAccessStrategy() const;

                    /**
                     * 设置RS就近模式, 0-无策略, 1-可用区就近访问。
                     * @param _rsAccessStrategy RS就近模式, 0-无策略, 1-可用区就近访问。
                     * 
                     */
                    void SetRsAccessStrategy(const int64_t& _rsAccessStrategy);

                    /**
                     * 判断参数 RsAccessStrategy 是否已赋值
                     * @return RsAccessStrategy 是否已赋值
                     * 
                     */
                    bool RsAccessStrategyHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：tdsql-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * RS就近模式, 0-无策略, 1-可用区就近访问。
                     */
                    int64_t m_rsAccessStrategy;
                    bool m_rsAccessStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYREALSERVERACCESSSTRATEGYREQUEST_H_
