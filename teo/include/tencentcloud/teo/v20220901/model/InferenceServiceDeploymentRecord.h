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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICEDEPLOYMENTRECORD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICEDEPLOYMENTRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceServiceConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 推理服务部署历史记录。
                */
                class InferenceServiceDeploymentRecord : public AbstractModel
                {
                public:
                    InferenceServiceDeploymentRecord();
                    ~InferenceServiceDeploymentRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部署记录 ID。
                     * @return RecordId 部署记录 ID。
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置部署记录 ID。
                     * @param _recordId 部署记录 ID。
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取部署操作类型，取值：
<li>create：创建；</li>
<li>update：更新；</li>
<li>resume：启用；</li>
<li>stop：停用。</li>
                     * @return Operation 部署操作类型，取值：
<li>create：创建；</li>
<li>update：更新；</li>
<li>resume：启用；</li>
<li>stop：停用。</li>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置部署操作类型，取值：
<li>create：创建；</li>
<li>update：更新；</li>
<li>resume：启用；</li>
<li>stop：停用。</li>
                     * @param _operation 部署操作类型，取值：
<li>create：创建；</li>
<li>update：更新；</li>
<li>resume：启用；</li>
<li>stop：停用。</li>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取部署状态，取值：
<li>processing：部署中；</li>
<li>succeeded：部署成功；</li>
<li>failed：部署失败。</li>
                     * @return Status 部署状态，取值：
<li>processing：部署中；</li>
<li>succeeded：部署成功；</li>
<li>failed：部署失败。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置部署状态，取值：
<li>processing：部署中；</li>
<li>succeeded：部署成功；</li>
<li>failed：部署失败。</li>
                     * @param _status 部署状态，取值：
<li>processing：部署中；</li>
<li>succeeded：部署成功；</li>
<li>failed：部署失败。</li>
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
                     * 获取部署时长，单位：秒。
                     * @return Duration 部署时长，单位：秒。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置部署时长，单位：秒。
                     * @param _duration 部署时长，单位：秒。
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取本次推理服务部署的配置。
                     * @return InferenceServiceConfig 本次推理服务部署的配置。
                     * 
                     */
                    InferenceServiceConfig GetInferenceServiceConfig() const;

                    /**
                     * 设置本次推理服务部署的配置。
                     * @param _inferenceServiceConfig 本次推理服务部署的配置。
                     * 
                     */
                    void SetInferenceServiceConfig(const InferenceServiceConfig& _inferenceServiceConfig);

                    /**
                     * 判断参数 InferenceServiceConfig 是否已赋值
                     * @return InferenceServiceConfig 是否已赋值
                     * 
                     */
                    bool InferenceServiceConfigHasBeenSet() const;

                    /**
                     * 获取部署发起时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return CreateTime 部署发起时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置部署发起时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _createTime 部署发起时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
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
                     * 获取该部署配置是否是当前生效配置，取值：
<li> active：当前生效配置；</li>
<li> inactive：历史版本或异常版本配置。</li>
                     * @return ActiveStatus 该部署配置是否是当前生效配置，取值：
<li> active：当前生效配置；</li>
<li> inactive：历史版本或异常版本配置。</li>
                     * 
                     */
                    std::string GetActiveStatus() const;

                    /**
                     * 设置该部署配置是否是当前生效配置，取值：
<li> active：当前生效配置；</li>
<li> inactive：历史版本或异常版本配置。</li>
                     * @param _activeStatus 该部署配置是否是当前生效配置，取值：
<li> active：当前生效配置；</li>
<li> inactive：历史版本或异常版本配置。</li>
                     * 
                     */
                    void SetActiveStatus(const std::string& _activeStatus);

                    /**
                     * 判断参数 ActiveStatus 是否已赋值
                     * @return ActiveStatus 是否已赋值
                     * 
                     */
                    bool ActiveStatusHasBeenSet() const;

                private:

                    /**
                     * 部署记录 ID。
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 部署操作类型，取值：
<li>create：创建；</li>
<li>update：更新；</li>
<li>resume：启用；</li>
<li>stop：停用。</li>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 部署状态，取值：
<li>processing：部署中；</li>
<li>succeeded：部署成功；</li>
<li>failed：部署失败。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 部署时长，单位：秒。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 本次推理服务部署的配置。
                     */
                    InferenceServiceConfig m_inferenceServiceConfig;
                    bool m_inferenceServiceConfigHasBeenSet;

                    /**
                     * 部署发起时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 该部署配置是否是当前生效配置，取值：
<li> active：当前生效配置；</li>
<li> inactive：历史版本或异常版本配置。</li>
                     */
                    std::string m_activeStatus;
                    bool m_activeStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICEDEPLOYMENTRECORD_H_
