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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFIEDSUBSCRIBEOBJECT_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFIEDSUBSCRIBEOBJECT_H_

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
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 数据数据订阅的对象，用于修改订阅对象接口。与SubscribeObject结构类似，只是类型和参数名不同。
                */
                class ModifiedSubscribeObject : public AbstractModel
                {
                public:
                    ModifiedSubscribeObject();
                    ~ModifiedSubscribeObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订阅对象的类型，枚举值为：0-库，1-表(该值对于mongo任务来说，是集合) 。
注意：mongo只支持全实例、单库或者单集合订阅，因此该字段不要与SubscribeObjectType冲突。如：SubscribeObjectType=4，表示mongo单库订阅，那么该字段应该传0。
                     * @return ObjectsType 订阅对象的类型，枚举值为：0-库，1-表(该值对于mongo任务来说，是集合) 。
注意：mongo只支持全实例、单库或者单集合订阅，因此该字段不要与SubscribeObjectType冲突。如：SubscribeObjectType=4，表示mongo单库订阅，那么该字段应该传0。
                     * 
                     */
                    int64_t GetObjectsType() const;

                    /**
                     * 设置订阅对象的类型，枚举值为：0-库，1-表(该值对于mongo任务来说，是集合) 。
注意：mongo只支持全实例、单库或者单集合订阅，因此该字段不要与SubscribeObjectType冲突。如：SubscribeObjectType=4，表示mongo单库订阅，那么该字段应该传0。
                     * @param _objectsType 订阅对象的类型，枚举值为：0-库，1-表(该值对于mongo任务来说，是集合) 。
注意：mongo只支持全实例、单库或者单集合订阅，因此该字段不要与SubscribeObjectType冲突。如：SubscribeObjectType=4，表示mongo单库订阅，那么该字段应该传0。
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
                     * 获取订阅数据库中表(或集合)的名称。如果 ObjectsType 为 1，那么此字段为必填，且不为空；
                     * @return TableNames 订阅数据库中表(或集合)的名称。如果 ObjectsType 为 1，那么此字段为必填，且不为空；
                     * 
                     */
                    std::vector<std::string> GetTableNames() const;

                    /**
                     * 设置订阅数据库中表(或集合)的名称。如果 ObjectsType 为 1，那么此字段为必填，且不为空；
                     * @param _tableNames 订阅数据库中表(或集合)的名称。如果 ObjectsType 为 1，那么此字段为必填，且不为空；
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
                     * 订阅对象的类型，枚举值为：0-库，1-表(该值对于mongo任务来说，是集合) 。
注意：mongo只支持全实例、单库或者单集合订阅，因此该字段不要与SubscribeObjectType冲突。如：SubscribeObjectType=4，表示mongo单库订阅，那么该字段应该传0。
                     */
                    int64_t m_objectsType;
                    bool m_objectsTypeHasBeenSet;

                    /**
                     * 订阅数据库的名称
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 订阅数据库中表(或集合)的名称。如果 ObjectsType 为 1，那么此字段为必填，且不为空；
                     */
                    std::vector<std::string> m_tableNames;
                    bool m_tableNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFIEDSUBSCRIBEOBJECT_H_
