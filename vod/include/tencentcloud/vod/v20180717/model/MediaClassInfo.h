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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACLASSINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACLASSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 分类信息描述
                */
                class MediaClassInfo : public AbstractModel
                {
                public:
                    MediaClassInfo();
                    ~MediaClassInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分类 ID。
                     * @return ClassId 分类 ID。
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置分类 ID。
                     * @param _classId 分类 ID。
                     * 
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取父类 ID，一级分类的父类 ID 为 -1。
                     * @return ParentId 父类 ID，一级分类的父类 ID 为 -1。
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置父类 ID，一级分类的父类 ID 为 -1。
                     * @param _parentId 父类 ID，一级分类的父类 ID 为 -1。
                     * 
                     */
                    void SetParentId(const int64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取分类名称。
                     * @return Name 分类名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分类名称。
                     * @param _name 分类名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取分类级别，一级分类为 0，最大值为 3，即最多允许 4 级分类层次。
                     * @return Level 分类级别，一级分类为 0，最大值为 3，即最多允许 4 级分类层次。
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置分类级别，一级分类为 0，最大值为 3，即最多允许 4 级分类层次。
                     * @param _level 分类级别，一级分类为 0，最大值为 3，即最多允许 4 级分类层次。
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
                     * 获取当前分类的第一级子类 ID 集合。
                     * @return SubClassIdSet 当前分类的第一级子类 ID 集合。
                     * 
                     */
                    std::vector<int64_t> GetSubClassIdSet() const;

                    /**
                     * 设置当前分类的第一级子类 ID 集合。
                     * @param _subClassIdSet 当前分类的第一级子类 ID 集合。
                     * 
                     */
                    void SetSubClassIdSet(const std::vector<int64_t>& _subClassIdSet);

                    /**
                     * 判断参数 SubClassIdSet 是否已赋值
                     * @return SubClassIdSet 是否已赋值
                     * 
                     */
                    bool SubClassIdSetHasBeenSet() const;

                    /**
                     * 获取分类名称（该字段已不推荐使用，建议使用新的分类名称字段 Name）。
                     * @return ClassName 分类名称（该字段已不推荐使用，建议使用新的分类名称字段 Name）。
                     * 
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置分类名称（该字段已不推荐使用，建议使用新的分类名称字段 Name）。
                     * @param _className 分类名称（该字段已不推荐使用，建议使用新的分类名称字段 Name）。
                     * 
                     */
                    void SetClassName(const std::string& _className);

                    /**
                     * 判断参数 ClassName 是否已赋值
                     * @return ClassName 是否已赋值
                     * 
                     */
                    bool ClassNameHasBeenSet() const;

                private:

                    /**
                     * 分类 ID。
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * 父类 ID，一级分类的父类 ID 为 -1。
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 分类名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分类级别，一级分类为 0，最大值为 3，即最多允许 4 级分类层次。
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 当前分类的第一级子类 ID 集合。
                     */
                    std::vector<int64_t> m_subClassIdSet;
                    bool m_subClassIdSetHasBeenSet;

                    /**
                     * 分类名称（该字段已不推荐使用，建议使用新的分类名称字段 Name）。
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACLASSINFO_H_
