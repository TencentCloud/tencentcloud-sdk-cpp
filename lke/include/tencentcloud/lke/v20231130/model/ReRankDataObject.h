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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_RERANKDATAOBJECT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_RERANKDATAOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 重排数据, 计算2段内容的关联性
                */
                class ReRankDataObject : public AbstractModel
                {
                public:
                    ReRankDataObject();
                    ~ReRankDataObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第一段内容
                     * @return PromptA 第一段内容
                     * 
                     */
                    std::string GetPromptA() const;

                    /**
                     * 设置第一段内容
                     * @param _promptA 第一段内容
                     * 
                     */
                    void SetPromptA(const std::string& _promptA);

                    /**
                     * 判断参数 PromptA 是否已赋值
                     * @return PromptA 是否已赋值
                     * 
                     */
                    bool PromptAHasBeenSet() const;

                    /**
                     * 获取第二段内容
                     * @return PromptB 第二段内容
                     * 
                     */
                    std::string GetPromptB() const;

                    /**
                     * 设置第二段内容
                     * @param _promptB 第二段内容
                     * 
                     */
                    void SetPromptB(const std::string& _promptB);

                    /**
                     * 判断参数 PromptB 是否已赋值
                     * @return PromptB 是否已赋值
                     * 
                     */
                    bool PromptBHasBeenSet() const;

                private:

                    /**
                     * 第一段内容
                     */
                    std::string m_promptA;
                    bool m_promptAHasBeenSet;

                    /**
                     * 第二段内容
                     */
                    std::string m_promptB;
                    bool m_promptBHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_RERANKDATAOBJECT_H_
