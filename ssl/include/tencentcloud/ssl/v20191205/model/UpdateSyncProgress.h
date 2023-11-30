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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPDATESYNCPROGRESS_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPDATESYNCPROGRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/UpdateSyncProgressRegion.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 更新异步任务进度
                */
                class UpdateSyncProgress : public AbstractModel
                {
                public:
                    UpdateSyncProgress();
                    ~UpdateSyncProgress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取地域结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateSyncProgressRegions 地域结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UpdateSyncProgressRegion> GetUpdateSyncProgressRegions() const;

                    /**
                     * 设置地域结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateSyncProgressRegions 地域结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateSyncProgressRegions(const std::vector<UpdateSyncProgressRegion>& _updateSyncProgressRegions);

                    /**
                     * 判断参数 UpdateSyncProgressRegions 是否已赋值
                     * @return UpdateSyncProgressRegions 是否已赋值
                     * 
                     */
                    bool UpdateSyncProgressRegionsHasBeenSet() const;

                    /**
                     * 获取异步更新进度状态：0， 待处理， 1 已处理， 3 处理中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 异步更新进度状态：0， 待处理， 1 已处理， 3 处理中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置异步更新进度状态：0， 待处理， 1 已处理， 3 处理中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 异步更新进度状态：0， 待处理， 1 已处理， 3 处理中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 地域结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UpdateSyncProgressRegion> m_updateSyncProgressRegions;
                    bool m_updateSyncProgressRegionsHasBeenSet;

                    /**
                     * 异步更新进度状态：0， 待处理， 1 已处理， 3 处理中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPDATESYNCPROGRESS_H_
