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

#ifndef TENCENTCLOUD_TTS_V20190823_MODEL_DESCRIBETTSTASKSTATUSRESPONSE_H_
#define TENCENTCLOUD_TTS_V20190823_MODEL_DESCRIBETTSTASKSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tts/v20190823/model/DescribeTtsTaskStatusRespData.h>


namespace TencentCloud
{
    namespace Tts
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeTtsTaskStatus返回参数结构体
                */
                class DescribeTtsTaskStatusResponse : public AbstractModel
                {
                public:
                    DescribeTtsTaskStatusResponse();
                    ~DescribeTtsTaskStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务状态返回
                     * @return Data 任务状态返回
                     * 
                     */
                    DescribeTtsTaskStatusRespData GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 任务状态返回
                     */
                    DescribeTtsTaskStatusRespData m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TTS_V20190823_MODEL_DESCRIBETTSTASKSTATUSRESPONSE_H_
