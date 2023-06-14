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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTSOURCEINTERRUPTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTSOURCEINTERRUPTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/MediaCastSourceInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 点播转直播输入断流信息。
                */
                class MediaCastSourceInterruptInfo : public AbstractModel
                {
                public:
                    MediaCastSourceInterruptInfo();
                    ~MediaCastSourceInterruptInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发生断流的输入源信息。
                     * @return SourceInfo 发生断流的输入源信息。
                     * 
                     */
                    MediaCastSourceInfo GetSourceInfo() const;

                    /**
                     * 设置发生断流的输入源信息。
                     * @param _sourceInfo 发生断流的输入源信息。
                     * 
                     */
                    void SetSourceInfo(const MediaCastSourceInfo& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

                    /**
                     * 获取输入源断开原因。取值有：
<li>SystemError：系统错误；</li>
<li>Unknown：未知错误。</li>
                     * @return Reason 输入源断开原因。取值有：
<li>SystemError：系统错误；</li>
<li>Unknown：未知错误。</li>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置输入源断开原因。取值有：
<li>SystemError：系统错误；</li>
<li>Unknown：未知错误。</li>
                     * @param _reason 输入源断开原因。取值有：
<li>SystemError：系统错误；</li>
<li>Unknown：未知错误。</li>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 发生断流的输入源信息。
                     */
                    MediaCastSourceInfo m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                    /**
                     * 输入源断开原因。取值有：
<li>SystemError：系统错误；</li>
<li>Unknown：未知错误。</li>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTSOURCEINTERRUPTINFO_H_
