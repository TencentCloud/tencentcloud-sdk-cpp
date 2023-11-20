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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_RENEWDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_RENEWDBINSTANCEREQUEST_H_

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
                * RenewDBInstance请求参数结构体
                */
                class RenewDBInstanceRequest : public AbstractModel
                {
                public:
                    RenewDBInstanceRequest();
                    ~RenewDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待续费的实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872)。
                     * @return InstanceId 待续费的实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872)。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置待续费的实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872)。
                     * @param _instanceId 待续费的实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872)。
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
                     * 获取续费时长，单位：月，可选值包括 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
                     * @return TimeSpan 续费时长，单位：月，可选值包括 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置续费时长，单位：月，可选值包括 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
                     * @param _timeSpan 续费时长，单位：月，可选值包括 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取如果需要将按量计费实例续费为包年包月的实例，该入参的值需要指定为 "PREPAID" 。
                     * @return ModifyPayType 如果需要将按量计费实例续费为包年包月的实例，该入参的值需要指定为 "PREPAID" 。
                     * 
                     */
                    std::string GetModifyPayType() const;

                    /**
                     * 设置如果需要将按量计费实例续费为包年包月的实例，该入参的值需要指定为 "PREPAID" 。
                     * @param _modifyPayType 如果需要将按量计费实例续费为包年包月的实例，该入参的值需要指定为 "PREPAID" 。
                     * 
                     */
                    void SetModifyPayType(const std::string& _modifyPayType);

                    /**
                     * 判断参数 ModifyPayType 是否已赋值
                     * @return ModifyPayType 是否已赋值
                     * 
                     */
                    bool ModifyPayTypeHasBeenSet() const;

                    /**
                     * 获取自动续费标记，0表示不自动续费，1表示进行自动续费
                     * @return AutoRenew 自动续费标记，0表示不自动续费，1表示进行自动续费
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置自动续费标记，0表示不自动续费，1表示进行自动续费
                     * @param _autoRenew 自动续费标记，0表示不自动续费，1表示进行自动续费
                     * 
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                private:

                    /**
                     * 待续费的实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872)。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 续费时长，单位：月，可选值包括 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 如果需要将按量计费实例续费为包年包月的实例，该入参的值需要指定为 "PREPAID" 。
                     */
                    std::string m_modifyPayType;
                    bool m_modifyPayTypeHasBeenSet;

                    /**
                     * 自动续费标记，0表示不自动续费，1表示进行自动续费
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_RENEWDBINSTANCEREQUEST_H_
