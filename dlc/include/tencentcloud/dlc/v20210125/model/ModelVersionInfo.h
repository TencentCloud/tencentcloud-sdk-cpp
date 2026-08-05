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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MODELVERSIONINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MODELVERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/LinkedServiceInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 模型版本信息
                */
                class ModelVersionInfo : public AbstractModel
                {
                public:
                    ModelVersionInfo();
                    ~ModelVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>版本ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionId <p>版本ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>版本ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionId <p>版本ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

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
                     * 设置<p>关联的模型ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelId <p>关联的模型ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取<p>版本号（如 v1, v2）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version <p>版本号（如 v1, v2）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>版本号（如 v1, v2）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version <p>版本号（如 v1, v2）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>该版本的存储 URI</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageUri <p>该版本的存储 URI</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageUri() const;

                    /**
                     * 设置<p>该版本的存储 URI</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageUri <p>该版本的存储 URI</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageUri(const std::string& _storageUri);

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
                     * 设置<p>版本说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>版本说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

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
                     * 设置<p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

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
                     * 设置<p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

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
                     * 设置<p>关联的推理服务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _linkedServices <p>关联的推理服务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLinkedServices(const std::vector<LinkedServiceInfo>& _linkedServices);

                    /**
                     * 判断参数 LinkedServices 是否已赋值
                     * @return LinkedServices 是否已赋值
                     * 
                     */
                    bool LinkedServicesHasBeenSet() const;

                    /**
                     * 获取<p>是否使用用户自带存储桶（true=用户自带桶，false=平台托管）</p>
                     * @return UseCustomStorage <p>是否使用用户自带存储桶（true=用户自带桶，false=平台托管）</p>
                     * 
                     */
                    bool GetUseCustomStorage() const;

                    /**
                     * 设置<p>是否使用用户自带存储桶（true=用户自带桶，false=平台托管）</p>
                     * @param _useCustomStorage <p>是否使用用户自带存储桶（true=用户自带桶，false=平台托管）</p>
                     * 
                     */
                    void SetUseCustomStorage(const bool& _useCustomStorage);

                    /**
                     * 判断参数 UseCustomStorage 是否已赋值
                     * @return UseCustomStorage 是否已赋值
                     * 
                     */
                    bool UseCustomStorageHasBeenSet() const;

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
                     * <p>版本号（如 v1, v2）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

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
                     * <p>是否使用用户自带存储桶（true=用户自带桶，false=平台托管）</p>
                     */
                    bool m_useCustomStorage;
                    bool m_useCustomStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MODELVERSIONINFO_H_
