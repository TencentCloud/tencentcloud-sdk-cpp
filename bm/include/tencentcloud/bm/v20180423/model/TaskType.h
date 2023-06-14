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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_TASKTYPE_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_TASKTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * 故障id对应故障名列表
                */
                class TaskType : public AbstractModel
                {
                public:
                    TaskType();
                    ~TaskType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取故障类ID
                     * @return TypeId 故障类ID
                     * 
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置故障类ID
                     * @param _typeId 故障类ID
                     * 
                     */
                    void SetTypeId(const uint64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取故障类中文名
                     * @return TypeName 故障类中文名
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置故障类中文名
                     * @param _typeName 故障类中文名
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取故障类型父类
                     * @return TaskSubType 故障类型父类
                     * 
                     */
                    std::string GetTaskSubType() const;

                    /**
                     * 设置故障类型父类
                     * @param _taskSubType 故障类型父类
                     * 
                     */
                    void SetTaskSubType(const std::string& _taskSubType);

                    /**
                     * 判断参数 TaskSubType 是否已赋值
                     * @return TaskSubType 是否已赋值
                     * 
                     */
                    bool TaskSubTypeHasBeenSet() const;

                private:

                    /**
                     * 故障类ID
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * 故障类中文名
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 故障类型父类
                     */
                    std::string m_taskSubType;
                    bool m_taskSubTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_TASKTYPE_H_
