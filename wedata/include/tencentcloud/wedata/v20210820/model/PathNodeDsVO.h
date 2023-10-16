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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PATHNODEDSVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PATHNODEDSVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/PathNodeDsVO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据开发-统一树结构返回属性
                */
                class PathNodeDsVO : public AbstractModel
                {
                public:
                    PathNodeDsVO();
                    ~PathNodeDsVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取PathNode ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id PathNode ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置PathNode ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id PathNode ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取PathNode 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Title PathNode 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置PathNode 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _title PathNode 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取PathNode 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type PathNode 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置PathNode 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type PathNode 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取父节点唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentId 父节点唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置父节点唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentId 父节点唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取是否叶子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLeaf 是否叶子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsLeaf() const;

                    /**
                     * 设置是否叶子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLeaf 是否叶子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsLeaf(const bool& _isLeaf);

                    /**
                     * 判断参数 IsLeaf 是否已赋值
                     * @return IsLeaf 是否已赋值
                     * 
                     */
                    bool IsLeafHasBeenSet() const;

                    /**
                     * 获取子节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Children 子节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PathNodeDsVO> GetChildren() const;

                    /**
                     * 设置子节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _children 子节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChildren(const std::vector<PathNodeDsVO>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                    /**
                     * 获取业务参数 ,base64编译的json串，获取具体参数需要base64反编译
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 业务参数 ,base64编译的json串，获取具体参数需要base64反编译
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置业务参数 ,base64编译的json串，获取具体参数需要base64反编译
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 业务参数 ,base64编译的json串，获取具体参数需要base64反编译
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * PathNode ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * PathNode 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * PathNode 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 父节点唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 是否叶子节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * 子节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PathNodeDsVO> m_children;
                    bool m_childrenHasBeenSet;

                    /**
                     * 业务参数 ,base64编译的json串，获取具体参数需要base64反编译
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PATHNODEDSVO_H_
