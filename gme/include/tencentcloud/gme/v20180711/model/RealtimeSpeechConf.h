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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_REALTIMESPEECHCONF_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_REALTIMESPEECHCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 实时语音配置数据
                */
                class RealtimeSpeechConf : public AbstractModel
                {
                public:
                    RealtimeSpeechConf();
                    ~RealtimeSpeechConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实时语音服务开关，取值：open/close
                     * @return Status 实时语音服务开关，取值：open/close
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实时语音服务开关，取值：open/close
                     * @param _status 实时语音服务开关，取值：open/close
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实时语音音质类型，取值：high-高音质 ordinary-普通音质
                     * @return Quality 实时语音音质类型，取值：high-高音质 ordinary-普通音质
                     * 
                     */
                    std::string GetQuality() const;

                    /**
                     * 设置实时语音音质类型，取值：high-高音质 ordinary-普通音质
                     * @param _quality 实时语音音质类型，取值：high-高音质 ordinary-普通音质
                     * 
                     */
                    void SetQuality(const std::string& _quality);

                    /**
                     * 判断参数 Quality 是否已赋值
                     * @return Quality 是否已赋值
                     * 
                     */
                    bool QualityHasBeenSet() const;

                private:

                    /**
                     * 实时语音服务开关，取值：open/close
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实时语音音质类型，取值：high-高音质 ordinary-普通音质
                     */
                    std::string m_quality;
                    bool m_qualityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_REALTIMESPEECHCONF_H_
