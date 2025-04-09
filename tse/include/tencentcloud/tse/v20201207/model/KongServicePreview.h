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
                     * 获取服务ID
                     * @return ID 服务ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置服务ID
                     * @param _iD 服务ID
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
                     * 获取服务名字
                     * @return Name 服务名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务名字
                     * @param _name 服务名字
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
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
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
                     * 获取后端配置
                     * @return UpstreamInfo 后端配置
                     * 
                     */
                    KongUpstreamInfo GetUpstreamInfo() const;

                    /**
                     * 设置后端配置
                     * @param _upstreamInfo 后端配置
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
                     * 获取后端类型
                     * @return UpstreamType 后端类型
                     * 
                     */
                    std::string GetUpstreamType() const;

                    /**
                     * 设置后端类型
                     * @param _upstreamType 后端类型
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
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param _createdTime 创建时间
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
                     * 获取是否可编辑
                     * @return Editable 是否可编辑
                     * 
                     */
                    bool GetEditable() const;

                    /**
                     * 设置是否可编辑
                     * @param _editable 是否可编辑
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
                     * 获取请求路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path 请求路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置请求路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path 请求路径
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
                     * 服务ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 服务名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 后端配置
                     */
                    KongUpstreamInfo m_upstreamInfo;
                    bool m_upstreamInfoHasBeenSet;

                    /**
                     * 后端类型
                     */
                    std::string m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 是否可编辑
                     */
                    bool m_editable;
                    bool m_editableHasBeenSet;

                    /**
                     * 请求路径
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
