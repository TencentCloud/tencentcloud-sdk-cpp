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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_STANDARDVIDEORESULT_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_STANDARDVIDEORESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/HighlightsInfomation.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 标准化接口图像分析结果
                */
                class StandardVideoResult : public AbstractModel
                {
                public:
                    StandardVideoResult();
                    ~StandardVideoResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分析完成后的统计结果
                     * @return HighlightsInfo 分析完成后的统计结果
                     * 
                     */
                    std::vector<HighlightsInfomation> GetHighlightsInfo() const;

                    /**
                     * 设置分析完成后的统计结果
                     * @param _highlightsInfo 分析完成后的统计结果
                     * 
                     */
                    void SetHighlightsInfo(const std::vector<HighlightsInfomation>& _highlightsInfo);

                    /**
                     * 判断参数 HighlightsInfo 是否已赋值
                     * @return HighlightsInfo 是否已赋值
                     * 
                     */
                    bool HighlightsInfoHasBeenSet() const;

                    /**
                     * 获取状态描述
                     * @return Message 状态描述
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置状态描述
                     * @param _message 状态描述
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return Status 任务状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
                     * @param _status 任务状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 分析完成后的统计结果
                     */
                    std::vector<HighlightsInfomation> m_highlightsInfo;
                    bool m_highlightsInfoHasBeenSet;

                    /**
                     * 状态描述
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 任务状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_STANDARDVIDEORESULT_H_
