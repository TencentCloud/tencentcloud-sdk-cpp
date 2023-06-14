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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIRECOGNITIONRESULTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIRECOGNITIONRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiRecognitionResultItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 直播流 AI 识别结果
                */
                class LiveStreamAiRecognitionResultInfo : public AbstractModel
                {
                public:
                    LiveStreamAiRecognitionResultInfo();
                    ~LiveStreamAiRecognitionResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内容识别结果列表。
                     * @return ResultSet 内容识别结果列表。
                     * 
                     */
                    std::vector<LiveStreamAiRecognitionResultItem> GetResultSet() const;

                    /**
                     * 设置内容识别结果列表。
                     * @param _resultSet 内容识别结果列表。
                     * 
                     */
                    void SetResultSet(const std::vector<LiveStreamAiRecognitionResultItem>& _resultSet);

                    /**
                     * 判断参数 ResultSet 是否已赋值
                     * @return ResultSet 是否已赋值
                     * 
                     */
                    bool ResultSetHasBeenSet() const;

                private:

                    /**
                     * 内容识别结果列表。
                     */
                    std::vector<LiveStreamAiRecognitionResultItem> m_resultSet;
                    bool m_resultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIRECOGNITIONRESULTINFO_H_
