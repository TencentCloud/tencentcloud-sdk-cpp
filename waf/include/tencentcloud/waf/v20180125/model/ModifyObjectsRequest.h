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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOBJECTSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOBJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/Object.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyObjects请求参数结构体
                */
                class ModifyObjectsRequest : public AbstractModel
                {
                public:
                    ModifyObjectsRequest();
                    ~ModifyObjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取修改对象标识
                     * @return ObjectId 修改对象标识
                     * 
                     */
                    std::vector<std::string> GetObjectId() const;

                    /**
                     * 设置修改对象标识
                     * @param _objectId 修改对象标识
                     * 
                     */
                    void SetObjectId(const std::vector<std::string>& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

                    /**
                     * 获取改动作类型:InstanceId绑定实例；UnbindInstance解绑实例。
                     * @return OpType 改动作类型:InstanceId绑定实例；UnbindInstance解绑实例。
                     * 
                     */
                    std::string GetOpType() const;

                    /**
                     * 设置改动作类型:InstanceId绑定实例；UnbindInstance解绑实例。
                     * @param _opType 改动作类型:InstanceId绑定实例；UnbindInstance解绑实例。
                     * 
                     */
                    void SetOpType(const std::string& _opType);

                    /**
                     * 判断参数 OpType 是否已赋值
                     * @return OpType 是否已赋值
                     * 
                     */
                    bool OpTypeHasBeenSet() const;

                    /**
                     * 获取新的实例ID，如果和已绑定的实例相同认为修改成功
                     * @return InstanceId 新的实例ID，如果和已绑定的实例相同认为修改成功
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置新的实例ID，如果和已绑定的实例相同认为修改成功
                     * @param _instanceId 新的实例ID，如果和已绑定的实例相同认为修改成功
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
                     * 获取对象列表，仅跨账号接入使用
                     * @return Objects 对象列表，仅跨账号接入使用
                     * 
                     */
                    std::vector<Object> GetObjects() const;

                    /**
                     * 设置对象列表，仅跨账号接入使用
                     * @param _objects 对象列表，仅跨账号接入使用
                     * 
                     */
                    void SetObjects(const std::vector<Object>& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     * 
                     */
                    bool ObjectsHasBeenSet() const;

                private:

                    /**
                     * 修改对象标识
                     */
                    std::vector<std::string> m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * 改动作类型:InstanceId绑定实例；UnbindInstance解绑实例。
                     */
                    std::string m_opType;
                    bool m_opTypeHasBeenSet;

                    /**
                     * 新的实例ID，如果和已绑定的实例相同认为修改成功
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 对象列表，仅跨账号接入使用
                     */
                    std::vector<Object> m_objects;
                    bool m_objectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOBJECTSREQUEST_H_
