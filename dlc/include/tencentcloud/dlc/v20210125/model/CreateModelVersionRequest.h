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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEMODELVERSIONREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEMODELVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/GooseFSConfig.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateModelVersion请求参数结构体
                */
                class CreateModelVersionRequest : public AbstractModel
                {
                public:
                    CreateModelVersionRequest();
                    ~CreateModelVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型UID</p>
                     * @return ModelUid <p>模型UID</p>
                     * 
                     */
                    std::string GetModelUid() const;

                    /**
                     * 设置<p>模型UID</p>
                     * @param _modelUid <p>模型UID</p>
                     * 
                     */
                    void SetModelUid(const std::string& _modelUid);

                    /**
                     * 判断参数 ModelUid 是否已赋值
                     * @return ModelUid 是否已赋值
                     * 
                     */
                    bool ModelUidHasBeenSet() const;

                    /**
                     * 获取<p>模型版本号</p>
                     * @return ModelVersion <p>模型版本号</p>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>模型版本号</p>
                     * @param _modelVersion <p>模型版本号</p>
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取<p>版本说明</p>
                     * @return Description <p>版本说明</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>版本说明</p>
                     * @param _description <p>版本说明</p>
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
                     * 获取<p>该版本的存储 URI（可选，如 cos://bucket-name/models/name/v2/）</p>
                     * @return StorageUri <p>该版本的存储 URI（可选，如 cos://bucket-name/models/name/v2/）</p>
                     * 
                     */
                    std::string GetStorageUri() const;

                    /**
                     * 设置<p>该版本的存储 URI（可选，如 cos://bucket-name/models/name/v2/）</p>
                     * @param _storageUri <p>该版本的存储 URI（可选，如 cos://bucket-name/models/name/v2/）</p>
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
                     * 获取<p>是否使用用户自带存储桶（默认 false 表示平台托管）</p>
                     * @return UseCustomStorage <p>是否使用用户自带存储桶（默认 false 表示平台托管）</p>
                     * 
                     */
                    bool GetUseCustomStorage() const;

                    /**
                     * 设置<p>是否使用用户自带存储桶（默认 false 表示平台托管）</p>
                     * @param _useCustomStorage <p>是否使用用户自带存储桶（默认 false 表示平台托管）</p>
                     * 
                     */
                    void SetUseCustomStorage(const bool& _useCustomStorage);

                    /**
                     * 判断参数 UseCustomStorage 是否已赋值
                     * @return UseCustomStorage 是否已赋值
                     * 
                     */
                    bool UseCustomStorageHasBeenSet() const;

                    /**
                     * 获取<p>创建模型时，模型从goosfe里面选取，则需要传递该参数</p>
                     * @return GooseFSConfig <p>创建模型时，模型从goosfe里面选取，则需要传递该参数</p>
                     * 
                     */
                    GooseFSConfig GetGooseFSConfig() const;

                    /**
                     * 设置<p>创建模型时，模型从goosfe里面选取，则需要传递该参数</p>
                     * @param _gooseFSConfig <p>创建模型时，模型从goosfe里面选取，则需要传递该参数</p>
                     * 
                     */
                    void SetGooseFSConfig(const GooseFSConfig& _gooseFSConfig);

                    /**
                     * 判断参数 GooseFSConfig 是否已赋值
                     * @return GooseFSConfig 是否已赋值
                     * 
                     */
                    bool GooseFSConfigHasBeenSet() const;

                    /**
                     * 获取<p>模型上传路径类型</p><p>枚举值：</p><ul><li>LOCAL： 本地上传</li><li>CFS： CFS上传</li><li>COS： COS上传</li><li>CFSTurbo： CFSTurbo上传</li><li>GooseFS： GooseFS上传</li></ul><p>选择cos、cfs、cfstrubo则必须要传storageuri，选择local时不能传递goosefsconfig</p>
                     * @return StorageType <p>模型上传路径类型</p><p>枚举值：</p><ul><li>LOCAL： 本地上传</li><li>CFS： CFS上传</li><li>COS： COS上传</li><li>CFSTurbo： CFSTurbo上传</li><li>GooseFS： GooseFS上传</li></ul><p>选择cos、cfs、cfstrubo则必须要传storageuri，选择local时不能传递goosefsconfig</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>模型上传路径类型</p><p>枚举值：</p><ul><li>LOCAL： 本地上传</li><li>CFS： CFS上传</li><li>COS： COS上传</li><li>CFSTurbo： CFSTurbo上传</li><li>GooseFS： GooseFS上传</li></ul><p>选择cos、cfs、cfstrubo则必须要传storageuri，选择local时不能传递goosefsconfig</p>
                     * @param _storageType <p>模型上传路径类型</p><p>枚举值：</p><ul><li>LOCAL： 本地上传</li><li>CFS： CFS上传</li><li>COS： COS上传</li><li>CFSTurbo： CFSTurbo上传</li><li>GooseFS： GooseFS上传</li></ul><p>选择cos、cfs、cfstrubo则必须要传storageuri，选择local时不能传递goosefsconfig</p>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                private:

                    /**
                     * <p>模型UID</p>
                     */
                    std::string m_modelUid;
                    bool m_modelUidHasBeenSet;

                    /**
                     * <p>模型版本号</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>版本说明</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>该版本的存储 URI（可选，如 cos://bucket-name/models/name/v2/）</p>
                     */
                    std::string m_storageUri;
                    bool m_storageUriHasBeenSet;

                    /**
                     * <p>是否使用用户自带存储桶（默认 false 表示平台托管）</p>
                     */
                    bool m_useCustomStorage;
                    bool m_useCustomStorageHasBeenSet;

                    /**
                     * <p>创建模型时，模型从goosfe里面选取，则需要传递该参数</p>
                     */
                    GooseFSConfig m_gooseFSConfig;
                    bool m_gooseFSConfigHasBeenSet;

                    /**
                     * <p>模型上传路径类型</p><p>枚举值：</p><ul><li>LOCAL： 本地上传</li><li>CFS： CFS上传</li><li>COS： COS上传</li><li>CFSTurbo： CFSTurbo上传</li><li>GooseFS： GooseFS上传</li></ul><p>选择cos、cfs、cfstrubo则必须要传storageuri，选择local时不能传递goosefsconfig</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEMODELVERSIONREQUEST_H_
