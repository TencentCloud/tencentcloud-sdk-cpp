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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_RULEIDCONFIG_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_RULEIDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * RuleId相关配置
                */
                class RuleIdConfig : public AbstractModel
                {
                public:
                    RuleIdConfig();
                    ~RuleIdConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取意愿核身过程中识别用户的回答意图，开启后除了IntentionQuestions的Answers列表中的标准回答会通过，近似意图的回答也会通过，默认不开启。
                     * @return IntentionRecognition 意愿核身过程中识别用户的回答意图，开启后除了IntentionQuestions的Answers列表中的标准回答会通过，近似意图的回答也会通过，默认不开启。
                     * 
                     */
                    bool GetIntentionRecognition() const;

                    /**
                     * 设置意愿核身过程中识别用户的回答意图，开启后除了IntentionQuestions的Answers列表中的标准回答会通过，近似意图的回答也会通过，默认不开启。
                     * @param _intentionRecognition 意愿核身过程中识别用户的回答意图，开启后除了IntentionQuestions的Answers列表中的标准回答会通过，近似意图的回答也会通过，默认不开启。
                     * 
                     */
                    void SetIntentionRecognition(const bool& _intentionRecognition);

                    /**
                     * 判断参数 IntentionRecognition 是否已赋值
                     * @return IntentionRecognition 是否已赋值
                     * 
                     */
                    bool IntentionRecognitionHasBeenSet() const;

                private:

                    /**
                     * 意愿核身过程中识别用户的回答意图，开启后除了IntentionQuestions的Answers列表中的标准回答会通过，近似意图的回答也会通过，默认不开启。
                     */
                    bool m_intentionRecognition;
                    bool m_intentionRecognitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_RULEIDCONFIG_H_
