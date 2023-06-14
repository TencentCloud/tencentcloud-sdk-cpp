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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_MERCHANTCLASSIFICATIONID_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_MERCHANTCLASSIFICATIONID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 商户分类
                */
                class MerchantClassificationId : public AbstractModel
                {
                public:
                    MerchantClassificationId();
                    ~MerchantClassificationId() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分类编号
                     * @return Code 分类编号
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置分类编号
                     * @param _code 分类编号
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取分类名称
                     * @return Name 分类名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分类名称
                     * @param _name 分类名称
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
                     * 获取父级编号（0为一级编号，大于0为父级分类编号）
                     * @return Parent 父级编号（0为一级编号，大于0为父级分类编号）
                     * 
                     */
                    std::string GetParent() const;

                    /**
                     * 设置父级编号（0为一级编号，大于0为父级分类编号）
                     * @param _parent 父级编号（0为一级编号，大于0为父级分类编号）
                     * 
                     */
                    void SetParent(const std::string& _parent);

                    /**
                     * 判断参数 Parent 是否已赋值
                     * @return Parent 是否已赋值
                     * 
                     */
                    bool ParentHasBeenSet() const;

                private:

                    /**
                     * 分类编号
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 分类名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 父级编号（0为一级编号，大于0为父级分类编号）
                     */
                    std::string m_parent;
                    bool m_parentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_MERCHANTCLASSIFICATIONID_H_
