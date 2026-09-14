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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATELABELREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATELABELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/LabelTerm.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateLabel请求参数结构体
                */
                class CreateLabelRequest : public AbstractModel
                {
                public:
                    CreateLabelRequest();
                    ~CreateLabelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>所属知识库 ID</p>
                     * @return KbId <p>所属知识库 ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>所属知识库 ID</p>
                     * @param _kbId <p>所属知识库 ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>标签名称（长度不小于 1 个字符）</p>
                     * @return Name <p>标签名称（长度不小于 1 个字符）</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>标签名称（长度不小于 1 个字符）</p>
                     * @param _name <p>标签名称（长度不小于 1 个字符）</p>
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
                     * 获取<p>标签值（标准词 + 同义词列表），其中 term_id 由后台生成、创建时留空</p>
                     * @return TermList <p>标签值（标准词 + 同义词列表），其中 term_id 由后台生成、创建时留空</p>
                     * 
                     */
                    std::vector<LabelTerm> GetTermList() const;

                    /**
                     * 设置<p>标签值（标准词 + 同义词列表），其中 term_id 由后台生成、创建时留空</p>
                     * @param _termList <p>标签值（标准词 + 同义词列表），其中 term_id 由后台生成、创建时留空</p>
                     * 
                     */
                    void SetTermList(const std::vector<LabelTerm>& _termList);

                    /**
                     * 判断参数 TermList 是否已赋值
                     * @return TermList 是否已赋值
                     * 
                     */
                    bool TermListHasBeenSet() const;

                private:

                    /**
                     * <p>所属知识库 ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>标签名称（长度不小于 1 个字符）</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>标签值（标准词 + 同义词列表），其中 term_id 由后台生成、创建时留空</p>
                     */
                    std::vector<LabelTerm> m_termList;
                    bool m_termListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATELABELREQUEST_H_
