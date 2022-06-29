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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYLOCALBINLOGCONFIGREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYLOCALBINLOGCONFIGREQUEST_H_

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
                * ModifyLocalBinlogConfig请求参数结构体
                */
                class ModifyLocalBinlogConfigRequest : public AbstractModel
                {
                public:
                    ModifyLocalBinlogConfigRequest();
                    ~ModifyLocalBinlogConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     * @return InstanceId 实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     * @param InstanceId 实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取本地binlog保留时长，可取值范围：[72,168]。
                     * @return SaveHours 本地binlog保留时长，可取值范围：[72,168]。
                     */
                    int64_t GetSaveHours() const;

                    /**
                     * 设置本地binlog保留时长，可取值范围：[72,168]。
                     * @param SaveHours 本地binlog保留时长，可取值范围：[72,168]。
                     */
                    void SetSaveHours(const int64_t& _saveHours);

                    /**
                     * 判断参数 SaveHours 是否已赋值
                     * @return SaveHours 是否已赋值
                     */
                    bool SaveHoursHasBeenSet() const;

                    /**
                     * 获取本地binlog空间使用率，可取值范围：[30,50]。
                     * @return MaxUsage 本地binlog空间使用率，可取值范围：[30,50]。
                     */
                    int64_t GetMaxUsage() const;

                    /**
                     * 设置本地binlog空间使用率，可取值范围：[30,50]。
                     * @param MaxUsage 本地binlog空间使用率，可取值范围：[30,50]。
                     */
                    void SetMaxUsage(const int64_t& _maxUsage);

                    /**
                     * 判断参数 MaxUsage 是否已赋值
                     * @return MaxUsage 是否已赋值
                     */
                    bool MaxUsageHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 本地binlog保留时长，可取值范围：[72,168]。
                     */
                    int64_t m_saveHours;
                    bool m_saveHoursHasBeenSet;

                    /**
                     * 本地binlog空间使用率，可取值范围：[30,50]。
                     */
                    int64_t m_maxUsage;
                    bool m_maxUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYLOCALBINLOGCONFIGREQUEST_H_
