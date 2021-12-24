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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_PODSTATUS_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_PODSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * Pod状态信息
                */
                class PodStatus : public AbstractModel
                {
                public:
                    PodStatus();
                    ~PodStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameSpace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNameSpace() const;

                    /**
                     * 设置命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NameSpace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNameSpace(const std::string& _nameSpace);

                    /**
                     * 判断参数 NameSpace 是否已赋值
                     * @return NameSpace 是否已赋值
                     */
                    bool NameSpaceHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IP IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIP() const;

                    /**
                     * 设置IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IP IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTime 启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunSec 运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRunSec() const;

                    /**
                     * 设置运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RunSec 运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRunSec(const int64_t& _runSec);

                    /**
                     * 判断参数 RunSec 是否已赋值
                     * @return RunSec 是否已赋值
                     */
                    bool RunSecHasBeenSet() const;

                    /**
                     * 获取重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestartCount 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRestartCount() const;

                    /**
                     * 设置重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RestartCount 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRestartCount(const int64_t& _restartCount);

                    /**
                     * 判断参数 RestartCount 是否已赋值
                     * @return RestartCount 是否已赋值
                     */
                    bool RestartCountHasBeenSet() const;

                private:

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nameSpace;
                    bool m_nameSpaceHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runSec;
                    bool m_runSecHasBeenSet;

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

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_PODSTATUS_H_
