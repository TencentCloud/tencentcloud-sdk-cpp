/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEAGENTCONFIGSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEAGENTCONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/LogConfigInfo.h>
#include <tencentcloud/cls/v20201016/model/ServiceLogConfigInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeAgentConfigs返回参数结构体
                */
                class DescribeAgentConfigsResponse : public AbstractModel
                {
                public:
                    DescribeAgentConfigsResponse();
                    ~DescribeAgentConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取采集配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogConfigs 采集配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LogConfigInfo> GetLogConfigs() const;

                    /**
                     * 判断参数 LogConfigs 是否已赋值
                     * @return LogConfigs 是否已赋值
                     * 
                     */
                    bool LogConfigsHasBeenSet() const;

                    /**
                     * 获取服务日志的配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceLogConfigs 服务日志的配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ServiceLogConfigInfo> GetServiceLogConfigs() const;

                    /**
                     * 判断参数 ServiceLogConfigs 是否已赋值
                     * @return ServiceLogConfigs 是否已赋值
                     * 
                     */
                    bool ServiceLogConfigsHasBeenSet() const;

                    /**
                     * 获取弃用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastVersion 弃用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastVersion() const;

                    /**
                     * 判断参数 LastVersion 是否已赋值
                     * @return LastVersion 是否已赋值
                     * 
                     */
                    bool LastVersionHasBeenSet() const;

                    /**
                     * 获取弃用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NeedUpdate 弃用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetNeedUpdate() const;

                    /**
                     * 判断参数 NeedUpdate 是否已赋值
                     * @return NeedUpdate 是否已赋值
                     * 
                     */
                    bool NeedUpdateHasBeenSet() const;

                    /**
                     * 获取弃用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return URL 弃用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取弃用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileMd5 弃用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     * 
                     */
                    bool FileMd5HasBeenSet() const;

                private:

                    /**
                     * 采集配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LogConfigInfo> m_logConfigs;
                    bool m_logConfigsHasBeenSet;

                    /**
                     * 服务日志的配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServiceLogConfigInfo> m_serviceLogConfigs;
                    bool m_serviceLogConfigsHasBeenSet;

                    /**
                     * 弃用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastVersion;
                    bool m_lastVersionHasBeenSet;

                    /**
                     * 弃用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_needUpdate;
                    bool m_needUpdateHasBeenSet;

                    /**
                     * 弃用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * 弃用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEAGENTCONFIGSRESPONSE_H_
