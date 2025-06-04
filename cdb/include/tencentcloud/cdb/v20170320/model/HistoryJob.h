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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_HISTORYJOB_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_HISTORYJOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 单条扩容历史记录
                */
                class HistoryJob : public AbstractModel
                {
                public:
                    HistoryJob();
                    ~HistoryJob() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作类型
                     * @return OperationType 操作类型
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置操作类型
                     * @param _operationType 操作类型
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取扩容类型
                     * @return ExpandType 扩容类型
                     * 
                     */
                    std::string GetExpandType() const;

                    /**
                     * 设置扩容类型
                     * @param _expandType 扩容类型
                     * 
                     */
                    void SetExpandType(const std::string& _expandType);

                    /**
                     * 判断参数 ExpandType 是否已赋值
                     * @return ExpandType 是否已赋值
                     * 
                     */
                    bool ExpandTypeHasBeenSet() const;

                    /**
                     * 获取扩容开始时间
说明：此项显示的格式是 int 类型的 unix 时间戳
                     * @return StartTime 扩容开始时间
说明：此项显示的格式是 int 类型的 unix 时间戳
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置扩容开始时间
说明：此项显示的格式是 int 类型的 unix 时间戳
                     * @param _startTime 扩容开始时间
说明：此项显示的格式是 int 类型的 unix 时间戳
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取扩容结束时间
说明：此项显示的格式是 int 类型的 unix 时间戳
                     * @return EndTime 扩容结束时间
说明：此项显示的格式是 int 类型的 unix 时间戳
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置扩容结束时间
说明：此项显示的格式是 int 类型的 unix 时间戳
                     * @param _endTime 扩容结束时间
说明：此项显示的格式是 int 类型的 unix 时间戳
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取扩容前核数
                     * @return OldCpu 扩容前核数
                     * 
                     */
                    int64_t GetOldCpu() const;

                    /**
                     * 设置扩容前核数
                     * @param _oldCpu 扩容前核数
                     * 
                     */
                    void SetOldCpu(const int64_t& _oldCpu);

                    /**
                     * 判断参数 OldCpu 是否已赋值
                     * @return OldCpu 是否已赋值
                     * 
                     */
                    bool OldCpuHasBeenSet() const;

                    /**
                     * 获取扩容后核数
                     * @return NewCpu 扩容后核数
                     * 
                     */
                    int64_t GetNewCpu() const;

                    /**
                     * 设置扩容后核数
                     * @param _newCpu 扩容后核数
                     * 
                     */
                    void SetNewCpu(const int64_t& _newCpu);

                    /**
                     * 判断参数 NewCpu 是否已赋值
                     * @return NewCpu 是否已赋值
                     * 
                     */
                    bool NewCpuHasBeenSet() const;

                    /**
                     * 获取增减的cpu数
                     * @return ExtendCPUNum 增减的cpu数
                     * 
                     */
                    int64_t GetExtendCPUNum() const;

                    /**
                     * 设置增减的cpu数
                     * @param _extendCPUNum 增减的cpu数
                     * 
                     */
                    void SetExtendCPUNum(const int64_t& _extendCPUNum);

                    /**
                     * 判断参数 ExtendCPUNum 是否已赋值
                     * @return ExtendCPUNum 是否已赋值
                     * 
                     */
                    bool ExtendCPUNumHasBeenSet() const;

                    /**
                     * 获取extend_failed操作上报
                     * @return Error extend_failed操作上报
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置extend_failed操作上报
                     * @param _error extend_failed操作上报
                     * 
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * 操作类型
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 扩容类型
                     */
                    std::string m_expandType;
                    bool m_expandTypeHasBeenSet;

                    /**
                     * 扩容开始时间
说明：此项显示的格式是 int 类型的 unix 时间戳
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 扩容结束时间
说明：此项显示的格式是 int 类型的 unix 时间戳
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 扩容前核数
                     */
                    int64_t m_oldCpu;
                    bool m_oldCpuHasBeenSet;

                    /**
                     * 扩容后核数
                     */
                    int64_t m_newCpu;
                    bool m_newCpuHasBeenSet;

                    /**
                     * 增减的cpu数
                     */
                    int64_t m_extendCPUNum;
                    bool m_extendCPUNumHasBeenSet;

                    /**
                     * extend_failed操作上报
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_HISTORYJOB_H_
