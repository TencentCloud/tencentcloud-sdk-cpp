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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCENOTEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCENOTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceNote请求参数结构体
                */
                class ModifyDBInstanceNoteRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceNoteRequest();
                    ~ModifyDBInstanceNoteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库实例ID，形如mssql-njj2mtpl
                     * @return InstanceId 数据库实例ID，形如mssql-njj2mtpl
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置数据库实例ID，形如mssql-njj2mtpl
                     * @param _instanceId 数据库实例ID，形如mssql-njj2mtpl
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
                     * 获取实例备注信息
                     * @return InstanceNote 实例备注信息
                     * 
                     */
                    std::string GetInstanceNote() const;

                    /**
                     * 设置实例备注信息
                     * @param _instanceNote 实例备注信息
                     * 
                     */
                    void SetInstanceNote(const std::string& _instanceNote);

                    /**
                     * 判断参数 InstanceNote 是否已赋值
                     * @return InstanceNote 是否已赋值
                     * 
                     */
                    bool InstanceNoteHasBeenSet() const;

                private:

                    /**
                     * 数据库实例ID，形如mssql-njj2mtpl
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例备注信息
                     */
                    std::string m_instanceNote;
                    bool m_instanceNoteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCENOTEREQUEST_H_
