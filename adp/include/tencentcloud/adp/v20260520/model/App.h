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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APP_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppAuxiliaryInfo.h>
#include <tencentcloud/adp/v20260520/model/AppConfig.h>
#include <tencentcloud/adp/v20260520/model/AppMetadata.h>
#include <tencentcloud/adp/v20260520/model/AppSecretInfo.h>
#include <tencentcloud/adp/v20260520/model/AppShareURLInfo.h>
#include <tencentcloud/adp/v20260520/model/AppStatusInfo.h>
#include <tencentcloud/adp/v20260520/model/AppSharedKbInfo.h>
#include <tencentcloud/adp/v20260520/model/CorpShareConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * App 应用完整信息
                */
                class App : public AbstractModel
                {
                public:
                    App();
                    ~App() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>辅助信息(子状态/审批/申诉/搜索资源/特殊状态等)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuxiliaryInfo <p>辅助信息(子状态/审批/申诉/搜索资源/特殊状态等)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppAuxiliaryInfo GetAuxiliaryInfo() const;

                    /**
                     * 设置<p>辅助信息(子状态/审批/申诉/搜索资源/特殊状态等)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _auxiliaryInfo <p>辅助信息(子状态/审批/申诉/搜索资源/特殊状态等)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuxiliaryInfo(const AppAuxiliaryInfo& _auxiliaryInfo);

                    /**
                     * 判断参数 AuxiliaryInfo 是否已赋值
                     * @return AuxiliaryInfo 是否已赋值
                     * 
                     */
                    bool AuxiliaryInfoHasBeenSet() const;

                    /**
                     * 获取<p>配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Config <p>配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppConfig GetConfig() const;

                    /**
                     * 设置<p>配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _config <p>配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfig(const AppConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取<p>元数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metadata <p>元数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppMetadata GetMetadata() const;

                    /**
                     * 设置<p>元数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metadata <p>元数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetadata(const AppMetadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取<p>应用密钥信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretInfo <p>应用密钥信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppSecretInfo GetSecretInfo() const;

                    /**
                     * 设置<p>应用密钥信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretInfo <p>应用密钥信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecretInfo(const AppSecretInfo& _secretInfo);

                    /**
                     * 判断参数 SecretInfo 是否已赋值
                     * @return SecretInfo 是否已赋值
                     * 
                     */
                    bool SecretInfoHasBeenSet() const;

                    /**
                     * 获取<p>分享链接信息(含访问控制)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShareUrlInfo <p>分享链接信息(含访问控制)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppShareURLInfo GetShareUrlInfo() const;

                    /**
                     * 设置<p>分享链接信息(含访问控制)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shareUrlInfo <p>分享链接信息(含访问控制)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShareUrlInfo(const AppShareURLInfo& _shareUrlInfo);

                    /**
                     * 判断参数 ShareUrlInfo 是否已赋值
                     * @return ShareUrlInfo 是否已赋值
                     * 
                     */
                    bool ShareUrlInfoHasBeenSet() const;

                    /**
                     * 获取<p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppStatusInfo GetStatus() const;

                    /**
                     * 设置<p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const AppStatusInfo& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>应用引用的共享知识库列表</p>
                     * @return SharedKbList <p>应用引用的共享知识库列表</p>
                     * 
                     */
                    std::vector<AppSharedKbInfo> GetSharedKbList() const;

                    /**
                     * 设置<p>应用引用的共享知识库列表</p>
                     * @param _sharedKbList <p>应用引用的共享知识库列表</p>
                     * 
                     */
                    void SetSharedKbList(const std::vector<AppSharedKbInfo>& _sharedKbList);

                    /**
                     * 判断参数 SharedKbList 是否已赋值
                     * @return SharedKbList 是否已赋值
                     * 
                     */
                    bool SharedKbListHasBeenSet() const;

                    /**
                     * 获取<p>企业共享配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CorpShareConfig <p>企业共享配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CorpShareConfig GetCorpShareConfig() const;

                    /**
                     * 设置<p>企业共享配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _corpShareConfig <p>企业共享配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCorpShareConfig(const CorpShareConfig& _corpShareConfig);

                    /**
                     * 判断参数 CorpShareConfig 是否已赋值
                     * @return CorpShareConfig 是否已赋值
                     * 
                     */
                    bool CorpShareConfigHasBeenSet() const;

                private:

                    /**
                     * <p>辅助信息(子状态/审批/申诉/搜索资源/特殊状态等)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppAuxiliaryInfo m_auxiliaryInfo;
                    bool m_auxiliaryInfoHasBeenSet;

                    /**
                     * <p>配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>元数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppMetadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>应用密钥信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppSecretInfo m_secretInfo;
                    bool m_secretInfoHasBeenSet;

                    /**
                     * <p>分享链接信息(含访问控制)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppShareURLInfo m_shareUrlInfo;
                    bool m_shareUrlInfoHasBeenSet;

                    /**
                     * <p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppStatusInfo m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>应用引用的共享知识库列表</p>
                     */
                    std::vector<AppSharedKbInfo> m_sharedKbList;
                    bool m_sharedKbListHasBeenSet;

                    /**
                     * <p>企业共享配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CorpShareConfig m_corpShareConfig;
                    bool m_corpShareConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APP_H_
