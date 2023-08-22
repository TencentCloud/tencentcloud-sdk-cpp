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

#ifndef TENCENTCLOUD_TTS_V20190823_MODEL_DESCRIBETTSTASKSTATUSRESPDATA_H_
#define TENCENTCLOUD_TTS_V20190823_MODEL_DESCRIBETTSTASKSTATUSRESPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tts/v20190823/model/Subtitle.h>


namespace TencentCloud
{
    namespace Tts
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 获取异步合成结果的返回参数
                */
                class DescribeTtsTaskStatusRespData : public AbstractModel
                {
                public:
                    DescribeTtsTaskStatusRespData();
                    ~DescribeTtsTaskStatusRespData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务标识。
                     * @return TaskId 任务标识。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务标识。
                     * @param _taskId 任务标识。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务状态码，0：任务等待，1：任务执行中，2：任务成功，3：任务失败。
                     * @return Status 任务状态码，0：任务等待，1：任务执行中，2：任务成功，3：任务失败。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态码，0：任务等待，1：任务执行中，2：任务成功，3：任务失败。
                     * @param _status 任务状态码，0：任务等待，1：任务执行中，2：任务成功，3：任务失败。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务状态，waiting：任务等待，doing：任务执行中，success：任务成功，failed：任务失败。
                     * @return StatusStr 任务状态，waiting：任务等待，doing：任务执行中，success：任务成功，failed：任务失败。
                     * 
                     */
                    std::string GetStatusStr() const;

                    /**
                     * 设置任务状态，waiting：任务等待，doing：任务执行中，success：任务成功，failed：任务失败。
                     * @param _statusStr 任务状态，waiting：任务等待，doing：任务执行中，success：任务成功，failed：任务失败。
                     * 
                     */
                    void SetStatusStr(const std::string& _statusStr);

                    /**
                     * 判断参数 StatusStr 是否已赋值
                     * @return StatusStr 是否已赋值
                     * 
                     */
                    bool StatusStrHasBeenSet() const;

                    /**
                     * 获取合成音频COS地址（链接有效期1天）。
                     * @return ResultUrl 合成音频COS地址（链接有效期1天）。
                     * 
                     */
                    std::string GetResultUrl() const;

                    /**
                     * 设置合成音频COS地址（链接有效期1天）。
                     * @param _resultUrl 合成音频COS地址（链接有效期1天）。
                     * 
                     */
                    void SetResultUrl(const std::string& _resultUrl);

                    /**
                     * 判断参数 ResultUrl 是否已赋值
                     * @return ResultUrl 是否已赋值
                     * 
                     */
                    bool ResultUrlHasBeenSet() const;

                    /**
                     * 获取时间戳信息，若未开启时间戳，则返回空数组。
                     * @return Subtitles 时间戳信息，若未开启时间戳，则返回空数组。
                     * 
                     */
                    std::vector<Subtitle> GetSubtitles() const;

                    /**
                     * 设置时间戳信息，若未开启时间戳，则返回空数组。
                     * @param _subtitles 时间戳信息，若未开启时间戳，则返回空数组。
                     * 
                     */
                    void SetSubtitles(const std::vector<Subtitle>& _subtitles);

                    /**
                     * 判断参数 Subtitles 是否已赋值
                     * @return Subtitles 是否已赋值
                     * 
                     */
                    bool SubtitlesHasBeenSet() const;

                    /**
                     * 获取失败原因说明。
                     * @return ErrorMsg 失败原因说明。
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置失败原因说明。
                     * @param _errorMsg 失败原因说明。
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * 任务标识。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务状态码，0：任务等待，1：任务执行中，2：任务成功，3：任务失败。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务状态，waiting：任务等待，doing：任务执行中，success：任务成功，failed：任务失败。
                     */
                    std::string m_statusStr;
                    bool m_statusStrHasBeenSet;

                    /**
                     * 合成音频COS地址（链接有效期1天）。
                     */
                    std::string m_resultUrl;
                    bool m_resultUrlHasBeenSet;

                    /**
                     * 时间戳信息，若未开启时间戳，则返回空数组。
                     */
                    std::vector<Subtitle> m_subtitles;
                    bool m_subtitlesHasBeenSet;

                    /**
                     * 失败原因说明。
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TTS_V20190823_MODEL_DESCRIBETTSTASKSTATUSRESPDATA_H_
