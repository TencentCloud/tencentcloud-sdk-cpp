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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACERELATION_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACERELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/SpaceRelation.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 空间层级关系
                */
                class SpaceRelation : public AbstractModel
                {
                public:
                    SpaceRelation();
                    ~SpaceRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取构件id
                     * @return ElementId 构件id
                     * 
                     */
                    std::string GetElementId() const;

                    /**
                     * 设置构件id
                     * @param _elementId 构件id
                     * 
                     */
                    void SetElementId(const std::string& _elementId);

                    /**
                     * 判断参数 ElementId 是否已赋值
                     * @return ElementId 是否已赋值
                     * 
                     */
                    bool ElementIdHasBeenSet() const;

                    /**
                     * 获取构件名称
                     * @return ElementName 构件名称
                     * 
                     */
                    std::string GetElementName() const;

                    /**
                     * 设置构件名称
                     * @param _elementName 构件名称
                     * 
                     */
                    void SetElementName(const std::string& _elementName);

                    /**
                     * 判断参数 ElementName 是否已赋值
                     * @return ElementName 是否已赋值
                     * 
                     */
                    bool ElementNameHasBeenSet() const;

                    /**
                     * 获取空间层级
                     * @return Level 空间层级
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置空间层级
                     * @param _level 空间层级
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取空间编码
                     * @return SpaceCode 空间编码
                     * 
                     */
                    std::string GetSpaceCode() const;

                    /**
                     * 设置空间编码
                     * @param _spaceCode 空间编码
                     * 
                     */
                    void SetSpaceCode(const std::string& _spaceCode);

                    /**
                     * 判断参数 SpaceCode 是否已赋值
                     * @return SpaceCode 是否已赋值
                     * 
                     */
                    bool SpaceCodeHasBeenSet() const;

                    /**
                     * 获取父级空间编码
                     * @return ParentSpaceCode 父级空间编码
                     * 
                     */
                    std::string GetParentSpaceCode() const;

                    /**
                     * 设置父级空间编码
                     * @param _parentSpaceCode 父级空间编码
                     * 
                     */
                    void SetParentSpaceCode(const std::string& _parentSpaceCode);

                    /**
                     * 判断参数 ParentSpaceCode 是否已赋值
                     * @return ParentSpaceCode 是否已赋值
                     * 
                     */
                    bool ParentSpaceCodeHasBeenSet() const;

                    /**
                     * 获取子构件信息
                     * @return Children 子构件信息
                     * 
                     */
                    std::vector<SpaceRelation> GetChildren() const;

                    /**
                     * 设置子构件信息
                     * @param _children 子构件信息
                     * 
                     */
                    void SetChildren(const std::vector<SpaceRelation>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                private:

                    /**
                     * 构件id
                     */
                    std::string m_elementId;
                    bool m_elementIdHasBeenSet;

                    /**
                     * 构件名称
                     */
                    std::string m_elementName;
                    bool m_elementNameHasBeenSet;

                    /**
                     * 空间层级
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 空间编码
                     */
                    std::string m_spaceCode;
                    bool m_spaceCodeHasBeenSet;

                    /**
                     * 父级空间编码
                     */
                    std::string m_parentSpaceCode;
                    bool m_parentSpaceCodeHasBeenSet;

                    /**
                     * 子构件信息
                     */
                    std::vector<SpaceRelation> m_children;
                    bool m_childrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACERELATION_H_
