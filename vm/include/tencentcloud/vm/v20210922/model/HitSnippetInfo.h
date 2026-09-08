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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_HITSNIPPETINFO_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_HITSNIPPETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/Position.h>
#include <tencentcloud/vm/v20210922/model/Rect.h>
#include <tencentcloud/vm/v20210922/model/Duration.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * 命中信息
                */
                class HitSnippetInfo : public AbstractModel
                {
                public:
                    HitSnippetInfo();
                    ~HitSnippetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>命中内容</p>
                     * @return Target <p>命中内容</p>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置<p>命中内容</p>
                     * @param _target <p>命中内容</p>
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>文本命中的文本块</p>
                     * @return Snippet <p>文本命中的文本块</p>
                     * 
                     */
                    std::string GetSnippet() const;

                    /**
                     * 设置<p>文本命中的文本块</p>
                     * @param _snippet <p>文本命中的文本块</p>
                     * 
                     */
                    void SetSnippet(const std::string& _snippet);

                    /**
                     * 判断参数 Snippet 是否已赋值
                     * @return Snippet 是否已赋值
                     * 
                     */
                    bool SnippetHasBeenSet() const;

                    /**
                     * 获取<p>命中场景</p>
                     * @return Scene <p>命中场景</p>
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置<p>命中场景</p>
                     * @param _scene <p>命中场景</p>
                     * 
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取<p>命中类型</p>
                     * @return AtomicCategory <p>命中类型</p>
                     * 
                     */
                    std::string GetAtomicCategory() const;

                    /**
                     * 设置<p>命中类型</p>
                     * @param _atomicCategory <p>命中类型</p>
                     * 
                     */
                    void SetAtomicCategory(const std::string& _atomicCategory);

                    /**
                     * 判断参数 AtomicCategory 是否已赋值
                     * @return AtomicCategory 是否已赋值
                     * 
                     */
                    bool AtomicCategoryHasBeenSet() const;

                    /**
                     * 获取<p>命中类型库/模型名称</p>
                     * @return AtomicName <p>命中类型库/模型名称</p>
                     * 
                     */
                    std::string GetAtomicName() const;

                    /**
                     * 设置<p>命中类型库/模型名称</p>
                     * @param _atomicName <p>命中类型库/模型名称</p>
                     * 
                     */
                    void SetAtomicName(const std::string& _atomicName);

                    /**
                     * 判断参数 AtomicName 是否已赋值
                     * @return AtomicName 是否已赋值
                     * 
                     */
                    bool AtomicNameHasBeenSet() const;

                    /**
                     * 获取<p>命中原子能力</p>
                     * @return AtomicId <p>命中原子能力</p>
                     * 
                     */
                    std::string GetAtomicId() const;

                    /**
                     * 设置<p>命中原子能力</p>
                     * @param _atomicId <p>命中原子能力</p>
                     * 
                     */
                    void SetAtomicId(const std::string& _atomicId);

                    /**
                     * 判断参数 AtomicId 是否已赋值
                     * @return AtomicId 是否已赋值
                     * 
                     */
                    bool AtomicIdHasBeenSet() const;

                    /**
                     * 获取<p>命中单位</p>
                     * @return UnitId <p>命中单位</p>
                     * 
                     */
                    std::string GetUnitId() const;

                    /**
                     * 设置<p>命中单位</p>
                     * @param _unitId <p>命中单位</p>
                     * 
                     */
                    void SetUnitId(const std::string& _unitId);

                    /**
                     * 判断参数 UnitId 是否已赋值
                     * @return UnitId 是否已赋值
                     * 
                     */
                    bool UnitIdHasBeenSet() const;

                    /**
                     * 获取<p>命中单位名称</p>
                     * @return UnitName <p>命中单位名称</p>
                     * 
                     */
                    std::string GetUnitName() const;

                    /**
                     * 设置<p>命中单位名称</p>
                     * @param _unitName <p>命中单位名称</p>
                     * 
                     */
                    void SetUnitName(const std::string& _unitName);

                    /**
                     * 判断参数 UnitName 是否已赋值
                     * @return UnitName 是否已赋值
                     * 
                     */
                    bool UnitNameHasBeenSet() const;

                    /**
                     * 获取<p>命中颗粒ID</p>
                     * @return ParticleId <p>命中颗粒ID</p>
                     * 
                     */
                    std::string GetParticleId() const;

                    /**
                     * 设置<p>命中颗粒ID</p>
                     * @param _particleId <p>命中颗粒ID</p>
                     * 
                     */
                    void SetParticleId(const std::string& _particleId);

                    /**
                     * 判断参数 ParticleId 是否已赋值
                     * @return ParticleId 是否已赋值
                     * 
                     */
                    bool ParticleIdHasBeenSet() const;

                    /**
                     * 获取<p>命中文本在原文起始位置</p>
                     * @return Positions <p>命中文本在原文起始位置</p>
                     * 
                     */
                    std::vector<Position> GetPositions() const;

                    /**
                     * 设置<p>命中文本在原文起始位置</p>
                     * @param _positions <p>命中文本在原文起始位置</p>
                     * 
                     */
                    void SetPositions(const std::vector<Position>& _positions);

                    /**
                     * 判断参数 Positions 是否已赋值
                     * @return Positions 是否已赋值
                     * 
                     */
                    bool PositionsHasBeenSet() const;

                    /**
                     * 获取<p>命中图片框位置</p>
                     * @return Rect <p>命中图片框位置</p>
                     * 
                     */
                    Rect GetRect() const;

                    /**
                     * 设置<p>命中图片框位置</p>
                     * @param _rect <p>命中图片框位置</p>
                     * 
                     */
                    void SetRect(const Rect& _rect);

                    /**
                     * 判断参数 Rect 是否已赋值
                     * @return Rect 是否已赋值
                     * 
                     */
                    bool RectHasBeenSet() const;

                    /**
                     * 获取<p>命中音时间位置</p>
                     * @return Duration <p>命中音时间位置</p>
                     * 
                     */
                    Duration GetDuration() const;

                    /**
                     * 设置<p>命中音时间位置</p>
                     * @param _duration <p>命中音时间位置</p>
                     * 
                     */
                    void SetDuration(const Duration& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>分数</p>
                     * @return Score <p>分数</p>
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置<p>分数</p>
                     * @param _score <p>分数</p>
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * <p>命中内容</p>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>文本命中的文本块</p>
                     */
                    std::string m_snippet;
                    bool m_snippetHasBeenSet;

                    /**
                     * <p>命中场景</p>
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * <p>命中类型</p>
                     */
                    std::string m_atomicCategory;
                    bool m_atomicCategoryHasBeenSet;

                    /**
                     * <p>命中类型库/模型名称</p>
                     */
                    std::string m_atomicName;
                    bool m_atomicNameHasBeenSet;

                    /**
                     * <p>命中原子能力</p>
                     */
                    std::string m_atomicId;
                    bool m_atomicIdHasBeenSet;

                    /**
                     * <p>命中单位</p>
                     */
                    std::string m_unitId;
                    bool m_unitIdHasBeenSet;

                    /**
                     * <p>命中单位名称</p>
                     */
                    std::string m_unitName;
                    bool m_unitNameHasBeenSet;

                    /**
                     * <p>命中颗粒ID</p>
                     */
                    std::string m_particleId;
                    bool m_particleIdHasBeenSet;

                    /**
                     * <p>命中文本在原文起始位置</p>
                     */
                    std::vector<Position> m_positions;
                    bool m_positionsHasBeenSet;

                    /**
                     * <p>命中图片框位置</p>
                     */
                    Rect m_rect;
                    bool m_rectHasBeenSet;

                    /**
                     * <p>命中音时间位置</p>
                     */
                    Duration m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>分数</p>
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_HITSNIPPETINFO_H_
