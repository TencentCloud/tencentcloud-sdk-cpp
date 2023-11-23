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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHOICE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHOICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/Delta.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 返回的回复, 支持多个
                */
                class Choice : public AbstractModel
                {
                public:
                    Choice();
                    ~Choice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流式结束标志位，为 stop 则表示尾包。
                     * @return FinishReason 流式结束标志位，为 stop 则表示尾包。
                     * 
                     */
                    std::string GetFinishReason() const;

                    /**
                     * 设置流式结束标志位，为 stop 则表示尾包。
                     * @param _finishReason 流式结束标志位，为 stop 则表示尾包。
                     * 
                     */
                    void SetFinishReason(const std::string& _finishReason);

                    /**
                     * 判断参数 FinishReason 是否已赋值
                     * @return FinishReason 是否已赋值
                     * 
                     */
                    bool FinishReasonHasBeenSet() const;

                    /**
                     * 获取返回值。
                     * @return Delta 返回值。
                     * 
                     */
                    Delta GetDelta() const;

                    /**
                     * 设置返回值。
                     * @param _delta 返回值。
                     * 
                     */
                    void SetDelta(const Delta& _delta);

                    /**
                     * 判断参数 Delta 是否已赋值
                     * @return Delta 是否已赋值
                     * 
                     */
                    bool DeltaHasBeenSet() const;

                private:

                    /**
                     * 流式结束标志位，为 stop 则表示尾包。
                     */
                    std::string m_finishReason;
                    bool m_finishReasonHasBeenSet;

                    /**
                     * 返回值。
                     */
                    Delta m_delta;
                    bool m_deltaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHOICE_H_
