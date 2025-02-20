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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DDLDETAIL_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DDLDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DDL任务执行详情
                */
                class DDLDetail : public AbstractModel
                {
                public:
                    DDLDetail();
                    ~DDLDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分片Id
                     * @return ShardSerialId 分片Id
                     * 
                     */
                    std::string GetShardSerialId() const;

                    /**
                     * 设置分片Id
                     * @param _shardSerialId 分片Id
                     * 
                     */
                    void SetShardSerialId(const std::string& _shardSerialId);

                    /**
                     * 判断参数 ShardSerialId 是否已赋值
                     * @return ShardSerialId 是否已赋值
                     * 
                     */
                    bool ShardSerialIdHasBeenSet() const;

                    /**
                     * 获取数据库
                     * @return DbName 数据库
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库
                     * @param _dbName 数据库
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取表
                     * @return Table 表
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置表
                     * @param _table 表
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取执行的DDL任务内容
                     * @return Alter 执行的DDL任务内容
                     * 
                     */
                    std::string GetAlter() const;

                    /**
                     * 设置执行的DDL任务内容
                     * @param _alter 执行的DDL任务内容
                     * 
                     */
                    void SetAlter(const std::string& _alter);

                    /**
                     * 判断参数 Alter 是否已赋值
                     * @return Alter 是否已赋值
                     * 
                     */
                    bool AlterHasBeenSet() const;

                    /**
                     * 获取开始执行时间
                     * @return BeginTime 开始执行时间
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置开始执行时间
                     * @param _beginTime 开始执行时间
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取当前任务状态。0 成功； 1失败；  2进行中
                     * @return Status 当前任务状态。0 成功； 1失败；  2进行中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置当前任务状态。0 成功； 1失败；  2进行中
                     * @param _status 当前任务状态。0 成功； 1失败；  2进行中
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
                     * 获取任务详细描述信息
                     * @return Desc 任务详细描述信息
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置任务详细描述信息
                     * @param _desc 任务详细描述信息
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取任务当前所处阶段
                     * @return Stage 任务当前所处阶段
                     * 
                     */
                    std::string GetStage() const;

                    /**
                     * 设置任务当前所处阶段
                     * @param _stage 任务当前所处阶段
                     * 
                     */
                    void SetStage(const std::string& _stage);

                    /**
                     * 判断参数 Stage 是否已赋值
                     * @return Stage 是否已赋值
                     * 
                     */
                    bool StageHasBeenSet() const;

                    /**
                     * 获取切换状态：1: 未到切换阶段；2：正在等待进行表切换；3: 正在进行切换；4: 切换成功；5: 切换失败
                     * @return SwitchStatus 切换状态：1: 未到切换阶段；2：正在等待进行表切换；3: 正在进行切换；4: 切换成功；5: 切换失败
                     * 
                     */
                    int64_t GetSwitchStatus() const;

                    /**
                     * 设置切换状态：1: 未到切换阶段；2：正在等待进行表切换；3: 正在进行切换；4: 切换成功；5: 切换失败
                     * @param _switchStatus 切换状态：1: 未到切换阶段；2：正在等待进行表切换；3: 正在进行切换；4: 切换成功；5: 切换失败
                     * 
                     */
                    void SetSwitchStatus(const int64_t& _switchStatus);

                    /**
                     * 判断参数 SwitchStatus 是否已赋值
                     * @return SwitchStatus 是否已赋值
                     * 
                     */
                    bool SwitchStatusHasBeenSet() const;

                private:

                    /**
                     * 分片Id
                     */
                    std::string m_shardSerialId;
                    bool m_shardSerialIdHasBeenSet;

                    /**
                     * 数据库
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 表
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 执行的DDL任务内容
                     */
                    std::string m_alter;
                    bool m_alterHasBeenSet;

                    /**
                     * 开始执行时间
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 当前任务状态。0 成功； 1失败；  2进行中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务详细描述信息
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 任务当前所处阶段
                     */
                    std::string m_stage;
                    bool m_stageHasBeenSet;

                    /**
                     * 切换状态：1: 未到切换阶段；2：正在等待进行表切换；3: 正在进行切换；4: 切换成功；5: 切换失败
                     */
                    int64_t m_switchStatus;
                    bool m_switchStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DDLDETAIL_H_
