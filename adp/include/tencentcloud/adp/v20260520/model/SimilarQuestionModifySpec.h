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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SIMILARQUESTIONMODIFYSPEC_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SIMILARQUESTIONMODIFYSPEC_H_

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
                * QA 相似问修改项
                */
                class SimilarQuestionModifySpec : public AbstractModel
                {
                public:
                    SimilarQuestionModifySpec();
                    ~SimilarQuestionModifySpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>相似问内容（CREATE 与 UPDATE 必填）</p>
                     * @return Content <p>相似问内容（CREATE 与 UPDATE 必填）</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>相似问内容（CREATE 与 UPDATE 必填）</p>
                     * @param _content <p>相似问内容（CREATE 与 UPDATE 必填）</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>操作类型：1=新增，2=修改，3=删除<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODIFY_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>MODIFY_ACTION_CREATE</td><td>1</td><td>新增</td></tr><tr><td>MODIFY_ACTION_UPDATE</td><td>2</td><td>修改</td></tr><tr><td>MODIFY_ACTION_DELETE</td><td>3</td><td>删除</td></tr></tbody></table></p>
                     * @return ModifyAction <p>操作类型：1=新增，2=修改，3=删除<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODIFY_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>MODIFY_ACTION_CREATE</td><td>1</td><td>新增</td></tr><tr><td>MODIFY_ACTION_UPDATE</td><td>2</td><td>修改</td></tr><tr><td>MODIFY_ACTION_DELETE</td><td>3</td><td>删除</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetModifyAction() const;

                    /**
                     * 设置<p>操作类型：1=新增，2=修改，3=删除<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODIFY_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>MODIFY_ACTION_CREATE</td><td>1</td><td>新增</td></tr><tr><td>MODIFY_ACTION_UPDATE</td><td>2</td><td>修改</td></tr><tr><td>MODIFY_ACTION_DELETE</td><td>3</td><td>删除</td></tr></tbody></table></p>
                     * @param _modifyAction <p>操作类型：1=新增，2=修改，3=删除<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODIFY_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>MODIFY_ACTION_CREATE</td><td>1</td><td>新增</td></tr><tr><td>MODIFY_ACTION_UPDATE</td><td>2</td><td>修改</td></tr><tr><td>MODIFY_ACTION_DELETE</td><td>3</td><td>删除</td></tr></tbody></table></p>
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
                     * 获取<p>相似问 ID（UPDATE 与 DELETE 必填）</p>
                     * @return SimilarQuestionId <p>相似问 ID（UPDATE 与 DELETE 必填）</p>
                     * 
                     */
                    std::string GetSimilarQuestionId() const;

                    /**
                     * 设置<p>相似问 ID（UPDATE 与 DELETE 必填）</p>
                     * @param _similarQuestionId <p>相似问 ID（UPDATE 与 DELETE 必填）</p>
                     * 
                     */
                    void SetSimilarQuestionId(const std::string& _similarQuestionId);

                    /**
                     * 判断参数 SimilarQuestionId 是否已赋值
                     * @return SimilarQuestionId 是否已赋值
                     * 
                     */
                    bool SimilarQuestionIdHasBeenSet() const;

                private:

                    /**
                     * <p>相似问内容（CREATE 与 UPDATE 必填）</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>操作类型：1=新增，2=修改，3=删除<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODIFY_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>MODIFY_ACTION_CREATE</td><td>1</td><td>新增</td></tr><tr><td>MODIFY_ACTION_UPDATE</td><td>2</td><td>修改</td></tr><tr><td>MODIFY_ACTION_DELETE</td><td>3</td><td>删除</td></tr></tbody></table></p>
                     */
                    int64_t m_modifyAction;
                    bool m_modifyActionHasBeenSet;

                    /**
                     * <p>相似问 ID（UPDATE 与 DELETE 必填）</p>
                     */
                    std::string m_similarQuestionId;
                    bool m_similarQuestionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SIMILARQUESTIONMODIFYSPEC_H_
