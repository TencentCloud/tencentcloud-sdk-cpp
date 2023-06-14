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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_SCANVOICERESPONSE_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_SCANVOICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/ScanVoiceResult.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * ScanVoice返回参数结构体
                */
                class ScanVoiceResponse : public AbstractModel
                {
                public:
                    ScanVoiceResponse();
                    ~ScanVoiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取语音检测返回。Data 字段是 JSON 数组，每一个元素包含：<li>DataId： 请求中对应的 DataId。</li>
<li>TaskID ：该检测任务的 ID，用于轮询语音检测结果。</li>
                     * @return Data 语音检测返回。Data 字段是 JSON 数组，每一个元素包含：<li>DataId： 请求中对应的 DataId。</li>
<li>TaskID ：该检测任务的 ID，用于轮询语音检测结果。</li>
                     * 
                     */
                    std::vector<ScanVoiceResult> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 语音检测返回。Data 字段是 JSON 数组，每一个元素包含：<li>DataId： 请求中对应的 DataId。</li>
<li>TaskID ：该检测任务的 ID，用于轮询语音检测结果。</li>
                     */
                    std::vector<ScanVoiceResult> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_SCANVOICERESPONSE_H_
