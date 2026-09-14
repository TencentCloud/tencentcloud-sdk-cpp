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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_METAVALUE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_METAVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 元数据值
                */
                class MetaValue : public AbstractModel
                {
                public:
                    MetaValue();
                    ~MetaValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>元数据值名称（仅展示使用）</p>
                     * @return Name <p>元数据值名称（仅展示使用）</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>元数据值名称（仅展示使用）</p>
                     * @param _name <p>元数据值名称（仅展示使用）</p>
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
                     * 获取<p>是否引用该类型下的全部值（true 时 ref_value_id 应为 0）</p>
                     * @return RefAll <p>是否引用该类型下的全部值（true 时 ref_value_id 应为 0）</p>
                     * 
                     */
                    bool GetRefAll() const;

                    /**
                     * 设置<p>是否引用该类型下的全部值（true 时 ref_value_id 应为 0）</p>
                     * @param _refAll <p>是否引用该类型下的全部值（true 时 ref_value_id 应为 0）</p>
                     * 
                     */
                    void SetRefAll(const bool& _refAll);

                    /**
                     * 判断参数 RefAll 是否已赋值
                     * @return RefAll 是否已赋值
                     * 
                     */
                    bool RefAllHasBeenSet() const;

                    /**
                     * 获取<p>元数据引用的业务 ID（属性 ID、分类 ID 等）；ref_all=true 时该字段应为 0</p>
                     * @return RefValueId <p>元数据引用的业务 ID（属性 ID、分类 ID 等）；ref_all=true 时该字段应为 0</p>
                     * 
                     */
                    std::string GetRefValueId() const;

                    /**
                     * 设置<p>元数据引用的业务 ID（属性 ID、分类 ID 等）；ref_all=true 时该字段应为 0</p>
                     * @param _refValueId <p>元数据引用的业务 ID（属性 ID、分类 ID 等）；ref_all=true 时该字段应为 0</p>
                     * 
                     */
                    void SetRefValueId(const std::string& _refValueId);

                    /**
                     * 判断参数 RefValueId 是否已赋值
                     * @return RefValueId 是否已赋值
                     * 
                     */
                    bool RefValueIdHasBeenSet() const;

                    /**
                     * 获取<p>元数据使用场景：1=仅检索使用，2=检索和生成都使用<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>META_SCENE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>META_SCENE_SEARCH_ONLY</td><td>1</td><td>仅检索使用</td></tr><tr><td>META_SCENE_ALL</td><td>2</td><td>检索和生成都使用</td></tr></tbody></table></p>
                     * @return Scene <p>元数据使用场景：1=仅检索使用，2=检索和生成都使用<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>META_SCENE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>META_SCENE_SEARCH_ONLY</td><td>1</td><td>仅检索使用</td></tr><tr><td>META_SCENE_ALL</td><td>2</td><td>检索和生成都使用</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetScene() const;

                    /**
                     * 设置<p>元数据使用场景：1=仅检索使用，2=检索和生成都使用<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>META_SCENE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>META_SCENE_SEARCH_ONLY</td><td>1</td><td>仅检索使用</td></tr><tr><td>META_SCENE_ALL</td><td>2</td><td>检索和生成都使用</td></tr></tbody></table></p>
                     * @param _scene <p>元数据使用场景：1=仅检索使用，2=检索和生成都使用<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>META_SCENE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>META_SCENE_SEARCH_ONLY</td><td>1</td><td>仅检索使用</td></tr><tr><td>META_SCENE_ALL</td><td>2</td><td>检索和生成都使用</td></tr></tbody></table></p>
                     * 
                     */
                    void SetScene(const int64_t& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取<p>元数据值类型：1=属性标签，2=文档分类，3=问答分类<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>META_VALUE_TYPE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>META_VALUE_TYPE_TAG</td><td>1</td><td>属性标签</td></tr><tr><td>META_VALUE_TYPE_DOC_CATEGORY</td><td>2</td><td>文档分类</td></tr><tr><td>META_VALUE_TYPE_QA_CATEGORY</td><td>3</td><td>问答分类</td></tr></tbody></table></p>
                     * @return ValueType <p>元数据值类型：1=属性标签，2=文档分类，3=问答分类<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>META_VALUE_TYPE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>META_VALUE_TYPE_TAG</td><td>1</td><td>属性标签</td></tr><tr><td>META_VALUE_TYPE_DOC_CATEGORY</td><td>2</td><td>文档分类</td></tr><tr><td>META_VALUE_TYPE_QA_CATEGORY</td><td>3</td><td>问答分类</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetValueType() const;

                    /**
                     * 设置<p>元数据值类型：1=属性标签，2=文档分类，3=问答分类<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>META_VALUE_TYPE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>META_VALUE_TYPE_TAG</td><td>1</td><td>属性标签</td></tr><tr><td>META_VALUE_TYPE_DOC_CATEGORY</td><td>2</td><td>文档分类</td></tr><tr><td>META_VALUE_TYPE_QA_CATEGORY</td><td>3</td><td>问答分类</td></tr></tbody></table></p>
                     * @param _valueType <p>元数据值类型：1=属性标签，2=文档分类，3=问答分类<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>META_VALUE_TYPE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>META_VALUE_TYPE_TAG</td><td>1</td><td>属性标签</td></tr><tr><td>META_VALUE_TYPE_DOC_CATEGORY</td><td>2</td><td>文档分类</td></tr><tr><td>META_VALUE_TYPE_QA_CATEGORY</td><td>3</td><td>问答分类</td></tr></tbody></table></p>
                     * 
                     */
                    void SetValueType(const int64_t& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     * 
                     */
                    bool ValueTypeHasBeenSet() const;

                private:

                    /**
                     * <p>元数据值名称（仅展示使用）</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>是否引用该类型下的全部值（true 时 ref_value_id 应为 0）</p>
                     */
                    bool m_refAll;
                    bool m_refAllHasBeenSet;

                    /**
                     * <p>元数据引用的业务 ID（属性 ID、分类 ID 等）；ref_all=true 时该字段应为 0</p>
                     */
                    std::string m_refValueId;
                    bool m_refValueIdHasBeenSet;

                    /**
                     * <p>元数据使用场景：1=仅检索使用，2=检索和生成都使用<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>META_SCENE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>META_SCENE_SEARCH_ONLY</td><td>1</td><td>仅检索使用</td></tr><tr><td>META_SCENE_ALL</td><td>2</td><td>检索和生成都使用</td></tr></tbody></table></p>
                     */
                    int64_t m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * <p>元数据值类型：1=属性标签，2=文档分类，3=问答分类<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>META_VALUE_TYPE_UNKNOWN</td><td>0</td><td>未知</td></tr><tr><td>META_VALUE_TYPE_TAG</td><td>1</td><td>属性标签</td></tr><tr><td>META_VALUE_TYPE_DOC_CATEGORY</td><td>2</td><td>文档分类</td></tr><tr><td>META_VALUE_TYPE_QA_CATEGORY</td><td>3</td><td>问答分类</td></tr></tbody></table></p>
                     */
                    int64_t m_valueType;
                    bool m_valueTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_METAVALUE_H_
