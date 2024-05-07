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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_PREVIEWLOGSTATISTIC_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_PREVIEWLOGSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 预览数据详情
                */
                class PreviewLogStatistic : public AbstractModel
                {
                public:
                    PreviewLogStatistic();
                    ~PreviewLogStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志内容
                     * @return LogContent 日志内容
                     * 
                     */
                    std::string GetLogContent() const;

                    /**
                     * 设置日志内容
                     * @param _logContent 日志内容
                     * 
                     */
                    void SetLogContent(const std::string& _logContent);

                    /**
                     * 判断参数 LogContent 是否已赋值
                     * @return LogContent 是否已赋值
                     * 
                     */
                    bool LogContentHasBeenSet() const;

                    /**
                     * 获取行号。从0开始
                     * @return LineNum 行号。从0开始
                     * 
                     */
                    int64_t GetLineNum() const;

                    /**
                     * 设置行号。从0开始
                     * @param _lineNum 行号。从0开始
                     * 
                     */
                    void SetLineNum(const int64_t& _lineNum);

                    /**
                     * 判断参数 LineNum 是否已赋值
                     * @return LineNum 是否已赋值
                     * 
                     */
                    bool LineNumHasBeenSet() const;

                    /**
                     * 获取目标日志主题
                     * @return DstTopicId 目标日志主题
                     * 
                     */
                    std::string GetDstTopicId() const;

                    /**
                     * 设置目标日志主题
                     * @param _dstTopicId 目标日志主题
                     * 
                     */
                    void SetDstTopicId(const std::string& _dstTopicId);

                    /**
                     * 判断参数 DstTopicId 是否已赋值
                     * @return DstTopicId 是否已赋值
                     * 
                     */
                    bool DstTopicIdHasBeenSet() const;

                    /**
                     * 获取失败错误信息， 空字符串""表示正常
                     * @return FailReason 失败错误信息， 空字符串""表示正常
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置失败错误信息， 空字符串""表示正常
                     * @param _failReason 失败错误信息， 空字符串""表示正常
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取日志时间，格式：`2024-05-07 17:13:17.105`

- 入参时无效
- 出参时有效，为日志中的时间格式
                     * @return Time 日志时间，格式：`2024-05-07 17:13:17.105`

- 入参时无效
- 出参时有效，为日志中的时间格式
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置日志时间，格式：`2024-05-07 17:13:17.105`

- 入参时无效
- 出参时有效，为日志中的时间格式
                     * @param _time 日志时间，格式：`2024-05-07 17:13:17.105`

- 入参时无效
- 出参时有效，为日志中的时间格式
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取目标topic-name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstTopicName 目标topic-name
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetDstTopicName() const;

                    /**
                     * 设置目标topic-name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dstTopicName 目标topic-name
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetDstTopicName(const std::string& _dstTopicName);

                    /**
                     * 判断参数 DstTopicName 是否已赋值
                     * @return DstTopicName 是否已赋值
                     * @deprecated
                     */
                    bool DstTopicNameHasBeenSet() const;

                private:

                    /**
                     * 日志内容
                     */
                    std::string m_logContent;
                    bool m_logContentHasBeenSet;

                    /**
                     * 行号。从0开始
                     */
                    int64_t m_lineNum;
                    bool m_lineNumHasBeenSet;

                    /**
                     * 目标日志主题
                     */
                    std::string m_dstTopicId;
                    bool m_dstTopicIdHasBeenSet;

                    /**
                     * 失败错误信息， 空字符串""表示正常
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * 日志时间，格式：`2024-05-07 17:13:17.105`

- 入参时无效
- 出参时有效，为日志中的时间格式
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 目标topic-name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dstTopicName;
                    bool m_dstTopicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_PREVIEWLOGSTATISTIC_H_
