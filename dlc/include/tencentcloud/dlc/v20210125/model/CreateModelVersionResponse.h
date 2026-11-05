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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEMODELVERSIONRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEMODELVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/LinkedServiceInfo.h>
#include <tencentcloud/dlc/v20210125/model/RegisterMeta.h>
#include <tencentcloud/dlc/v20210125/model/LoraVersionMeta.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateModelVersion返回参数结构体
                */
                class CreateModelVersionResponse : public AbstractModel
                {
                public:
                    CreateModelVersionResponse();
                    ~CreateModelVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>版本ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionId <p>版本ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取<p>关联的模型ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelId <p>关联的模型ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取<p>该版本的存储 URI</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageUri <p>该版本的存储 URI</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageUri() const;

                    /**
                     * 判断参数 StorageUri 是否已赋值
                     * @return StorageUri 是否已赋值
                     * 
                     */
                    bool StorageUriHasBeenSet() const;

                    /**
                     * 获取<p>版本说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>版本说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>关联的推理服务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinkedServices <p>关联的推理服务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LinkedServiceInfo> GetLinkedServices() const;

                    /**
                     * 判断参数 LinkedServices 是否已赋值
                     * @return LinkedServices 是否已赋值
                     * 
                     */
                    bool LinkedServicesHasBeenSet() const;

                    /**
                     * 获取<p>模型版本号</p>
                     * @return Version <p>模型版本号</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>是否使用用户自带存储桶（true=用户自带桶，false=平台托管）</p>
                     * @return UseCustomStorage <p>是否使用用户自带存储桶（true=用户自带桶，false=平台托管）</p>
                     * 
                     */
                    bool GetUseCustomStorage() const;

                    /**
                     * 判断参数 UseCustomStorage 是否已赋值
                     * @return UseCustomStorage 是否已赋值
                     * 
                     */
                    bool UseCustomStorageHasBeenSet() const;

                    /**
                     * 获取<p>注册元信息（仅注册语义创建的版本有值，与创建请求 RegisterMeta 结构一致）</p>
                     * @return RegisterMeta <p>注册元信息（仅注册语义创建的版本有值，与创建请求 RegisterMeta 结构一致）</p>
                     * 
                     */
                    RegisterMeta GetRegisterMeta() const;

                    /**
                     * 判断参数 RegisterMeta 是否已赋值
                     * @return RegisterMeta 是否已赋值
                     * 
                     */
                    bool RegisterMetaHasBeenSet() const;

                    /**
                     * 获取<p>版本业务唯一标识；LoRA 模型版本挂载到部署时以此引用</p>
                     * @return VersionUid <p>版本业务唯一标识；LoRA 模型版本挂载到部署时以此引用</p>
                     * 
                     */
                    std::string GetVersionUid() const;

                    /**
                     * 判断参数 VersionUid 是否已赋值
                     * @return VersionUid 是否已赋值
                     * 
                     */
                    bool VersionUidHasBeenSet() const;

                    /**
                     * 获取<p>LoRA Adapter 元信息（仅 LoRA 模型版本有值，解析自 adapter_config.json）</p>
                     * @return LoraMeta <p>LoRA Adapter 元信息（仅 LoRA 模型版本有值，解析自 adapter_config.json）</p>
                     * 
                     */
                    LoraVersionMeta GetLoraMeta() const;

                    /**
                     * 判断参数 LoraMeta 是否已赋值
                     * @return LoraMeta 是否已赋值
                     * 
                     */
                    bool LoraMetaHasBeenSet() const;

                    /**
                     * 获取<p>LoRA pool 异步导入状态（Importing/Ready/Failed；NULL=就绪），未就绪不能挂载</p>
                     * @return PoolImportStatus <p>LoRA pool 异步导入状态（Importing/Ready/Failed；NULL=就绪），未就绪不能挂载</p>
                     * 
                     */
                    std::string GetPoolImportStatus() const;

                    /**
                     * 判断参数 PoolImportStatus 是否已赋值
                     * @return PoolImportStatus 是否已赋值
                     * 
                     */
                    bool PoolImportStatusHasBeenSet() const;

                private:

                    /**
                     * <p>版本ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * <p>关联的模型ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>该版本的存储 URI</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageUri;
                    bool m_storageUriHasBeenSet;

                    /**
                     * <p>版本说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>关联的推理服务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LinkedServiceInfo> m_linkedServices;
                    bool m_linkedServicesHasBeenSet;

                    /**
                     * <p>模型版本号</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>是否使用用户自带存储桶（true=用户自带桶，false=平台托管）</p>
                     */
                    bool m_useCustomStorage;
                    bool m_useCustomStorageHasBeenSet;

                    /**
                     * <p>注册元信息（仅注册语义创建的版本有值，与创建请求 RegisterMeta 结构一致）</p>
                     */
                    RegisterMeta m_registerMeta;
                    bool m_registerMetaHasBeenSet;

                    /**
                     * <p>版本业务唯一标识；LoRA 模型版本挂载到部署时以此引用</p>
                     */
                    std::string m_versionUid;
                    bool m_versionUidHasBeenSet;

                    /**
                     * <p>LoRA Adapter 元信息（仅 LoRA 模型版本有值，解析自 adapter_config.json）</p>
                     */
                    LoraVersionMeta m_loraMeta;
                    bool m_loraMetaHasBeenSet;

                    /**
                     * <p>LoRA pool 异步导入状态（Importing/Ready/Failed；NULL=就绪），未就绪不能挂载</p>
                     */
                    std::string m_poolImportStatus;
                    bool m_poolImportStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEMODELVERSIONRESPONSE_H_
