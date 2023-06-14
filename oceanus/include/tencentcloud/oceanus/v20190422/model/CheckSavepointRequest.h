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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_CHECKSAVEPOINTREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_CHECKSAVEPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * CheckSavepoint请求参数结构体
                */
                class CheckSavepointRequest : public AbstractModel
                {
                public:
                    CheckSavepointRequest();
                    ~CheckSavepointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作业 id
                     * @return JobId 作业 id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业 id
                     * @param _jobId 作业 id
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
                     * 获取快照资源 id
                     * @return SerialId 快照资源 id
                     * 
                     */
                    std::string GetSerialId() const;

                    /**
                     * 设置快照资源 id
                     * @param _serialId 快照资源 id
                     * 
                     */
                    void SetSerialId(const std::string& _serialId);

                    /**
                     * 判断参数 SerialId 是否已赋值
                     * @return SerialId 是否已赋值
                     * 
                     */
                    bool SerialIdHasBeenSet() const;

                    /**
                     * 获取快照类型 1: savepoint；2: checkpoint；3: cancelWithSavepoint
                     * @return RecordType 快照类型 1: savepoint；2: checkpoint；3: cancelWithSavepoint
                     * 
                     */
                    int64_t GetRecordType() const;

                    /**
                     * 设置快照类型 1: savepoint；2: checkpoint；3: cancelWithSavepoint
                     * @param _recordType 快照类型 1: savepoint；2: checkpoint；3: cancelWithSavepoint
                     * 
                     */
                    void SetRecordType(const int64_t& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取快照路径，目前只支持 cos 路径
                     * @return SavepointPath 快照路径，目前只支持 cos 路径
                     * 
                     */
                    std::string GetSavepointPath() const;

                    /**
                     * 设置快照路径，目前只支持 cos 路径
                     * @param _savepointPath 快照路径，目前只支持 cos 路径
                     * 
                     */
                    void SetSavepointPath(const std::string& _savepointPath);

                    /**
                     * 判断参数 SavepointPath 是否已赋值
                     * @return SavepointPath 是否已赋值
                     * 
                     */
                    bool SavepointPathHasBeenSet() const;

                    /**
                     * 获取工作空间 id
                     * @return WorkSpaceId 工作空间 id
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 id
                     * @param _workSpaceId 工作空间 id
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                private:

                    /**
                     * 作业 id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 快照资源 id
                     */
                    std::string m_serialId;
                    bool m_serialIdHasBeenSet;

                    /**
                     * 快照类型 1: savepoint；2: checkpoint；3: cancelWithSavepoint
                     */
                    int64_t m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * 快照路径，目前只支持 cos 路径
                     */
                    std::string m_savepointPath;
                    bool m_savepointPathHasBeenSet;

                    /**
                     * 工作空间 id
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CHECKSAVEPOINTREQUEST_H_
