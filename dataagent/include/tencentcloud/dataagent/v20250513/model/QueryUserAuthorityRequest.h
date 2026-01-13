/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_QUERYUSERAUTHORITYREQUEST_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_QUERYUSERAUTHORITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * QueryUserAuthority请求参数结构体
                */
                class QueryUserAuthorityRequest : public AbstractModel
                {
                public:
                    QueryUserAuthorityRequest();
                    ~QueryUserAuthorityRequest() = default;
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
                     * 获取分为知识库knowledge、数据源datasource、自定义场景scene
                     * @return Module 分为知识库knowledge、数据源datasource、自定义场景scene
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置分为知识库knowledge、数据源datasource、自定义场景scene
                     * @param _module 分为知识库knowledge、数据源datasource、自定义场景scene
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取对象id,分为知识库id、数据源id、场景id
                     * @return ObjectId 对象id,分为知识库id、数据源id、场景id
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置对象id,分为知识库id、数据源id、场景id
                     * @param _objectId 对象id,分为知识库id、数据源id、场景id
                     * 
                     */
                    void SetObjectId(const std::string& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 分为知识库knowledge、数据源datasource、自定义场景scene
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 对象id,分为知识库id、数据源id、场景id
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_QUERYUSERAUTHORITYREQUEST_H_
