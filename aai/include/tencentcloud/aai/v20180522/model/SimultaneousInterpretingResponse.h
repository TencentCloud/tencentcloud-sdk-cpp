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

#ifndef TENCENTCLOUD_AAI_V20180522_MODEL_SIMULTANEOUSINTERPRETINGRESPONSE_H_
#define TENCENTCLOUD_AAI_V20180522_MODEL_SIMULTANEOUSINTERPRETINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aai
    {
        namespace V20180522
        {
            namespace Model
            {
                /**
                * SimultaneousInterpreting返回参数结构体
                */
                class SimultaneousInterpretingResponse : public AbstractModel
                {
                public:
                    SimultaneousInterpretingResponse();
                    ~SimultaneousInterpretingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取语音识别的结果
                     * @return AsrText 语音识别的结果
                     * 
                     */
                    std::string GetAsrText() const;

                    /**
                     * 判断参数 AsrText 是否已赋值
                     * @return AsrText 是否已赋值
                     * 
                     */
                    bool AsrTextHasBeenSet() const;

                    /**
                     * 获取机器翻译的结果
                     * @return NmtText 机器翻译的结果
                     * 
                     */
                    std::string GetNmtText() const;

                    /**
                     * 判断参数 NmtText 是否已赋值
                     * @return NmtText 是否已赋值
                     * 
                     */
                    bool NmtTextHasBeenSet() const;

                private:

                    /**
                     * 语音识别的结果
                     */
                    std::string m_asrText;
                    bool m_asrTextHasBeenSet;

                    /**
                     * 机器翻译的结果
                     */
                    std::string m_nmtText;
                    bool m_nmtTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AAI_V20180522_MODEL_SIMULTANEOUSINTERPRETINGRESPONSE_H_
