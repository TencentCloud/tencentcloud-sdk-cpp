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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGSERVICEPREVIEW_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGSERVICEPREVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KongUpstreamInfo.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 云原生网关服务预览信息
                */
                class KongServicePreview : public AbstractModel
                {
                public:
                    KongServicePreview();
                    ~KongServicePreview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>服务ID</p>
                     * @return ID <p>服务ID</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>服务ID</p>
                     * @param _iD <p>服务ID</p>
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
                     * 获取<p>服务名字</p>
                     * @return Name <p>服务名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>服务名字</p>
                     * @param _name <p>服务名字</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>后端配置</p>
                     * @return UpstreamInfo <p>后端配置</p>
                     * 
                     */
                    KongUpstreamInfo GetUpstreamInfo() const;

                    /**
                     * 设置<p>后端配置</p>
                     * @param _upstreamInfo <p>后端配置</p>
                     * 
                     */
                    void SetUpstreamInfo(const KongUpstreamInfo& _upstreamInfo);

                    /**
                     * 判断参数 UpstreamInfo 是否已赋值
                     * @return UpstreamInfo 是否已赋值
                     * 
                     */
                    bool UpstreamInfoHasBeenSet() const;

                    /**
                     * 获取<p>后端类型</p>
                     * @return UpstreamType <p>后端类型</p>
                     * 
                     */
                    std::string GetUpstreamType() const;

                    /**
                     * 设置<p>后端类型</p>
                     * @param _upstreamType <p>后端类型</p>
                     * 
                     */
                    void SetUpstreamType(const std::string& _upstreamType);

                    /**
                     * 判断参数 UpstreamType 是否已赋值
                     * @return UpstreamType 是否已赋值
                     * 
                     */
                    bool UpstreamTypeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdTime <p>创建时间</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否可编辑</p>
                     * @return Editable <p>是否可编辑</p>
                     * 
                     */
                    bool GetEditable() const;

                    /**
                     * 设置<p>是否可编辑</p>
                     * @param _editable <p>是否可编辑</p>
                     * 
                     */
                    void SetEditable(const bool& _editable);

                    /**
                     * 判断参数 Editable 是否已赋值
                     * @return Editable 是否已赋值
                     * 
                     */
                    bool EditableHasBeenSet() const;

                    /**
                     * 获取<p>请求路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path <p>请求路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>请求路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path <p>请求路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                private:

                    /**
                     * <p>服务ID</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>服务名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>后端配置</p>
                     */
                    KongUpstreamInfo m_upstreamInfo;
                    bool m_upstreamInfoHasBeenSet;

                    /**
                     * <p>后端类型</p>
                     */
                    std::string m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>是否可编辑</p>
                     */
                    bool m_editable;
                    bool m_editableHasBeenSet;

                    /**
                     * <p>请求路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGSERVICEPREVIEW_H_
