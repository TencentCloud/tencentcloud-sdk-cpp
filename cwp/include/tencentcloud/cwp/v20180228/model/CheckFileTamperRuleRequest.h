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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CHECKFILETAMPERRULEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CHECKFILETAMPERRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CheckFileTamperRule请求参数结构体
                */
                class CheckFileTamperRuleRequest : public AbstractModel
                {
                public:
                    CheckFileTamperRuleRequest();
                    ~CheckFileTamperRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取填入的规则名称
                     * @return Name 填入的规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置填入的规则名称
                     * @param _name 填入的规则名称
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
                     * 获取编辑时传的规则id
                     * @return Id 编辑时传的规则id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置编辑时传的规则id
                     * @param _id 编辑时传的规则id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 填入的规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 编辑时传的规则id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CHECKFILETAMPERRULEREQUEST_H_
