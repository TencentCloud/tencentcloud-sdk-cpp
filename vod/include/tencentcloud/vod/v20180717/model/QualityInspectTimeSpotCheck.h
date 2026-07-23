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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTIMESPOTCHECK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTIMESPOTCHECK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 音画质检测的时间抽检策略。
                */
                class QualityInspectTimeSpotCheck : public AbstractModel
                {
                public:
                    QualityInspectTimeSpotCheck();
                    ~QualityInspectTimeSpotCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>每次循环检测的时长。</p><p>取值范围：[10, 86400]</p><p>单位：秒。</p>
                     * @return CheckDuration <p>每次循环检测的时长。</p><p>取值范围：[10, 86400]</p><p>单位：秒。</p>
                     * 
                     */
                    int64_t GetCheckDuration() const;

                    /**
                     * 设置<p>每次循环检测的时长。</p><p>取值范围：[10, 86400]</p><p>单位：秒。</p>
                     * @param _checkDuration <p>每次循环检测的时长。</p><p>取值范围：[10, 86400]</p><p>单位：秒。</p>
                     * 
                     */
                    void SetCheckDuration(const int64_t& _checkDuration);

                    /**
                     * 判断参数 CheckDuration 是否已赋值
                     * @return CheckDuration 是否已赋值
                     * 
                     */
                    bool CheckDurationHasBeenSet() const;

                    /**
                     * 获取<p>抽检间隔，表示在一次检测结束后，等待多长时间后，再次检测</p><p>取值范围：[10, 3600]</p><p>单位：秒。</p>
                     * @return CheckInterval <p>抽检间隔，表示在一次检测结束后，等待多长时间后，再次检测</p><p>取值范围：[10, 3600]</p><p>单位：秒。</p>
                     * 
                     */
                    int64_t GetCheckInterval() const;

                    /**
                     * 设置<p>抽检间隔，表示在一次检测结束后，等待多长时间后，再次检测</p><p>取值范围：[10, 3600]</p><p>单位：秒。</p>
                     * @param _checkInterval <p>抽检间隔，表示在一次检测结束后，等待多长时间后，再次检测</p><p>取值范围：[10, 3600]</p><p>单位：秒。</p>
                     * 
                     */
                    void SetCheckInterval(const int64_t& _checkInterval);

                    /**
                     * 判断参数 CheckInterval 是否已赋值
                     * @return CheckInterval 是否已赋值
                     * 
                     */
                    bool CheckIntervalHasBeenSet() const;

                    /**
                     * 获取<p>片头跳过时长。</p><p>取值范围：[1, 1800]</p><p>单位：秒。</p>
                     * @return SkipDuration <p>片头跳过时长。</p><p>取值范围：[1, 1800]</p><p>单位：秒。</p>
                     * 
                     */
                    int64_t GetSkipDuration() const;

                    /**
                     * 设置<p>片头跳过时长。</p><p>取值范围：[1, 1800]</p><p>单位：秒。</p>
                     * @param _skipDuration <p>片头跳过时长。</p><p>取值范围：[1, 1800]</p><p>单位：秒。</p>
                     * 
                     */
                    void SetSkipDuration(const int64_t& _skipDuration);

                    /**
                     * 判断参数 SkipDuration 是否已赋值
                     * @return SkipDuration 是否已赋值
                     * 
                     */
                    bool SkipDurationHasBeenSet() const;

                    /**
                     * 获取<p>循环次数。</p><p>取值范围：[0, 1000]</p>
                     * @return CirclesNumber <p>循环次数。</p><p>取值范围：[0, 1000]</p>
                     * 
                     */
                    int64_t GetCirclesNumber() const;

                    /**
                     * 设置<p>循环次数。</p><p>取值范围：[0, 1000]</p>
                     * @param _circlesNumber <p>循环次数。</p><p>取值范围：[0, 1000]</p>
                     * 
                     */
                    void SetCirclesNumber(const int64_t& _circlesNumber);

                    /**
                     * 判断参数 CirclesNumber 是否已赋值
                     * @return CirclesNumber 是否已赋值
                     * 
                     */
                    bool CirclesNumberHasBeenSet() const;

                private:

                    /**
                     * <p>每次循环检测的时长。</p><p>取值范围：[10, 86400]</p><p>单位：秒。</p>
                     */
                    int64_t m_checkDuration;
                    bool m_checkDurationHasBeenSet;

                    /**
                     * <p>抽检间隔，表示在一次检测结束后，等待多长时间后，再次检测</p><p>取值范围：[10, 3600]</p><p>单位：秒。</p>
                     */
                    int64_t m_checkInterval;
                    bool m_checkIntervalHasBeenSet;

                    /**
                     * <p>片头跳过时长。</p><p>取值范围：[1, 1800]</p><p>单位：秒。</p>
                     */
                    int64_t m_skipDuration;
                    bool m_skipDurationHasBeenSet;

                    /**
                     * <p>循环次数。</p><p>取值范围：[0, 1000]</p>
                     */
                    int64_t m_circlesNumber;
                    bool m_circlesNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTIMESPOTCHECK_H_
