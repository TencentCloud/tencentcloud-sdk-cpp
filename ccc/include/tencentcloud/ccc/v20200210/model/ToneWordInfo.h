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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_TONEWORDINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_TONEWORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/ZHToneWordsInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 承接语气词信息
                */
                class ToneWordInfo : public AbstractModel
                {
                public:
                    ToneWordInfo();
                    ~ToneWordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取首句超时时间，单位秒
                     * @return FirstSentenceTimeout 首句超时时间，单位秒
                     * 
                     */
                    double GetFirstSentenceTimeout() const;

                    /**
                     * 设置首句超时时间，单位秒
                     * @param _firstSentenceTimeout 首句超时时间，单位秒
                     * 
                     */
                    void SetFirstSentenceTimeout(const double& _firstSentenceTimeout);

                    /**
                     * 判断参数 FirstSentenceTimeout 是否已赋值
                     * @return FirstSentenceTimeout 是否已赋值
                     * 
                     */
                    bool FirstSentenceTimeoutHasBeenSet() const;

                    /**
                     * 获取承接语气词
                     * @return ZHToneWords 承接语气词
                     * 
                     */
                    ZHToneWordsInfo GetZHToneWords() const;

                    /**
                     * 设置承接语气词
                     * @param _zHToneWords 承接语气词
                     * 
                     */
                    void SetZHToneWords(const ZHToneWordsInfo& _zHToneWords);

                    /**
                     * 判断参数 ZHToneWords 是否已赋值
                     * @return ZHToneWords 是否已赋值
                     * 
                     */
                    bool ZHToneWordsHasBeenSet() const;

                private:

                    /**
                     * 首句超时时间，单位秒
                     */
                    double m_firstSentenceTimeout;
                    bool m_firstSentenceTimeoutHasBeenSet;

                    /**
                     * 承接语气词
                     */
                    ZHToneWordsInfo m_zHToneWords;
                    bool m_zHToneWordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_TONEWORDINFO_H_
