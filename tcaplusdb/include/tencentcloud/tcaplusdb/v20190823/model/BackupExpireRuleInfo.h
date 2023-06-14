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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_BACKUPEXPIRERULEINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_BACKUPEXPIRERULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 备份保留策略详情
集群策略： ClueterId=集群Id， TableGroupId=-1,  TableName="-1"
集群+表格组策略： ClueterId=集群Id， TableGroupId=表格组Id,  TableName="-1"
集群+表格组+表格策略： ClueterId=集群Id， TableGroupId=表格组Id,  TableName="表格名"

FileTag=0 txh引擎文件， =1 ulog流水文件， 当要设置为=1时， 这两项不可变 TableGroupId=-1和TableName="-1"
ExpireDay为大于等于1，小于999的整形数字
OperType=0 代表动作为新增， =1 代表动作为删除， =2 代表动作为修改， 其中0和2可以混用，后端实现兼容
                */
                class BackupExpireRuleInfo : public AbstractModel
                {
                public:
                    BackupExpireRuleInfo();
                    ~BackupExpireRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取所属表格组ID
                     * @return TableGroupId 所属表格组ID
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置所属表格组ID
                     * @param _tableGroupId 所属表格组ID
                     * 
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     * 
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取表名称
                     * @return TableName 表名称
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称
                     * @param _tableName 表名称
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取文件标签，见上面描述
                     * @return FileTag 文件标签，见上面描述
                     * 
                     */
                    uint64_t GetFileTag() const;

                    /**
                     * 设置文件标签，见上面描述
                     * @param _fileTag 文件标签，见上面描述
                     * 
                     */
                    void SetFileTag(const uint64_t& _fileTag);

                    /**
                     * 判断参数 FileTag 是否已赋值
                     * @return FileTag 是否已赋值
                     * 
                     */
                    bool FileTagHasBeenSet() const;

                    /**
                     * 获取淘汰天数，见上面描述
                     * @return ExpireDay 淘汰天数，见上面描述
                     * 
                     */
                    uint64_t GetExpireDay() const;

                    /**
                     * 设置淘汰天数，见上面描述
                     * @param _expireDay 淘汰天数，见上面描述
                     * 
                     */
                    void SetExpireDay(const uint64_t& _expireDay);

                    /**
                     * 判断参数 ExpireDay 是否已赋值
                     * @return ExpireDay 是否已赋值
                     * 
                     */
                    bool ExpireDayHasBeenSet() const;

                    /**
                     * 获取操作类型，见上面描述
                     * @return OperType 操作类型，见上面描述
                     * 
                     */
                    uint64_t GetOperType() const;

                    /**
                     * 设置操作类型，见上面描述
                     * @param _operType 操作类型，见上面描述
                     * 
                     */
                    void SetOperType(const uint64_t& _operType);

                    /**
                     * 判断参数 OperType 是否已赋值
                     * @return OperType 是否已赋值
                     * 
                     */
                    bool OperTypeHasBeenSet() const;

                private:

                    /**
                     * 所属表格组ID
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * 表名称
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 文件标签，见上面描述
                     */
                    uint64_t m_fileTag;
                    bool m_fileTagHasBeenSet;

                    /**
                     * 淘汰天数，见上面描述
                     */
                    uint64_t m_expireDay;
                    bool m_expireDayHasBeenSet;

                    /**
                     * 操作类型，见上面描述
                     */
                    uint64_t m_operType;
                    bool m_operTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_BACKUPEXPIRERULEINFO_H_
