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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MATERIALMOVEDEVENT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MATERIALMOVEDEVENT_H_

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
                * 媒体移动事件
                */
                class MaterialMovedEvent : public AbstractModel
                {
                public:
                    MaterialMovedEvent();
                    ~MaterialMovedEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取要移动的媒体 Id 列表。
                     * @return MaterialIdSet 要移动的媒体 Id 列表。
                     * 
                     */
                    std::vector<std::string> GetMaterialIdSet() const;

                    /**
                     * 设置要移动的媒体 Id 列表。
                     * @param _materialIdSet 要移动的媒体 Id 列表。
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
                     * 获取源媒体归属。
                     * @return SourceOwner 源媒体归属。
                     * 
                     */
                    Entity GetSourceOwner() const;

                    /**
                     * 设置源媒体归属。
                     * @param _sourceOwner 源媒体归属。
                     * 
                     */
                    void SetSourceOwner(const Entity& _sourceOwner);

                    /**
                     * 判断参数 SourceOwner 是否已赋值
                     * @return SourceOwner 是否已赋值
                     * 
                     */
                    bool SourceOwnerHasBeenSet() const;

                    /**
                     * 获取源媒体分类路径。
                     * @return SourceClassPath 源媒体分类路径。
                     * 
                     */
                    std::string GetSourceClassPath() const;

                    /**
                     * 设置源媒体分类路径。
                     * @param _sourceClassPath 源媒体分类路径。
                     * 
                     */
                    void SetSourceClassPath(const std::string& _sourceClassPath);

                    /**
                     * 判断参数 SourceClassPath 是否已赋值
                     * @return SourceClassPath 是否已赋值
                     * 
                     */
                    bool SourceClassPathHasBeenSet() const;

                    /**
                     * 获取目标媒体分类归属。
                     * @return DestinationOwner 目标媒体分类归属。
                     * 
                     */
                    Entity GetDestinationOwner() const;

                    /**
                     * 设置目标媒体分类归属。
                     * @param _destinationOwner 目标媒体分类归属。
                     * 
                     */
                    void SetDestinationOwner(const Entity& _destinationOwner);

                    /**
                     * 判断参数 DestinationOwner 是否已赋值
                     * @return DestinationOwner 是否已赋值
                     * 
                     */
                    bool DestinationOwnerHasBeenSet() const;

                    /**
                     * 获取目标媒体分类路径。
                     * @return DestinationClassPath 目标媒体分类路径。
                     * 
                     */
                    std::string GetDestinationClassPath() const;

                    /**
                     * 设置目标媒体分类路径。
                     * @param _destinationClassPath 目标媒体分类路径。
                     * 
                     */
                    void SetDestinationClassPath(const std::string& _destinationClassPath);

                    /**
                     * 判断参数 DestinationClassPath 是否已赋值
                     * @return DestinationClassPath 是否已赋值
                     * 
                     */
                    bool DestinationClassPathHasBeenSet() const;

                private:

                    /**
                     * 要移动的媒体 Id 列表。
                     */
                    std::vector<std::string> m_materialIdSet;
                    bool m_materialIdSetHasBeenSet;

                    /**
                     * 源媒体归属。
                     */
                    Entity m_sourceOwner;
                    bool m_sourceOwnerHasBeenSet;

                    /**
                     * 源媒体分类路径。
                     */
                    std::string m_sourceClassPath;
                    bool m_sourceClassPathHasBeenSet;

                    /**
                     * 目标媒体分类归属。
                     */
                    Entity m_destinationOwner;
                    bool m_destinationOwnerHasBeenSet;

                    /**
                     * 目标媒体分类路径。
                     */
                    std::string m_destinationClassPath;
                    bool m_destinationClassPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MATERIALMOVEDEVENT_H_
