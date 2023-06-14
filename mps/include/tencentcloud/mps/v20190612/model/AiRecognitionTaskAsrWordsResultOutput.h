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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKASRWORDSRESULTOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKASRWORDSRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskAsrWordsResultItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 语音关键词识别输出。
                */
                class AiRecognitionTaskAsrWordsResultOutput : public AbstractModel
                {
                public:
                    AiRecognitionTaskAsrWordsResultOutput();
                    ~AiRecognitionTaskAsrWordsResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取语音关键词识别结果集。
                     * @return ResultSet 语音关键词识别结果集。
                     * 
                     */
                    std::vector<AiRecognitionTaskAsrWordsResultItem> GetResultSet() const;

                    /**
                     * 设置语音关键词识别结果集。
                     * @param _resultSet 语音关键词识别结果集。
                     * 
                     */
                    void SetResultSet(const std::vector<AiRecognitionTaskAsrWordsResultItem>& _resultSet);

                    /**
                     * 判断参数 ResultSet 是否已赋值
                     * @return ResultSet 是否已赋值
                     * 
                     */
                    bool ResultSetHasBeenSet() const;

                private:

                    /**
                     * 语音关键词识别结果集。
                     */
                    std::vector<AiRecognitionTaskAsrWordsResultItem> m_resultSet;
                    bool m_resultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKASRWORDSRESULTOUTPUT_H_
