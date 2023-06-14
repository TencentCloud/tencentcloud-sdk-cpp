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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_RUNVERSIONPOD_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_RUNVERSIONPOD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * 版本pod
                */
                class RunVersionPod : public AbstractModel
                {
                public:
                    RunVersionPod();
                    ~RunVersionPod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取shell地址
                     * @return Webshell shell地址
                     * 
                     */
                    std::string GetWebshell() const;

                    /**
                     * 设置shell地址
                     * @param _webshell shell地址
                     * 
                     */
                    void SetWebshell(const std::string& _webshell);

                    /**
                     * 判断参数 Webshell 是否已赋值
                     * @return Webshell 是否已赋值
                     * 
                     */
                    bool WebshellHasBeenSet() const;

                    /**
                     * 获取pod的id
                     * @return PodId pod的id
                     * 
                     */
                    std::string GetPodId() const;

                    /**
                     * 设置pod的id
                     * @param _podId pod的id
                     * 
                     */
                    void SetPodId(const std::string& _podId);

                    /**
                     * 判断参数 PodId 是否已赋值
                     * @return PodId 是否已赋值
                     * 
                     */
                    bool PodIdHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取实例的ip
                     * @return PodIp 实例的ip
                     * 
                     */
                    std::string GetPodIp() const;

                    /**
                     * 设置实例的ip
                     * @param _podIp 实例的ip
                     * 
                     */
                    void SetPodIp(const std::string& _podIp);

                    /**
                     * 判断参数 PodIp 是否已赋值
                     * @return PodIp 是否已赋值
                     * 
                     */
                    bool PodIpHasBeenSet() const;

                    /**
                     * 获取可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取部署版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployVersion 部署版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeployVersion() const;

                    /**
                     * 设置部署版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deployVersion 部署版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeployVersion(const std::string& _deployVersion);

                    /**
                     * 判断参数 DeployVersion 是否已赋值
                     * @return DeployVersion 是否已赋值
                     * 
                     */
                    bool DeployVersionHasBeenSet() const;

                    /**
                     * 获取重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestartCount 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRestartCount() const;

                    /**
                     * 设置重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _restartCount 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRestartCount(const int64_t& _restartCount);

                    /**
                     * 判断参数 RestartCount 是否已赋值
                     * @return RestartCount 是否已赋值
                     * 
                     */
                    bool RestartCountHasBeenSet() const;

                private:

                    /**
                     * shell地址
                     */
                    std::string m_webshell;
                    bool m_webshellHasBeenSet;

                    /**
                     * pod的id
                     */
                    std::string m_podId;
                    bool m_podIdHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例的ip
                     */
                    std::string m_podIp;
                    bool m_podIpHasBeenSet;

                    /**
                     * 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 部署版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deployVersion;
                    bool m_deployVersionHasBeenSet;

                    /**
                     * 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_restartCount;
                    bool m_restartCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_RUNVERSIONPOD_H_
