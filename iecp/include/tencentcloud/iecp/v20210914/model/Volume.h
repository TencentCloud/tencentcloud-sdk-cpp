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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_VOLUME_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_VOLUME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/VolumeHostPath.h>
#include <tencentcloud/iecp/v20210914/model/VolumeConfigMap.h>
#include <tencentcloud/iecp/v20210914/model/VolumeNFS.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 卷
                */
                class Volume : public AbstractModel
                {
                public:
                    Volume();
                    ~Volume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取来源(emptyDir|hostPath|configMap|secret|nfs)
                     * @return Source 来源(emptyDir|hostPath|configMap|secret|nfs)
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源(emptyDir|hostPath|configMap|secret|nfs)
                     * @param _source 来源(emptyDir|hostPath|configMap|secret|nfs)
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
                     * 获取Host挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostPath Host挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VolumeHostPath GetHostPath() const;

                    /**
                     * 设置Host挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostPath Host挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostPath(const VolumeHostPath& _hostPath);

                    /**
                     * 判断参数 HostPath 是否已赋值
                     * @return HostPath 是否已赋值
                     * 
                     */
                    bool HostPathHasBeenSet() const;

                    /**
                     * 获取ConfigMap挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigMap ConfigMap挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VolumeConfigMap GetConfigMap() const;

                    /**
                     * 设置ConfigMap挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configMap ConfigMap挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigMap(const VolumeConfigMap& _configMap);

                    /**
                     * 判断参数 ConfigMap 是否已赋值
                     * @return ConfigMap 是否已赋值
                     * 
                     */
                    bool ConfigMapHasBeenSet() const;

                    /**
                     * 获取Secret挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Secret Secret挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VolumeConfigMap GetSecret() const;

                    /**
                     * 设置Secret挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secret Secret挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecret(const VolumeConfigMap& _secret);

                    /**
                     * 判断参数 Secret 是否已赋值
                     * @return Secret 是否已赋值
                     * 
                     */
                    bool SecretHasBeenSet() const;

                    /**
                     * 获取NFS挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NFS NFS挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VolumeNFS GetNFS() const;

                    /**
                     * 设置NFS挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nFS NFS挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNFS(const VolumeNFS& _nFS);

                    /**
                     * 判断参数 NFS 是否已赋值
                     * @return NFS 是否已赋值
                     * 
                     */
                    bool NFSHasBeenSet() const;

                private:

                    /**
                     * 来源(emptyDir|hostPath|configMap|secret|nfs)
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Host挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VolumeHostPath m_hostPath;
                    bool m_hostPathHasBeenSet;

                    /**
                     * ConfigMap挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VolumeConfigMap m_configMap;
                    bool m_configMapHasBeenSet;

                    /**
                     * Secret挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VolumeConfigMap m_secret;
                    bool m_secretHasBeenSet;

                    /**
                     * NFS挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VolumeNFS m_nFS;
                    bool m_nFSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_VOLUME_H_
