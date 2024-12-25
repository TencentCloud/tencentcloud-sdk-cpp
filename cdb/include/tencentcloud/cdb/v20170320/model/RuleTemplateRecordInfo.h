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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_RULETEMPLATERECORDINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_RULETEMPLATERECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RuleTemplateInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 规则模板变更记录信息
                */
                class RuleTemplateRecordInfo : public AbstractModel
                {
                public:
                    RuleTemplateRecordInfo();
                    ~RuleTemplateRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取修改前规则模板的详情。
                     * @return ModifyBeforeInfo 修改前规则模板的详情。
                     * 
                     */
                    RuleTemplateInfo GetModifyBeforeInfo() const;

                    /**
                     * 设置修改前规则模板的详情。
                     * @param _modifyBeforeInfo 修改前规则模板的详情。
                     * 
                     */
                    void SetModifyBeforeInfo(const RuleTemplateInfo& _modifyBeforeInfo);

                    /**
                     * 判断参数 ModifyBeforeInfo 是否已赋值
                     * @return ModifyBeforeInfo 是否已赋值
                     * 
                     */
                    bool ModifyBeforeInfoHasBeenSet() const;

                    /**
                     * 获取修改后规则模板的详情。
                     * @return ModifyAfterInfo 修改后规则模板的详情。
                     * 
                     */
                    RuleTemplateInfo GetModifyAfterInfo() const;

                    /**
                     * 设置修改后规则模板的详情。
                     * @param _modifyAfterInfo 修改后规则模板的详情。
                     * 
                     */
                    void SetModifyAfterInfo(const RuleTemplateInfo& _modifyAfterInfo);

                    /**
                     * 判断参数 ModifyAfterInfo 是否已赋值
                     * @return ModifyAfterInfo 是否已赋值
                     * 
                     */
                    bool ModifyAfterInfoHasBeenSet() const;

                    /**
                     * 获取影响的实例。
                     * @return AffectedInstances 影响的实例。
                     * 
                     */
                    std::vector<std::string> GetAffectedInstances() const;

                    /**
                     * 设置影响的实例。
                     * @param _affectedInstances 影响的实例。
                     * 
                     */
                    void SetAffectedInstances(const std::vector<std::string>& _affectedInstances);

                    /**
                     * 判断参数 AffectedInstances 是否已赋值
                     * @return AffectedInstances 是否已赋值
                     * 
                     */
                    bool AffectedInstancesHasBeenSet() const;

                    /**
                     * 获取操作人，账号uin。
                     * @return Operator 操作人，账号uin。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人，账号uin。
                     * @param _operator 操作人，账号uin。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取变更的时间。
                     * @return UpdateTime 变更的时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置变更的时间。
                     * @param _updateTime 变更的时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 修改前规则模板的详情。
                     */
                    RuleTemplateInfo m_modifyBeforeInfo;
                    bool m_modifyBeforeInfoHasBeenSet;

                    /**
                     * 修改后规则模板的详情。
                     */
                    RuleTemplateInfo m_modifyAfterInfo;
                    bool m_modifyAfterInfoHasBeenSet;

                    /**
                     * 影响的实例。
                     */
                    std::vector<std::string> m_affectedInstances;
                    bool m_affectedInstancesHasBeenSet;

                    /**
                     * 操作人，账号uin。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 变更的时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_RULETEMPLATERECORDINFO_H_
