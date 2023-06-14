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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MATERIALADDEDEVENT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MATERIALADDEDEVENT_H_

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
                * 媒体添加事件。
                */
                class MaterialAddedEvent : public AbstractModel
                {
                public:
                    MaterialAddedEvent();
                    ~MaterialAddedEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取添加的媒体 Id 列表。
                     * @return MaterialIdSet 添加的媒体 Id 列表。
                     * 
                     */
                    std::vector<std::string> GetMaterialIdSet() const;

                    /**
                     * 设置添加的媒体 Id 列表。
                     * @param _materialIdSet 添加的媒体 Id 列表。
                     * 
                     */
                    void SetMaterialIdSet(const std::vector<std::string>& _materialIdSet);

                    /**
                     * 判断参数 MaterialIdSet 是否已赋值
                     * @return MaterialIdSet 是否已赋值
                     * 
                     */
                    bool MaterialIdSetHasBeenSet() const;

                    /**
                     * 获取添加的媒体归属。
                     * @return Owner 添加的媒体归属。
                     * 
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置添加的媒体归属。
                     * @param _owner 添加的媒体归属。
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
                     * 获取添加的媒体分类路径。
                     * @return ClassPath 添加的媒体分类路径。
                     * 
                     */
                    std::string GetClassPath() const;

                    /**
                     * 设置添加的媒体分类路径。
                     * @param _classPath 添加的媒体分类路径。
                     * 
                     */
                    void SetClassPath(const std::string& _classPath);

                    /**
                     * 判断参数 ClassPath 是否已赋值
                     * @return ClassPath 是否已赋值
                     * 
                     */
                    bool ClassPathHasBeenSet() const;

                private:

                    /**
                     * 添加的媒体 Id 列表。
                     */
                    std::vector<std::string> m_materialIdSet;
                    bool m_materialIdSetHasBeenSet;

                    /**
                     * 添加的媒体归属。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 添加的媒体分类路径。
                     */
                    std::string m_classPath;
                    bool m_classPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MATERIALADDEDEVENT_H_
