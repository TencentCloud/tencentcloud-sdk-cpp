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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYCLOUDBASERUNSERVERVERSIONREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYCLOUDBASERUNSERVERVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ModifyCloudBaseRunServerVersion请求参数结构体
                */
                class ModifyCloudBaseRunServerVersionRequest : public AbstractModel
                {
                public:
                    ModifyCloudBaseRunServerVersionRequest();
                    ~ModifyCloudBaseRunServerVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return ServerName 服务名称
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置服务名称
                     * @param _serverName 服务名称
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取版本名称
                     * @return VersionName 版本名称
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置版本名称
                     * @param _versionName 版本名称
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取环境变量
                     * @return EnvParams 环境变量
                     * 
                     */
                    std::string GetEnvParams() const;

                    /**
                     * 设置环境变量
                     * @param _envParams 环境变量
                     * 
                     */
                    void SetEnvParams(const std::string& _envParams);

                    /**
                     * 判断参数 EnvParams 是否已赋值
                     * @return EnvParams 是否已赋值
                     * 
                     */
                    bool EnvParamsHasBeenSet() const;

                    /**
                     * 获取最小副本数
                     * @return MinNum 最小副本数
                     * 
                     */
                    std::string GetMinNum() const;

                    /**
                     * 设置最小副本数
                     * @param _minNum 最小副本数
                     * 
                     */
                    void SetMinNum(const std::string& _minNum);

                    /**
                     * 判断参数 MinNum 是否已赋值
                     * @return MinNum 是否已赋值
                     * 
                     */
                    bool MinNumHasBeenSet() const;

                    /**
                     * 获取最大副本数
                     * @return MaxNum 最大副本数
                     * 
                     */
                    std::string GetMaxNum() const;

                    /**
                     * 设置最大副本数
                     * @param _maxNum 最大副本数
                     * 
                     */
                    void SetMaxNum(const std::string& _maxNum);

                    /**
                     * 判断参数 MaxNum 是否已赋值
                     * @return MaxNum 是否已赋值
                     * 
                     */
                    bool MaxNumHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return ContainerPort 端口
                     * 
                     */
                    std::string GetContainerPort() const;

                    /**
                     * 设置端口
                     * @param _containerPort 端口
                     * 
                     */
                    void SetContainerPort(const std::string& _containerPort);

                    /**
                     * 判断参数 ContainerPort 是否已赋值
                     * @return ContainerPort 是否已赋值
                     * 
                     */
                    bool ContainerPortHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取日志采集路径
                     * @return CustomLogs 日志采集路径
                     * 
                     */
                    std::string GetCustomLogs() const;

                    /**
                     * 设置日志采集路径
                     * @param _customLogs 日志采集路径
                     * 
                     */
                    void SetCustomLogs(const std::string& _customLogs);

                    /**
                     * 判断参数 CustomLogs 是否已赋值
                     * @return CustomLogs 是否已赋值
                     * 
                     */
                    bool CustomLogsHasBeenSet() const;

                    /**
                     * 获取是否重设备注
                     * @return IsResetRemark 是否重设备注
                     * 
                     */
                    bool GetIsResetRemark() const;

                    /**
                     * 设置是否重设备注
                     * @param _isResetRemark 是否重设备注
                     * 
                     */
                    void SetIsResetRemark(const bool& _isResetRemark);

                    /**
                     * 判断参数 IsResetRemark 是否已赋值
                     * @return IsResetRemark 是否已赋值
                     * 
                     */
                    bool IsResetRemarkHasBeenSet() const;

                    /**
                     * 获取修改基础信息
                     * @return BasicModify 修改基础信息
                     * 
                     */
                    bool GetBasicModify() const;

                    /**
                     * 设置修改基础信息
                     * @param _basicModify 修改基础信息
                     * 
                     */
                    void SetBasicModify(const bool& _basicModify);

                    /**
                     * 判断参数 BasicModify 是否已赋值
                     * @return BasicModify 是否已赋值
                     * 
                     */
                    bool BasicModifyHasBeenSet() const;

                    /**
                     * 获取操作备注
                     * @return OperatorRemark 操作备注
                     * 
                     */
                    std::string GetOperatorRemark() const;

                    /**
                     * 设置操作备注
                     * @param _operatorRemark 操作备注
                     * 
                     */
                    void SetOperatorRemark(const std::string& _operatorRemark);

                    /**
                     * 判断参数 OperatorRemark 是否已赋值
                     * @return OperatorRemark 是否已赋值
                     * 
                     */
                    bool OperatorRemarkHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 版本名称
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 环境变量
                     */
                    std::string m_envParams;
                    bool m_envParamsHasBeenSet;

                    /**
                     * 最小副本数
                     */
                    std::string m_minNum;
                    bool m_minNumHasBeenSet;

                    /**
                     * 最大副本数
                     */
                    std::string m_maxNum;
                    bool m_maxNumHasBeenSet;

                    /**
                     * 端口
                     */
                    std::string m_containerPort;
                    bool m_containerPortHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 日志采集路径
                     */
                    std::string m_customLogs;
                    bool m_customLogsHasBeenSet;

                    /**
                     * 是否重设备注
                     */
                    bool m_isResetRemark;
                    bool m_isResetRemarkHasBeenSet;

                    /**
                     * 修改基础信息
                     */
                    bool m_basicModify;
                    bool m_basicModifyHasBeenSet;

                    /**
                     * 操作备注
                     */
                    std::string m_operatorRemark;
                    bool m_operatorRemarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYCLOUDBASERUNSERVERVERSIONREQUEST_H_
