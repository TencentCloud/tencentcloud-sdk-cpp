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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_SUBSCRIBEOBJECT_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_SUBSCRIBEOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * 数据订阅的对象
                */
                class SubscribeObject : public AbstractModel
                {
                public:
                    SubscribeObject();
                    ~SubscribeObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据订阅对象的类型，0-数据库，1-数据库内的表
                     * @return ObjectsType 数据订阅对象的类型，0-数据库，1-数据库内的表
                     * 
                     */
                    int64_t GetObjectsType() const;

                    /**
                     * 设置数据订阅对象的类型，0-数据库，1-数据库内的表
                     * @param _objectsType 数据订阅对象的类型，0-数据库，1-数据库内的表
                     * 
                     */
                    void SetObjectsType(const int64_t& _objectsType);

                    /**
                     * 判断参数 ObjectsType 是否已赋值
                     * @return ObjectsType 是否已赋值
                     * 
                     */
                    bool ObjectsTypeHasBeenSet() const;

                    /**
                     * 获取订阅数据库的名称
                     * @return DatabaseName 订阅数据库的名称
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置订阅数据库的名称
                     * @param _databaseName 订阅数据库的名称
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取订阅数据库中表名称数组
                     * @return TableNames 订阅数据库中表名称数组
                     * 
                     */
                    std::vector<std::string> GetTableNames() const;

                    /**
                     * 设置订阅数据库中表名称数组
                     * @param _tableNames 订阅数据库中表名称数组
                     * 
                     */
                    void SetTableNames(const std::vector<std::string>& _tableNames);

                    /**
                     * 判断参数 TableNames 是否已赋值
                     * @return TableNames 是否已赋值
                     * 
                     */
                    bool TableNamesHasBeenSet() const;

                private:

                    /**
                     * 数据订阅对象的类型，0-数据库，1-数据库内的表
                     */
                    int64_t m_objectsType;
                    bool m_objectsTypeHasBeenSet;

                    /**
                     * 订阅数据库的名称
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 订阅数据库中表名称数组
                     */
                    std::vector<std::string> m_tableNames;
                    bool m_tableNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_SUBSCRIBEOBJECT_H_
