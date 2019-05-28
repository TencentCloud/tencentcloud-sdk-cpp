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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_SWITCHDRTOMASTERREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_SWITCHDRTOMASTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/SyncInstanceInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * SwitchDrToMaster请求参数结构体
                */
                class SwitchDrToMasterRequest : public AbstractModel
                {
                public:
                    SwitchDrToMasterRequest();
                    ~SwitchDrToMasterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取灾备实例的信息
                     * @return DstInfo 灾备实例的信息
                     */
                    SyncInstanceInfo GetDstInfo() const;

                    /**
                     * 设置灾备实例的信息
                     * @param DstInfo 灾备实例的信息
                     */
                    void SetDstInfo(const SyncInstanceInfo& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取数据库的类型  （如 mysql）
                     * @return DatabaseType 数据库的类型  （如 mysql）
                     */
                    std::string GetDatabaseType() const;

                    /**
                     * 设置数据库的类型  （如 mysql）
                     * @param DatabaseType 数据库的类型  （如 mysql）
                     */
                    void SetDatabaseType(const std::string& _databaseType);

                    /**
                     * 判断参数 DatabaseType 是否已赋值
                     * @return DatabaseType 是否已赋值
                     */
                    bool DatabaseTypeHasBeenSet() const;

                private:

                    /**
                     * 灾备实例的信息
                     */
                    SyncInstanceInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * 数据库的类型  （如 mysql）
                     */
                    std::string m_databaseType;
                    bool m_databaseTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_SWITCHDRTOMASTERREQUEST_H_
