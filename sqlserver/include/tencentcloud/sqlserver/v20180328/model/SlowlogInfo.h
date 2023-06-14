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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SLOWLOGINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SLOWLOGINFO_H_

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
                * 慢查询日志文件信息
                */
                class SlowlogInfo : public AbstractModel
                {
                public:
                    SlowlogInfo();
                    ~SlowlogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取慢查询日志文件唯一标识
                     * @return Id 慢查询日志文件唯一标识
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置慢查询日志文件唯一标识
                     * @param _id 慢查询日志文件唯一标识
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
                     * 获取文件生成的开始时间
                     * @return StartTime 文件生成的开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置文件生成的开始时间
                     * @param _startTime 文件生成的开始时间
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
                     * 获取文件生成的结束时间
                     * @return EndTime 文件生成的结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置文件生成的结束时间
                     * @param _endTime 文件生成的结束时间
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
                     * 获取文件大小（KB）
                     * @return Size 文件大小（KB）
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置文件大小（KB）
                     * @param _size 文件大小（KB）
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取文件中log条数
                     * @return Count 文件中log条数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置文件中log条数
                     * @param _count 文件中log条数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取内网下载地址
                     * @return InternalAddr 内网下载地址
                     * 
                     */
                    std::string GetInternalAddr() const;

                    /**
                     * 设置内网下载地址
                     * @param _internalAddr 内网下载地址
                     * 
                     */
                    void SetInternalAddr(const std::string& _internalAddr);

                    /**
                     * 判断参数 InternalAddr 是否已赋值
                     * @return InternalAddr 是否已赋值
                     * 
                     */
                    bool InternalAddrHasBeenSet() const;

                    /**
                     * 获取外网下载地址
                     * @return ExternalAddr 外网下载地址
                     * 
                     */
                    std::string GetExternalAddr() const;

                    /**
                     * 设置外网下载地址
                     * @param _externalAddr 外网下载地址
                     * 
                     */
                    void SetExternalAddr(const std::string& _externalAddr);

                    /**
                     * 判断参数 ExternalAddr 是否已赋值
                     * @return ExternalAddr 是否已赋值
                     * 
                     */
                    bool ExternalAddrHasBeenSet() const;

                    /**
                     * 获取状态（1成功 2失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态（1成功 2失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态（1成功 2失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态（1成功 2失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 慢查询日志文件唯一标识
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 文件生成的开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 文件生成的结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 文件大小（KB）
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 文件中log条数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 内网下载地址
                     */
                    std::string m_internalAddr;
                    bool m_internalAddrHasBeenSet;

                    /**
                     * 外网下载地址
                     */
                    std::string m_externalAddr;
                    bool m_externalAddrHasBeenSet;

                    /**
                     * 状态（1成功 2失败）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SLOWLOGINFO_H_
