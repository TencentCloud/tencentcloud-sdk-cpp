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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_PERSONEXDESCRIPTIONINFO_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_PERSONEXDESCRIPTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 需要修改的人员描述字段内容，key-value
                */
                class PersonExDescriptionInfo : public AbstractModel
                {
                public:
                    PersonExDescriptionInfo();
                    ~PersonExDescriptionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人员描述字段Index，从0开始
                     * @return PersonExDescriptionIndex 人员描述字段Index，从0开始
                     * 
                     */
                    uint64_t GetPersonExDescriptionIndex() const;

                    /**
                     * 设置人员描述字段Index，从0开始
                     * @param _personExDescriptionIndex 人员描述字段Index，从0开始
                     * 
                     */
                    void SetPersonExDescriptionIndex(const uint64_t& _personExDescriptionIndex);

                    /**
                     * 判断参数 PersonExDescriptionIndex 是否已赋值
                     * @return PersonExDescriptionIndex 是否已赋值
                     * 
                     */
                    bool PersonExDescriptionIndexHasBeenSet() const;

                    /**
                     * 获取需要更新的人员描述字段内容
                     * @return PersonExDescription 需要更新的人员描述字段内容
                     * 
                     */
                    std::string GetPersonExDescription() const;

                    /**
                     * 设置需要更新的人员描述字段内容
                     * @param _personExDescription 需要更新的人员描述字段内容
                     * 
                     */
                    void SetPersonExDescription(const std::string& _personExDescription);

                    /**
                     * 判断参数 PersonExDescription 是否已赋值
                     * @return PersonExDescription 是否已赋值
                     * 
                     */
                    bool PersonExDescriptionHasBeenSet() const;

                private:

                    /**
                     * 人员描述字段Index，从0开始
                     */
                    uint64_t m_personExDescriptionIndex;
                    bool m_personExDescriptionIndexHasBeenSet;

                    /**
                     * 需要更新的人员描述字段内容
                     */
                    std::string m_personExDescription;
                    bool m_personExDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_PERSONEXDESCRIPTIONINFO_H_
