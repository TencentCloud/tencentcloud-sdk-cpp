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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEMODELVERSIONREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEMODELVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * UpdateModelVersion请求参数结构体
                */
                class UpdateModelVersionRequest : public AbstractModel
                {
                public:
                    UpdateModelVersionRequest();
                    ~UpdateModelVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>目录名称，必填</p>
                     * @return CatalogName <p>目录名称，必填</p>
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置<p>目录名称，必填</p>
                     * @param _catalogName <p>目录名称，必填</p>
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取<p>模式名称，必填</p>
                     * @return SchemaName <p>模式名称，必填</p>
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>模式名称，必填</p>
                     * @param _schemaName <p>模式名称，必填</p>
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取<p>模型名称，必填</p>
                     * @return ModelName <p>模型名称，必填</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称，必填</p>
                     * @param _modelName <p>模型名称，必填</p>
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>模型版本号，必填</p>
                     * @return ModelVersion <p>模型版本号，必填</p>
                     * 
                     */
                    int64_t GetModelVersion() const;

                    /**
                     * 设置<p>模型版本号，必填</p>
                     * @param _modelVersion <p>模型版本号，必填</p>
                     * 
                     */
                    void SetModelVersion(const int64_t& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取<p>调用时所在workspace唯一id，必填</p>
                     * @return WorkspaceId <p>调用时所在workspace唯一id，必填</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>调用时所在workspace唯一id，必填</p>
                     * @param _workspaceId <p>调用时所在workspace唯一id，必填</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>要添加的别名，可选</p>
                     * @return AddedAliases <p>要添加的别名，可选</p>
                     * 
                     */
                    std::vector<std::string> GetAddedAliases() const;

                    /**
                     * 设置<p>要添加的别名，可选</p>
                     * @param _addedAliases <p>要添加的别名，可选</p>
                     * 
                     */
                    void SetAddedAliases(const std::vector<std::string>& _addedAliases);

                    /**
                     * 判断参数 AddedAliases 是否已赋值
                     * @return AddedAliases 是否已赋值
                     * 
                     */
                    bool AddedAliasesHasBeenSet() const;

                    /**
                     * 获取<p>要移除的别名，可选</p>
                     * @return RemovedAliases <p>要移除的别名，可选</p>
                     * 
                     */
                    std::vector<std::string> GetRemovedAliases() const;

                    /**
                     * 设置<p>要移除的别名，可选</p>
                     * @param _removedAliases <p>要移除的别名，可选</p>
                     * 
                     */
                    void SetRemovedAliases(const std::vector<std::string>& _removedAliases);

                    /**
                     * 判断参数 RemovedAliases 是否已赋值
                     * @return RemovedAliases 是否已赋值
                     * 
                     */
                    bool RemovedAliasesHasBeenSet() const;

                    /**
                     * 获取<p>新注释，可选，为空表示不修改注释</p>
                     * @return NewComment <p>新注释，可选，为空表示不修改注释</p>
                     * 
                     */
                    std::string GetNewComment() const;

                    /**
                     * 设置<p>新注释，可选，为空表示不修改注释</p>
                     * @param _newComment <p>新注释，可选，为空表示不修改注释</p>
                     * 
                     */
                    void SetNewComment(const std::string& _newComment);

                    /**
                     * 判断参数 NewComment 是否已赋值
                     * @return NewComment 是否已赋值
                     * 
                     */
                    bool NewCommentHasBeenSet() const;

                private:

                    /**
                     * <p>目录名称，必填</p>
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * <p>模式名称，必填</p>
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * <p>模型名称，必填</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>模型版本号，必填</p>
                     */
                    int64_t m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>调用时所在workspace唯一id，必填</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>要添加的别名，可选</p>
                     */
                    std::vector<std::string> m_addedAliases;
                    bool m_addedAliasesHasBeenSet;

                    /**
                     * <p>要移除的别名，可选</p>
                     */
                    std::vector<std::string> m_removedAliases;
                    bool m_removedAliasesHasBeenSet;

                    /**
                     * <p>新注释，可选，为空表示不修改注释</p>
                     */
                    std::string m_newComment;
                    bool m_newCommentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEMODELVERSIONREQUEST_H_
