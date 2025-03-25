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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEOPERATION_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 集群操作描述
                */
                class InstanceOperation : public AbstractModel
                {
                public:
                    InstanceOperation();
                    ~InstanceOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作名称，例如“create_instance"、“scaleout_instance”等
                     * @return Name 操作名称，例如“create_instance"、“scaleout_instance”等
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置操作名称，例如“create_instance"、“scaleout_instance”等
                     * @param _name 操作名称，例如“create_instance"、“scaleout_instance”等
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取操作结果，“Success"表示成功，”Fail"表示失败
                     * @return Result 操作结果，“Success"表示成功，”Fail"表示失败
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置操作结果，“Success"表示成功，”Fail"表示失败
                     * @param _result 操作结果，“Success"表示成功，”Fail"表示失败
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取操作名称描述，例如“创建”，“修改集群名称”等
                     * @return Desc 操作名称描述，例如“创建”，“修改集群名称”等
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置操作名称描述，例如“创建”，“修改集群名称”等
                     * @param _desc 操作名称描述，例如“创建”，“修改集群名称”等
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
                     * 获取操作级别，例如“Critical", "Normal"等
                     * @return Level 操作级别，例如“Critical", "Normal"等
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置操作级别，例如“Critical", "Normal"等
                     * @param _level 操作级别，例如“Critical", "Normal"等
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取操作级别描述，例如“高危”，“一般”等
                     * @return LevelDesc 操作级别描述，例如“高危”，“一般”等
                     * 
                     */
                    std::string GetLevelDesc() const;

                    /**
                     * 设置操作级别描述，例如“高危”，“一般”等
                     * @param _levelDesc 操作级别描述，例如“高危”，“一般”等
                     * 
                     */
                    void SetLevelDesc(const std::string& _levelDesc);

                    /**
                     * 判断参数 LevelDesc 是否已赋值
                     * @return LevelDesc 是否已赋值
                     * 
                     */
                    bool LevelDescHasBeenSet() const;

                    /**
                     * 获取操作开始时间
                     * @return StartTime 操作开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置操作开始时间
                     * @param _startTime 操作开始时间
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
                     * 获取操作结束时间
                     * @return EndTime 操作结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置操作结束时间
                     * @param _endTime 操作结束时间
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
                     * 获取操作结果描述，例如“成功”，“失败”
                     * @return ResultDesc 操作结果描述，例如“成功”，“失败”
                     * 
                     */
                    std::string GetResultDesc() const;

                    /**
                     * 设置操作结果描述，例如“成功”，“失败”
                     * @param _resultDesc 操作结果描述，例如“成功”，“失败”
                     * 
                     */
                    void SetResultDesc(const std::string& _resultDesc);

                    /**
                     * 判断参数 ResultDesc 是否已赋值
                     * @return ResultDesc 是否已赋值
                     * 
                     */
                    bool ResultDescHasBeenSet() const;

                    /**
                     * 获取操作用户ID
                     * @return OperateUin 操作用户ID
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置操作用户ID
                     * @param _operateUin 操作用户ID
                     * 
                     */
                    void SetOperateUin(const std::string& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     * 
                     */
                    bool OperateUinHasBeenSet() const;

                    /**
                     * 获取操作对应的jobid
                     * @return JobId 操作对应的jobid
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置操作对应的jobid
                     * @param _jobId 操作对应的jobid
                     * 
                     */
                    void SetJobId(const int64_t& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取操作明细
                     * @return OperationDetail 操作明细
                     * 
                     */
                    std::string GetOperationDetail() const;

                    /**
                     * 设置操作明细
                     * @param _operationDetail 操作明细
                     * 
                     */
                    void SetOperationDetail(const std::string& _operationDetail);

                    /**
                     * 判断参数 OperationDetail 是否已赋值
                     * @return OperationDetail 是否已赋值
                     * 
                     */
                    bool OperationDetailHasBeenSet() const;

                    /**
                     * 获取计算组id
                     * @return ComputerGroupId 计算组id
                     * 
                     */
                    std::string GetComputerGroupId() const;

                    /**
                     * 设置计算组id
                     * @param _computerGroupId 计算组id
                     * 
                     */
                    void SetComputerGroupId(const std::string& _computerGroupId);

                    /**
                     * 判断参数 ComputerGroupId 是否已赋值
                     * @return ComputerGroupId 是否已赋值
                     * 
                     */
                    bool ComputerGroupIdHasBeenSet() const;

                private:

                    /**
                     * 操作名称，例如“create_instance"、“scaleout_instance”等
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 操作结果，“Success"表示成功，”Fail"表示失败
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 操作名称描述，例如“创建”，“修改集群名称”等
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 操作级别，例如“Critical", "Normal"等
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 操作级别描述，例如“高危”，“一般”等
                     */
                    std::string m_levelDesc;
                    bool m_levelDescHasBeenSet;

                    /**
                     * 操作开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 操作结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 操作结果描述，例如“成功”，“失败”
                     */
                    std::string m_resultDesc;
                    bool m_resultDescHasBeenSet;

                    /**
                     * 操作用户ID
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * 操作对应的jobid
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 操作明细
                     */
                    std::string m_operationDetail;
                    bool m_operationDetailHasBeenSet;

                    /**
                     * 计算组id
                     */
                    std::string m_computerGroupId;
                    bool m_computerGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEOPERATION_H_
