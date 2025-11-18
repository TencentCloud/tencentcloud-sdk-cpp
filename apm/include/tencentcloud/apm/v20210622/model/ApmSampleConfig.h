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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMSAMPLECONFIG_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMSAMPLECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/APMKVItem.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 采样配置信息
                */
                class ApmSampleConfig : public AbstractModel
                {
                public:
                    ApmSampleConfig();
                    ~ApmSampleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceKey 实例ID
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置实例ID
                     * @param _instanceKey 实例ID
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取服务名
                     * @return ServiceName 服务名
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名
                     * @param _serviceName 服务名
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
                     * 获取采样名字
                     * @return SampleName 采样名字
                     * 
                     */
                    std::string GetSampleName() const;

                    /**
                     * 设置采样名字
                     * @param _sampleName 采样名字
                     * 
                     */
                    void SetSampleName(const std::string& _sampleName);

                    /**
                     * 判断参数 SampleName 是否已赋值
                     * @return SampleName 是否已赋值
                     * 
                     */
                    bool SampleNameHasBeenSet() const;

                    /**
                     * 获取接口名
                     * @return OperationName 接口名
                     * 
                     */
                    std::string GetOperationName() const;

                    /**
                     * 设置接口名
                     * @param _operationName 接口名
                     * 
                     */
                    void SetOperationName(const std::string& _operationName);

                    /**
                     * 判断参数 OperationName 是否已赋值
                     * @return OperationName 是否已赋值
                     * 
                     */
                    bool OperationNameHasBeenSet() const;

                    /**
                     * 获取采样的span数
                     * @return SpanNum 采样的span数
                     * 
                     */
                    int64_t GetSpanNum() const;

                    /**
                     * 设置采样的span数
                     * @param _spanNum 采样的span数
                     * 
                     */
                    void SetSpanNum(const int64_t& _spanNum);

                    /**
                     * 判断参数 SpanNum 是否已赋值
                     * @return SpanNum 是否已赋值
                     * 
                     */
                    bool SpanNumHasBeenSet() const;

                    /**
                     * 获取采样配置开关 0 关 1 开
                     * @return Status 采样配置开关 0 关 1 开
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置采样配置开关 0 关 1 开
                     * @param _status 采样配置开关 0 关 1 开
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取tags数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags tags数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<APMKVItem> GetTags() const;

                    /**
                     * 设置tags数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags tags数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<APMKVItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取采样率
                     * @return SampleRate 采样率
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置采样率
                     * @param _sampleRate 采样率
                     * 
                     */
                    void SetSampleRate(const int64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取0=精确匹配（默认）；1=前缀匹配；2=后缀匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperationType 0=精确匹配（默认）；1=前缀匹配；2=后缀匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOperationType() const;

                    /**
                     * 设置0=精确匹配（默认）；1=前缀匹配；2=后缀匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operationType 0=精确匹配（默认）；1=前缀匹配；2=后缀匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperationType(const int64_t& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取配置Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 配置Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置配置Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 配置Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * 服务名
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 采样名字
                     */
                    std::string m_sampleName;
                    bool m_sampleNameHasBeenSet;

                    /**
                     * 接口名
                     */
                    std::string m_operationName;
                    bool m_operationNameHasBeenSet;

                    /**
                     * 采样的span数
                     */
                    int64_t m_spanNum;
                    bool m_spanNumHasBeenSet;

                    /**
                     * 采样配置开关 0 关 1 开
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * tags数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<APMKVItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 采样率
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 0=精确匹配（默认）；1=前缀匹配；2=后缀匹配
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 配置Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMSAMPLECONFIG_H_
