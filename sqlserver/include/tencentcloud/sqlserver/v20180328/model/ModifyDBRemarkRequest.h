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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBREMARKREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBREMARKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DBRemark.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyDBRemark请求参数结构体
                */
                class ModifyDBRemarkRequest : public AbstractModel
                {
                public:
                    ModifyDBRemarkRequest();
                    ~ModifyDBRemarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如mssql-rljoi3bf
                     * @return InstanceId 实例ID，形如mssql-rljoi3bf
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如mssql-rljoi3bf
                     * @param _instanceId 实例ID，形如mssql-rljoi3bf
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
                     * 获取数据库名称及备注数组，每个元素包含数据库名和对应的备注
                     * @return DBRemarks 数据库名称及备注数组，每个元素包含数据库名和对应的备注
                     * 
                     */
                    std::vector<DBRemark> GetDBRemarks() const;

                    /**
                     * 设置数据库名称及备注数组，每个元素包含数据库名和对应的备注
                     * @param _dBRemarks 数据库名称及备注数组，每个元素包含数据库名和对应的备注
                     * 
                     */
                    void SetDBRemarks(const std::vector<DBRemark>& _dBRemarks);

                    /**
                     * 判断参数 DBRemarks 是否已赋值
                     * @return DBRemarks 是否已赋值
                     * 
                     */
                    bool DBRemarksHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如mssql-rljoi3bf
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据库名称及备注数组，每个元素包含数据库名和对应的备注
                     */
                    std::vector<DBRemark> m_dBRemarks;
                    bool m_dBRemarksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBREMARKREQUEST_H_
