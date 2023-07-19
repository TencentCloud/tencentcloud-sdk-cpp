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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_STAGECLOUDAPIREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_STAGECLOUDAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Property.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 无
                */
                class StageCloudApiRequest : public AbstractModel
                {
                public:
                    StageCloudApiRequest();
                    ~StageCloudApiRequest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取无
                     * @return ClusterId 无
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置无
                     * @param _clusterId 无
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取无
                     * @return StageId 无
                     * 
                     */
                    std::string GetStageId() const;

                    /**
                     * 设置无
                     * @param _stageId 无
                     * 
                     */
                    void SetStageId(const std::string& _stageId);

                    /**
                     * 判断参数 StageId 是否已赋值
                     * @return StageId 是否已赋值
                     * 
                     */
                    bool StageIdHasBeenSet() const;

                    /**
                     * 获取无
                     * @return JobId 无
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置无
                     * @param _jobId 无
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取无
                     * @return StageName 无
                     * 
                     */
                    std::string GetStageName() const;

                    /**
                     * 设置无
                     * @param _stageName 无
                     * 
                     */
                    void SetStageName(const std::string& _stageName);

                    /**
                     * 判断参数 StageName 是否已赋值
                     * @return StageName 是否已赋值
                     * 
                     */
                    bool StageNameHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Type 无
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置无
                     * @param _type 无
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Mode 无
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置无
                     * @param _mode 无
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Version 无
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置无
                     * @param _version 无
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Queue 无
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置无
                     * @param _queue 无
                     * 
                     */
                    void SetQueue(const std::string& _queue);

                    /**
                     * 判断参数 Queue 是否已赋值
                     * @return Queue 是否已赋值
                     * 
                     */
                    bool QueueHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Content 无
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置无
                     * @param _content 无
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Parameters 无
                     * 
                     */
                    std::vector<Property> GetParameters() const;

                    /**
                     * 设置无
                     * @param _parameters 无
                     * 
                     */
                    void SetParameters(const std::vector<Property>& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Description 无
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置无
                     * @param _description 无
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取无
                     * @return ProjectId 无
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置无
                     * @param _projectId 无
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
                     * 获取无
                     * @return JobType 无
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置无
                     * @param _jobType 无
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取无
                     * @return WorkFlowId 无
                     * 
                     */
                    std::string GetWorkFlowId() const;

                    /**
                     * 设置无
                     * @param _workFlowId 无
                     * 
                     */
                    void SetWorkFlowId(const std::string& _workFlowId);

                    /**
                     * 判断参数 WorkFlowId 是否已赋值
                     * @return WorkFlowId 是否已赋值
                     * 
                     */
                    bool WorkFlowIdHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_stageId;
                    bool m_stageIdHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_stageName;
                    bool m_stageNameHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<Property> m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_workFlowId;
                    bool m_workFlowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_STAGECLOUDAPIREQUEST_H_
