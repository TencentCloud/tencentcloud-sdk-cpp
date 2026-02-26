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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CREATEGLOSSARYRESPONSE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CREATEGLOSSARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * CreateGlossary返回参数结构体
                */
                class CreateGlossaryResponse : public AbstractModel
                {
                public:
                    CreateGlossaryResponse();
                    ~CreateGlossaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取术语库名称
                     * @return Name 术语库名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取术语库唯一 ID
                     * @return GlossaryId 术语库唯一 ID
                     * 
                     */
                    std::string GetGlossaryId() const;

                    /**
                     * 判断参数 GlossaryId 是否已赋值
                     * @return GlossaryId 是否已赋值
                     * 
                     */
                    bool GlossaryIdHasBeenSet() const;

                private:

                    /**
                     * 术语库名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 术语库唯一 ID
                     */
                    std::string m_glossaryId;
                    bool m_glossaryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CREATEGLOSSARYRESPONSE_H_
