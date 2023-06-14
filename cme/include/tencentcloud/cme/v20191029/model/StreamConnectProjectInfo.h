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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_STREAMCONNECTPROJECTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_STREAMCONNECTPROJECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/StreamInputInfo.h>
#include <tencentcloud/cme/v20191029/model/StreamConnectOutputInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 云转推项目信息，包含输入源、输出源、当前转推开始时间等信息。
                */
                class StreamConnectProjectInfo : public AbstractModel
                {
                public:
                    StreamConnectProjectInfo();
                    ~StreamConnectProjectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转推项目状态，取值有：
<li>Working ：转推中；</li>
<li>Idle ：空闲中。</li>
                     * @return Status 转推项目状态，取值有：
<li>Working ：转推中；</li>
<li>Idle ：空闲中。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置转推项目状态，取值有：
<li>Working ：转推中；</li>
<li>Idle ：空闲中。</li>
                     * @param _status 转推项目状态，取值有：
<li>Working ：转推中；</li>
<li>Idle ：空闲中。</li>
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
                     * 获取当前转推输入源，取值有：
<li>Main ：主输入源；</li>
<li>Backup ：备输入源。</li>
                     * @return CurrentInputEndpoint 当前转推输入源，取值有：
<li>Main ：主输入源；</li>
<li>Backup ：备输入源。</li>
                     * 
                     */
                    std::string GetCurrentInputEndpoint() const;

                    /**
                     * 设置当前转推输入源，取值有：
<li>Main ：主输入源；</li>
<li>Backup ：备输入源。</li>
                     * @param _currentInputEndpoint 当前转推输入源，取值有：
<li>Main ：主输入源；</li>
<li>Backup ：备输入源。</li>
                     * 
                     */
                    void SetCurrentInputEndpoint(const std::string& _currentInputEndpoint);

                    /**
                     * 判断参数 CurrentInputEndpoint 是否已赋值
                     * @return CurrentInputEndpoint 是否已赋值
                     * 
                     */
                    bool CurrentInputEndpointHasBeenSet() const;

                    /**
                     * 获取当前转推开始时间， 采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。仅 Status 取值 Working 时有效。
                     * @return CurrentStartTime 当前转推开始时间， 采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。仅 Status 取值 Working 时有效。
                     * 
                     */
                    std::string GetCurrentStartTime() const;

                    /**
                     * 设置当前转推开始时间， 采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。仅 Status 取值 Working 时有效。
                     * @param _currentStartTime 当前转推开始时间， 采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。仅 Status 取值 Working 时有效。
                     * 
                     */
                    void SetCurrentStartTime(const std::string& _currentStartTime);

                    /**
                     * 判断参数 CurrentStartTime 是否已赋值
                     * @return CurrentStartTime 是否已赋值
                     * 
                     */
                    bool CurrentStartTimeHasBeenSet() const;

                    /**
                     * 获取当前转推计划结束时间， 采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。仅 Status 取值 Working 时有效。
                     * @return CurrentStopTime 当前转推计划结束时间， 采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。仅 Status 取值 Working 时有效。
                     * 
                     */
                    std::string GetCurrentStopTime() const;

                    /**
                     * 设置当前转推计划结束时间， 采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。仅 Status 取值 Working 时有效。
                     * @param _currentStopTime 当前转推计划结束时间， 采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。仅 Status 取值 Working 时有效。
                     * 
                     */
                    void SetCurrentStopTime(const std::string& _currentStopTime);

                    /**
                     * 判断参数 CurrentStopTime 是否已赋值
                     * @return CurrentStopTime 是否已赋值
                     * 
                     */
                    bool CurrentStopTimeHasBeenSet() const;

                    /**
                     * 获取上一次转推结束时间， 采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。仅 Status 取值 Idle 时有效。
                     * @return LastStopTime 上一次转推结束时间， 采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。仅 Status 取值 Idle 时有效。
                     * 
                     */
                    std::string GetLastStopTime() const;

                    /**
                     * 设置上一次转推结束时间， 采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。仅 Status 取值 Idle 时有效。
                     * @param _lastStopTime 上一次转推结束时间， 采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。仅 Status 取值 Idle 时有效。
                     * 
                     */
                    void SetLastStopTime(const std::string& _lastStopTime);

                    /**
                     * 判断参数 LastStopTime 是否已赋值
                     * @return LastStopTime 是否已赋值
                     * 
                     */
                    bool LastStopTimeHasBeenSet() const;

                    /**
                     * 获取云转推主输入源。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MainInput 云转推主输入源。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StreamInputInfo GetMainInput() const;

                    /**
                     * 设置云转推主输入源。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mainInput 云转推主输入源。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMainInput(const StreamInputInfo& _mainInput);

                    /**
                     * 判断参数 MainInput 是否已赋值
                     * @return MainInput 是否已赋值
                     * 
                     */
                    bool MainInputHasBeenSet() const;

                    /**
                     * 获取云转推备输入源。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupInput 云转推备输入源。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StreamInputInfo GetBackupInput() const;

                    /**
                     * 设置云转推备输入源。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupInput 云转推备输入源。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackupInput(const StreamInputInfo& _backupInput);

                    /**
                     * 判断参数 BackupInput 是否已赋值
                     * @return BackupInput 是否已赋值
                     * 
                     */
                    bool BackupInputHasBeenSet() const;

                    /**
                     * 获取云转推输出源。
                     * @return OutputSet 云转推输出源。
                     * 
                     */
                    std::vector<StreamConnectOutputInfo> GetOutputSet() const;

                    /**
                     * 设置云转推输出源。
                     * @param _outputSet 云转推输出源。
                     * 
                     */
                    void SetOutputSet(const std::vector<StreamConnectOutputInfo>& _outputSet);

                    /**
                     * 判断参数 OutputSet 是否已赋值
                     * @return OutputSet 是否已赋值
                     * 
                     */
                    bool OutputSetHasBeenSet() const;

                private:

                    /**
                     * 转推项目状态，取值有：
<li>Working ：转推中；</li>
<li>Idle ：空闲中。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当前转推输入源，取值有：
<li>Main ：主输入源；</li>
<li>Backup ：备输入源。</li>
                     */
                    std::string m_currentInputEndpoint;
                    bool m_currentInputEndpointHasBeenSet;

                    /**
                     * 当前转推开始时间， 采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。仅 Status 取值 Working 时有效。
                     */
                    std::string m_currentStartTime;
                    bool m_currentStartTimeHasBeenSet;

                    /**
                     * 当前转推计划结束时间， 采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。仅 Status 取值 Working 时有效。
                     */
                    std::string m_currentStopTime;
                    bool m_currentStopTimeHasBeenSet;

                    /**
                     * 上一次转推结束时间， 采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。仅 Status 取值 Idle 时有效。
                     */
                    std::string m_lastStopTime;
                    bool m_lastStopTimeHasBeenSet;

                    /**
                     * 云转推主输入源。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StreamInputInfo m_mainInput;
                    bool m_mainInputHasBeenSet;

                    /**
                     * 云转推备输入源。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StreamInputInfo m_backupInput;
                    bool m_backupInputHasBeenSet;

                    /**
                     * 云转推输出源。
                     */
                    std::vector<StreamConnectOutputInfo> m_outputSet;
                    bool m_outputSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_STREAMCONNECTPROJECTINFO_H_
