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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CUSTOMIZEBUSINESSENTITYDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CUSTOMIZEBUSINESSENTITYDTO_H_

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
                * CustomizeBusinessEntityDTO
                */
                class CustomizeBusinessEntityDTO : public AbstractModel
                {
                public:
                    CustomizeBusinessEntityDTO();
                    ~CustomizeBusinessEntityDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取taskId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId taskId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置taskId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId taskId
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取taskName
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName taskName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置taskName
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName taskName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name Name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name Name
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取taskType
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType taskType
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置taskType
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType taskType
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Type
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type Type
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type Type
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取runUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunUrl runUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunUrl() const;

                    /**
                     * 设置runUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runUrl runUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunUrl(const std::string& _runUrl);

                    /**
                     * 判断参数 RunUrl 是否已赋值
                     * @return RunUrl 是否已赋值
                     * 
                     */
                    bool RunUrlHasBeenSet() const;

                    /**
                     * 获取runReqParams
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunReqParams runReqParams
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunReqParams() const;

                    /**
                     * 设置runReqParams
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runReqParams runReqParams
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunReqParams(const std::string& _runReqParams);

                    /**
                     * 判断参数 RunReqParams 是否已赋值
                     * @return RunReqParams 是否已赋值
                     * 
                     */
                    bool RunReqParamsHasBeenSet() const;

                    /**
                     * 获取stopUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StopUrl stopUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStopUrl() const;

                    /**
                     * 设置stopUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stopUrl stopUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStopUrl(const std::string& _stopUrl);

                    /**
                     * 判断参数 StopUrl 是否已赋值
                     * @return StopUrl 是否已赋值
                     * 
                     */
                    bool StopUrlHasBeenSet() const;

                    /**
                     * 获取stopReqParams
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StopReqParams stopReqParams
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStopReqParams() const;

                    /**
                     * 设置stopReqParams
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stopReqParams stopReqParams
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStopReqParams(const std::string& _stopReqParams);

                    /**
                     * 判断参数 StopReqParams 是否已赋值
                     * @return StopReqParams 是否已赋值
                     * 
                     */
                    bool StopReqParamsHasBeenSet() const;

                    /**
                     * 获取stateMonitorUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StateMonitorUrl stateMonitorUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStateMonitorUrl() const;

                    /**
                     * 设置stateMonitorUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stateMonitorUrl stateMonitorUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStateMonitorUrl(const std::string& _stateMonitorUrl);

                    /**
                     * 判断参数 StateMonitorUrl 是否已赋值
                     * @return StateMonitorUrl 是否已赋值
                     * 
                     */
                    bool StateMonitorUrlHasBeenSet() const;

                    /**
                     * 获取runLogUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunLogUrl runLogUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunLogUrl() const;

                    /**
                     * 设置runLogUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runLogUrl runLogUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunLogUrl(const std::string& _runLogUrl);

                    /**
                     * 判断参数 RunLogUrl 是否已赋值
                     * @return RunLogUrl 是否已赋值
                     * 
                     */
                    bool RunLogUrlHasBeenSet() const;

                    /**
                     * 获取logDownloadUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogDownloadUrl logDownloadUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogDownloadUrl() const;

                    /**
                     * 设置logDownloadUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logDownloadUrl logDownloadUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogDownloadUrl(const std::string& _logDownloadUrl);

                    /**
                     * 判断参数 LogDownloadUrl 是否已赋值
                     * @return LogDownloadUrl 是否已赋值
                     * 
                     */
                    bool LogDownloadUrlHasBeenSet() const;

                    /**
                     * 获取markUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MarkUrl markUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMarkUrl() const;

                    /**
                     * 设置markUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _markUrl markUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMarkUrl(const std::string& _markUrl);

                    /**
                     * 判断参数 MarkUrl 是否已赋值
                     * @return MarkUrl 是否已赋值
                     * 
                     */
                    bool MarkUrlHasBeenSet() const;

                    /**
                     * 获取source_cluster
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceCluster source_cluster
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceCluster() const;

                    /**
                     * 设置source_cluster
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceCluster source_cluster
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceCluster(const std::string& _sourceCluster);

                    /**
                     * 判断参数 SourceCluster 是否已赋值
                     * @return SourceCluster 是否已赋值
                     * 
                     */
                    bool SourceClusterHasBeenSet() const;

                    /**
                     * 获取source_service
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceService source_service
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceService() const;

                    /**
                     * 设置source_service
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceService source_service
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceService(const std::string& _sourceService);

                    /**
                     * 判断参数 SourceService 是否已赋值
                     * @return SourceService 是否已赋值
                     * 
                     */
                    bool SourceServiceHasBeenSet() const;

                    /**
                     * 获取source_server
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceServer source_server
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceServer() const;

                    /**
                     * 设置source_server
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceServer source_server
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceServer(const std::string& _sourceServer);

                    /**
                     * 判断参数 SourceServer 是否已赋值
                     * @return SourceServer 是否已赋值
                     * 
                     */
                    bool SourceServerHasBeenSet() const;

                    /**
                     * 获取sql_file_name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlFileName sql_file_name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSqlFileName() const;

                    /**
                     * 设置sql_file_name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlFileName sql_file_name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlFileName(const std::string& _sqlFileName);

                    /**
                     * 判断参数 SqlFileName 是否已赋值
                     * @return SqlFileName 是否已赋值
                     * 
                     */
                    bool SqlFileNameHasBeenSet() const;

                    /**
                     * 获取dbType
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbType dbType
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置dbType
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbType dbType
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取engine
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Engine engine
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置engine
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engine engine
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取typeId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeId typeId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置typeId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeId typeId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeId(const uint64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取fileName
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName fileName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置fileName
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileName fileName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取bucket
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bucket bucket
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置bucket
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucket bucket
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取region
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region region
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置region
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region region
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取extraInfo
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo extraInfo
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置extraInfo
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo extraInfo
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraInfo(const std::string& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取userFileId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserFileId userFileId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserFileId() const;

                    /**
                     * 设置userFileId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userFileId userFileId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserFileId(const std::string& _userFileId);

                    /**
                     * 判断参数 UserFileId 是否已赋值
                     * @return UserFileId 是否已赋值
                     * 
                     */
                    bool UserFileIdHasBeenSet() const;

                private:

                    /**
                     * taskId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * taskName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * taskType
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Type
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * runUrl
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runUrl;
                    bool m_runUrlHasBeenSet;

                    /**
                     * runReqParams
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runReqParams;
                    bool m_runReqParamsHasBeenSet;

                    /**
                     * stopUrl
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stopUrl;
                    bool m_stopUrlHasBeenSet;

                    /**
                     * stopReqParams
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stopReqParams;
                    bool m_stopReqParamsHasBeenSet;

                    /**
                     * stateMonitorUrl
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stateMonitorUrl;
                    bool m_stateMonitorUrlHasBeenSet;

                    /**
                     * runLogUrl
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runLogUrl;
                    bool m_runLogUrlHasBeenSet;

                    /**
                     * logDownloadUrl
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logDownloadUrl;
                    bool m_logDownloadUrlHasBeenSet;

                    /**
                     * markUrl
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_markUrl;
                    bool m_markUrlHasBeenSet;

                    /**
                     * source_cluster
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceCluster;
                    bool m_sourceClusterHasBeenSet;

                    /**
                     * source_service
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceService;
                    bool m_sourceServiceHasBeenSet;

                    /**
                     * source_server
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceServer;
                    bool m_sourceServerHasBeenSet;

                    /**
                     * sql_file_name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlFileName;
                    bool m_sqlFileNameHasBeenSet;

                    /**
                     * dbType
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * engine
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * typeId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * fileName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * bucket
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * region
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * extraInfo
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * userFileId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userFileId;
                    bool m_userFileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CUSTOMIZEBUSINESSENTITYDTO_H_
