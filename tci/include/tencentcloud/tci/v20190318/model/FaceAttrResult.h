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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_FACEATTRRESULT_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_FACEATTRRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * FaceAttrResult
                */
                class FaceAttrResult : public AbstractModel
                {
                public:
                    FaceAttrResult();
                    ~FaceAttrResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取年龄
                     * @return Age 年龄
                     * 
                     */
                    int64_t GetAge() const;

                    /**
                     * 设置年龄
                     * @param _age 年龄
                     * 
                     */
                    void SetAge(const int64_t& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取性别
                     * @return Sex 性别
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置性别
                     * @param _sex 性别
                     * 
                     */
                    void SetSex(const std::string& _sex);

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                private:

                    /**
                     * 年龄
                     */
                    int64_t m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 性别
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_FACEATTRRESULT_H_
