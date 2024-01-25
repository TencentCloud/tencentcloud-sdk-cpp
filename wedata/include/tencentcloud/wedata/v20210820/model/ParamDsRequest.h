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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PARAMDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PARAMDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 参数请求结构
                */
                class ParamDsRequest : public AbstractModel
                {
                public:
                    ParamDsRequest();
                    ~ParamDsRequest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数key
                     * @return ParamKey 参数key
                     * 
                     */
                    std::string GetParamKey() const;

                    /**
                     * 设置参数key
                     * @param _paramKey 参数key
                     * 
                     */
                    void SetParamKey(const std::string& _paramKey);

                    /**
                     * 判断参数 ParamKey 是否已赋值
                     * @return ParamKey 是否已赋值
                     * 
                     */
                    bool ParamKeyHasBeenSet() const;

                    /**
                     * 获取参数类型
                     * @return ParamType 参数类型
                     * 
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置参数类型
                     * @param _paramType 参数类型
                     * 
                     */
                    void SetParamType(const std::string& _paramType);

                    /**
                     * 判断参数 ParamType 是否已赋值
                     * @return ParamType 是否已赋值
                     * 
                     */
                    bool ParamTypeHasBeenSet() const;

                    /**
                     * 获取参数周期运行值
                     * @return ParamDefine 参数周期运行值
                     * 
                     */
                    std::string GetParamDefine() const;

                    /**
                     * 设置参数周期运行值
                     * @param _paramDefine 参数周期运行值
                     * 
                     */
                    void SetParamDefine(const std::string& _paramDefine);

                    /**
                     * 判断参数 ParamDefine 是否已赋值
                     * @return ParamDefine 是否已赋值
                     * 
                     */
                    bool ParamDefineHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取操作者名
                     * @return OperatorName 操作者名
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置操作者名
                     * @param _operatorName 操作者名
                     * 
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     * 
                     */
                    bool OperatorNameHasBeenSet() const;

                    /**
                     * 获取工作流id
                     * @return WorkflowId 工作流id
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流id
                     * @param _workflowId 工作流id
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取sql内容
                     * @return SqlContent sql内容
                     * 
                     */
                    std::string GetSqlContent() const;

                    /**
                     * 设置sql内容
                     * @param _sqlContent sql内容
                     * 
                     */
                    void SetSqlContent(const std::string& _sqlContent);

                    /**
                     * 判断参数 SqlContent 是否已赋值
                     * @return SqlContent 是否已赋值
                     * 
                     */
                    bool SqlContentHasBeenSet() const;

                    /**
                     * 获取数据时间
                     * @return CurRunDate 数据时间
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置数据时间
                     * @param _curRunDate 数据时间
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

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
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取关键字
                     * @return KeyWords 关键字
                     * 
                     */
                    std::string GetKeyWords() const;

                    /**
                     * 设置关键字
                     * @param _keyWords 关键字
                     * 
                     */
                    void SetKeyWords(const std::string& _keyWords);

                    /**
                     * 判断参数 KeyWords 是否已赋值
                     * @return KeyWords 是否已赋值
                     * 
                     */
                    bool KeyWordsHasBeenSet() const;

                    /**
                     * 获取版本号
                     * @return MyVersion 版本号
                     * 
                     */
                    int64_t GetMyVersion() const;

                    /**
                     * 设置版本号
                     * @param _myVersion 版本号
                     * 
                     */
                    void SetMyVersion(const int64_t& _myVersion);

                    /**
                     * 判断参数 MyVersion 是否已赋值
                     * @return MyVersion 是否已赋值
                     * 
                     */
                    bool MyVersionHasBeenSet() const;

                    /**
                     * 获取上游
                     * @return Upstream 上游
                     * 
                     */
                    bool GetUpstream() const;

                    /**
                     * 设置上游
                     * @param _upstream 上游
                     * 
                     */
                    void SetUpstream(const bool& _upstream);

                    /**
                     * 判断参数 Upstream 是否已赋值
                     * @return Upstream 是否已赋值
                     * 
                     */
                    bool UpstreamHasBeenSet() const;

                    /**
                     * 获取参数描述
                     * @return ParamDescription 参数描述
                     * 
                     */
                    std::string GetParamDescription() const;

                    /**
                     * 设置参数描述
                     * @param _paramDescription 参数描述
                     * 
                     */
                    void SetParamDescription(const std::string& _paramDescription);

                    /**
                     * 判断参数 ParamDescription 是否已赋值
                     * @return ParamDescription 是否已赋值
                     * 
                     */
                    bool ParamDescriptionHasBeenSet() const;

                    /**
                     * 获取参数调试运行值
                     * @return ParamDefineTest 参数调试运行值
                     * 
                     */
                    std::string GetParamDefineTest() const;

                    /**
                     * 设置参数调试运行值
                     * @param _paramDefineTest 参数调试运行值
                     * 
                     */
                    void SetParamDefineTest(const std::string& _paramDefineTest);

                    /**
                     * 判断参数 ParamDefineTest 是否已赋值
                     * @return ParamDefineTest 是否已赋值
                     * 
                     */
                    bool ParamDefineTestHasBeenSet() const;

                    /**
                     * 获取是否为更新，true表示更新，false表示新建
                     * @return UpdateFlag 是否为更新，true表示更新，false表示新建
                     * 
                     */
                    bool GetUpdateFlag() const;

                    /**
                     * 设置是否为更新，true表示更新，false表示新建
                     * @param _updateFlag 是否为更新，true表示更新，false表示新建
                     * 
                     */
                    void SetUpdateFlag(const bool& _updateFlag);

                    /**
                     * 判断参数 UpdateFlag 是否已赋值
                     * @return UpdateFlag 是否已赋值
                     * 
                     */
                    bool UpdateFlagHasBeenSet() const;

                private:

                    /**
                     * 参数key
                     */
                    std::string m_paramKey;
                    bool m_paramKeyHasBeenSet;

                    /**
                     * 参数类型
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * 参数周期运行值
                     */
                    std::string m_paramDefine;
                    bool m_paramDefineHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 操作者名
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                    /**
                     * 工作流id
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * sql内容
                     */
                    std::string m_sqlContent;
                    bool m_sqlContentHasBeenSet;

                    /**
                     * 数据时间
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 关键字
                     */
                    std::string m_keyWords;
                    bool m_keyWordsHasBeenSet;

                    /**
                     * 版本号
                     */
                    int64_t m_myVersion;
                    bool m_myVersionHasBeenSet;

                    /**
                     * 上游
                     */
                    bool m_upstream;
                    bool m_upstreamHasBeenSet;

                    /**
                     * 参数描述
                     */
                    std::string m_paramDescription;
                    bool m_paramDescriptionHasBeenSet;

                    /**
                     * 参数调试运行值
                     */
                    std::string m_paramDefineTest;
                    bool m_paramDefineTestHasBeenSet;

                    /**
                     * 是否为更新，true表示更新，false表示新建
                     */
                    bool m_updateFlag;
                    bool m_updateFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PARAMDSREQUEST_H_
