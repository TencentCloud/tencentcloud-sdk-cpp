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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_VODPULLINPUTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_VODPULLINPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 点播拉流信息，包括输入拉流地址和播放次数。
                */
                class VodPullInputInfo : public AbstractModel
                {
                public:
                    VodPullInputInfo();
                    ~VodPullInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取点播输入拉流 URL 。
                     * @return InputUrls 点播输入拉流 URL 。
                     * 
                     */
                    std::vector<std::string> GetInputUrls() const;

                    /**
                     * 设置点播输入拉流 URL 。
                     * @param _inputUrls 点播输入拉流 URL 。
                     * 
                     */
                    void SetInputUrls(const std::vector<std::string>& _inputUrls);

                    /**
                     * 判断参数 InputUrls 是否已赋值
                     * @return InputUrls 是否已赋值
                     * 
                     */
                    bool InputUrlsHasBeenSet() const;

                    /**
                     * 获取播放次数，取值有：
<li>-1 : 循环播放，直到转推结束；</li>
<li>0 : 不循环；</li>
<li>大于0 : 具体循环次数，次数和时间以先结束的为准。</li>
默认不循环。
                     * @return LoopTimes 播放次数，取值有：
<li>-1 : 循环播放，直到转推结束；</li>
<li>0 : 不循环；</li>
<li>大于0 : 具体循环次数，次数和时间以先结束的为准。</li>
默认不循环。
                     * 
                     */
                    int64_t GetLoopTimes() const;

                    /**
                     * 设置播放次数，取值有：
<li>-1 : 循环播放，直到转推结束；</li>
<li>0 : 不循环；</li>
<li>大于0 : 具体循环次数，次数和时间以先结束的为准。</li>
默认不循环。
                     * @param _loopTimes 播放次数，取值有：
<li>-1 : 循环播放，直到转推结束；</li>
<li>0 : 不循环；</li>
<li>大于0 : 具体循环次数，次数和时间以先结束的为准。</li>
默认不循环。
                     * 
                     */
                    void SetLoopTimes(const int64_t& _loopTimes);

                    /**
                     * 判断参数 LoopTimes 是否已赋值
                     * @return LoopTimes 是否已赋值
                     * 
                     */
                    bool LoopTimesHasBeenSet() const;

                private:

                    /**
                     * 点播输入拉流 URL 。
                     */
                    std::vector<std::string> m_inputUrls;
                    bool m_inputUrlsHasBeenSet;

                    /**
                     * 播放次数，取值有：
<li>-1 : 循环播放，直到转推结束；</li>
<li>0 : 不循环；</li>
<li>大于0 : 具体循环次数，次数和时间以先结束的为准。</li>
默认不循环。
                     */
                    int64_t m_loopTimes;
                    bool m_loopTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_VODPULLINPUTINFO_H_
