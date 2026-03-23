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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Ai Agent 资产信息列表项
                */
                class AIAgentAsset : public AbstractModel
                {
                public:
                    AIAgentAsset();
                    ~AIAgentAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID 标识
                     * @return ID ID 标识
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置ID 标识
                     * @param _iD ID 标识
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取agent 名称
                     * @return AgentName agent 名称
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置agent 名称
                     * @param _agentName agent 名称
                     * 
                     */
                    void SetAgentName(const std::string& _agentName);

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     * 
                     */
                    bool AgentNameHasBeenSet() const;

                    /**
                     * 获取agent 使用模型名称
                     * @return AgentModel agent 使用模型名称
                     * 
                     */
                    std::vector<std::string> GetAgentModel() const;

                    /**
                     * 设置agent 使用模型名称
                     * @param _agentModel agent 使用模型名称
                     * 
                     */
                    void SetAgentModel(const std::vector<std::string>& _agentModel);

                    /**
                     * 判断参数 AgentModel 是否已赋值
                     * @return AgentModel 是否已赋值
                     * 
                     */
                    bool AgentModelHasBeenSet() const;

                    /**
                     * 获取实例 ID
                     * @return InstanceID 实例 ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例 ID
                     * @param _instanceID 实例 ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取metadata 风险列表。有如下枚举值: 1. AK_TMP  2. USER_DATA
                     * @return MetadataRiskList metadata 风险列表。有如下枚举值: 1. AK_TMP  2. USER_DATA
                     * 
                     */
                    std::vector<std::string> GetMetadataRiskList() const;

                    /**
                     * 设置metadata 风险列表。有如下枚举值: 1. AK_TMP  2. USER_DATA
                     * @param _metadataRiskList metadata 风险列表。有如下枚举值: 1. AK_TMP  2. USER_DATA
                     * 
                     */
                    void SetMetadataRiskList(const std::vector<std::string>& _metadataRiskList);

                    /**
                     * 判断参数 MetadataRiskList 是否已赋值
                     * @return MetadataRiskList 是否已赋值
                     * 
                     */
                    bool MetadataRiskListHasBeenSet() const;

                    /**
                     * 获取首次检出时间
                     * @return IdentityTimeFirst 首次检出时间
                     * 
                     */
                    std::string GetIdentityTimeFirst() const;

                    /**
                     * 设置首次检出时间
                     * @param _identityTimeFirst 首次检出时间
                     * 
                     */
                    void SetIdentityTimeFirst(const std::string& _identityTimeFirst);

                    /**
                     * 判断参数 IdentityTimeFirst 是否已赋值
                     * @return IdentityTimeFirst 是否已赋值
                     * 
                     */
                    bool IdentityTimeFirstHasBeenSet() const;

                    /**
                     * 获取最近检出时间
                     * @return IdentityTimeLast 最近检出时间
                     * 
                     */
                    std::string GetIdentityTimeLast() const;

                    /**
                     * 设置最近检出时间
                     * @param _identityTimeLast 最近检出时间
                     * 
                     */
                    void SetIdentityTimeLast(const std::string& _identityTimeLast);

                    /**
                     * 判断参数 IdentityTimeLast 是否已赋值
                     * @return IdentityTimeLast 是否已赋值
                     * 
                     */
                    bool IdentityTimeLastHasBeenSet() const;

                    /**
                     * 获取检出方式。有如下枚举值 1. FINGER 资产指纹方式检出 2. NETWORK 网络访问方式检出
                     * @return IdentityMethod 检出方式。有如下枚举值 1. FINGER 资产指纹方式检出 2. NETWORK 网络访问方式检出
                     * 
                     */
                    std::string GetIdentityMethod() const;

                    /**
                     * 设置检出方式。有如下枚举值 1. FINGER 资产指纹方式检出 2. NETWORK 网络访问方式检出
                     * @param _identityMethod 检出方式。有如下枚举值 1. FINGER 资产指纹方式检出 2. NETWORK 网络访问方式检出
                     * 
                     */
                    void SetIdentityMethod(const std::string& _identityMethod);

                    /**
                     * 判断参数 IdentityMethod 是否已赋值
                     * @return IdentityMethod 是否已赋值
                     * 
                     */
                    bool IdentityMethodHasBeenSet() const;

                    /**
                     * 获取暴露状态。有如下枚举值。1. EXPOSED；2.UNEXPOSED；
3. UNKNOWN;
                     * @return ExposureStatus 暴露状态。有如下枚举值。1. EXPOSED；2.UNEXPOSED；
3. UNKNOWN;
                     * 
                     */
                    std::string GetExposureStatus() const;

                    /**
                     * 设置暴露状态。有如下枚举值。1. EXPOSED；2.UNEXPOSED；
3. UNKNOWN;
                     * @param _exposureStatus 暴露状态。有如下枚举值。1. EXPOSED；2.UNEXPOSED；
3. UNKNOWN;
                     * 
                     */
                    void SetExposureStatus(const std::string& _exposureStatus);

                    /**
                     * 判断参数 ExposureStatus 是否已赋值
                     * @return ExposureStatus 是否已赋值
                     * 
                     */
                    bool ExposureStatusHasBeenSet() const;

                    /**
                     * 获取metadata 有风险时对应路径
                     * @return MetadataRiskURL metadata 有风险时对应路径
                     * 
                     */
                    std::string GetMetadataRiskURL() const;

                    /**
                     * 设置metadata 有风险时对应路径
                     * @param _metadataRiskURL metadata 有风险时对应路径
                     * 
                     */
                    void SetMetadataRiskURL(const std::string& _metadataRiskURL);

                    /**
                     * 判断参数 MetadataRiskURL 是否已赋值
                     * @return MetadataRiskURL 是否已赋值
                     * 
                     */
                    bool MetadataRiskURLHasBeenSet() const;

                private:

                    /**
                     * ID 标识
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * agent 名称
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * agent 使用模型名称
                     */
                    std::vector<std::string> m_agentModel;
                    bool m_agentModelHasBeenSet;

                    /**
                     * 实例 ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * metadata 风险列表。有如下枚举值: 1. AK_TMP  2. USER_DATA
                     */
                    std::vector<std::string> m_metadataRiskList;
                    bool m_metadataRiskListHasBeenSet;

                    /**
                     * 首次检出时间
                     */
                    std::string m_identityTimeFirst;
                    bool m_identityTimeFirstHasBeenSet;

                    /**
                     * 最近检出时间
                     */
                    std::string m_identityTimeLast;
                    bool m_identityTimeLastHasBeenSet;

                    /**
                     * 检出方式。有如下枚举值 1. FINGER 资产指纹方式检出 2. NETWORK 网络访问方式检出
                     */
                    std::string m_identityMethod;
                    bool m_identityMethodHasBeenSet;

                    /**
                     * 暴露状态。有如下枚举值。1. EXPOSED；2.UNEXPOSED；
3. UNKNOWN;
                     */
                    std::string m_exposureStatus;
                    bool m_exposureStatusHasBeenSet;

                    /**
                     * metadata 有风险时对应路径
                     */
                    std::string m_metadataRiskURL;
                    bool m_metadataRiskURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTASSET_H_
