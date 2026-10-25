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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_SYMBOLICATEDVIEW_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_SYMBOLICATEDVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/EventFrame.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 符号化结果。未翻译时只填 Status / SkipReason。
                */
                class SymbolicatedView : public AbstractModel
                {
                public:
                    SymbolicatedView();
                    ~SymbolicatedView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>符号化版本</p>
                     * @return SymbolicationVersion <p>符号化版本</p>
                     * 
                     */
                    int64_t GetSymbolicationVersion() const;

                    /**
                     * 设置<p>符号化版本</p>
                     * @param _symbolicationVersion <p>符号化版本</p>
                     * 
                     */
                    void SetSymbolicationVersion(const int64_t& _symbolicationVersion);

                    /**
                     * 判断参数 SymbolicationVersion 是否已赋值
                     * @return SymbolicationVersion 是否已赋值
                     * 
                     */
                    bool SymbolicationVersionHasBeenSet() const;

                    /**
                     * 获取<p>符号化时间</p>
                     * @return SymbolicatedAt <p>符号化时间</p>
                     * 
                     */
                    std::string GetSymbolicatedAt() const;

                    /**
                     * 设置<p>符号化时间</p>
                     * @param _symbolicatedAt <p>符号化时间</p>
                     * 
                     */
                    void SetSymbolicatedAt(const std::string& _symbolicatedAt);

                    /**
                     * 判断参数 SymbolicatedAt 是否已赋值
                     * @return SymbolicatedAt 是否已赋值
                     * 
                     */
                    bool SymbolicatedAtHasBeenSet() const;

                    /**
                     * 获取<p>状态：success / missing / skipped</p>
                     * @return SymbolicationStatus <p>状态：success / missing / skipped</p>
                     * 
                     */
                    std::string GetSymbolicationStatus() const;

                    /**
                     * 设置<p>状态：success / missing / skipped</p>
                     * @param _symbolicationStatus <p>状态：success / missing / skipped</p>
                     * 
                     */
                    void SetSymbolicationStatus(const std::string& _symbolicationStatus);

                    /**
                     * 判断参数 SymbolicationStatus 是否已赋值
                     * @return SymbolicationStatus 是否已赋值
                     * 
                     */
                    bool SymbolicationStatusHasBeenSet() const;

                    /**
                     * 获取<p>跳过原因</p>
                     * @return SymbolicationSkipReason <p>跳过原因</p>
                     * 
                     */
                    std::string GetSymbolicationSkipReason() const;

                    /**
                     * 设置<p>跳过原因</p>
                     * @param _symbolicationSkipReason <p>跳过原因</p>
                     * 
                     */
                    void SetSymbolicationSkipReason(const std::string& _symbolicationSkipReason);

                    /**
                     * 判断参数 SymbolicationSkipReason 是否已赋值
                     * @return SymbolicationSkipReason 是否已赋值
                     * 
                     */
                    bool SymbolicationSkipReasonHasBeenSet() const;

                    /**
                     * 获取<p>来源</p>
                     * @return SymbolicationSource <p>来源</p>
                     * 
                     */
                    std::string GetSymbolicationSource() const;

                    /**
                     * 设置<p>来源</p>
                     * @param _symbolicationSource <p>来源</p>
                     * 
                     */
                    void SetSymbolicationSource(const std::string& _symbolicationSource);

                    /**
                     * 判断参数 SymbolicationSource 是否已赋值
                     * @return SymbolicationSource 是否已赋值
                     * 
                     */
                    bool SymbolicationSourceHasBeenSet() const;

                    /**
                     * 获取<p>release</p>
                     * @return SymbolicationRelease <p>release</p>
                     * 
                     */
                    std::string GetSymbolicationRelease() const;

                    /**
                     * 设置<p>release</p>
                     * @param _symbolicationRelease <p>release</p>
                     * 
                     */
                    void SetSymbolicationRelease(const std::string& _symbolicationRelease);

                    /**
                     * 判断参数 SymbolicationRelease 是否已赋值
                     * @return SymbolicationRelease 是否已赋值
                     * 
                     */
                    bool SymbolicationReleaseHasBeenSet() const;

                    /**
                     * 获取<p>dist</p>
                     * @return SymbolicationDist <p>dist</p>
                     * 
                     */
                    std::string GetSymbolicationDist() const;

                    /**
                     * 设置<p>dist</p>
                     * @param _symbolicationDist <p>dist</p>
                     * 
                     */
                    void SetSymbolicationDist(const std::string& _symbolicationDist);

                    /**
                     * 判断参数 SymbolicationDist 是否已赋值
                     * @return SymbolicationDist 是否已赋值
                     * 
                     */
                    bool SymbolicationDistHasBeenSet() const;

                    /**
                     * 获取<p>耗时毫秒</p>
                     * @return SymbolicationDurationMs <p>耗时毫秒</p>
                     * 
                     */
                    int64_t GetSymbolicationDurationMs() const;

                    /**
                     * 设置<p>耗时毫秒</p>
                     * @param _symbolicationDurationMs <p>耗时毫秒</p>
                     * 
                     */
                    void SetSymbolicationDurationMs(const int64_t& _symbolicationDurationMs);

                    /**
                     * 判断参数 SymbolicationDurationMs 是否已赋值
                     * @return SymbolicationDurationMs 是否已赋值
                     * 
                     */
                    bool SymbolicationDurationMsHasBeenSet() const;

                    /**
                     * 获取<p>Symbolicator 请求 ID</p>
                     * @return SymbolicatorRequestId <p>Symbolicator 请求 ID</p>
                     * 
                     */
                    std::string GetSymbolicatorRequestId() const;

                    /**
                     * 设置<p>Symbolicator 请求 ID</p>
                     * @param _symbolicatorRequestId <p>Symbolicator 请求 ID</p>
                     * 
                     */
                    void SetSymbolicatorRequestId(const std::string& _symbolicatorRequestId);

                    /**
                     * 判断参数 SymbolicatorRequestId 是否已赋值
                     * @return SymbolicatorRequestId 是否已赋值
                     * 
                     */
                    bool SymbolicatorRequestIdHasBeenSet() const;

                    /**
                     * 获取<p>翻译后堆栈帧</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Frames <p>翻译后堆栈帧</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventFrame> GetFrames() const;

                    /**
                     * 设置<p>翻译后堆栈帧</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frames <p>翻译后堆栈帧</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrames(const std::vector<EventFrame>& _frames);

                    /**
                     * 判断参数 Frames 是否已赋值
                     * @return Frames 是否已赋值
                     * 
                     */
                    bool FramesHasBeenSet() const;

                private:

                    /**
                     * <p>符号化版本</p>
                     */
                    int64_t m_symbolicationVersion;
                    bool m_symbolicationVersionHasBeenSet;

                    /**
                     * <p>符号化时间</p>
                     */
                    std::string m_symbolicatedAt;
                    bool m_symbolicatedAtHasBeenSet;

                    /**
                     * <p>状态：success / missing / skipped</p>
                     */
                    std::string m_symbolicationStatus;
                    bool m_symbolicationStatusHasBeenSet;

                    /**
                     * <p>跳过原因</p>
                     */
                    std::string m_symbolicationSkipReason;
                    bool m_symbolicationSkipReasonHasBeenSet;

                    /**
                     * <p>来源</p>
                     */
                    std::string m_symbolicationSource;
                    bool m_symbolicationSourceHasBeenSet;

                    /**
                     * <p>release</p>
                     */
                    std::string m_symbolicationRelease;
                    bool m_symbolicationReleaseHasBeenSet;

                    /**
                     * <p>dist</p>
                     */
                    std::string m_symbolicationDist;
                    bool m_symbolicationDistHasBeenSet;

                    /**
                     * <p>耗时毫秒</p>
                     */
                    int64_t m_symbolicationDurationMs;
                    bool m_symbolicationDurationMsHasBeenSet;

                    /**
                     * <p>Symbolicator 请求 ID</p>
                     */
                    std::string m_symbolicatorRequestId;
                    bool m_symbolicatorRequestIdHasBeenSet;

                    /**
                     * <p>翻译后堆栈帧</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventFrame> m_frames;
                    bool m_framesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_SYMBOLICATEDVIEW_H_
