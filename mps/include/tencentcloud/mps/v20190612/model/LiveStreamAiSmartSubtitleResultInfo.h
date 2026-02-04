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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAISMARTSUBTITLERESULTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAISMARTSUBTITLERESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveSmartSubtitleResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 直播智能字幕结果
                */
                class LiveStreamAiSmartSubtitleResultInfo : public AbstractModel
                {
                public:
                    LiveStreamAiSmartSubtitleResultInfo();
                    ~LiveStreamAiSmartSubtitleResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取直播智能字幕任务结果列表。
                     * @return SmartSubtitleResult 直播智能字幕任务结果列表。
                     * 
                     */
                    std::vector<LiveSmartSubtitleResult> GetSmartSubtitleResult() const;

                    /**
                     * 设置直播智能字幕任务结果列表。
                     * @param _smartSubtitleResult 直播智能字幕任务结果列表。
                     * 
                     */
                    void SetSmartSubtitleResult(const std::vector<LiveSmartSubtitleResult>& _smartSubtitleResult);

                    /**
                     * 判断参数 SmartSubtitleResult 是否已赋值
                     * @return SmartSubtitleResult 是否已赋值
                     * 
                     */
                    bool SmartSubtitleResultHasBeenSet() const;

                private:

                    /**
                     * 直播智能字幕任务结果列表。
                     */
                    std::vector<LiveSmartSubtitleResult> m_smartSubtitleResult;
                    bool m_smartSubtitleResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAISMARTSUBTITLERESULTINFO_H_
