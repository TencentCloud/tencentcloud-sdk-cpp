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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDRUNSERVICEVOLUME_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDRUNSERVICEVOLUME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunNfsVolumeSource.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunEmptyDirVolumeSource.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunServiceVolumeHostPath.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 服务的volume
                */
                class CloudRunServiceVolume : public AbstractModel
                {
                public:
                    CloudRunServiceVolume();
                    ~CloudRunServiceVolume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取NFS的挂载方式
                     * @return NFS NFS的挂载方式
                     * 
                     */
                    CloudBaseRunNfsVolumeSource GetNFS() const;

                    /**
                     * 设置NFS的挂载方式
                     * @param _nFS NFS的挂载方式
                     * 
                     */
                    void SetNFS(const CloudBaseRunNfsVolumeSource& _nFS);

                    /**
                     * 判断参数 NFS 是否已赋值
                     * @return NFS 是否已赋值
                     * 
                     */
                    bool NFSHasBeenSet() const;

                    /**
                     * 获取secret名称
                     * @return SecretName secret名称
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置secret名称
                     * @param _secretName secret名称
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取是否开启临时目录逐步废弃，请使用 EmptyDir
                     * @return EnableEmptyDirVolume 是否开启临时目录逐步废弃，请使用 EmptyDir
                     * 
                     */
                    bool GetEnableEmptyDirVolume() const;

                    /**
                     * 设置是否开启临时目录逐步废弃，请使用 EmptyDir
                     * @param _enableEmptyDirVolume 是否开启临时目录逐步废弃，请使用 EmptyDir
                     * 
                     */
                    void SetEnableEmptyDirVolume(const bool& _enableEmptyDirVolume);

                    /**
                     * 判断参数 EnableEmptyDirVolume 是否已赋值
                     * @return EnableEmptyDirVolume 是否已赋值
                     * 
                     */
                    bool EnableEmptyDirVolumeHasBeenSet() const;

                    /**
                     * 获取emptydir数据卷详细信息
                     * @return EmptyDir emptydir数据卷详细信息
                     * 
                     */
                    CloudBaseRunEmptyDirVolumeSource GetEmptyDir() const;

                    /**
                     * 设置emptydir数据卷详细信息
                     * @param _emptyDir emptydir数据卷详细信息
                     * 
                     */
                    void SetEmptyDir(const CloudBaseRunEmptyDirVolumeSource& _emptyDir);

                    /**
                     * 判断参数 EmptyDir 是否已赋值
                     * @return EmptyDir 是否已赋值
                     * 
                     */
                    bool EmptyDirHasBeenSet() const;

                    /**
                     * 获取主机路径挂载信息
                     * @return HostPath 主机路径挂载信息
                     * 
                     */
                    CloudBaseRunServiceVolumeHostPath GetHostPath() const;

                    /**
                     * 设置主机路径挂载信息
                     * @param _hostPath 主机路径挂载信息
                     * 
                     */
                    void SetHostPath(const CloudBaseRunServiceVolumeHostPath& _hostPath);

                    /**
                     * 判断参数 HostPath 是否已赋值
                     * @return HostPath 是否已赋值
                     * 
                     */
                    bool HostPathHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * NFS的挂载方式
                     */
                    CloudBaseRunNfsVolumeSource m_nFS;
                    bool m_nFSHasBeenSet;

                    /**
                     * secret名称
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 是否开启临时目录逐步废弃，请使用 EmptyDir
                     */
                    bool m_enableEmptyDirVolume;
                    bool m_enableEmptyDirVolumeHasBeenSet;

                    /**
                     * emptydir数据卷详细信息
                     */
                    CloudBaseRunEmptyDirVolumeSource m_emptyDir;
                    bool m_emptyDirHasBeenSet;

                    /**
                     * 主机路径挂载信息
                     */
                    CloudBaseRunServiceVolumeHostPath m_hostPath;
                    bool m_hostPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDRUNSERVICEVOLUME_H_
