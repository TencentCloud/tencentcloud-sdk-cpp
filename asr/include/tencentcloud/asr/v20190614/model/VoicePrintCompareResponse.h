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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTCOMPARERESPONSE_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTCOMPARERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/asr/v20190614/model/VoicePrintCompareData.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * VoicePrintCompare返回参数结构体
                */
                class VoicePrintCompareResponse : public AbstractModel
                {
                public:
                    VoicePrintCompareResponse();
                    ~VoicePrintCompareResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取音频声纹比对结果，包含相似度打分
                     * @return Data 音频声纹比对结果，包含相似度打分
                     * 
                     */
                    VoicePrintCompareData GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 音频声纹比对结果，包含相似度打分
                     */
                    VoicePrintCompareData m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTCOMPARERESPONSE_H_
