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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDATABASETUPLE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDATABASETUPLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DatabaseTuple.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 要修改的数据库订阅发布关系集合
                */
                class ModifyDataBaseTuple : public AbstractModel
                {
                public:
                    ModifyDataBaseTuple();
                    ~ModifyDataBaseTuple() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取要修改的订阅关系
                     * @return DatabaseTuple 要修改的订阅关系
                     * 
                     */
                    DatabaseTuple GetDatabaseTuple() const;

                    /**
                     * 设置要修改的订阅关系
                     * @param _databaseTuple 要修改的订阅关系
                     * 
                     */
                    void SetDatabaseTuple(const DatabaseTuple& _databaseTuple);

                    /**
                     * 判断参数 DatabaseTuple 是否已赋值
                     * @return DatabaseTuple 是否已赋值
                     * 
                     */
                    bool DatabaseTupleHasBeenSet() const;

                    /**
                     * 获取修改后的订阅关系。DeleteDataBasesTuple为false时有效
                     * @return NewDatabaseTuple 修改后的订阅关系。DeleteDataBasesTuple为false时有效
                     * 
                     */
                    DatabaseTuple GetNewDatabaseTuple() const;

                    /**
                     * 设置修改后的订阅关系。DeleteDataBasesTuple为false时有效
                     * @param _newDatabaseTuple 修改后的订阅关系。DeleteDataBasesTuple为false时有效
                     * 
                     */
                    void SetNewDatabaseTuple(const DatabaseTuple& _newDatabaseTuple);

                    /**
                     * 判断参数 NewDatabaseTuple 是否已赋值
                     * @return NewDatabaseTuple 是否已赋值
                     * 
                     */
                    bool NewDatabaseTupleHasBeenSet() const;

                    /**
                     * 获取是否删除订阅关系。此选项为true时，NewDatabaseTuple无效
                     * @return DeleteDataBasesTuple 是否删除订阅关系。此选项为true时，NewDatabaseTuple无效
                     * 
                     */
                    bool GetDeleteDataBasesTuple() const;

                    /**
                     * 设置是否删除订阅关系。此选项为true时，NewDatabaseTuple无效
                     * @param _deleteDataBasesTuple 是否删除订阅关系。此选项为true时，NewDatabaseTuple无效
                     * 
                     */
                    void SetDeleteDataBasesTuple(const bool& _deleteDataBasesTuple);

                    /**
                     * 判断参数 DeleteDataBasesTuple 是否已赋值
                     * @return DeleteDataBasesTuple 是否已赋值
                     * 
                     */
                    bool DeleteDataBasesTupleHasBeenSet() const;

                private:

                    /**
                     * 要修改的订阅关系
                     */
                    DatabaseTuple m_databaseTuple;
                    bool m_databaseTupleHasBeenSet;

                    /**
                     * 修改后的订阅关系。DeleteDataBasesTuple为false时有效
                     */
                    DatabaseTuple m_newDatabaseTuple;
                    bool m_newDatabaseTupleHasBeenSet;

                    /**
                     * 是否删除订阅关系。此选项为true时，NewDatabaseTuple无效
                     */
                    bool m_deleteDataBasesTuple;
                    bool m_deleteDataBasesTupleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDATABASETUPLE_H_
