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
#include <tencentcloud/csip/v20221121/model/SkillState.h>


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
                     * 获取<p>ID 标识</p>
                     * @return ID <p>ID 标识</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>ID 标识</p>
                     * @param _iD <p>ID 标识</p>
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
                     * 获取<p>agent 名称</p>
                     * @return AgentName <p>agent 名称</p>
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置<p>agent 名称</p>
                     * @param _agentName <p>agent 名称</p>
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
                     * 获取<p>agent 使用模型名称</p>
                     * @return AgentModel <p>agent 使用模型名称</p>
                     * 
                     */
                    std::vector<std::string> GetAgentModel() const;

                    /**
                     * 设置<p>agent 使用模型名称</p>
                     * @param _agentModel <p>agent 使用模型名称</p>
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
                     * 获取<p>实例 ID</p>
                     * @return InstanceID <p>实例 ID</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _instanceID <p>实例 ID</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>metadata 风险列表。有如下枚举值: 1. AK_TMP  2. USER_DATA</p>
                     * @return MetadataRiskList <p>metadata 风险列表。有如下枚举值: 1. AK_TMP  2. USER_DATA</p>
                     * 
                     */
                    std::vector<std::string> GetMetadataRiskList() const;

                    /**
                     * 设置<p>metadata 风险列表。有如下枚举值: 1. AK_TMP  2. USER_DATA</p>
                     * @param _metadataRiskList <p>metadata 风险列表。有如下枚举值: 1. AK_TMP  2. USER_DATA</p>
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
                     * 获取<p>首次检出时间</p>
                     * @return IdentityTimeFirst <p>首次检出时间</p>
                     * 
                     */
                    std::string GetIdentityTimeFirst() const;

                    /**
                     * 设置<p>首次检出时间</p>
                     * @param _identityTimeFirst <p>首次检出时间</p>
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
                     * 获取<p>最近检出时间</p>
                     * @return IdentityTimeLast <p>最近检出时间</p>
                     * 
                     */
                    std::string GetIdentityTimeLast() const;

                    /**
                     * 设置<p>最近检出时间</p>
                     * @param _identityTimeLast <p>最近检出时间</p>
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
                     * 获取<p>检出方式。有如下枚举值 1. FINGER 资产指纹方式检出 2. NETWORK 网络访问方式检出</p>
                     * @return IdentityMethod <p>检出方式。有如下枚举值 1. FINGER 资产指纹方式检出 2. NETWORK 网络访问方式检出</p>
                     * 
                     */
                    std::string GetIdentityMethod() const;

                    /**
                     * 设置<p>检出方式。有如下枚举值 1. FINGER 资产指纹方式检出 2. NETWORK 网络访问方式检出</p>
                     * @param _identityMethod <p>检出方式。有如下枚举值 1. FINGER 资产指纹方式检出 2. NETWORK 网络访问方式检出</p>
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
                     * 获取<p>暴露状态。有如下枚举值。1. EXPOSED；2.UNEXPOSED；</p><ol start="3"><li>UNKNOWN;</li></ol>
                     * @return ExposureStatus <p>暴露状态。有如下枚举值。1. EXPOSED；2.UNEXPOSED；</p><ol start="3"><li>UNKNOWN;</li></ol>
                     * 
                     */
                    std::string GetExposureStatus() const;

                    /**
                     * 设置<p>暴露状态。有如下枚举值。1. EXPOSED；2.UNEXPOSED；</p><ol start="3"><li>UNKNOWN;</li></ol>
                     * @param _exposureStatus <p>暴露状态。有如下枚举值。1. EXPOSED；2.UNEXPOSED；</p><ol start="3"><li>UNKNOWN;</li></ol>
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
                     * 获取<p>metadata 有风险时对应路径</p>
                     * @return MetadataRiskURL <p>metadata 有风险时对应路径</p>
                     * 
                     */
                    std::string GetMetadataRiskURL() const;

                    /**
                     * 设置<p>metadata 有风险时对应路径</p>
                     * @param _metadataRiskURL <p>metadata 有风险时对应路径</p>
                     * 
                     */
                    void SetMetadataRiskURL(const std::string& _metadataRiskURL);

                    /**
                     * 判断参数 MetadataRiskURL 是否已赋值
                     * @return MetadataRiskURL 是否已赋值
                     * 
                     */
                    bool MetadataRiskURLHasBeenSet() const;

                    /**
                     * 获取<p>无</p>
                     * @return SkillState <p>无</p>
                     * 
                     */
                    SkillState GetSkillState() const;

                    /**
                     * 设置<p>无</p>
                     * @param _skillState <p>无</p>
                     * 
                     */
                    void SetSkillState(const SkillState& _skillState);

                    /**
                     * 判断参数 SkillState 是否已赋值
                     * @return SkillState 是否已赋值
                     * 
                     */
                    bool SkillStateHasBeenSet() const;

                private:

                    /**
                     * <p>ID 标识</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>agent 名称</p>
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * <p>agent 使用模型名称</p>
                     */
                    std::vector<std::string> m_agentModel;
                    bool m_agentModelHasBeenSet;

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>metadata 风险列表。有如下枚举值: 1. AK_TMP  2. USER_DATA</p>
                     */
                    std::vector<std::string> m_metadataRiskList;
                    bool m_metadataRiskListHasBeenSet;

                    /**
                     * <p>首次检出时间</p>
                     */
                    std::string m_identityTimeFirst;
                    bool m_identityTimeFirstHasBeenSet;

                    /**
                     * <p>最近检出时间</p>
                     */
                    std::string m_identityTimeLast;
                    bool m_identityTimeLastHasBeenSet;

                    /**
                     * <p>检出方式。有如下枚举值 1. FINGER 资产指纹方式检出 2. NETWORK 网络访问方式检出</p>
                     */
                    std::string m_identityMethod;
                    bool m_identityMethodHasBeenSet;

                    /**
                     * <p>暴露状态。有如下枚举值。1. EXPOSED；2.UNEXPOSED；</p><ol start="3"><li>UNKNOWN;</li></ol>
                     */
                    std::string m_exposureStatus;
                    bool m_exposureStatusHasBeenSet;

                    /**
                     * <p>metadata 有风险时对应路径</p>
                     */
                    std::string m_metadataRiskURL;
                    bool m_metadataRiskURLHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    SkillState m_skillState;
                    bool m_skillStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTASSET_H_
