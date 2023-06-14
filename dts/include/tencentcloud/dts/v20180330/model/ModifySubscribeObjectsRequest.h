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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSUBSCRIBEOBJECTSREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSUBSCRIBEOBJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/SubscribeObject.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * ModifySubscribeObjects请求参数结构体
                */
                class ModifySubscribeObjectsRequest : public AbstractModel
                {
                public:
                    ModifySubscribeObjectsRequest();
                    ~ModifySubscribeObjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据订阅实例的ID
                     * @return SubscribeId 数据订阅实例的ID
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置数据订阅实例的ID
                     * @param _subscribeId 数据订阅实例的ID
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取数据订阅的类型，可选的值有：0 - 全实例订阅；1 - 数据订阅；2 - 结构订阅；3 - 数据订阅+结构订阅
                     * @return SubscribeObjectType 数据订阅的类型，可选的值有：0 - 全实例订阅；1 - 数据订阅；2 - 结构订阅；3 - 数据订阅+结构订阅
                     * 
                     */
                    int64_t GetSubscribeObjectType() const;

                    /**
                     * 设置数据订阅的类型，可选的值有：0 - 全实例订阅；1 - 数据订阅；2 - 结构订阅；3 - 数据订阅+结构订阅
                     * @param _subscribeObjectType 数据订阅的类型，可选的值有：0 - 全实例订阅；1 - 数据订阅；2 - 结构订阅；3 - 数据订阅+结构订阅
                     * 
                     */
                    void SetSubscribeObjectType(const int64_t& _subscribeObjectType);

                    /**
                     * 判断参数 SubscribeObjectType 是否已赋值
                     * @return SubscribeObjectType 是否已赋值
                     * 
                     */
                    bool SubscribeObjectTypeHasBeenSet() const;

                    /**
                     * 获取订阅的数据库表信息
                     * @return Objects 订阅的数据库表信息
                     * 
                     */
                    std::vector<SubscribeObject> GetObjects() const;

                    /**
                     * 设置订阅的数据库表信息
                     * @param _objects 订阅的数据库表信息
                     * 
                     */
                    void SetObjects(const std::vector<SubscribeObject>& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     * 
                     */
                    bool ObjectsHasBeenSet() const;

                private:

                    /**
                     * 数据订阅实例的ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * 数据订阅的类型，可选的值有：0 - 全实例订阅；1 - 数据订阅；2 - 结构订阅；3 - 数据订阅+结构订阅
                     */
                    int64_t m_subscribeObjectType;
                    bool m_subscribeObjectTypeHasBeenSet;

                    /**
                     * 订阅的数据库表信息
                     */
                    std::vector<SubscribeObject> m_objects;
                    bool m_objectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSUBSCRIBEOBJECTSREQUEST_H_
