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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFILECOUNTERSIGNREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFILECOUNTERSIGNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateFileCounterSign请求参数结构体
                */
                class CreateFileCounterSignRequest : public AbstractModel
                {
                public:
                    CreateFileCounterSignRequest();
                    ~CreateFileCounterSignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要加签的文件Id。

注: `暂时只支持pdf类型的文件`
                     * @return FileId 需要加签的文件Id。

注: `暂时只支持pdf类型的文件`
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置需要加签的文件Id。

注: `暂时只支持pdf类型的文件`
                     * @param _fileId 需要加签的文件Id。

注: `暂时只支持pdf类型的文件`
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取执行本接口操作的员工信息。注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取代理企业和员工的信息。在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @return Agent 代理企业和员工的信息。在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @param _agent 代理企业和员工的信息。在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取是否使用同步模式。
<ul><li><b>false</b>:异步模式，返回taskId。需要使用taskId轮询结果查询接口。</li>
<li><b>true</b>: 同步模式，此接口将直接返回taskId和ResultFileId(加签后文件id)。</li></ul>
注：
1. 当加签文件较大的时候，建议使用异步接口进行操作。否则文件加签时间过长会导致接口超时。
                     * @return SyncMode 是否使用同步模式。
<ul><li><b>false</b>:异步模式，返回taskId。需要使用taskId轮询结果查询接口。</li>
<li><b>true</b>: 同步模式，此接口将直接返回taskId和ResultFileId(加签后文件id)。</li></ul>
注：
1. 当加签文件较大的时候，建议使用异步接口进行操作。否则文件加签时间过长会导致接口超时。
                     * 
                     */
                    bool GetSyncMode() const;

                    /**
                     * 设置是否使用同步模式。
<ul><li><b>false</b>:异步模式，返回taskId。需要使用taskId轮询结果查询接口。</li>
<li><b>true</b>: 同步模式，此接口将直接返回taskId和ResultFileId(加签后文件id)。</li></ul>
注：
1. 当加签文件较大的时候，建议使用异步接口进行操作。否则文件加签时间过长会导致接口超时。
                     * @param _syncMode 是否使用同步模式。
<ul><li><b>false</b>:异步模式，返回taskId。需要使用taskId轮询结果查询接口。</li>
<li><b>true</b>: 同步模式，此接口将直接返回taskId和ResultFileId(加签后文件id)。</li></ul>
注：
1. 当加签文件较大的时候，建议使用异步接口进行操作。否则文件加签时间过长会导致接口超时。
                     * 
                     */
                    void SetSyncMode(const bool& _syncMode);

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                private:

                    /**
                     * 需要加签的文件Id。

注: `暂时只支持pdf类型的文件`
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 执行本接口操作的员工信息。注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 代理企业和员工的信息。在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 是否使用同步模式。
<ul><li><b>false</b>:异步模式，返回taskId。需要使用taskId轮询结果查询接口。</li>
<li><b>true</b>: 同步模式，此接口将直接返回taskId和ResultFileId(加签后文件id)。</li></ul>
注：
1. 当加签文件较大的时候，建议使用异步接口进行操作。否则文件加签时间过长会导致接口超时。
                     */
                    bool m_syncMode;
                    bool m_syncModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFILECOUNTERSIGNREQUEST_H_
