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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBBACKUP_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBBACKUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 数据库备份信息
                */
                class DBBackup : public AbstractModel
                {
                public:
                    DBBackup();
                    ~DBBackup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份文件唯一标识
                     * @return Id 备份文件唯一标识
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置备份文件唯一标识
                     * @param _id 备份文件唯一标识
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
                     * 获取文件大小(K)
                     * @return Size 文件大小(K)
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置文件大小(K)
                     * @param _size 文件大小(K)
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
                     * 获取策略（0-实例备份；1-多库备份）
                     * @return Strategy 策略（0-实例备份；1-多库备份）
                     * 
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 设置策略（0-实例备份；1-多库备份）
                     * @param _strategy 策略（0-实例备份；1-多库备份）
                     * 
                     */
                    void SetStrategy(const int64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取类型（0-定时）
                     * @return Way 类型（0-定时）
                     * 
                     */
                    int64_t GetWay() const;

                    /**
                     * 设置类型（0-定时）
                     * @param _way 类型（0-定时）
                     * 
                     */
                    void SetWay(const int64_t& _way);

                    /**
                     * 判断参数 Way 是否已赋值
                     * @return Way 是否已赋值
                     * 
                     */
                    bool WayHasBeenSet() const;

                    /**
                     * 获取备份方式（1-完整）
                     * @return Type 备份方式（1-完整）
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置备份方式（1-完整）
                     * @param _type 备份方式（1-完整）
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
                     * 获取状态（1-创建中；2-成功；3-失败）
                     * @return Status 状态（1-创建中；2-成功；3-失败）
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态（1-创建中；2-成功；3-失败）
                     * @param _status 状态（1-创建中；2-成功；3-失败）
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
                     * 获取DB列表
                     * @return DbList DB列表
                     * 
                     */
                    std::vector<std::string> GetDbList() const;

                    /**
                     * 设置DB列表
                     * @param _dbList DB列表
                     * 
                     */
                    void SetDbList(const std::vector<std::string>& _dbList);

                    /**
                     * 判断参数 DbList 是否已赋值
                     * @return DbList 是否已赋值
                     * 
                     */
                    bool DbListHasBeenSet() const;

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
                     * 获取备份集ID
                     * @return SetId 备份集ID
                     * 
                     */
                    std::string GetSetId() const;

                    /**
                     * 设置备份集ID
                     * @param _setId 备份集ID
                     * 
                     */
                    void SetSetId(const std::string& _setId);

                    /**
                     * 判断参数 SetId 是否已赋值
                     * @return SetId 是否已赋值
                     * 
                     */
                    bool SetIdHasBeenSet() const;

                private:

                    /**
                     * 备份文件唯一标识
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
                     * 文件大小(K)
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 策略（0-实例备份；1-多库备份）
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 类型（0-定时）
                     */
                    int64_t m_way;
                    bool m_wayHasBeenSet;

                    /**
                     * 备份方式（1-完整）
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 状态（1-创建中；2-成功；3-失败）
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * DB列表
                     */
                    std::vector<std::string> m_dbList;
                    bool m_dbListHasBeenSet;

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
                     * 备份集ID
                     */
                    std::string m_setId;
                    bool m_setIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBBACKUP_H_
