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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_TERMINATECLUSTERNODESREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_TERMINATECLUSTERNODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * TerminateClusterNodes请求参数结构体
                */
                class TerminateClusterNodesRequest : public AbstractModel
                {
                public:
                    TerminateClusterNodesRequest();
                    ~TerminateClusterNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取销毁资源列表
                     * @return CvmInstanceIds 销毁资源列表
                     * 
                     */
                    std::vector<std::string> GetCvmInstanceIds() const;

                    /**
                     * 设置销毁资源列表
                     * @param _cvmInstanceIds 销毁资源列表
                     * 
                     */
                    void SetCvmInstanceIds(const std::vector<std::string>& _cvmInstanceIds);

                    /**
                     * 判断参数 CvmInstanceIds 是否已赋值
                     * @return CvmInstanceIds 是否已赋值
                     * 
                     */
                    bool CvmInstanceIdsHasBeenSet() const;

                    /**
                     * 获取销毁节点类型取值范围：
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     * @return NodeFlag 销毁节点类型取值范围：
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     * 
                     */
                    std::string GetNodeFlag() const;

                    /**
                     * 设置销毁节点类型取值范围：
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     * @param _nodeFlag 销毁节点类型取值范围：
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     * 
                     */
                    void SetNodeFlag(const std::string& _nodeFlag);

                    /**
                     * 判断参数 NodeFlag 是否已赋值
                     * @return NodeFlag 是否已赋值
                     * 
                     */
                    bool NodeFlagHasBeenSet() const;

                    /**
                     * 获取优雅缩容开关
  <li>true:开启</li>
  <li>false:不开启</li>
                     * @return GraceDownFlag 优雅缩容开关
  <li>true:开启</li>
  <li>false:不开启</li>
                     * 
                     */
                    bool GetGraceDownFlag() const;

                    /**
                     * 设置优雅缩容开关
  <li>true:开启</li>
  <li>false:不开启</li>
                     * @param _graceDownFlag 优雅缩容开关
  <li>true:开启</li>
  <li>false:不开启</li>
                     * 
                     */
                    void SetGraceDownFlag(const bool& _graceDownFlag);

                    /**
                     * 判断参数 GraceDownFlag 是否已赋值
                     * @return GraceDownFlag 是否已赋值
                     * 
                     */
                    bool GraceDownFlagHasBeenSet() const;

                    /**
                     * 获取优雅缩容等待时间,时间范围60到1800  单位秒
                     * @return GraceDownTime 优雅缩容等待时间,时间范围60到1800  单位秒
                     * 
                     */
                    int64_t GetGraceDownTime() const;

                    /**
                     * 设置优雅缩容等待时间,时间范围60到1800  单位秒
                     * @param _graceDownTime 优雅缩容等待时间,时间范围60到1800  单位秒
                     * 
                     */
                    void SetGraceDownTime(const int64_t& _graceDownTime);

                    /**
                     * 判断参数 GraceDownTime 是否已赋值
                     * @return GraceDownTime 是否已赋值
                     * 
                     */
                    bool GraceDownTimeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 销毁资源列表
                     */
                    std::vector<std::string> m_cvmInstanceIds;
                    bool m_cvmInstanceIdsHasBeenSet;

                    /**
                     * 销毁节点类型取值范围：
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     */
                    std::string m_nodeFlag;
                    bool m_nodeFlagHasBeenSet;

                    /**
                     * 优雅缩容开关
  <li>true:开启</li>
  <li>false:不开启</li>
                     */
                    bool m_graceDownFlag;
                    bool m_graceDownFlagHasBeenSet;

                    /**
                     * 优雅缩容等待时间,时间范围60到1800  单位秒
                     */
                    int64_t m_graceDownTime;
                    bool m_graceDownTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TERMINATECLUSTERNODESREQUEST_H_
