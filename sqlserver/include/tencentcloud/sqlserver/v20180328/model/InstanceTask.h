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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INSTANCETASK_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INSTANCETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 实例异步任务
                */
                class InstanceTask : public AbstractModel
                {
                public:
                    InstanceTask();
                    ~InstanceTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一id
                     * @return Id 唯一id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置唯一id
                     * @param _id 唯一id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Job类型
                     * @return Type Job类型
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Job类型
                     * @param _type Job类型
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Job状态
                     * @return Status Job状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Job状态
                     * @param _status Job状态
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
                     * 获取进度百分比0~100
                     * @return Progress 进度百分比0~100
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置进度百分比0~100
                     * @param _progress 进度百分比0~100
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取错误代码
                     * @return ErrorCode 错误代码
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置错误代码
                     * @param _errorCode 错误代码
                     * 
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取错误信息描述
                     * @return Message 错误信息描述
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误信息描述
                     * @param _message 错误信息描述
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 唯一id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Job类型
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Job状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 进度百分比0~100
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 错误代码
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 错误信息描述
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INSTANCETASK_H_
