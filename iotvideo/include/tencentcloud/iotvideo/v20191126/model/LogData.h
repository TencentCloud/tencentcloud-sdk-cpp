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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_LOGDATA_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_LOGDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * 设备日志信息
                */
                class LogData : public AbstractModel
                {
                public:
                    LogData();
                    ~LogData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发生时间 UNIX时间戳，单位秒
                     * @return Occurtime 发生时间 UNIX时间戳，单位秒
                     * 
                     */
                    uint64_t GetOccurtime() const;

                    /**
                     * 设置发生时间 UNIX时间戳，单位秒
                     * @param _occurtime 发生时间 UNIX时间戳，单位秒
                     * 
                     */
                    void SetOccurtime(const uint64_t& _occurtime);

                    /**
                     * 判断参数 Occurtime 是否已赋值
                     * @return Occurtime 是否已赋值
                     * 
                     */
                    bool OccurtimeHasBeenSet() const;

                    /**
                     * 获取日志类型 1在线状态变更 2FP变更 3SP变更 4CO控制 5ST变更 6EV事件
                     * @return LogType 日志类型 1在线状态变更 2FP变更 3SP变更 4CO控制 5ST变更 6EV事件
                     * 
                     */
                    uint64_t GetLogType() const;

                    /**
                     * 设置日志类型 1在线状态变更 2FP变更 3SP变更 4CO控制 5ST变更 6EV事件
                     * @param _logType 日志类型 1在线状态变更 2FP变更 3SP变更 4CO控制 5ST变更 6EV事件
                     * 
                     */
                    void SetLogType(const uint64_t& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取物模型对象索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataObject 物模型对象索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataObject() const;

                    /**
                     * 设置物模型对象索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataObject 物模型对象索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataObject(const std::string& _dataObject);

                    /**
                     * 判断参数 DataObject 是否已赋值
                     * @return DataObject 是否已赋值
                     * 
                     */
                    bool DataObjectHasBeenSet() const;

                    /**
                     * 获取物模型旧值  json串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldValue 物模型旧值  json串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOldValue() const;

                    /**
                     * 设置物模型旧值  json串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oldValue 物模型旧值  json串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOldValue(const std::string& _oldValue);

                    /**
                     * 判断参数 OldValue 是否已赋值
                     * @return OldValue 是否已赋值
                     * 
                     */
                    bool OldValueHasBeenSet() const;

                    /**
                     * 获取物模型新值  json串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewValue 物模型新值  json串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNewValue() const;

                    /**
                     * 设置物模型新值  json串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _newValue 物模型新值  json串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNewValue(const std::string& _newValue);

                    /**
                     * 判断参数 NewValue 是否已赋值
                     * @return NewValue 是否已赋值
                     * 
                     */
                    bool NewValueHasBeenSet() const;

                private:

                    /**
                     * 发生时间 UNIX时间戳，单位秒
                     */
                    uint64_t m_occurtime;
                    bool m_occurtimeHasBeenSet;

                    /**
                     * 日志类型 1在线状态变更 2FP变更 3SP变更 4CO控制 5ST变更 6EV事件
                     */
                    uint64_t m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 物模型对象索引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataObject;
                    bool m_dataObjectHasBeenSet;

                    /**
                     * 物模型旧值  json串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_oldValue;
                    bool m_oldValueHasBeenSet;

                    /**
                     * 物模型新值  json串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_newValue;
                    bool m_newValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_LOGDATA_H_
