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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWTERRORISMOCRTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWTERRORISMOCRTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 音视频审核 Ocr 文字涉及令人不安全的信息的任务输入参数类型
                */
                class AiReviewTerrorismOcrTaskInput : public AbstractModel
                {
                public:
                    AiReviewTerrorismOcrTaskInput();
                    ~AiReviewTerrorismOcrTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取鉴别涉及令人不安全的信息的模板 ID。
                     * @return Definition 鉴别涉及令人不安全的信息的模板 ID。
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置鉴别涉及令人不安全的信息的模板 ID。
                     * @param _definition 鉴别涉及令人不安全的信息的模板 ID。
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                private:

                    /**
                     * 鉴别涉及令人不安全的信息的模板 ID。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWTERRORISMOCRTASKINPUT_H_
