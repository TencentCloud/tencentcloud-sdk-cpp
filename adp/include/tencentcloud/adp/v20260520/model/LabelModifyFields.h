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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_LABELMODIFYFIELDS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_LABELMODIFYFIELDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/LabelTermModifyItem.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 标签可修改字段集合（配合 update_mask 使用）
                */
                class LabelModifyFields : public AbstractModel
                {
                public:
                    LabelModifyFields();
                    ~LabelModifyFields() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标签名称</p>
                     * @return Name <p>标签名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>标签名称</p>
                     * @param _name <p>标签名称</p>
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
                     * 获取<p>标准词增量修改列表（增/改/删）</p>
                     * @return TermModifyList <p>标准词增量修改列表（增/改/删）</p>
                     * 
                     */
                    std::vector<LabelTermModifyItem> GetTermModifyList() const;

                    /**
                     * 设置<p>标准词增量修改列表（增/改/删）</p>
                     * @param _termModifyList <p>标准词增量修改列表（增/改/删）</p>
                     * 
                     */
                    void SetTermModifyList(const std::vector<LabelTermModifyItem>& _termModifyList);

                    /**
                     * 判断参数 TermModifyList 是否已赋值
                     * @return TermModifyList 是否已赋值
                     * 
                     */
                    bool TermModifyListHasBeenSet() const;

                private:

                    /**
                     * <p>标签名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>标准词增量修改列表（增/改/删）</p>
                     */
                    std::vector<LabelTermModifyItem> m_termModifyList;
                    bool m_termModifyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_LABELMODIFYFIELDS_H_
