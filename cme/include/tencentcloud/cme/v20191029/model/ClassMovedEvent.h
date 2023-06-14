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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_CLASSMOVEDEVENT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_CLASSMOVEDEVENT_H_

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
                * 分类移动事件。
                */
                class ClassMovedEvent : public AbstractModel
                {
                public:
                    ClassMovedEvent();
                    ~ClassMovedEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源分类归属。
                     * @return SourceOwner 源分类归属。
                     * 
                     */
                    Entity GetSourceOwner() const;

                    /**
                     * 设置源分类归属。
                     * @param _sourceOwner 源分类归属。
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
                     * 获取源分类路径列表。
                     * @return SourceClassPathSet 源分类路径列表。
                     * 
                     */
                    std::vector<std::string> GetSourceClassPathSet() const;

                    /**
                     * 设置源分类路径列表。
                     * @param _sourceClassPathSet 源分类路径列表。
                     * 
                     */
                    void SetSourceClassPathSet(const std::vector<std::string>& _sourceClassPathSet);

                    /**
                     * 判断参数 SourceClassPathSet 是否已赋值
                     * @return SourceClassPathSet 是否已赋值
                     * 
                     */
                    bool SourceClassPathSetHasBeenSet() const;

                    /**
                     * 获取目标分类归属。
                     * @return DestinationOwner 目标分类归属。
                     * 
                     */
                    Entity GetDestinationOwner() const;

                    /**
                     * 设置目标分类归属。
                     * @param _destinationOwner 目标分类归属。
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
                     * 获取目标分类归属。
                     * @return DestinationClassPath 目标分类归属。
                     * 
                     */
                    std::string GetDestinationClassPath() const;

                    /**
                     * 设置目标分类归属。
                     * @param _destinationClassPath 目标分类归属。
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
                     * 源分类归属。
                     */
                    Entity m_sourceOwner;
                    bool m_sourceOwnerHasBeenSet;

                    /**
                     * 源分类路径列表。
                     */
                    std::vector<std::string> m_sourceClassPathSet;
                    bool m_sourceClassPathSetHasBeenSet;

                    /**
                     * 目标分类归属。
                     */
                    Entity m_destinationOwner;
                    bool m_destinationOwnerHasBeenSet;

                    /**
                     * 目标分类归属。
                     */
                    std::string m_destinationClassPath;
                    bool m_destinationClassPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_CLASSMOVEDEVENT_H_
