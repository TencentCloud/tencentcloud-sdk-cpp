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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_LABELTERMMODIFYITEM_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_LABELTERMMODIFYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 标签标准词修改项（增量更新）
                */
                class LabelTermModifyItem : public AbstractModel
                {
                public:
                    LabelTermModifyItem();
                    ~LabelTermModifyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>操作类型（不可为 0，取值：1=新增，2=修改，3=删除）<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODIFY_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>MODIFY_ACTION_CREATE</td><td>1</td><td>新增</td></tr><tr><td>MODIFY_ACTION_UPDATE</td><td>2</td><td>修改</td></tr><tr><td>MODIFY_ACTION_DELETE</td><td>3</td><td>删除</td></tr></tbody></table></p>
                     * @return ModifyAction <p>操作类型（不可为 0，取值：1=新增，2=修改，3=删除）<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODIFY_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>MODIFY_ACTION_CREATE</td><td>1</td><td>新增</td></tr><tr><td>MODIFY_ACTION_UPDATE</td><td>2</td><td>修改</td></tr><tr><td>MODIFY_ACTION_DELETE</td><td>3</td><td>删除</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetModifyAction() const;

                    /**
                     * 设置<p>操作类型（不可为 0，取值：1=新增，2=修改，3=删除）<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODIFY_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>MODIFY_ACTION_CREATE</td><td>1</td><td>新增</td></tr><tr><td>MODIFY_ACTION_UPDATE</td><td>2</td><td>修改</td></tr><tr><td>MODIFY_ACTION_DELETE</td><td>3</td><td>删除</td></tr></tbody></table></p>
                     * @param _modifyAction <p>操作类型（不可为 0，取值：1=新增，2=修改，3=删除）<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODIFY_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>MODIFY_ACTION_CREATE</td><td>1</td><td>新增</td></tr><tr><td>MODIFY_ACTION_UPDATE</td><td>2</td><td>修改</td></tr><tr><td>MODIFY_ACTION_DELETE</td><td>3</td><td>删除</td></tr></tbody></table></p>
                     * 
                     */
                    void SetModifyAction(const int64_t& _modifyAction);

                    /**
                     * 判断参数 ModifyAction 是否已赋值
                     * @return ModifyAction 是否已赋值
                     * 
                     */
                    bool ModifyActionHasBeenSet() const;

                    /**
                     * 获取<p>同义词列表（CREATE 与 UPDATE 时传完整同义词集合，覆盖式更新）</p>
                     * @return SynonymList <p>同义词列表（CREATE 与 UPDATE 时传完整同义词集合，覆盖式更新）</p>
                     * 
                     */
                    std::vector<std::string> GetSynonymList() const;

                    /**
                     * 设置<p>同义词列表（CREATE 与 UPDATE 时传完整同义词集合，覆盖式更新）</p>
                     * @param _synonymList <p>同义词列表（CREATE 与 UPDATE 时传完整同义词集合，覆盖式更新）</p>
                     * 
                     */
                    void SetSynonymList(const std::vector<std::string>& _synonymList);

                    /**
                     * 判断参数 SynonymList 是否已赋值
                     * @return SynonymList 是否已赋值
                     * 
                     */
                    bool SynonymListHasBeenSet() const;

                    /**
                     * 获取<p>标准词（CREATE 与 UPDATE 必填，DELETE 可留空）</p>
                     * @return Term <p>标准词（CREATE 与 UPDATE 必填，DELETE 可留空）</p>
                     * 
                     */
                    std::string GetTerm() const;

                    /**
                     * 设置<p>标准词（CREATE 与 UPDATE 必填，DELETE 可留空）</p>
                     * @param _term <p>标准词（CREATE 与 UPDATE 必填，DELETE 可留空）</p>
                     * 
                     */
                    void SetTerm(const std::string& _term);

                    /**
                     * 判断参数 Term 是否已赋值
                     * @return Term 是否已赋值
                     * 
                     */
                    bool TermHasBeenSet() const;

                    /**
                     * 获取<p>标准词 ID（UPDATE 与 DELETE 必填，CREATE 留空由后台生成）</p>
                     * @return TermId <p>标准词 ID（UPDATE 与 DELETE 必填，CREATE 留空由后台生成）</p>
                     * 
                     */
                    std::string GetTermId() const;

                    /**
                     * 设置<p>标准词 ID（UPDATE 与 DELETE 必填，CREATE 留空由后台生成）</p>
                     * @param _termId <p>标准词 ID（UPDATE 与 DELETE 必填，CREATE 留空由后台生成）</p>
                     * 
                     */
                    void SetTermId(const std::string& _termId);

                    /**
                     * 判断参数 TermId 是否已赋值
                     * @return TermId 是否已赋值
                     * 
                     */
                    bool TermIdHasBeenSet() const;

                private:

                    /**
                     * <p>操作类型（不可为 0，取值：1=新增，2=修改，3=删除）<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODIFY_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>MODIFY_ACTION_CREATE</td><td>1</td><td>新增</td></tr><tr><td>MODIFY_ACTION_UPDATE</td><td>2</td><td>修改</td></tr><tr><td>MODIFY_ACTION_DELETE</td><td>3</td><td>删除</td></tr></tbody></table></p>
                     */
                    int64_t m_modifyAction;
                    bool m_modifyActionHasBeenSet;

                    /**
                     * <p>同义词列表（CREATE 与 UPDATE 时传完整同义词集合，覆盖式更新）</p>
                     */
                    std::vector<std::string> m_synonymList;
                    bool m_synonymListHasBeenSet;

                    /**
                     * <p>标准词（CREATE 与 UPDATE 必填，DELETE 可留空）</p>
                     */
                    std::string m_term;
                    bool m_termHasBeenSet;

                    /**
                     * <p>标准词 ID（UPDATE 与 DELETE 必填，CREATE 留空由后台生成）</p>
                     */
                    std::string m_termId;
                    bool m_termIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_LABELTERMMODIFYITEM_H_
