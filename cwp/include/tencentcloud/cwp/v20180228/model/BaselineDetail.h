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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 基线详情
                */
                class BaselineDetail : public AbstractModel
                {
                public:
                    BaselineDetail();
                    ~BaselineDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基线描述
                     * @return Description 基线描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置基线描述
                     * @param _description 基线描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取危害等级
                     * @return Level 危害等级
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置危害等级
                     * @param _level 危害等级
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
                     * 获取package名
                     * @return PackageName package名
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置package名
                     * @param _packageName package名
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取父级id
                     * @return ParentId 父级id
                     * 
                     */
                    uint64_t GetParentId() const;

                    /**
                     * 设置父级id
                     * @param _parentId 父级id
                     * 
                     */
                    void SetParentId(const uint64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取基线名
                     * @return Name 基线名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置基线名
                     * @param _name 基线名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 基线描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 危害等级
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * package名
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 父级id
                     */
                    uint64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 基线名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEDETAIL_H_
