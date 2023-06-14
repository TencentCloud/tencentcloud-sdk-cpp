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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_VODPULLINPUTPLAYINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_VODPULLINPUTPLAYINFO_H_

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
                * 点播文件播放信息，包含当前在播地址和该地址已播时长 。
                */
                class VodPullInputPlayInfo : public AbstractModel
                {
                public:
                    VodPullInputPlayInfo();
                    ~VodPullInputPlayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前正在播放文件 Url 。
                     * @return Url 当前正在播放文件 Url 。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置当前正在播放文件 Url 。
                     * @param _url 当前正在播放文件 Url 。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取点播文件已播放时长，单位：秒。
                     * @return TimeOffset 点播文件已播放时长，单位：秒。
                     * 
                     */
                    double GetTimeOffset() const;

                    /**
                     * 设置点播文件已播放时长，单位：秒。
                     * @param _timeOffset 点播文件已播放时长，单位：秒。
                     * 
                     */
                    void SetTimeOffset(const double& _timeOffset);

                    /**
                     * 判断参数 TimeOffset 是否已赋值
                     * @return TimeOffset 是否已赋值
                     * 
                     */
                    bool TimeOffsetHasBeenSet() const;

                private:

                    /**
                     * 当前正在播放文件 Url 。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 点播文件已播放时长，单位：秒。
                     */
                    double m_timeOffset;
                    bool m_timeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_VODPULLINPUTPLAYINFO_H_
