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

#ifndef TENCENTCLOUD_APCAS_V20201127_MODEL_LISTMODEL_H_
#define TENCENTCLOUD_APCAS_V20201127_MODEL_LISTMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            namespace Model
            {
                /**
                * 任务列表项Model
                */
                class ListModel : public AbstractModel
                {
                public:
                    ListModel();
                    ~ListModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return ID 任务ID
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置任务ID
                     * @param ID 任务ID
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param TaskName 任务名称
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取任务起始时间（13位数字的UNIX 时间戳，单位毫秒 ）
                     * @return StartTime 任务起始时间（13位数字的UNIX 时间戳，单位毫秒 ）
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置任务起始时间（13位数字的UNIX 时间戳，单位毫秒 ）
                     * @param StartTime 任务起始时间（13位数字的UNIX 时间戳，单位毫秒 ）
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取任务状态 0:默认状态 1:任务正在运行 2:任务运行成功 3:任务运行失败
                     * @return Status 任务状态 0:默认状态 1:任务正在运行 2:任务运行成功 3:任务运行失败
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置任务状态 0:默认状态 1:任务正在运行 2:任务运行成功 3:任务运行失败
                     * @param Status 任务状态 0:默认状态 1:任务正在运行 2:任务运行成功 3:任务运行失败
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取画像覆盖人数
                     * @return Available 画像覆盖人数
                     */
                    uint64_t GetAvailable() const;

                    /**
                     * 设置画像覆盖人数
                     * @param Available 画像覆盖人数
                     */
                    void SetAvailable(const uint64_t& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取任务失败描述信息
                     * @return ErrMsg 任务失败描述信息
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置任务失败描述信息
                     * @param ErrMsg 任务失败描述信息
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务起始时间（13位数字的UNIX 时间戳，单位毫秒 ）
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务状态 0:默认状态 1:任务正在运行 2:任务运行成功 3:任务运行失败
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 画像覆盖人数
                     */
                    uint64_t m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * 任务失败描述信息
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_MODEL_LISTMODEL_H_
