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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_CLASSDELETEDEVENT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_CLASSDELETEDEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/Entity.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 分类删除事件。
                */
                class ClassDeletedEvent : public AbstractModel
                {
                public:
                    ClassDeletedEvent();
                    ~ClassDeletedEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取删除的分类归属。
                     * @return Owner 删除的分类归属。
                     * 
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置删除的分类归属。
                     * @param _owner 删除的分类归属。
                     * 
                     */
                    void SetOwner(const Entity& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取删除的分类路径列表。
                     * @return ClassPathSet 删除的分类路径列表。
                     * 
                     */
                    std::vector<std::string> GetClassPathSet() const;

                    /**
                     * 设置删除的分类路径列表。
                     * @param _classPathSet 删除的分类路径列表。
                     * 
                     */
                    void SetClassPathSet(const std::vector<std::string>& _classPathSet);

                    /**
                     * 判断参数 ClassPathSet 是否已赋值
                     * @return ClassPathSet 是否已赋值
                     * 
                     */
                    bool ClassPathSetHasBeenSet() const;

                private:

                    /**
                     * 删除的分类归属。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 删除的分类路径列表。
                     */
                    std::vector<std::string> m_classPathSet;
                    bool m_classPathSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_CLASSDELETEDEVENT_H_
