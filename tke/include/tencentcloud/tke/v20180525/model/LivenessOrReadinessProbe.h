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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_LIVENESSORREADINESSPROBE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_LIVENESSORREADINESSPROBE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Probe.h>
#include <tencentcloud/tke/v20180525/model/Exec.h>
#include <tencentcloud/tke/v20180525/model/HttpGet.h>
#include <tencentcloud/tke/v20180525/model/TcpSocket.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 健康探针
                */
                class LivenessOrReadinessProbe : public AbstractModel
                {
                public:
                    LivenessOrReadinessProbe();
                    ~LivenessOrReadinessProbe() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取探针参数
                     * @return Probe 探针参数
                     * 
                     */
                    Probe GetProbe() const;

                    /**
                     * 设置探针参数
                     * @param _probe 探针参数
                     * 
                     */
                    void SetProbe(const Probe& _probe);

                    /**
                     * 判断参数 Probe 是否已赋值
                     * @return Probe 是否已赋值
                     * 
                     */
                    bool ProbeHasBeenSet() const;

                    /**
                     * 获取容器内检测命令参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Exec 容器内检测命令参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Exec GetExec() const;

                    /**
                     * 设置容器内检测命令参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exec 容器内检测命令参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExec(const Exec& _exec);

                    /**
                     * 判断参数 Exec 是否已赋值
                     * @return Exec 是否已赋值
                     * 
                     */
                    bool ExecHasBeenSet() const;

                    /**
                     * 获取HttpGet检测参数
                     * @return HttpGet HttpGet检测参数
                     * 
                     */
                    HttpGet GetHttpGet() const;

                    /**
                     * 设置HttpGet检测参数
                     * @param _httpGet HttpGet检测参数
                     * 
                     */
                    void SetHttpGet(const HttpGet& _httpGet);

                    /**
                     * 判断参数 HttpGet 是否已赋值
                     * @return HttpGet 是否已赋值
                     * 
                     */
                    bool HttpGetHasBeenSet() const;

                    /**
                     * 获取TcpSocket检测的端口参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TcpSocket TcpSocket检测的端口参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TcpSocket GetTcpSocket() const;

                    /**
                     * 设置TcpSocket检测的端口参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tcpSocket TcpSocket检测的端口参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTcpSocket(const TcpSocket& _tcpSocket);

                    /**
                     * 判断参数 TcpSocket 是否已赋值
                     * @return TcpSocket 是否已赋值
                     * 
                     */
                    bool TcpSocketHasBeenSet() const;

                private:

                    /**
                     * 探针参数
                     */
                    Probe m_probe;
                    bool m_probeHasBeenSet;

                    /**
                     * 容器内检测命令参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Exec m_exec;
                    bool m_execHasBeenSet;

                    /**
                     * HttpGet检测参数
                     */
                    HttpGet m_httpGet;
                    bool m_httpGetHasBeenSet;

                    /**
                     * TcpSocket检测的端口参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TcpSocket m_tcpSocket;
                    bool m_tcpSocketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_LIVENESSORREADINESSPROBE_H_
