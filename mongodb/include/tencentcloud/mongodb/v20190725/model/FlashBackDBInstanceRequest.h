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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_FLASHBACKDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_FLASHBACKDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/FlashbackDatabase.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * FlashBackDBInstance请求参数结构体
                */
                class FlashBackDBInstanceRequest : public AbstractModel
                {
                public:
                    FlashBackDBInstanceRequest();
                    ~FlashBackDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开启按 Key 回档的实例 ID。
                     * @return InstanceId 开启按 Key 回档的实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置开启按 Key 回档的实例 ID。
                     * @param _instanceId 开启按 Key 回档的实例 ID。
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
                     * 获取源数据想恢复到的时间。
                     * @return TargetFlashbackTime 源数据想恢复到的时间。
                     * 
                     */
                    std::string GetTargetFlashbackTime() const;

                    /**
                     * 设置源数据想恢复到的时间。
                     * @param _targetFlashbackTime 源数据想恢复到的时间。
                     * 
                     */
                    void SetTargetFlashbackTime(const std::string& _targetFlashbackTime);

                    /**
                     * 判断参数 TargetFlashbackTime 是否已赋值
                     * @return TargetFlashbackTime 是否已赋值
                     * 
                     */
                    bool TargetFlashbackTimeHasBeenSet() const;

                    /**
                     * 获取源数据所在的库表信息。
                     * @return TargetDatabases 源数据所在的库表信息。
                     * 
                     */
                    std::vector<FlashbackDatabase> GetTargetDatabases() const;

                    /**
                     * 设置源数据所在的库表信息。
                     * @param _targetDatabases 源数据所在的库表信息。
                     * 
                     */
                    void SetTargetDatabases(const std::vector<FlashbackDatabase>& _targetDatabases);

                    /**
                     * 判断参数 TargetDatabases 是否已赋值
                     * @return TargetDatabases 是否已赋值
                     * 
                     */
                    bool TargetDatabasesHasBeenSet() const;

                    /**
                     * 获取数据最终写入的实例 ID。
                     * @return TargetInstanceId 数据最终写入的实例 ID。
                     * 
                     */
                    std::string GetTargetInstanceId() const;

                    /**
                     * 设置数据最终写入的实例 ID。
                     * @param _targetInstanceId 数据最终写入的实例 ID。
                     * 
                     */
                    void SetTargetInstanceId(const std::string& _targetInstanceId);

                    /**
                     * 判断参数 TargetInstanceId 是否已赋值
                     * @return TargetInstanceId 是否已赋值
                     * 
                     */
                    bool TargetInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 开启按 Key 回档的实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 源数据想恢复到的时间。
                     */
                    std::string m_targetFlashbackTime;
                    bool m_targetFlashbackTimeHasBeenSet;

                    /**
                     * 源数据所在的库表信息。
                     */
                    std::vector<FlashbackDatabase> m_targetDatabases;
                    bool m_targetDatabasesHasBeenSet;

                    /**
                     * 数据最终写入的实例 ID。
                     */
                    std::string m_targetInstanceId;
                    bool m_targetInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_FLASHBACKDBINSTANCEREQUEST_H_
