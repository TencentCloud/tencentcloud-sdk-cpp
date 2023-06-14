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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ROLLBACKINSTANCEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ROLLBACKINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/RenameRestoreDatabase.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * RollbackInstance请求参数结构体
                */
                class RollbackInstanceRequest : public AbstractModel
                {
                public:
                    RollbackInstanceRequest();
                    ~RollbackInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取回档类型，0-回档的数据库覆盖原库；1-回档的数据库以重命名的形式生成，不覆盖原库
                     * @return Type 回档类型，0-回档的数据库覆盖原库；1-回档的数据库以重命名的形式生成，不覆盖原库
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置回档类型，0-回档的数据库覆盖原库；1-回档的数据库以重命名的形式生成，不覆盖原库
                     * @param _type 回档类型，0-回档的数据库覆盖原库；1-回档的数据库以重命名的形式生成，不覆盖原库
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取回档目标时间点
                     * @return Time 回档目标时间点
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置回档目标时间点
                     * @param _time 回档目标时间点
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取需要回档的数据库
                     * @return DBs 需要回档的数据库
                     * 
                     */
                    std::vector<std::string> GetDBs() const;

                    /**
                     * 设置需要回档的数据库
                     * @param _dBs 需要回档的数据库
                     * 
                     */
                    void SetDBs(const std::vector<std::string>& _dBs);

                    /**
                     * 判断参数 DBs 是否已赋值
                     * @return DBs 是否已赋值
                     * 
                     */
                    bool DBsHasBeenSet() const;

                    /**
                     * 获取备份恢复到的同一个APPID下的实例ID，不填则恢复到原实例ID
                     * @return TargetInstanceId 备份恢复到的同一个APPID下的实例ID，不填则恢复到原实例ID
                     * 
                     */
                    std::string GetTargetInstanceId() const;

                    /**
                     * 设置备份恢复到的同一个APPID下的实例ID，不填则恢复到原实例ID
                     * @param _targetInstanceId 备份恢复到的同一个APPID下的实例ID，不填则恢复到原实例ID
                     * 
                     */
                    void SetTargetInstanceId(const std::string& _targetInstanceId);

                    /**
                     * 判断参数 TargetInstanceId 是否已赋值
                     * @return TargetInstanceId 是否已赋值
                     * 
                     */
                    bool TargetInstanceIdHasBeenSet() const;

                    /**
                     * 获取按照ReNameRestoreDatabase中的库进行重命名，仅在Type = 1重命名回档方式有效；不填则按照默认方式命名库，DBs参数确定要恢复的库
                     * @return RenameRestore 按照ReNameRestoreDatabase中的库进行重命名，仅在Type = 1重命名回档方式有效；不填则按照默认方式命名库，DBs参数确定要恢复的库
                     * 
                     */
                    std::vector<RenameRestoreDatabase> GetRenameRestore() const;

                    /**
                     * 设置按照ReNameRestoreDatabase中的库进行重命名，仅在Type = 1重命名回档方式有效；不填则按照默认方式命名库，DBs参数确定要恢复的库
                     * @param _renameRestore 按照ReNameRestoreDatabase中的库进行重命名，仅在Type = 1重命名回档方式有效；不填则按照默认方式命名库，DBs参数确定要恢复的库
                     * 
                     */
                    void SetRenameRestore(const std::vector<RenameRestoreDatabase>& _renameRestore);

                    /**
                     * 判断参数 RenameRestore 是否已赋值
                     * @return RenameRestore 是否已赋值
                     * 
                     */
                    bool RenameRestoreHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 回档类型，0-回档的数据库覆盖原库；1-回档的数据库以重命名的形式生成，不覆盖原库
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 回档目标时间点
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 需要回档的数据库
                     */
                    std::vector<std::string> m_dBs;
                    bool m_dBsHasBeenSet;

                    /**
                     * 备份恢复到的同一个APPID下的实例ID，不填则恢复到原实例ID
                     */
                    std::string m_targetInstanceId;
                    bool m_targetInstanceIdHasBeenSet;

                    /**
                     * 按照ReNameRestoreDatabase中的库进行重命名，仅在Type = 1重命名回档方式有效；不填则按照默认方式命名库，DBs参数确定要恢复的库
                     */
                    std::vector<RenameRestoreDatabase> m_renameRestore;
                    bool m_renameRestoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ROLLBACKINSTANCEREQUEST_H_
