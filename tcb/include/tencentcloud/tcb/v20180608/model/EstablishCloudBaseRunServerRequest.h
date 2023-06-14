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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_ESTABLISHCLOUDBASERUNSERVERREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_ESTABLISHCLOUDBASERUNSERVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseEsInfo.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunVpcInfo.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * EstablishCloudBaseRunServer请求参数结构体
                */
                class EstablishCloudBaseRunServerRequest : public AbstractModel
                {
                public:
                    EstablishCloudBaseRunServerRequest();
                    ~EstablishCloudBaseRunServerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
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
                     * @return ServiceName 服务名称
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名称
                     * @param _serviceName 服务名称
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取是否开通外网访问
                     * @return IsPublic 是否开通外网访问
                     * 
                     */
                    bool GetIsPublic() const;

                    /**
                     * 设置是否开通外网访问
                     * @param _isPublic 是否开通外网访问
                     * 
                     */
                    void SetIsPublic(const bool& _isPublic);

                    /**
                     * 判断参数 IsPublic 是否已赋值
                     * @return IsPublic 是否已赋值
                     * 
                     */
                    bool IsPublicHasBeenSet() const;

                    /**
                     * 获取镜像仓库
                     * @return ImageRepo 镜像仓库
                     * 
                     */
                    std::string GetImageRepo() const;

                    /**
                     * 设置镜像仓库
                     * @param _imageRepo 镜像仓库
                     * 
                     */
                    void SetImageRepo(const std::string& _imageRepo);

                    /**
                     * 判断参数 ImageRepo 是否已赋值
                     * @return ImageRepo 是否已赋值
                     * 
                     */
                    bool ImageRepoHasBeenSet() const;

                    /**
                     * 获取服务描述
                     * @return Remark 服务描述
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置服务描述
                     * @param _remark 服务描述
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
                     * 获取es信息
                     * @return EsInfo es信息
                     * 
                     */
                    CloudBaseEsInfo GetEsInfo() const;

                    /**
                     * 设置es信息
                     * @param _esInfo es信息
                     * 
                     */
                    void SetEsInfo(const CloudBaseEsInfo& _esInfo);

                    /**
                     * 判断参数 EsInfo 是否已赋值
                     * @return EsInfo 是否已赋值
                     * 
                     */
                    bool EsInfoHasBeenSet() const;

                    /**
                     * 获取日志类型; es/cls
                     * @return LogType 日志类型; es/cls
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型; es/cls
                     * @param _logType 日志类型; es/cls
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

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

                    /**
                     * 获取来源方（默认值：qcloud，微信侧来源miniapp)
                     * @return Source 来源方（默认值：qcloud，微信侧来源miniapp)
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源方（默认值：qcloud，微信侧来源miniapp)
                     * @param _source 来源方（默认值：qcloud，微信侧来源miniapp)
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取vpc信息
                     * @return VpcInfo vpc信息
                     * 
                     */
                    CloudBaseRunVpcInfo GetVpcInfo() const;

                    /**
                     * 设置vpc信息
                     * @param _vpcInfo vpc信息
                     * 
                     */
                    void SetVpcInfo(const CloudBaseRunVpcInfo& _vpcInfo);

                    /**
                     * 判断参数 VpcInfo 是否已赋值
                     * @return VpcInfo 是否已赋值
                     * 
                     */
                    bool VpcInfoHasBeenSet() const;

                    /**
                     * 获取0/1=允许公网访问;2=关闭公网访问
                     * @return PublicAccess 0/1=允许公网访问;2=关闭公网访问
                     * 
                     */
                    int64_t GetPublicAccess() const;

                    /**
                     * 设置0/1=允许公网访问;2=关闭公网访问
                     * @param _publicAccess 0/1=允许公网访问;2=关闭公网访问
                     * 
                     */
                    void SetPublicAccess(const int64_t& _publicAccess);

                    /**
                     * 判断参数 PublicAccess 是否已赋值
                     * @return PublicAccess 是否已赋值
                     * 
                     */
                    bool PublicAccessHasBeenSet() const;

                    /**
                     * 获取OA PUBLIC MINIAPP VPC
                     * @return OpenAccessTypes OA PUBLIC MINIAPP VPC
                     * 
                     */
                    std::vector<std::string> GetOpenAccessTypes() const;

                    /**
                     * 设置OA PUBLIC MINIAPP VPC
                     * @param _openAccessTypes OA PUBLIC MINIAPP VPC
                     * 
                     */
                    void SetOpenAccessTypes(const std::vector<std::string>& _openAccessTypes);

                    /**
                     * 判断参数 OpenAccessTypes 是否已赋值
                     * @return OpenAccessTypes 是否已赋值
                     * 
                     */
                    bool OpenAccessTypesHasBeenSet() const;

                    /**
                     * 获取是否创建Path 0未传默认创建 1创建 2不创建
                     * @return IsCreatePath 是否创建Path 0未传默认创建 1创建 2不创建
                     * 
                     */
                    int64_t GetIsCreatePath() const;

                    /**
                     * 设置是否创建Path 0未传默认创建 1创建 2不创建
                     * @param _isCreatePath 是否创建Path 0未传默认创建 1创建 2不创建
                     * 
                     */
                    void SetIsCreatePath(const int64_t& _isCreatePath);

                    /**
                     * 判断参数 IsCreatePath 是否已赋值
                     * @return IsCreatePath 是否已赋值
                     * 
                     */
                    bool IsCreatePathHasBeenSet() const;

                    /**
                     * 获取指定创建路径（如不存在，则创建。存在，则忽略）
                     * @return ServerPath 指定创建路径（如不存在，则创建。存在，则忽略）
                     * 
                     */
                    std::string GetServerPath() const;

                    /**
                     * 设置指定创建路径（如不存在，则创建。存在，则忽略）
                     * @param _serverPath 指定创建路径（如不存在，则创建。存在，则忽略）
                     * 
                     */
                    void SetServerPath(const std::string& _serverPath);

                    /**
                     * 判断参数 ServerPath 是否已赋值
                     * @return ServerPath 是否已赋值
                     * 
                     */
                    bool ServerPathHasBeenSet() const;

                private:

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 是否开通外网访问
                     */
                    bool m_isPublic;
                    bool m_isPublicHasBeenSet;

                    /**
                     * 镜像仓库
                     */
                    std::string m_imageRepo;
                    bool m_imageRepoHasBeenSet;

                    /**
                     * 服务描述
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * es信息
                     */
                    CloudBaseEsInfo m_esInfo;
                    bool m_esInfoHasBeenSet;

                    /**
                     * 日志类型; es/cls
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 操作备注
                     */
                    std::string m_operatorRemark;
                    bool m_operatorRemarkHasBeenSet;

                    /**
                     * 来源方（默认值：qcloud，微信侧来源miniapp)
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * vpc信息
                     */
                    CloudBaseRunVpcInfo m_vpcInfo;
                    bool m_vpcInfoHasBeenSet;

                    /**
                     * 0/1=允许公网访问;2=关闭公网访问
                     */
                    int64_t m_publicAccess;
                    bool m_publicAccessHasBeenSet;

                    /**
                     * OA PUBLIC MINIAPP VPC
                     */
                    std::vector<std::string> m_openAccessTypes;
                    bool m_openAccessTypesHasBeenSet;

                    /**
                     * 是否创建Path 0未传默认创建 1创建 2不创建
                     */
                    int64_t m_isCreatePath;
                    bool m_isCreatePathHasBeenSet;

                    /**
                     * 指定创建路径（如不存在，则创建。存在，则忽略）
                     */
                    std::string m_serverPath;
                    bool m_serverPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ESTABLISHCLOUDBASERUNSERVERREQUEST_H_
