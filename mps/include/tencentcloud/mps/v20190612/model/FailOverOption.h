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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FAILOVEROPTION_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FAILOVEROPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * type FailOverOption struct 
{ FailOverType string json:"FailOverType" // 新增 冷/热备 COLDSTANDBY、HOTSTANDBY }
                */
                class FailOverOption : public AbstractModel
                {
                public:
                    FailOverOption();
                    ~FailOverOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取热备
                     * @return FailOverType 热备
                     * 
                     */
                    std::string GetFailOverType() const;

                    /**
                     * 设置热备
                     * @param _failOverType 热备
                     * 
                     */
                    void SetFailOverType(const std::string& _failOverType);

                    /**
                     * 判断参数 FailOverType 是否已赋值
                     * @return FailOverType 是否已赋值
                     * 
                     */
                    bool FailOverTypeHasBeenSet() const;

                private:

                    /**
                     * 热备
                     */
                    std::string m_failOverType;
                    bool m_failOverTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FAILOVEROPTION_H_
