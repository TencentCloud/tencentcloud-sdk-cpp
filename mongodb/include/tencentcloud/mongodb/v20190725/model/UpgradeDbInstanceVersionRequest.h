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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_UPGRADEDBINSTANCEVERSIONREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_UPGRADEDBINSTANCEVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * UpgradeDbInstanceVersion请求参数结构体
                */
                class UpgradeDbInstanceVersionRequest : public AbstractModel
                {
                public:
                    UpgradeDbInstanceVersionRequest();
                    ~UpgradeDbInstanceVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID列表，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同。
                     * @return InstanceId 实例ID列表，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID列表，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同。
                     * @param _instanceId 实例ID列表，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同。
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
                     * 获取新升级的数据库版本。当前支持版本如下所示，支持旧版本向高版本升级，不支持跨版本升级。
- MONGO_40_WT：4.0 版本。
- MONGO_42_WT：4.2 版本。
- MONGO_44_WT：4.4 版本
- MONGO_50_WT：5.0 版本
- MONGO_60_WT：6.0 版本。
- MONGO_70_WT：7.0 版本。
- MONGO_80_WT：8.0 版本。
                     * @return MongoVersion 新升级的数据库版本。当前支持版本如下所示，支持旧版本向高版本升级，不支持跨版本升级。
- MONGO_40_WT：4.0 版本。
- MONGO_42_WT：4.2 版本。
- MONGO_44_WT：4.4 版本
- MONGO_50_WT：5.0 版本
- MONGO_60_WT：6.0 版本。
- MONGO_70_WT：7.0 版本。
- MONGO_80_WT：8.0 版本。
                     * 
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置新升级的数据库版本。当前支持版本如下所示，支持旧版本向高版本升级，不支持跨版本升级。
- MONGO_40_WT：4.0 版本。
- MONGO_42_WT：4.2 版本。
- MONGO_44_WT：4.4 版本
- MONGO_50_WT：5.0 版本
- MONGO_60_WT：6.0 版本。
- MONGO_70_WT：7.0 版本。
- MONGO_80_WT：8.0 版本。
                     * @param _mongoVersion 新升级的数据库版本。当前支持版本如下所示，支持旧版本向高版本升级，不支持跨版本升级。
- MONGO_40_WT：4.0 版本。
- MONGO_42_WT：4.2 版本。
- MONGO_44_WT：4.4 版本
- MONGO_50_WT：5.0 版本
- MONGO_60_WT：6.0 版本。
- MONGO_70_WT：7.0 版本。
- MONGO_80_WT：8.0 版本。
                     * 
                     */
                    void SetMongoVersion(const std::string& _mongoVersion);

                    /**
                     * 判断参数 MongoVersion 是否已赋值
                     * @return MongoVersion 是否已赋值
                     * 
                     */
                    bool MongoVersionHasBeenSet() const;

                    /**
                     * 获取指定升级操作是否在维护时间内进行。
- 0：立即升级。
- 1：维护时间窗升级。
                     * @return InMaintenance 指定升级操作是否在维护时间内进行。
- 0：立即升级。
- 1：维护时间窗升级。
                     * 
                     */
                    int64_t GetInMaintenance() const;

                    /**
                     * 设置指定升级操作是否在维护时间内进行。
- 0：立即升级。
- 1：维护时间窗升级。
                     * @param _inMaintenance 指定升级操作是否在维护时间内进行。
- 0：立即升级。
- 1：维护时间窗升级。
                     * 
                     */
                    void SetInMaintenance(const int64_t& _inMaintenance);

                    /**
                     * 判断参数 InMaintenance 是否已赋值
                     * @return InMaintenance 是否已赋值
                     * 
                     */
                    bool InMaintenanceHasBeenSet() const;

                private:

                    /**
                     * 实例ID列表，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 新升级的数据库版本。当前支持版本如下所示，支持旧版本向高版本升级，不支持跨版本升级。
- MONGO_40_WT：4.0 版本。
- MONGO_42_WT：4.2 版本。
- MONGO_44_WT：4.4 版本
- MONGO_50_WT：5.0 版本
- MONGO_60_WT：6.0 版本。
- MONGO_70_WT：7.0 版本。
- MONGO_80_WT：8.0 版本。
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * 指定升级操作是否在维护时间内进行。
- 0：立即升级。
- 1：维护时间窗升级。
                     */
                    int64_t m_inMaintenance;
                    bool m_inMaintenanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_UPGRADEDBINSTANCEVERSIONREQUEST_H_
