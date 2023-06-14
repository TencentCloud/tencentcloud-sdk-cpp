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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSTASKINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 运行时文件查杀任务容器列表信息
                */
                class VirusTaskInfo : public AbstractModel
                {
                public:
                    VirusTaskInfo();
                    ~VirusTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器名称
                     * @return ContainerName 容器名称
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名称
                     * @param _containerName 容器名称
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取容器id
                     * @return ContainerId 容器id
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置容器id
                     * @param _containerId 容器id
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取镜像名称
                     * @return ImageName 镜像名称
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
                     * @param _imageName 镜像名称
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取镜像Id
                     * @return ImageId 镜像Id
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像Id
                     * @param _imageId 镜像Id
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取节点名
                     * @return HostName 节点名
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置节点名
                     * @param _hostName 节点名
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取节点内网ip
                     * @return HostIp 节点内网ip
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置节点内网ip
                     * @param _hostIp 节点内网ip
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取扫描状态：
WAIT: 等待扫描
FAILED: 失败
SCANNING: 扫描中
FINISHED: 结束
CANCELING: 取消中
CANCELED: 已取消
CANCEL_FAILED： 取消失败
                     * @return Status 扫描状态：
WAIT: 等待扫描
FAILED: 失败
SCANNING: 扫描中
FINISHED: 结束
CANCELING: 取消中
CANCELED: 已取消
CANCEL_FAILED： 取消失败
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置扫描状态：
WAIT: 等待扫描
FAILED: 失败
SCANNING: 扫描中
FINISHED: 结束
CANCELING: 取消中
CANCELED: 已取消
CANCEL_FAILED： 取消失败
                     * @param _status 扫描状态：
WAIT: 等待扫描
FAILED: 失败
SCANNING: 扫描中
FINISHED: 结束
CANCELING: 取消中
CANCELED: 已取消
CANCEL_FAILED： 取消失败
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取检测开始时间
                     * @return StartTime 检测开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置检测开始时间
                     * @param _startTime 检测开始时间
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
                     * 获取检测结束时间
                     * @return EndTime 检测结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置检测结束时间
                     * @param _endTime 检测结束时间
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
                     * 获取风险个数
                     * @return RiskCnt 风险个数
                     * 
                     */
                    uint64_t GetRiskCnt() const;

                    /**
                     * 设置风险个数
                     * @param _riskCnt 风险个数
                     * 
                     */
                    void SetRiskCnt(const uint64_t& _riskCnt);

                    /**
                     * 判断参数 RiskCnt 是否已赋值
                     * @return RiskCnt 是否已赋值
                     * 
                     */
                    bool RiskCntHasBeenSet() const;

                    /**
                     * 获取事件id
                     * @return Id 事件id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置事件id
                     * @param _id 事件id
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
                     * 获取错误原因:
SEND_SUCCESSED: 下发成功
SCAN_WAIT: agent排队扫描等待中
OFFLINE: 离线
SEND_FAILED:下发失败
TIMEOUT: 超时
LOW_AGENT_VERSION: 客户端版本过低
AGENT_NOT_FOUND: 镜像所属客户端版不存在
TOO_MANY: 任务过多
VALIDATION: 参数非法
INTERNAL: 服务内部错误
MISC: 其他错误
UNAUTH: 所在镜像未授权
SEND_CANCEL_SUCCESSED:下发成功
                     * @return ErrorMsg 错误原因:
SEND_SUCCESSED: 下发成功
SCAN_WAIT: agent排队扫描等待中
OFFLINE: 离线
SEND_FAILED:下发失败
TIMEOUT: 超时
LOW_AGENT_VERSION: 客户端版本过低
AGENT_NOT_FOUND: 镜像所属客户端版不存在
TOO_MANY: 任务过多
VALIDATION: 参数非法
INTERNAL: 服务内部错误
MISC: 其他错误
UNAUTH: 所在镜像未授权
SEND_CANCEL_SUCCESSED:下发成功
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置错误原因:
SEND_SUCCESSED: 下发成功
SCAN_WAIT: agent排队扫描等待中
OFFLINE: 离线
SEND_FAILED:下发失败
TIMEOUT: 超时
LOW_AGENT_VERSION: 客户端版本过低
AGENT_NOT_FOUND: 镜像所属客户端版不存在
TOO_MANY: 任务过多
VALIDATION: 参数非法
INTERNAL: 服务内部错误
MISC: 其他错误
UNAUTH: 所在镜像未授权
SEND_CANCEL_SUCCESSED:下发成功
                     * @param _errorMsg 错误原因:
SEND_SUCCESSED: 下发成功
SCAN_WAIT: agent排队扫描等待中
OFFLINE: 离线
SEND_FAILED:下发失败
TIMEOUT: 超时
LOW_AGENT_VERSION: 客户端版本过低
AGENT_NOT_FOUND: 镜像所属客户端版不存在
TOO_MANY: 任务过多
VALIDATION: 参数非法
INTERNAL: 服务内部错误
MISC: 其他错误
UNAUTH: 所在镜像未授权
SEND_CANCEL_SUCCESSED:下发成功
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取节点类型：NORMAL普通节点、SUPER超级节点
                     * @return NodeType 节点类型：NORMAL普通节点、SUPER超级节点
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点类型：NORMAL普通节点、SUPER超级节点
                     * @param _nodeType 节点类型：NORMAL普通节点、SUPER超级节点
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取节点外网IP
                     * @return PublicIP 节点外网IP
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置节点外网IP
                     * @param _publicIP 节点外网IP
                     * 
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取节点ID
                     * @return NodeID 节点ID
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 设置节点ID
                     * @param _nodeID 节点ID
                     * 
                     */
                    void SetNodeID(const std::string& _nodeID);

                    /**
                     * 判断参数 NodeID 是否已赋值
                     * @return NodeID 是否已赋值
                     * 
                     */
                    bool NodeIDHasBeenSet() const;

                private:

                    /**
                     * 容器名称
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 容器id
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像Id
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 节点名
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 节点内网ip
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 扫描状态：
WAIT: 等待扫描
FAILED: 失败
SCANNING: 扫描中
FINISHED: 结束
CANCELING: 取消中
CANCELED: 已取消
CANCEL_FAILED： 取消失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 检测开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 检测结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 风险个数
                     */
                    uint64_t m_riskCnt;
                    bool m_riskCntHasBeenSet;

                    /**
                     * 事件id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 错误原因:
SEND_SUCCESSED: 下发成功
SCAN_WAIT: agent排队扫描等待中
OFFLINE: 离线
SEND_FAILED:下发失败
TIMEOUT: 超时
LOW_AGENT_VERSION: 客户端版本过低
AGENT_NOT_FOUND: 镜像所属客户端版不存在
TOO_MANY: 任务过多
VALIDATION: 参数非法
INTERNAL: 服务内部错误
MISC: 其他错误
UNAUTH: 所在镜像未授权
SEND_CANCEL_SUCCESSED:下发成功
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 节点类型：NORMAL普通节点、SUPER超级节点
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点外网IP
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * 节点ID
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSTASKINFO_H_
