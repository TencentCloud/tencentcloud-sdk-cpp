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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_SESSIONTARGETINFO_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_SESSIONTARGETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dataagent/v20250513/model/SurfaceContext.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * 会话的归属与保存状态
                */
                class SessionTargetInfo : public AbstractModel
                {
                public:
                    SessionTargetInfo();
                    ~SessionTargetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>targetID</p>
                     * @return TargetId <p>targetID</p>
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置<p>targetID</p>
                     * @param _targetId <p>targetID</p>
                     * 
                     */
                    void SetTargetId(const std::string& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取<p>targetType</p>
                     * @return TargetType <p>targetType</p>
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置<p>targetType</p>
                     * @param _targetType <p>targetType</p>
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取<p>target名称</p>
                     * @return TargetName <p>target名称</p>
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置<p>target名称</p>
                     * @param _targetName <p>target名称</p>
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取<p>资源名称</p>
                     * @return Source <p>资源名称</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>资源名称</p>
                     * @param _source <p>资源名称</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>最后活跃时间</p><p>参数格式：2026-11-05 14:30:00</p>
                     * @return LastInteractionTime <p>最后活跃时间</p><p>参数格式：2026-11-05 14:30:00</p>
                     * 
                     */
                    std::string GetLastInteractionTime() const;

                    /**
                     * 设置<p>最后活跃时间</p><p>参数格式：2026-11-05 14:30:00</p>
                     * @param _lastInteractionTime <p>最后活跃时间</p><p>参数格式：2026-11-05 14:30:00</p>
                     * 
                     */
                    void SetLastInteractionTime(const std::string& _lastInteractionTime);

                    /**
                     * 判断参数 LastInteractionTime 是否已赋值
                     * @return LastInteractionTime 是否已赋值
                     * 
                     */
                    bool LastInteractionTimeHasBeenSet() const;

                    /**
                     * 获取<p>上下文</p>
                     * @return SurfaceContext <p>上下文</p>
                     * 
                     */
                    SurfaceContext GetSurfaceContext() const;

                    /**
                     * 设置<p>上下文</p>
                     * @param _surfaceContext <p>上下文</p>
                     * 
                     */
                    void SetSurfaceContext(const SurfaceContext& _surfaceContext);

                    /**
                     * 判断参数 SurfaceContext 是否已赋值
                     * @return SurfaceContext 是否已赋值
                     * 
                     */
                    bool SurfaceContextHasBeenSet() const;

                    /**
                     * 获取<p>是否保存</p>
                     * @return Saved <p>是否保存</p>
                     * 
                     */
                    bool GetSaved() const;

                    /**
                     * 设置<p>是否保存</p>
                     * @param _saved <p>是否保存</p>
                     * 
                     */
                    void SetSaved(const bool& _saved);

                    /**
                     * 判断参数 Saved 是否已赋值
                     * @return Saved 是否已赋值
                     * 
                     */
                    bool SavedHasBeenSet() const;

                    /**
                     * 获取<p>保存时间</p>
                     * @return SavedAt <p>保存时间</p>
                     * 
                     */
                    std::string GetSavedAt() const;

                    /**
                     * 设置<p>保存时间</p>
                     * @param _savedAt <p>保存时间</p>
                     * 
                     */
                    void SetSavedAt(const std::string& _savedAt);

                    /**
                     * 判断参数 SavedAt 是否已赋值
                     * @return SavedAt 是否已赋值
                     * 
                     */
                    bool SavedAtHasBeenSet() const;

                    /**
                     * 获取<p>是否删除</p>
                     * @return Deleted <p>是否删除</p>
                     * 
                     */
                    bool GetDeleted() const;

                    /**
                     * 设置<p>是否删除</p>
                     * @param _deleted <p>是否删除</p>
                     * 
                     */
                    void SetDeleted(const bool& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                private:

                    /**
                     * <p>targetID</p>
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * <p>targetType</p>
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * <p>target名称</p>
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * <p>资源名称</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>最后活跃时间</p><p>参数格式：2026-11-05 14:30:00</p>
                     */
                    std::string m_lastInteractionTime;
                    bool m_lastInteractionTimeHasBeenSet;

                    /**
                     * <p>上下文</p>
                     */
                    SurfaceContext m_surfaceContext;
                    bool m_surfaceContextHasBeenSet;

                    /**
                     * <p>是否保存</p>
                     */
                    bool m_saved;
                    bool m_savedHasBeenSet;

                    /**
                     * <p>保存时间</p>
                     */
                    std::string m_savedAt;
                    bool m_savedAtHasBeenSet;

                    /**
                     * <p>是否删除</p>
                     */
                    bool m_deleted;
                    bool m_deletedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_SESSIONTARGETINFO_H_
