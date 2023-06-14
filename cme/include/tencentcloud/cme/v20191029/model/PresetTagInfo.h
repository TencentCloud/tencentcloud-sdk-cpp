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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_PRESETTAGINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_PRESETTAGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 预置标签信息
                */
                class PresetTagInfo : public AbstractModel
                {
                public:
                    PresetTagInfo();
                    ~PresetTagInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签 Id 。
                     * @return Id 标签 Id 。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置标签 Id 。
                     * @param _id 标签 Id 。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取标签名称。
                     * @return Name 标签名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置标签名称。
                     * @param _name 标签名称。
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
                     * 获取父级预设 Id。
                     * @return ParentTagId 父级预设 Id。
                     * 
                     */
                    std::string GetParentTagId() const;

                    /**
                     * 设置父级预设 Id。
                     * @param _parentTagId 父级预设 Id。
                     * 
                     */
                    void SetParentTagId(const std::string& _parentTagId);

                    /**
                     * 判断参数 ParentTagId 是否已赋值
                     * @return ParentTagId 是否已赋值
                     * 
                     */
                    bool ParentTagIdHasBeenSet() const;

                private:

                    /**
                     * 标签 Id 。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 标签名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 父级预设 Id。
                     */
                    std::string m_parentTagId;
                    bool m_parentTagIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_PRESETTAGINFO_H_
