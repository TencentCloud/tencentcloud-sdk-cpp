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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_EXAMPLEDIFFICULTIES_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_EXAMPLEDIFFICULTIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 案例难度详情
                */
                class ExampleDifficulties : public AbstractModel
                {
                public:
                    ExampleDifficulties();
                    ~ExampleDifficulties() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>案例难度</p>
                     * @return Difficulty <p>案例难度</p>
                     * 
                     */
                    std::string GetDifficulty() const;

                    /**
                     * 设置<p>案例难度</p>
                     * @param _difficulty <p>案例难度</p>
                     * 
                     */
                    void SetDifficulty(const std::string& _difficulty);

                    /**
                     * 判断参数 Difficulty 是否已赋值
                     * @return Difficulty 是否已赋值
                     * 
                     */
                    bool DifficultyHasBeenSet() const;

                private:

                    /**
                     * <p>案例难度</p>
                     */
                    std::string m_difficulty;
                    bool m_difficultyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_EXAMPLEDIFFICULTIES_H_
