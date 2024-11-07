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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELRECORDASRRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELRECORDASRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/AsrData.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeTelRecordAsr返回参数结构体
                */
                class DescribeTelRecordAsrResponse : public AbstractModel
                {
                public:
                    DescribeTelRecordAsrResponse();
                    ~DescribeTelRecordAsrResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取录音转文本信息
                     * @return AsrDataList 录音转文本信息
                     * 
                     */
                    std::vector<AsrData> GetAsrDataList() const;

                    /**
                     * 判断参数 AsrDataList 是否已赋值
                     * @return AsrDataList 是否已赋值
                     * 
                     */
                    bool AsrDataListHasBeenSet() const;

                private:

                    /**
                     * 录音转文本信息
                     */
                    std::vector<AsrData> m_asrDataList;
                    bool m_asrDataListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELRECORDASRRESPONSE_H_
